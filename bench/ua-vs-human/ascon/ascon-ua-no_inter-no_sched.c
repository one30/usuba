/* This code was generated by Usuba.
   See https://github.com/DadaIsCrazy/usuba.
   From the file "ascon.ua" (included below). */

#include <stdint.h>

/* Do NOT change the order of those define/include */

#ifndef BITS_PER_REG
#define BITS_PER_REG 64
#endif
/* including the architecture specific .h */
#include "STD.h"

/* auxiliary functions */


/* main function */
void ascon12__ (/*inputs*/ DATATYPE input__[5], /*outputs*/ DATATYPE output__[5]) {

  // Variables declaration
  DATATYPE LinearLayer__V64_1__tmp10_;
  DATATYPE LinearLayer__V64_1__tmp11_;
  DATATYPE LinearLayer__V64_1__tmp12_;
  DATATYPE LinearLayer__V64_1__tmp13_;
  DATATYPE LinearLayer__V64_1__tmp14_;
  DATATYPE LinearLayer__V64_1__tmp15_;
  DATATYPE LinearLayer__V64_1__tmp16_;
  DATATYPE LinearLayer__V64_1__tmp2_;
  DATATYPE LinearLayer__V64_1__tmp3_;
  DATATYPE LinearLayer__V64_1__tmp4_;
  DATATYPE LinearLayer__V64_1__tmp5_;
  DATATYPE LinearLayer__V64_1__tmp6_;
  DATATYPE LinearLayer__V64_1__tmp7_;
  DATATYPE LinearLayer__V64_1__tmp8_;
  DATATYPE LinearLayer__V64_1__tmp9_;
  DATATYPE Sbox__V64_1__shadow_t0__4_;
  DATATYPE Sbox__V64_1__shadow_t1__5_;
  DATATYPE Sbox__V64_1__shadow_t2__6_;
  DATATYPE Sbox__V64_1__shadow_t3__7_;
  DATATYPE Sbox__V64_1__shadow_t4__8_;
  DATATYPE Sbox__V64_1__shadow_x0__1_;
  DATATYPE Sbox__V64_1__shadow_x0__9_;
  DATATYPE Sbox__V64_1__shadow_x1__10_;
  DATATYPE Sbox__V64_1__shadow_x2__11_;
  DATATYPE Sbox__V64_1__shadow_x2__3_;
  DATATYPE Sbox__V64_1__shadow_x3__12_;
  DATATYPE Sbox__V64_1__shadow_x4__2_;
  DATATYPE Sbox__V64_1_t0__;
  DATATYPE Sbox__V64_1_t1__;
  DATATYPE Sbox__V64_1_t2__;
  DATATYPE Sbox__V64_1_t3__;
  DATATYPE Sbox__V64_1_t4__;
  DATATYPE _tmp29_[5];
  DATATYPE _tmp30_[5];
  DATATYPE consts__[12];
  DATATYPE state__[5];

  // Instructions (body)
  state__[2] = input__[2];
  consts__[0] = LIFT_64(0xf0);
  consts__[1] = LIFT_64(0xe1);
  consts__[2] = LIFT_64(0xd2);
  consts__[3] = LIFT_64(0xc3);
  consts__[4] = LIFT_64(0xb4);
  consts__[5] = LIFT_64(0xa5);
  consts__[6] = LIFT_64(0x96);
  consts__[7] = LIFT_64(0x87);
  consts__[8] = LIFT_64(0x78);
  consts__[9] = LIFT_64(0x69);
  consts__[10] = LIFT_64(0x5a);
  consts__[11] = LIFT_64(0x4b);
  state__[0] = input__[0];
  state__[1] = input__[1];
  state__[3] = input__[3];
  state__[4] = input__[4];
  for (int i__ = 0; i__ <= 11; i__++) {
    _tmp29_[0] = state__[0];
    _tmp29_[1] = state__[1];
    _tmp29_[2] = XOR(state__[2],consts__[i__]);
    _tmp29_[3] = state__[3];
    _tmp29_[4] = state__[4];
    Sbox__V64_1__shadow_x0__1_ = XOR(_tmp29_[0],_tmp29_[4]);
    Sbox__V64_1__shadow_x4__2_ = XOR(_tmp29_[4],_tmp29_[3]);
    Sbox__V64_1__shadow_x2__3_ = XOR(_tmp29_[2],_tmp29_[1]);
    Sbox__V64_1_t0__ = NOT(Sbox__V64_1__shadow_x0__1_);
    Sbox__V64_1_t1__ = NOT(_tmp29_[1]);
    Sbox__V64_1_t2__ = NOT(Sbox__V64_1__shadow_x2__3_);
    Sbox__V64_1_t3__ = NOT(_tmp29_[3]);
    Sbox__V64_1_t4__ = NOT(Sbox__V64_1__shadow_x4__2_);
    Sbox__V64_1__shadow_t0__4_ = AND(Sbox__V64_1_t0__,_tmp29_[1]);
    Sbox__V64_1__shadow_t1__5_ = AND(Sbox__V64_1_t1__,Sbox__V64_1__shadow_x2__3_);
    Sbox__V64_1__shadow_t2__6_ = AND(Sbox__V64_1_t2__,_tmp29_[3]);
    Sbox__V64_1__shadow_t3__7_ = AND(Sbox__V64_1_t3__,Sbox__V64_1__shadow_x4__2_);
    Sbox__V64_1__shadow_t4__8_ = AND(Sbox__V64_1_t4__,Sbox__V64_1__shadow_x0__1_);
    Sbox__V64_1__shadow_x0__9_ = XOR(Sbox__V64_1__shadow_x0__1_,Sbox__V64_1__shadow_t1__5_);
    Sbox__V64_1__shadow_x1__10_ = XOR(_tmp29_[1],Sbox__V64_1__shadow_t2__6_);
    Sbox__V64_1__shadow_x2__11_ = XOR(Sbox__V64_1__shadow_x2__3_,Sbox__V64_1__shadow_t3__7_);
    Sbox__V64_1__shadow_x3__12_ = XOR(_tmp29_[3],Sbox__V64_1__shadow_t4__8_);
    _tmp30_[4] = XOR(Sbox__V64_1__shadow_x4__2_,Sbox__V64_1__shadow_t0__4_);
    _tmp30_[1] = XOR(Sbox__V64_1__shadow_x1__10_,Sbox__V64_1__shadow_x0__9_);
    _tmp30_[0] = XOR(Sbox__V64_1__shadow_x0__9_,_tmp30_[4]);
    _tmp30_[3] = XOR(Sbox__V64_1__shadow_x3__12_,Sbox__V64_1__shadow_x2__11_);
    _tmp30_[2] = NOT(Sbox__V64_1__shadow_x2__11_);
    LinearLayer__V64_1__tmp2_ = R_ROTATE(_tmp30_[0],19,64);
    LinearLayer__V64_1__tmp3_ = XOR(_tmp30_[0],LinearLayer__V64_1__tmp2_);
    LinearLayer__V64_1__tmp4_ = R_ROTATE(_tmp30_[0],28,64);
    state__[0] = XOR(LinearLayer__V64_1__tmp3_,LinearLayer__V64_1__tmp4_);
    LinearLayer__V64_1__tmp5_ = R_ROTATE(_tmp30_[1],61,64);
    LinearLayer__V64_1__tmp6_ = XOR(_tmp30_[1],LinearLayer__V64_1__tmp5_);
    LinearLayer__V64_1__tmp7_ = R_ROTATE(_tmp30_[1],39,64);
    state__[1] = XOR(LinearLayer__V64_1__tmp6_,LinearLayer__V64_1__tmp7_);
    LinearLayer__V64_1__tmp8_ = R_ROTATE(_tmp30_[2],1,64);
    LinearLayer__V64_1__tmp9_ = XOR(_tmp30_[2],LinearLayer__V64_1__tmp8_);
    LinearLayer__V64_1__tmp10_ = R_ROTATE(_tmp30_[2],6,64);
    state__[2] = XOR(LinearLayer__V64_1__tmp9_,LinearLayer__V64_1__tmp10_);
    LinearLayer__V64_1__tmp11_ = R_ROTATE(_tmp30_[3],10,64);
    LinearLayer__V64_1__tmp12_ = XOR(_tmp30_[3],LinearLayer__V64_1__tmp11_);
    LinearLayer__V64_1__tmp13_ = R_ROTATE(_tmp30_[3],17,64);
    state__[3] = XOR(LinearLayer__V64_1__tmp12_,LinearLayer__V64_1__tmp13_);
    LinearLayer__V64_1__tmp14_ = R_ROTATE(_tmp30_[4],7,64);
    LinearLayer__V64_1__tmp15_ = XOR(_tmp30_[4],LinearLayer__V64_1__tmp14_);
    LinearLayer__V64_1__tmp16_ = R_ROTATE(_tmp30_[4],41,64);
    state__[4] = XOR(LinearLayer__V64_1__tmp15_,LinearLayer__V64_1__tmp16_);
  }
  output__[0] = state__[0];
  output__[1] = state__[1];
  output__[2] = state__[2];
  output__[3] = state__[3];
  output__[4] = state__[4];

}

/* Additional functions */
uint32_t bench_speed() {
  /* Inputs */
  DATATYPE input__[5] = { 0 };

  /* Preventing inputs from being optimized out */
  asm volatile("" : "+m" (input__));

  /* Outputs */
  DATATYPE output__[5] = { 0 };
  /* Primitive call */
  ascon12__(input__,output__);

  /* Preventing outputs from being optimized out */
  asm volatile("" : "+m" (output__));

  /* Returning the number of encrypted bytes */
  return 40;
}

/* **************************************************************** */
/*                            Usuba source                          */
/*                                                                  */
/*

 table Sbox(x :  v5)
  returns y :  v5
{
  4, 11, 31, 20, 26, 21, 9, 2, 27, 5, 8, 18, 29, 3, 6, 28, 30, 19, 7, 14, 0, 13, 17, 24, 16, 12, 1, 25, 22, 10, 15, 23
}


 node AddConstant(state :  u64x5,c :  u64)
  returns stateR :  u64x5
vars

let
  (stateR) = (state[0,1],(state[2] ^ c),state[3,4])
tel

 node LinearLayer(state :  u64x5)
  returns stateR :  u64x5
vars

let
  (stateR[0]) = ((state[0] ^ (state[0] >>> 19)) ^ (state[0] >>> 28));
  (stateR[1]) = ((state[1] ^ (state[1] >>> 61)) ^ (state[1] >>> 39));
  (stateR[2]) = ((state[2] ^ (state[2] >>> 1)) ^ (state[2] >>> 6));
  (stateR[3]) = ((state[3] ^ (state[3] >>> 10)) ^ (state[3] >>> 17));
  (stateR[4]) = ((state[4] ^ (state[4] >>> 7)) ^ (state[4] >>> 41))
tel

 node ascon12(input :  u64x5)
  returns output :  u64x5
vars
  consts :  u64[12],
  state :  u64x5[13]
let
  (consts) = (0xf0:u64,0xe1:u64,0xd2:u64,0xc3:u64,0xb4:u64,0xa5:u64,0x96:u64,0x87:u64,0x78:u64,0x69:u64,0x5a:u64,0x4b:u64);
  (state[0]) = input;
  forall i in [0,11] {
    (state[(i + 1)]) = LinearLayer(Sbox(AddConstant(state[i],consts[i])))
  };
  (output) = state[12]
tel

*/
 