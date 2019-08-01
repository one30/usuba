(*********************************************************************
   fix_dim.ml

  Usuba thinks that arrays like u1x8[16] and u1x128 are the same
   thing, but they really aren't. This module fixes that.

  The main reason why this transformation is inlining will fail
   without it. For instance:
     node f(x:u1[2][3]) ...
      let ... x[0][1] ... tel
     node g(a:u1[6]) ...
      let ... f(a) ... tel
   When inlining f in g, we'd end with a[0][1], but a has type u1[6]...

  Warning: The way I'm doing this for now is quite fragile and
  can break. In particular, if you have two arrays, one of type
  u1[a][b] and the other one of type u1[b][a], this module will
  leave them as is, even though they should both be converted to
  u1[a*b].

 ********************************************************************)

open Usuba_AST
open Basic_utils
open Utils

(* Returns the "nested" level of a type: it corresponds to how many
   nested arrays there are in the type.
   For instance: 
       get_nested_level( Array(Array(Uint(_,_,1))) ) == 2
       get_nested_level( Uint(_,_,5) ) == 1 get_nested_level(
       Uint(_,_,1) ) == 0 *)
let rec get_nested_level (t:typ) : int =
  match t with
  | Nat         -> 0
  | Uint(_,_,1) -> 0
  | Uint(_,_,n) -> 1
  | Array(t',_) -> 1 + (get_nested_level t')
  | Unknown     -> assert false

let rec get_index_level (v:var) : int =
  match v with
  | Var _ -> 0
  | Index(v',_) -> 1 + (get_index_level v')
  | _ -> (* Usuba0, can't have Slice/Range *)
     assert false
    
(* Collapses the last two Index of |v|.
   Need to be careful that they actually need to be collapsed. For
   instance, consider x:u1[2][3][4]: 
       (1) x[1] should not be changed,
       (2) x[1][2] should be come x[1][8..11],
       (3) x[1][2][3] should become x[1][11].  
 *)
let rec dim_var (v_tgt:var) (dim:int) (size:int) (v:var) : var =
  if get_var_base v = v_tgt then
    let index_lvl = get_index_level v in
    (* Depending on |dim|-|index_lvl|, a different transformation
         must be done (see the function's comment above) *)
    assert (dim >= index_lvl);
    match dim - index_lvl with
    | 0 -> (* case (3) in the comment above *)
       (match v with
        | Index(Index(v',i1),i2) ->
           Index(v',simpl_arith_ne (Op_e(Add,Op_e(Mul,i1,Const_e size),i2)))
        | _ -> assert false)
    | 1 -> (* case (2) in the comment above *)
       (match v with
        | Index(v',i1) ->
           Range(v',simpl_arith_ne (Op_e(Mul,i1,Const_e size)),
                 simpl_arith_ne (Op_e(Add,Op_e(Mul,i1,Const_e size),
                                      Const_e (size-1))))
        | _ -> assert false)
    | _ -> v (* case (1) in the comment above *)
  else (* v != v_tgt *) v

let rec dim_expr (v_tgt:var) (dim:int) (size:int) (e:expr) : expr =
  match e with
  | Const _        -> e
  | ExpVar v       -> ExpVar(dim_var v_tgt dim size v)
  | Tuple l        -> Tuple(List.map (dim_expr v_tgt dim size) l)
  | Not e          -> Not(dim_expr v_tgt dim size e)
  | Shift(op,e,ae) -> Shift(op,dim_expr v_tgt dim size e,ae)
  | Log(op,x,y)    -> Log(op,dim_expr v_tgt dim size x,dim_expr v_tgt dim size y)
  | Shuffle(v,l)   -> Shuffle(dim_var v_tgt dim size v,l)
  | Arith(op,x,y)  -> Arith(op,dim_expr v_tgt dim size x,dim_expr v_tgt dim size y)
  | Fun(f,l)       -> Fun(f,List.map (dim_expr v_tgt dim size) l)
  | _              -> assert false

(* Updates |v_tgt| (for 'var_target') by merging its two innermost arrays *)
let rec dim_deq (v_tgt:var) (dim:int) (size:int) (deq:deq) : deq =
  match deq with
  | Eqn(vs,e,sync) ->
     Eqn(List.map (dim_var v_tgt dim size) vs,
         dim_expr v_tgt dim size e,sync)
  | Loop(i,ei,ef,dl,opts) ->
     Loop(i,ei,ef,List.map (dim_deq v_tgt dim size) dl,opts)

(* Merges the two innermost dimensions of |t|. For instance:
      u1[2][3]    -> u1[6]
      u1[2][3][4] -> u1[2][12]
      b8[2]       -> b1[16] (b16 would also work) 
      b8[2][3]    -> b1[2][24] (b24|2] would also work)
 *)
let rec collapse_inner_arrays (t:typ) : typ * int =
  match t with
  (* End found: Array of Array of bool *)
  | Array( Array( Uint(d,m,1), es2 ), es1 ) ->
     Array( Uint(d,m,1), es2 * es1 ), es1
  (* End found: Array of bm *)
  | Array( Uint(d,m,n), es1 ) ->
     Array( Uint(d,m,1), es1 * n ), n
  (* Not the end, going deeper *)
  | Array(t',es1) ->
     let (t',size) = collapse_inner_arrays t' in
     Array(t',es1), size
  (* Can't be a Uint or a Nat *)
  | _ -> assert false

(* |v| is an array with dimension > 1.
   unnest_var will collapse its last 2 dimensions.
   For instance, u1[2][3][4] would become u1[2][12].
 *)
let rec unnest_var (def:def) (var:var) : def =
  let var_base = get_var_base var in
  match def.node with
  | Single(vars,body) ->
     (* |size|: the size of the arrays being collapsed. For instance,
            b1[3][5] -> size = 5 
          (used to compute indices in the new array: 
            x[a][b] becomes x[a*size+b]) *)
     let size = ref (-1) in
     (* |new_type|: the type of |var| after  this transformation *)
     let new_type = ref Nat in
     (* |old_type|: the type of |var| before this transformation *)
     let old_type = ref Nat in
     
     (* find_interest_var go through |p| to find the variable we want
        to update, updates it, and updates |size|, |new_type| and
        |old_type|. *)
     let find_interest_var (p:p) : p =
       List.map 
         (fun v ->
           if Var v.vid = var_base then
             (let (t',s) = collapse_inner_arrays v.vtyp in
              old_type := v.vtyp;
              new_type := t';
              size     := s;
              { v with vtyp = t' })
           else v) p in
     let vars  = find_interest_var vars in
     let p_in  = find_interest_var def.p_in in
     let p_out = find_interest_var def.p_out in
     (* Updating body with new variable *)
     let body = List.map (dim_deq var_base
                            (get_nested_level !old_type) !size) body in
     (* Returning the updated node*)
     { def with
       p_in  = p_in;
       p_out = p_out;
       node  = Single(vars, body) }
  | _ -> assert false       


(* Go through each function call, and, if needed, updates the
   variables (in p_in or p_out) of the callee. *)
module Dir_params = struct

  (* |ident|: the id of the updated node *)
  exception Updated of ident
             
  let rec fix_deqs env_fun env_var (def:def) (deqs:deq list) : deq list =
    List.map
      (fun deq ->
       match deq with
       | Eqn(ret_vars,Fun(f,args),sync) when f.name <> "rand" ->
          (* A funcall -> need to:
              - iterate over arguments to make sure they have the correct types
              - iterate over return values to make sure they have the correct types
             (only nested arrays need to be considered) *)
          (* Note that at this point, expand_parameters has ran, so we are 
             assured that a call has exactly has many args as the function expects *)

          (* Retrieving f's parameters, and checking arguments' types *)
          let p_in = (Hashtbl.find env_fun f).p_in in
          List.iteri
            (fun i arg ->
             match arg with
             (* A parameter can be either a Const or an ExpVar
                                (since we are in Usuba0)       *)
             | Const _ -> ()
             | ExpVar v ->
                (* type of the i-th argument *)
                let arg_type  = get_var_type env_var v  in
                (* type of the i-th expected parameter *)
                let exp_type  = (List.nth p_in i).vtyp  in
                                
                if (get_nested_level arg_type) > (get_nested_level exp_type) then (
                  (* Different sizes, need convert arg to a non-nested array *)
                  Hashtbl.replace env_fun f (unnest_var (Hashtbl.find env_fun f) v);
                  raise (Updated f)

                (* < isn't checked here: if dim is < than function
                   expects, then the function must be adapted
                   (we can always reduce dimension, but not expand) *)
                ) else ()
             (* Not a Const/ExpVar -> not possible *)
             | _ -> assert false
            ) args;

          (* Retrieveing f's returns param, and checking return values' types *)
          let p_out = (Hashtbl.find env_fun f).p_out in
          List.iteri (fun i v ->
              (* type of the i-th lhs variable *)
              let ret_type = get_var_type env_var v  in
              (* type of the i-th returned variable *)
              let exp_type = (List.nth p_out i).vtyp in
              if (get_nested_level ret_type) > (get_nested_level exp_type) then (
                (* Different sizes, need convert arg to a non-nested array *)
                Hashtbl.replace env_fun def.id (unnest_var (Hashtbl.find env_fun f) v);
                raise (Updated f)
              ) else ()
            ) ret_vars;
          deq
       (* A simple equation can't contain funcall -> ignore *)
       | Eqn(vs,e,sync) -> deq
       (* Reccursive call on loops *)
       | Loop(i,ei,ef,dl,opts) ->
          Hashtbl.add env_var i Nat;
          let res = Loop(i,ei,ef,fix_deqs env_fun env_var def dl,opts) in
          Hashtbl.remove env_var i;
          res) deqs
             
  let rec fix_def env_fun (def:def) : unit =
    try
      match def.node with
      | Single(vars,body) ->
         let env_var =  build_env_var def.p_in def.p_out vars in
         let body    =  fix_deqs env_fun env_var def body     in
         Hashtbl.replace env_fun def.id
                         { def with node = Single(vars, body) }
      | _ -> ()
    with Updated f ->
      fix_def env_fun
        (Norm_tuples.norm_tuples_deq
           (Expand_array.expand_def false Expand_array.Keep false true
              (Hashtbl.find env_fun f)))
              (*  false = keep loops
                  true  = keep arrays in parameters
                  So basically, this combination of (0,false,true) means
                  "just expand ranges", and anything else only if needed. *)
    
                            
             
  let fix_dim (prog:prog) (conf:config) : prog =

    (* Build a hash containing all nodes *)
    let env_fun = Hashtbl.create 100 in
    List.iter (fun node -> Hashtbl.add env_fun node.id node) prog.nodes;

    (* Fix dimensions within each node *)
    List.iter (fun node -> fix_def env_fun (Hashtbl.find env_fun node.id)) prog.nodes;

    (* Collect fixed nodes *)
    { nodes = List.map (fun node -> Hashtbl.find env_fun node.id) prog.nodes }

    
end

(* Go through each function call, and, if needed, updates the
   variables (from vars) of the caller. *)
module Dir_inner = struct

  exception Updated    
             
  let rec fix_deqs env_fun env_var (def:def) (deqs:deq list) : deq list =
    List.map
      (fun deq ->
       match deq with
       | Eqn(ret_vars,Fun(f,args),sync) when f.name <> "rand" ->
          (* A funcall -> need to:
              - iterate over arguments to make sure they have the correct types
              - iterate over return values to make sure they have the correct types
             (only nested arrays need to be considered) *)
          (* Note that at this point, expand_parameters has ran, so we are 
             assured that a call has exactly has many args as the function expects *)

          (* Retrieving f's parameters, and checking arguments' types *)
          let p_in = (Hashtbl.find env_fun f).p_in in
          List.iteri
            (fun i arg ->
             match arg with
             (* A parameter can be either a Const or an ExpVar
                                (since we are in Usuba0)       *)
             | Const _ -> ()
             | ExpVar v ->
                (* type of the i-th argument *)
                let arg_type  = get_var_type env_var v  in
                (* type of the i-th expected parameter *)
                let exp_type  = (List.nth p_in i).vtyp  in
                                
                if (get_nested_level arg_type) > (get_nested_level exp_type) then (
                  (* Different sizes, need convert arg to a non-nested array *)
                  Hashtbl.replace env_fun def.id (unnest_var def v);
                  raise Updated

                (* < isn't checked here: if dim is < than function
                   expects, then the function must be adapted
                   (we can always reduce dimension, but not expand) *)
                ) else ()
             (* Not a Const/ExpVar -> not possible *)
             | _ -> assert false
            ) args;

          (* Retrieveing f's returns param, and checking return values' types *)
          let p_out = (Hashtbl.find env_fun f).p_out in
          List.iteri (fun i v ->
              (* type of the i-th lhs variable *)
              let ret_type = get_var_type env_var v  in
              (* type of the i-th returned variable *)
              let exp_type = (List.nth p_out i).vtyp in
              if (get_nested_level ret_type) > (get_nested_level exp_type) then (
                (* Different sizes, need convert arg to a non-nested array *)
                Hashtbl.replace env_fun def.id (unnest_var def v);
                raise Updated
              ) else ()
            ) ret_vars;
          deq
       (* A simple equation can't contain funcall -> ignore *)
       | Eqn(vs,e,sync) -> deq
       (* Reccursive call on loops *)
       | Loop(i,ei,ef,dl,opts) ->
          Hashtbl.add env_var i Nat;
          let res = Loop(i,ei,ef,fix_deqs env_fun env_var def dl,opts) in
          Hashtbl.remove env_var i;
          res) deqs

  let rec fix_def env_fun (def:def) : unit =
    try
      match def.node with
      | Single(vars,body) ->
         let env_var =  build_env_var def.p_in def.p_out vars in
         let body    =  fix_deqs env_fun env_var def body     in
         Hashtbl.replace env_fun def.id
                         { def with node = Single(vars, body) }
      | _ -> ()
    with Updated ->
      fix_def env_fun
        (Norm_tuples.norm_tuples_deq
           (Expand_array.expand_def false  Expand_array.Keep false true
              (Hashtbl.find env_fun def.id)))
              (*  false = keep loops
                  true  = keep arrays in parameters
                  So basically, this combination of (0,false,true) means
                  "just expand ranges", and anything else only if needed. *)
    
                            
             
  let fix_dim (prog:prog) (conf:config) : prog =

    (* Build a hash containing all nodes *)
    let env_fun = Hashtbl.create 100 in
    List.iter (fun node -> Hashtbl.add env_fun node.id node) prog.nodes;

    (* Fix dimensions within each node *)
    List.iter (fun node -> fix_def env_fun (Hashtbl.find env_fun node.id)) prog.nodes;

    (* Collect fixed nodes *)
    { nodes = List.map (fun node -> Hashtbl.find env_fun node.id) prog.nodes }
  
  
end
                    
