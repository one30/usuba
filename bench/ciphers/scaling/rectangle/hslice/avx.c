/* This code was generated by Usuba.
   See https://github.com/DadaIsCrazy/usuba.
   From the file "samples/usuba/rectangle_nslice.ua" (included below). */

#include <stdint.h>

/* Do NOT change the order of those define/include */
#define NO_RUNTIME
#ifndef BITS_PER_REG
#define BITS_PER_REG 256
#endif
/* including the architecture specific .h */
#include "AVX.h"

/* auxiliary functions */
void SubColumn__ (/*inputs*/ DATATYPE a0,DATATYPE a1,DATATYPE a2,DATATYPE a3, /*outputs*/ DATATYPE* b0,DATATYPE* b1,DATATYPE* b2,DATATYPE* b3) {
  
  // Variables declaration
  DATATYPE t1;
  DATATYPE t11;
  DATATYPE t2;
  DATATYPE t3;
  DATATYPE t5;
  DATATYPE t6;
  DATATYPE t8;
  DATATYPE t9;

  // Instructions (body)
  t1 = NOT(a1);
  t3 = XOR(a2,a3);
  t8 = XOR(a1,a2);
  t2 = AND(a0,t1);
  t5 = OR(a3,t1);
  *b0 = XOR(t2,t3);
  t6 = XOR(a0,t5);
  t11 = OR(*b0,t8);
  *b1 = XOR(a2,t6);
  t9 = AND(t3,t6);
  *b2 = XOR(t6,t11);
  *b3 = XOR(t8,t9);

}

/* main function */
void Rectangle__ (/*inputs*/ DATATYPE plain__[4],DATATYPE key__[26][4], /*outputs*/ DATATYPE cipher__[4]) {
  
  // Variables declaration
  DATATYPE _tmp1_[4];
  DATATYPE _tmp2_[4];
  DATATYPE tmp__[4];

  // Instructions (body)
  tmp__[0] = plain__[0];
  tmp__[1] = plain__[1];
  tmp__[2] = plain__[2];
  tmp__[3] = plain__[3];
  for (int i = 0; i <= 24; i++) {
    _tmp1_[0] = XOR(tmp__[0],key__[i][0]);
    _tmp1_[1] = XOR(tmp__[1],key__[i][1]);
    _tmp1_[2] = XOR(tmp__[2],key__[i][2]);
    _tmp1_[3] = XOR(tmp__[3],key__[i][3]);
    SubColumn__(_tmp1_[0],_tmp1_[1],_tmp1_[2],_tmp1_[3],&_tmp2_[0],&_tmp2_[1],&_tmp2_[2],&_tmp2_[3]);
    tmp__[0] = _tmp2_[0];
    tmp__[1] = PERMUT_16(_tmp2_[1],1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,0);
    tmp__[2] = PERMUT_16(_tmp2_[2],12,13,14,15,0,1,2,3,4,5,6,7,8,9,10,11);
    tmp__[3] = PERMUT_16(_tmp2_[3],13,14,15,0,1,2,3,4,5,6,7,8,9,10,11,12);
  }
  cipher__[0] = XOR(tmp__[0],key__[25][0]);
  cipher__[1] = XOR(tmp__[1],key__[25][1]);
  cipher__[2] = XOR(tmp__[2],key__[25][2]);
  cipher__[3] = XOR(tmp__[3],key__[25][3]);

}


/* **************************************************************** */
/*                            Usuba source                          */
/*                                                                  */
/*

_no_inline table SubColumn(input :  u1x4 :: base)
  returns out :  u1x4 :: base
{
  6, 5, 12, 10, 1, 14, 7, 9, 11, 0, 3, 13, 8, 15, 4, 2
}


 node RL1(input :  u16x1 :: base)
  returns out :  u16x1 :: base
vars

let
  (out) = Shuffle(input,[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,0])
tel

 node RL12(input :  u16x1 :: base)
  returns out :  u16x1 :: base
vars

let
  (out) = Shuffle(input,[12,13,14,15,0,1,2,3,4,5,6,7,8,9,10,11])
tel

 node RL13(input :  u16x1 :: base)
  returns out :  u16x1 :: base
vars

let
  (out) = Shuffle(input,[13,14,15,0,1,2,3,4,5,6,7,8,9,10,11,12])
tel

 node ShiftRows(input :  u16x4 :: base)
  returns out :  u16x4 :: base
vars

let
  (out[0]) = input[0];
  (out[1]) = RL1(input[1]);
  (out[2]) = RL12(input[2]);
  (out[3]) = RL13(input[3])
tel

 node Rectangle(plain :  u16x4 :: base,key :  u16x4[26] :: base)
  returns cipher :  u16x4 :: base
vars
  tmp :  u16x4[26] :: base
let
  (tmp[0]) = plain;
  _no_unroll forall i in [0,24] {
    (tmp[(i + 1)]) = ShiftRows(SubColumn((tmp[i] ^ key[i])))
  };
  (cipher) = (tmp[25] ^ key[25])
tel

*/
 