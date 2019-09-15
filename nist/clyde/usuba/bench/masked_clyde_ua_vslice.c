/* This code was generated by Usuba.
   See https://github.com/DadaIsCrazy/usuba.
   From the file "nist/clyde/usuba/ua/clyde.ua" (included below). */

#include <stdint.h>

/* Do NOT change the order of those define/include */

#ifndef BITS_PER_REG
#define BITS_PER_REG 32
#endif
/* including the architecture specific .h */
#include "MASKED.h"

/* auxiliary functions */
void sbox_layer__V32 (/*inputs*/ DATATYPE x__[4][MASKING_ORDER], /*outputs*/ DATATYPE y__[4][MASKING_ORDER]) {

  // Variables declaration
  DATATYPE sbox__V32_1__tmp1_[MASKING_ORDER];
  DATATYPE sbox__V32_1__tmp2_[MASKING_ORDER];
  DATATYPE sbox__V32_1__tmp3_[MASKING_ORDER];
  DATATYPE sbox__V32_1__tmp4_[MASKING_ORDER];

  // Instructions (body)
  AND(sbox__V32_1__tmp1_,x__[0],x__[1]);
  XOR(y__[1],sbox__V32_1__tmp1_,x__[2]);
  AND(sbox__V32_1__tmp2_,x__[3],x__[0]);
  XOR(y__[0],sbox__V32_1__tmp2_,x__[1]);
  AND(sbox__V32_1__tmp3_,y__[1],x__[3]);
  XOR(y__[3],sbox__V32_1__tmp3_,x__[0]);
  AND(sbox__V32_1__tmp4_,y__[0],y__[1]);
  XOR(y__[2],sbox__V32_1__tmp4_,x__[3]);

}

void lbox_layer__V32 (/*inputs*/ DATATYPE state__[4][MASKING_ORDER], /*outputs*/ DATATYPE stateR__[4][MASKING_ORDER]) {

  // Variables declaration
  DATATYPE lbox__V32_1__shadow_a__1_[MASKING_ORDER];
  DATATYPE lbox__V32_1__shadow_a__3_[MASKING_ORDER];
  DATATYPE lbox__V32_1__shadow_a__5_[MASKING_ORDER];
  DATATYPE lbox__V32_1__shadow_a__7_[MASKING_ORDER];
  DATATYPE lbox__V32_1__shadow_b__2_[MASKING_ORDER];
  DATATYPE lbox__V32_1__shadow_b__4_[MASKING_ORDER];
  DATATYPE lbox__V32_1__shadow_b__6_[MASKING_ORDER];
  DATATYPE lbox__V32_1__shadow_b__8_[MASKING_ORDER];
  DATATYPE lbox__V32_1__tmp10_[MASKING_ORDER];
  DATATYPE lbox__V32_1__tmp11_[MASKING_ORDER];
  DATATYPE lbox__V32_1__tmp12_[MASKING_ORDER];
  DATATYPE lbox__V32_1__tmp13_[MASKING_ORDER];
  DATATYPE lbox__V32_1__tmp14_[MASKING_ORDER];
  DATATYPE lbox__V32_1__tmp15_[MASKING_ORDER];
  DATATYPE lbox__V32_1__tmp16_[MASKING_ORDER];
  DATATYPE lbox__V32_1__tmp5_[MASKING_ORDER];
  DATATYPE lbox__V32_1__tmp6_[MASKING_ORDER];
  DATATYPE lbox__V32_1__tmp7_[MASKING_ORDER];
  DATATYPE lbox__V32_1__tmp8_[MASKING_ORDER];
  DATATYPE lbox__V32_1__tmp9_[MASKING_ORDER];
  DATATYPE lbox__V32_1_a__[MASKING_ORDER];
  DATATYPE lbox__V32_1_b__[MASKING_ORDER];
  DATATYPE lbox__V32_1_c__[MASKING_ORDER];
  DATATYPE lbox__V32_1_d__[MASKING_ORDER];
  DATATYPE lbox__V32_2__shadow_a__1_[MASKING_ORDER];
  DATATYPE lbox__V32_2__shadow_a__3_[MASKING_ORDER];
  DATATYPE lbox__V32_2__shadow_a__5_[MASKING_ORDER];
  DATATYPE lbox__V32_2__shadow_a__7_[MASKING_ORDER];
  DATATYPE lbox__V32_2__shadow_b__2_[MASKING_ORDER];
  DATATYPE lbox__V32_2__shadow_b__4_[MASKING_ORDER];
  DATATYPE lbox__V32_2__shadow_b__6_[MASKING_ORDER];
  DATATYPE lbox__V32_2__shadow_b__8_[MASKING_ORDER];
  DATATYPE lbox__V32_2__tmp10_[MASKING_ORDER];
  DATATYPE lbox__V32_2__tmp11_[MASKING_ORDER];
  DATATYPE lbox__V32_2__tmp12_[MASKING_ORDER];
  DATATYPE lbox__V32_2__tmp13_[MASKING_ORDER];
  DATATYPE lbox__V32_2__tmp14_[MASKING_ORDER];
  DATATYPE lbox__V32_2__tmp15_[MASKING_ORDER];
  DATATYPE lbox__V32_2__tmp16_[MASKING_ORDER];
  DATATYPE lbox__V32_2__tmp5_[MASKING_ORDER];
  DATATYPE lbox__V32_2__tmp6_[MASKING_ORDER];
  DATATYPE lbox__V32_2__tmp7_[MASKING_ORDER];
  DATATYPE lbox__V32_2__tmp8_[MASKING_ORDER];
  DATATYPE lbox__V32_2__tmp9_[MASKING_ORDER];
  DATATYPE lbox__V32_2_a__[MASKING_ORDER];
  DATATYPE lbox__V32_2_b__[MASKING_ORDER];
  DATATYPE lbox__V32_2_c__[MASKING_ORDER];
  DATATYPE lbox__V32_2_d__[MASKING_ORDER];

  // Instructions (body)
  R_ROTATE(lbox__V32_1__tmp5_,state__[0],12,32);
  XOR(lbox__V32_1_a__,state__[0],lbox__V32_1__tmp5_);
  R_ROTATE(lbox__V32_1__tmp6_,state__[1],12,32);
  XOR(lbox__V32_1_b__,state__[1],lbox__V32_1__tmp6_);
  R_ROTATE(lbox__V32_1__tmp7_,lbox__V32_1_a__,3,32);
  XOR(lbox__V32_1__shadow_a__1_,lbox__V32_1_a__,lbox__V32_1__tmp7_);
  R_ROTATE(lbox__V32_1__tmp8_,lbox__V32_1_b__,3,32);
  XOR(lbox__V32_1__shadow_b__2_,lbox__V32_1_b__,lbox__V32_1__tmp8_);
  R_ROTATE(lbox__V32_1__tmp9_,state__[0],17,32);
  XOR(lbox__V32_1__shadow_a__3_,lbox__V32_1__shadow_a__1_,lbox__V32_1__tmp9_);
  R_ROTATE(lbox__V32_1__tmp10_,state__[1],17,32);
  XOR(lbox__V32_1__shadow_b__4_,lbox__V32_1__shadow_b__2_,lbox__V32_1__tmp10_);
  R_ROTATE(lbox__V32_1__tmp11_,lbox__V32_1__shadow_a__3_,31,32);
  XOR(lbox__V32_1_c__,lbox__V32_1__shadow_a__3_,lbox__V32_1__tmp11_);
  R_ROTATE(lbox__V32_1__tmp12_,lbox__V32_1__shadow_b__4_,31,32);
  XOR(lbox__V32_1_d__,lbox__V32_1__shadow_b__4_,lbox__V32_1__tmp12_);
  R_ROTATE(lbox__V32_1__tmp13_,lbox__V32_1_d__,26,32);
  XOR(lbox__V32_1__shadow_a__5_,lbox__V32_1__shadow_a__3_,lbox__V32_1__tmp13_);
  R_ROTATE(lbox__V32_1__tmp14_,lbox__V32_1_c__,25,32);
  XOR(lbox__V32_1__shadow_b__6_,lbox__V32_1__shadow_b__4_,lbox__V32_1__tmp14_);
  R_ROTATE(lbox__V32_1__tmp15_,lbox__V32_1_c__,15,32);
  XOR(lbox__V32_1__shadow_a__7_,lbox__V32_1__shadow_a__5_,lbox__V32_1__tmp15_);
  R_ROTATE(lbox__V32_1__tmp16_,lbox__V32_1_d__,15,32);
  XOR(lbox__V32_1__shadow_b__8_,lbox__V32_1__shadow_b__6_,lbox__V32_1__tmp16_);
  ASGN(stateR__[0],lbox__V32_1__shadow_a__7_);
  ASGN(stateR__[1],lbox__V32_1__shadow_b__8_);
  R_ROTATE(lbox__V32_2__tmp5_,state__[2],12,32);
  XOR(lbox__V32_2_a__,state__[2],lbox__V32_2__tmp5_);
  R_ROTATE(lbox__V32_2__tmp6_,state__[3],12,32);
  XOR(lbox__V32_2_b__,state__[3],lbox__V32_2__tmp6_);
  R_ROTATE(lbox__V32_2__tmp7_,lbox__V32_2_a__,3,32);
  XOR(lbox__V32_2__shadow_a__1_,lbox__V32_2_a__,lbox__V32_2__tmp7_);
  R_ROTATE(lbox__V32_2__tmp8_,lbox__V32_2_b__,3,32);
  XOR(lbox__V32_2__shadow_b__2_,lbox__V32_2_b__,lbox__V32_2__tmp8_);
  R_ROTATE(lbox__V32_2__tmp9_,state__[2],17,32);
  XOR(lbox__V32_2__shadow_a__3_,lbox__V32_2__shadow_a__1_,lbox__V32_2__tmp9_);
  R_ROTATE(lbox__V32_2__tmp10_,state__[3],17,32);
  XOR(lbox__V32_2__shadow_b__4_,lbox__V32_2__shadow_b__2_,lbox__V32_2__tmp10_);
  R_ROTATE(lbox__V32_2__tmp11_,lbox__V32_2__shadow_a__3_,31,32);
  XOR(lbox__V32_2_c__,lbox__V32_2__shadow_a__3_,lbox__V32_2__tmp11_);
  R_ROTATE(lbox__V32_2__tmp12_,lbox__V32_2__shadow_b__4_,31,32);
  XOR(lbox__V32_2_d__,lbox__V32_2__shadow_b__4_,lbox__V32_2__tmp12_);
  R_ROTATE(lbox__V32_2__tmp13_,lbox__V32_2_d__,26,32);
  XOR(lbox__V32_2__shadow_a__5_,lbox__V32_2__shadow_a__3_,lbox__V32_2__tmp13_);
  R_ROTATE(lbox__V32_2__tmp14_,lbox__V32_2_c__,25,32);
  XOR(lbox__V32_2__shadow_b__6_,lbox__V32_2__shadow_b__4_,lbox__V32_2__tmp14_);
  R_ROTATE(lbox__V32_2__tmp15_,lbox__V32_2_c__,15,32);
  XOR(lbox__V32_2__shadow_a__7_,lbox__V32_2__shadow_a__5_,lbox__V32_2__tmp15_);
  R_ROTATE(lbox__V32_2__tmp16_,lbox__V32_2_d__,15,32);
  XOR(lbox__V32_2__shadow_b__8_,lbox__V32_2__shadow_b__6_,lbox__V32_2__tmp16_);
  ASGN(stateR__[2],lbox__V32_2__shadow_a__7_);
  ASGN(stateR__[3],lbox__V32_2__shadow_b__8_);

}

void add_rc__V32 (/*inputs*/ DATATYPE state__[4][MASKING_ORDER],DATATYPE rc__[4][MASKING_ORDER], /*outputs*/ DATATYPE stateR__[4][MASKING_ORDER]) {

  // Variables declaration
  ;

  // Instructions (body)
  for (int i__ = 0; i__ <= 3; i__++) {
    XOR(stateR__[i__],state__[i__],rc__[i__]);
  }

}

void tweakey__V32 (/*inputs*/ DATATYPE key__[4][MASKING_ORDER],DATATYPE tweak__[4][MASKING_ORDER], /*outputs*/ DATATYPE tk__[3][4][MASKING_ORDER]) {

  // Variables declaration
  DATATYPE _tmp17_[2][MASKING_ORDER];
  DATATYPE _tmp18_[2][MASKING_ORDER];
  DATATYPE _tmp19_[2][MASKING_ORDER];
  DATATYPE _tmp20_[2][MASKING_ORDER];
  DATATYPE tx__[2][MASKING_ORDER];

  // Instructions (body)
  XOR(tx__[0],tweak__[0],tweak__[2]);
  XOR(tx__[1],tweak__[1],tweak__[3]);
  XOR(tk__[0][0],key__[0],tweak__[0]);
  XOR(tk__[0][1],key__[1],tweak__[1]);
  XOR(tk__[0][2],key__[2],tweak__[2]);
  XOR(tk__[0][3],key__[3],tweak__[3]);
  XOR(_tmp17_[0],key__[0],tx__[0]);
  XOR(_tmp17_[1],key__[1],tx__[1]);
  XOR(_tmp18_[0],key__[2],tweak__[0]);
  XOR(_tmp18_[1],key__[3],tweak__[1]);
  ASGN(tk__[1][0],_tmp17_[0]);
  ASGN(tk__[1][1],_tmp17_[1]);
  ASGN(tk__[1][2],_tmp18_[0]);
  ASGN(tk__[1][3],_tmp18_[1]);
  XOR(_tmp19_[0],key__[0],tweak__[2]);
  XOR(_tmp19_[1],key__[1],tweak__[3]);
  XOR(_tmp20_[0],key__[2],tx__[0]);
  XOR(_tmp20_[1],key__[3],tx__[1]);
  ASGN(tk__[2][0],_tmp19_[0]);
  ASGN(tk__[2][1],_tmp19_[1]);
  ASGN(tk__[2][2],_tmp20_[0]);
  ASGN(tk__[2][3],_tmp20_[1]);

}

/* main function */
void clyde128__ (/*inputs*/ DATATYPE state__[4][MASKING_ORDER],DATATYPE key__[4][MASKING_ORDER],DATATYPE tweak__[4][MASKING_ORDER], /*outputs*/ DATATYPE cipher__[4][MASKING_ORDER]) {

  // Variables declaration
  DATATYPE _tmp69_[4][MASKING_ORDER];
  DATATYPE _tmp70_[4][MASKING_ORDER];
  DATATYPE rc__[12][4][MASKING_ORDER];
  DATATYPE round__[4][MASKING_ORDER];
  DATATYPE tk__[3][4][MASKING_ORDER];

  // Instructions (body)
  ASGN_CST(rc__[0][0], LIFT_32(1));
  ASGN_CST(rc__[0][1], LIFT_32(0));
  ASGN_CST(rc__[0][2], LIFT_32(0));
  ASGN_CST(rc__[0][3], LIFT_32(0));
  ASGN_CST(rc__[1][0], LIFT_32(0));
  ASGN_CST(rc__[1][1], LIFT_32(1));
  ASGN_CST(rc__[1][2], LIFT_32(0));
  ASGN_CST(rc__[1][3], LIFT_32(0));
  ASGN_CST(rc__[2][0], LIFT_32(0));
  ASGN_CST(rc__[2][1], LIFT_32(0));
  ASGN_CST(rc__[2][2], LIFT_32(1));
  ASGN_CST(rc__[2][3], LIFT_32(0));
  ASGN_CST(rc__[3][0], LIFT_32(0));
  ASGN_CST(rc__[3][1], LIFT_32(0));
  ASGN_CST(rc__[3][2], LIFT_32(0));
  ASGN_CST(rc__[3][3], LIFT_32(1));
  ASGN_CST(rc__[4][0], LIFT_32(1));
  ASGN_CST(rc__[4][1], LIFT_32(1));
  ASGN_CST(rc__[4][2], LIFT_32(0));
  ASGN_CST(rc__[4][3], LIFT_32(0));
  ASGN_CST(rc__[5][0], LIFT_32(0));
  ASGN_CST(rc__[5][1], LIFT_32(1));
  ASGN_CST(rc__[5][2], LIFT_32(1));
  ASGN_CST(rc__[5][3], LIFT_32(0));
  ASGN_CST(rc__[6][0], LIFT_32(0));
  ASGN_CST(rc__[6][1], LIFT_32(0));
  ASGN_CST(rc__[6][2], LIFT_32(1));
  ASGN_CST(rc__[6][3], LIFT_32(1));
  ASGN_CST(rc__[7][0], LIFT_32(1));
  ASGN_CST(rc__[7][1], LIFT_32(1));
  ASGN_CST(rc__[7][2], LIFT_32(0));
  ASGN_CST(rc__[7][3], LIFT_32(1));
  ASGN_CST(rc__[8][0], LIFT_32(1));
  ASGN_CST(rc__[8][1], LIFT_32(0));
  ASGN_CST(rc__[8][2], LIFT_32(1));
  ASGN_CST(rc__[8][3], LIFT_32(0));
  ASGN_CST(rc__[9][0], LIFT_32(0));
  ASGN_CST(rc__[9][1], LIFT_32(1));
  ASGN_CST(rc__[9][2], LIFT_32(0));
  ASGN_CST(rc__[9][3], LIFT_32(1));
  ASGN_CST(rc__[10][0], LIFT_32(1));
  ASGN_CST(rc__[10][1], LIFT_32(1));
  ASGN_CST(rc__[10][2], LIFT_32(1));
  ASGN_CST(rc__[10][3], LIFT_32(0));
  ASGN_CST(rc__[11][0], LIFT_32(0));
  ASGN_CST(rc__[11][1], LIFT_32(1));
  ASGN_CST(rc__[11][2], LIFT_32(1));
  ASGN_CST(rc__[11][3], LIFT_32(1));
  tweakey__V32(key__,tweak__,tk__);
  XOR(round__[0],state__[0],tk__[0][0]);
  XOR(round__[1],state__[1],tk__[0][1]);
  XOR(round__[2],state__[2],tk__[0][2]);
  XOR(round__[3],state__[3],tk__[0][3]);
  for (int s__ = 0; s__ <= 5; s__++) {
    for (int rho__ = 0; rho__ <= 1; rho__++) {
      sbox_layer__V32(round__,_tmp69_);
      lbox_layer__V32(_tmp69_,_tmp70_);
      add_rc__V32(_tmp70_,rc__[((s__ * 2) + rho__)],round__);
    }
    XOR(round__[0],round__[0],tk__[((s__ + 1) % 3)][0]);
    XOR(round__[1],round__[1],tk__[((s__ + 1) % 3)][1]);
    XOR(round__[2],round__[2],tk__[((s__ + 1) % 3)][2]);
    XOR(round__[3],round__[3],tk__[((s__ + 1) % 3)][3]);
  }
  ASGN(cipher__[0],round__[0]);
  ASGN(cipher__[1],round__[1]);
  ASGN(cipher__[2],round__[2]);
  ASGN(cipher__[3],round__[3]);

}

/* Additional functions */
uint32_t bench_speed() {
  /* inputs */
  DATATYPE state__[4][MASKING_ORDER] = { 0 };
  DATATYPE key__[4][MASKING_ORDER] = { 0 };
  DATATYPE tweak__[4][MASKING_ORDER] = { 0 };
  /* outputs */
  DATATYPE cipher__[4][MASKING_ORDER] = { 0 };
  /* fun call */
  clyde128__(state__, key__, tweak__,cipher__);

  /* Returning the number of encrypted bytes */
  return 16;
}

/* **************************************************************** */
/*                            Usuba source                          */
/*                                                                  */
/*

 _inline table sbox(x :  v4 :: base)
  returns y :  v4 :: base
{
  0, 8, 1, 15, 2, 10, 7, 9, 4, 13, 5, 6, 14, 3, 11, 12
}


_no_inline node sbox_layer(x :  v4 :: base)
  returns y :  v4 :: base
vars

let
  (y) = sbox(x)
tel

_inline node lbox(x :  u32 :: base,y :  u32 :: base)
  returns xr :  u32 :: base,yr :  u32 :: base
vars
  a :  u32 :: base,
  b :  u32 :: base,
  c :  u32 :: base,
  d :  u32 :: base
let
  (a) = (x ^ (x >>> 12));
  (b) = (y ^ (y >>> 12));
  (a) := (a ^ (a >>> 3));
  (b) := (b ^ (b >>> 3));
  (a) := (a ^ (x >>> 17));
  (b) := (b ^ (y >>> 17));
  (c) = (a ^ (a >>> 31));
  (d) = (b ^ (b >>> 31));
  (a) := (a ^ (d >>> 26));
  (b) := (b ^ (c >>> 25));
  (a) := (a ^ (c >>> 15));
  (b) := (b ^ (d >>> 15));
  (xr,yr) = (a,b)
tel

_no_inline node lbox_layer(state :  u32x4 :: base)
  returns stateR :  u32x4 :: base
vars

let
  (stateR[0,1]) = lbox(state[0],state[1]);
  (stateR[2,3]) = lbox(state[2],state[3])
tel

_no_inline node add_rc(state :  u32x4 :: base,rc :  u32x4 :: base)
  returns stateR :  u32x4 :: base
vars

let
  forall i in [0,3] {
    (stateR[i]) = (state[i] ^ rc[i])
  }
tel

_no_inline node tweakey(key :  u32x4 :: base,tweak :  u32x4 :: base)
  returns tk :  u32x4[3] :: base
vars
  tx :  u32[2] :: base
let
  (tx) = (tweak[0,1] ^ tweak[2,3]);
  (tk[0]) = (key ^ tweak);
  (tk[1]) = ((key[0,1] ^ tx),(key[2,3] ^ tweak[0,1]));
  (tk[2]) = ((key[0,1] ^ tweak[2,3]),(key[2,3] ^ tx))
tel

 node clyde128(state :  u32x4 :: base,key :  u32x4 :: base,tweak :  u32x4 :: base)
  returns cipher :  u32x4 :: base
vars
  rc :  u32x4[12] :: base,
  round :  u32x4[19] :: base,
  tk :  u32x4[3] :: base
let
  (rc[0]) = (1,0,0,0);
  (rc[1]) = (0,1,0,0);
  (rc[2]) = (0,0,1,0);
  (rc[3]) = (0,0,0,1);
  (rc[4]) = (1,1,0,0);
  (rc[5]) = (0,1,1,0);
  (rc[6]) = (0,0,1,1);
  (rc[7]) = (1,1,0,1);
  (rc[8]) = (1,0,1,0);
  (rc[9]) = (0,1,0,1);
  (rc[10]) = (1,1,1,0);
  (rc[11]) = (0,1,1,1);
  (tk) = tweakey(key,tweak);
  (round[0]) = (state ^ tk[0]);
  forall s in [0,5] {
    forall rho in [0,1] {
      (round[(((s * 3) + rho) + 1)]) = add_rc(lbox_layer(sbox_layer(round[((s * 3) + rho)])),rc[((s * 2) + rho)])
    };
    (round[((s + 1) * 3)]) = (round[((s * 3) + 2)] ^ tk[((s + 1) % 3)])
  };
  (cipher) = round[18]
tel

*/
 