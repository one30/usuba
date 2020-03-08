/* This code was generated by Usuba.
   See https://github.com/DadaIsCrazy/usuba.
   From the file "samples/usuba/xoodoo.ua" (included below). */

#include <stdint.h>

/* Do NOT change the order of those define/include */

#ifndef BITS_PER_REG
#define BITS_PER_REG 32
#endif
/* including the architecture specific .h */
#include "STD.h"

/* auxiliary functions */


/* main function */
void xoodoo__ (/*inputs*/ DATATYPE input__[3][4], /*outputs*/ DATATYPE output__[3][4]) {

  // Variables declaration
  DATATYPE RC__[12];
  DATATYPE round__V32_1__tmp10_[3][4];
  DATATYPE round__V32_1__tmp7_[3][4];
  DATATYPE round__V32_1__tmp8_[3][4];
  DATATYPE round__V32_1__tmp9_[3][4];
  DATATYPE round__V32_1_chi__V32_1_B__[3][4];
  DATATYPE round__V32_1_chi__V32_1__tmp4_[4];
  DATATYPE round__V32_1_chi__V32_1__tmp5_[4];
  DATATYPE round__V32_1_chi__V32_1__tmp6_[4];
  DATATYPE round__V32_1_theta__V32_1_E__[4];
  DATATYPE round__V32_1_theta__V32_1_P__[4];
  DATATYPE round__V32_1_theta__V32_1__tmp1_[4];
  DATATYPE round__V32_1_theta__V32_1__tmp2_;
  DATATYPE round__V32_1_theta__V32_1__tmp3_;
  DATATYPE state__[3][4];

  // Instructions (body)
  RC__[0] = LIFT_32(0x58);
  RC__[1] = LIFT_32(0x38);
  RC__[2] = LIFT_32(0x3c0);
  RC__[3] = LIFT_32(0xd0);
  RC__[4] = LIFT_32(0x120);
  RC__[5] = LIFT_32(0x14);
  RC__[6] = LIFT_32(0x60);
  RC__[7] = LIFT_32(0x2c);
  RC__[8] = LIFT_32(0x380);
  RC__[9] = LIFT_32(0xf0);
  RC__[10] = LIFT_32(0x1a0);
  RC__[11] = LIFT_32(0x12);
  state__[0][0] = input__[0][0];
  state__[0][1] = input__[0][1];
  state__[0][2] = input__[0][2];
  state__[0][3] = input__[0][3];
  state__[1][0] = input__[1][0];
  state__[1][1] = input__[1][1];
  state__[1][2] = input__[1][2];
  state__[1][3] = input__[1][3];
  state__[2][0] = input__[2][0];
  state__[2][1] = input__[2][1];
  state__[2][2] = input__[2][2];
  state__[2][3] = input__[2][3];
  for (int i__ = 0; i__ <= 11; i__++) {
    round__V32_1_theta__V32_1__tmp1_[0] = XOR(state__[0][0],state__[1][0]);
    round__V32_1_theta__V32_1__tmp1_[1] = XOR(state__[0][1],state__[1][1]);
    round__V32_1_theta__V32_1__tmp1_[2] = XOR(state__[0][2],state__[1][2]);
    round__V32_1_theta__V32_1__tmp1_[3] = XOR(state__[0][3],state__[1][3]);
    round__V32_1_theta__V32_1_P__[0] = XOR(round__V32_1_theta__V32_1__tmp1_[0],state__[2][0]);
    round__V32_1_theta__V32_1_P__[1] = XOR(round__V32_1_theta__V32_1__tmp1_[1],state__[2][1]);
    round__V32_1_theta__V32_1_P__[2] = XOR(round__V32_1_theta__V32_1__tmp1_[2],state__[2][2]);
    round__V32_1_theta__V32_1_P__[3] = XOR(round__V32_1_theta__V32_1__tmp1_[3],state__[2][3]);
    for (int i__16 = 0; i__16 <= 3; i__16++) {
      round__V32_1_theta__V32_1__tmp2_ = L_ROTATE(round__V32_1_theta__V32_1_P__[((i__16 + 3) % 4)],5,32);
      round__V32_1_theta__V32_1__tmp3_ = L_ROTATE(round__V32_1_theta__V32_1_P__[((i__16 + 3) % 4)],14,32);
      round__V32_1_theta__V32_1_E__[i__16] = XOR(round__V32_1_theta__V32_1__tmp2_,round__V32_1_theta__V32_1__tmp3_);
    }
    for (int i__27 = 0; i__27 <= 2; i__27++) {
      round__V32_1__tmp7_[i__27][0] = XOR(state__[i__27][0],round__V32_1_theta__V32_1_E__[0]);
      round__V32_1__tmp7_[i__27][1] = XOR(state__[i__27][1],round__V32_1_theta__V32_1_E__[1]);
      round__V32_1__tmp7_[i__27][2] = XOR(state__[i__27][2],round__V32_1_theta__V32_1_E__[2]);
      round__V32_1__tmp7_[i__27][3] = XOR(state__[i__27][3],round__V32_1_theta__V32_1_E__[3]);
    }
    round__V32_1__tmp8_[0][0] = round__V32_1__tmp7_[0][0];
    round__V32_1__tmp8_[0][1] = round__V32_1__tmp7_[0][1];
    round__V32_1__tmp8_[0][2] = round__V32_1__tmp7_[0][2];
    round__V32_1__tmp8_[0][3] = round__V32_1__tmp7_[0][3];
    round__V32_1__tmp8_[1][0] = round__V32_1__tmp7_[1][3];
    round__V32_1__tmp8_[1][1] = round__V32_1__tmp7_[1][0];
    round__V32_1__tmp8_[1][2] = round__V32_1__tmp7_[1][1];
    round__V32_1__tmp8_[1][3] = round__V32_1__tmp7_[1][2];
    for (int i__38 = 0; i__38 <= 3; i__38++) {
      round__V32_1__tmp8_[2][i__38] = L_ROTATE(round__V32_1__tmp7_[2][i__38],11,32);
    }
    round__V32_1__tmp9_[2][0] = round__V32_1__tmp8_[2][0];
    round__V32_1__tmp9_[0][0] = XOR(round__V32_1__tmp8_[0][0],RC__[i__]);
    round__V32_1__tmp9_[0][1] = round__V32_1__tmp8_[0][1];
    round__V32_1__tmp9_[0][2] = round__V32_1__tmp8_[0][2];
    round__V32_1__tmp9_[0][3] = round__V32_1__tmp8_[0][3];
    round__V32_1__tmp9_[1][0] = round__V32_1__tmp8_[1][0];
    round__V32_1__tmp9_[1][1] = round__V32_1__tmp8_[1][1];
    round__V32_1__tmp9_[1][2] = round__V32_1__tmp8_[1][2];
    round__V32_1__tmp9_[1][3] = round__V32_1__tmp8_[1][3];
    round__V32_1__tmp9_[2][1] = round__V32_1__tmp8_[2][1];
    round__V32_1__tmp9_[2][2] = round__V32_1__tmp8_[2][2];
    round__V32_1__tmp9_[2][3] = round__V32_1__tmp8_[2][3];
    round__V32_1_chi__V32_1__tmp5_[0] = NOT(round__V32_1__tmp9_[2][0]);
    round__V32_1_chi__V32_1__tmp6_[0] = NOT(round__V32_1__tmp9_[0][0]);
    round__V32_1_chi__V32_1__tmp6_[1] = NOT(round__V32_1__tmp9_[0][1]);
    round__V32_1_chi__V32_1__tmp4_[0] = NOT(round__V32_1__tmp9_[1][0]);
    round__V32_1_chi__V32_1__tmp4_[1] = NOT(round__V32_1__tmp9_[1][1]);
    round__V32_1_chi__V32_1__tmp4_[2] = NOT(round__V32_1__tmp9_[1][2]);
    round__V32_1_chi__V32_1__tmp4_[3] = NOT(round__V32_1__tmp9_[1][3]);
    round__V32_1_chi__V32_1__tmp5_[1] = NOT(round__V32_1__tmp9_[2][1]);
    round__V32_1_chi__V32_1__tmp5_[2] = NOT(round__V32_1__tmp9_[2][2]);
    round__V32_1_chi__V32_1__tmp5_[3] = NOT(round__V32_1__tmp9_[2][3]);
    round__V32_1_chi__V32_1_B__[1][0] = AND(round__V32_1_chi__V32_1__tmp5_[0],round__V32_1__tmp9_[0][0]);
    round__V32_1_chi__V32_1__tmp6_[2] = NOT(round__V32_1__tmp9_[0][2]);
    round__V32_1_chi__V32_1__tmp6_[3] = NOT(round__V32_1__tmp9_[0][3]);
    round__V32_1_chi__V32_1_B__[0][0] = AND(round__V32_1_chi__V32_1__tmp4_[0],round__V32_1__tmp9_[2][0]);
    round__V32_1_chi__V32_1_B__[0][1] = AND(round__V32_1_chi__V32_1__tmp4_[1],round__V32_1__tmp9_[2][1]);
    round__V32_1_chi__V32_1_B__[0][2] = AND(round__V32_1_chi__V32_1__tmp4_[2],round__V32_1__tmp9_[2][2]);
    round__V32_1_chi__V32_1_B__[0][3] = AND(round__V32_1_chi__V32_1__tmp4_[3],round__V32_1__tmp9_[2][3]);
    round__V32_1_chi__V32_1_B__[1][1] = AND(round__V32_1_chi__V32_1__tmp5_[1],round__V32_1__tmp9_[0][1]);
    round__V32_1_chi__V32_1_B__[1][2] = AND(round__V32_1_chi__V32_1__tmp5_[2],round__V32_1__tmp9_[0][2]);
    round__V32_1_chi__V32_1_B__[1][3] = AND(round__V32_1_chi__V32_1__tmp5_[3],round__V32_1__tmp9_[0][3]);
    round__V32_1_chi__V32_1_B__[2][0] = AND(round__V32_1_chi__V32_1__tmp6_[0],round__V32_1__tmp9_[1][0]);
    round__V32_1_chi__V32_1_B__[2][1] = AND(round__V32_1_chi__V32_1__tmp6_[1],round__V32_1__tmp9_[1][1]);
    round__V32_1_chi__V32_1_B__[2][2] = AND(round__V32_1_chi__V32_1__tmp6_[2],round__V32_1__tmp9_[1][2]);
    round__V32_1_chi__V32_1_B__[2][3] = AND(round__V32_1_chi__V32_1__tmp6_[3],round__V32_1__tmp9_[1][3]);
    round__V32_1__tmp10_[0][0] = XOR(round__V32_1__tmp9_[0][0],round__V32_1_chi__V32_1_B__[0][0]);
    round__V32_1__tmp10_[0][1] = XOR(round__V32_1__tmp9_[0][1],round__V32_1_chi__V32_1_B__[0][1]);
    round__V32_1__tmp10_[0][2] = XOR(round__V32_1__tmp9_[0][2],round__V32_1_chi__V32_1_B__[0][2]);
    round__V32_1__tmp10_[0][3] = XOR(round__V32_1__tmp9_[0][3],round__V32_1_chi__V32_1_B__[0][3]);
    round__V32_1__tmp10_[1][0] = XOR(round__V32_1__tmp9_[1][0],round__V32_1_chi__V32_1_B__[1][0]);
    round__V32_1__tmp10_[1][1] = XOR(round__V32_1__tmp9_[1][1],round__V32_1_chi__V32_1_B__[1][1]);
    round__V32_1__tmp10_[1][2] = XOR(round__V32_1__tmp9_[1][2],round__V32_1_chi__V32_1_B__[1][2]);
    round__V32_1__tmp10_[1][3] = XOR(round__V32_1__tmp9_[1][3],round__V32_1_chi__V32_1_B__[1][3]);
    round__V32_1__tmp10_[2][0] = XOR(round__V32_1__tmp9_[2][0],round__V32_1_chi__V32_1_B__[2][0]);
    round__V32_1__tmp10_[2][1] = XOR(round__V32_1__tmp9_[2][1],round__V32_1_chi__V32_1_B__[2][1]);
    round__V32_1__tmp10_[2][2] = XOR(round__V32_1__tmp9_[2][2],round__V32_1_chi__V32_1_B__[2][2]);
    round__V32_1__tmp10_[2][3] = XOR(round__V32_1__tmp9_[2][3],round__V32_1_chi__V32_1_B__[2][3]);
    state__[0][0] = round__V32_1__tmp10_[0][0];
    state__[0][1] = round__V32_1__tmp10_[0][1];
    state__[0][2] = round__V32_1__tmp10_[0][2];
    state__[0][3] = round__V32_1__tmp10_[0][3];
    for (int i__49 = 0; i__49 <= 3; i__49++) {
      state__[1][i__49] = L_ROTATE(round__V32_1__tmp10_[1][i__49],1,32);
    }
    for (int i__510 = 0; i__510 <= 3; i__510++) {
      state__[2][i__510] = L_ROTATE(round__V32_1__tmp10_[2][((i__510 + 2) % 4)],8,32);
    }
  }
  output__[0][0] = state__[0][0];
  output__[0][1] = state__[0][1];
  output__[0][2] = state__[0][2];
  output__[0][3] = state__[0][3];
  output__[1][0] = state__[1][0];
  output__[1][1] = state__[1][1];
  output__[1][2] = state__[1][2];
  output__[1][3] = state__[1][3];
  output__[2][0] = state__[2][0];
  output__[2][1] = state__[2][1];
  output__[2][2] = state__[2][2];
  output__[2][3] = state__[2][3];

}

/* Additional functions */
uint32_t bench_speed() {
  /* Inputs */
  DATATYPE input__[3][4] = { 0 };

  /* Preventing inputs from being optimized out */
  asm volatile("" : "+m" (input__));

  /* Outputs */
  DATATYPE output__[3][4] = { 0 };
  /* Primitive call */
  xoodoo__(input__,output__);

  /* Preventing outputs from being optimized out */
  asm volatile("" : "+m" (output__));

  /* Returning the number of encrypted bytes */
  return 48;
}

/* **************************************************************** */
/*                            Usuba source                          */
/*                                                                  */
/*

 node theta(A :  u32[3][4] :: base)
  returns R :  u32[3][4] :: base
vars
  P :  u32[4] :: base,
  E :  u32[4] :: base
let
(P) = ((A[0] ^ A[1]) ^ A[2]);
forall i in [0,3] {
(E[i]) = ((P[((i + 3) % 4)] <<< 5) ^ (P[((i + 3) % 4)] <<< 14))
};
forall i in [0,2] {
(R[i]) = (A[i] ^ E)
}
tel

 node rho_west(A :  u32[3][4] :: base)
  returns R :  u32[3][4] :: base
vars

let
(R[0]) = A[0];
(R[1]) = (A[1] >>> 1);
forall i in [0,3] {
(R[2][i]) = (A[2][i] <<< 11)
}
tel

 node iota(A :  u32[3][4] :: base,rc :  u32 :: base)
  returns R :  u32[3][4] :: base
vars

let
(R[0][0]) = (A[0][0] ^ rc);
(R[0][1 .. 3]) = A[0][1 .. 3];
(R[1,2]) = A[1,2]
tel

 node chi(A :  u32[3][4] :: base)
  returns R :  u32[3][4] :: base
vars
  B :  u32[3][4] :: base
let
(B[0]) = ((~ A[1]) & A[2]);
(B[1]) = ((~ A[2]) & A[0]);
(B[2]) = ((~ A[0]) & A[1]);
(R) = (A ^ B)
tel

 node rho_east(A :  u32[3][4] :: base)
  returns R :  u32[3][4] :: base
vars

let
(R[0]) = A[0];
forall i in [0,3] {
(R[1][i]) = (A[1][i] <<< 1)
};
forall i in [0,3] {
(R[2][i]) = (A[2][((i + 2) % 4)] <<< 8)
}
tel

 node round(state :  u32[3][4] :: base,rc :  u32 :: base)
  returns stateR :  u32[3][4] :: base
vars

let
(stateR) = rho_east(chi(iota(rho_west(theta(state)),rc)))
tel

 node xoodoo(input :  u32[3][4] :: base)
  returns output :  u32[3][4] :: base
vars
  state :  u32[13][3][4] :: base,
  RC :  u32[12] :: base
let
(RC) = (88,56,960,208,288,20,96,44,896,240,416,18);
(state[0]) = input;
forall i in [0,11] {
(state[(i + 1)]) = round(state[i],RC[i])
};
(output) = state[12]
tel

*/
 