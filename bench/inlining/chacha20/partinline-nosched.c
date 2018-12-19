/* This code was generated by Usuba.
   See https://github.com/DadaIsCrazy/usuba.
   From the file "samples/usuba/chacha20.ua" (included below). */

#include <stdint.h>

/* Do NOT change the order of those define/include */
#define NO_RUNTIME
#ifndef BITS_PER_REG
#define BITS_PER_REG 128
#endif
/* including the architecture specific .h */
#include "SSE.h"

/* auxiliary functions */
void DR__ (/*inputs*/ DATATYPE state__0__,DATATYPE state__1__,DATATYPE state__2__,DATATYPE state__3__,DATATYPE state__4__,DATATYPE state__5__,DATATYPE state__6__,DATATYPE state__7__,DATATYPE state__8__,DATATYPE state__9__,DATATYPE state__10__,DATATYPE state__11__,DATATYPE state__12__,DATATYPE state__13__,DATATYPE state__14__,DATATYPE state__15__, /*outputs*/ DATATYPE* stateR__0__,DATATYPE* stateR__1__,DATATYPE* stateR__2__,DATATYPE* stateR__3__,DATATYPE* stateR__4__,DATATYPE* stateR__5__,DATATYPE* stateR__6__,DATATYPE* stateR__7__,DATATYPE* stateR__8__,DATATYPE* stateR__9__,DATATYPE* stateR__10__,DATATYPE* stateR__11__,DATATYPE* stateR__12__,DATATYPE* stateR__13__,DATATYPE* stateR__14__,DATATYPE* stateR__15__) {
  
  // Variables declaration
  DATATYPE DR_end___1_QR___1_QR_end___1__tmp3_;
  DATATYPE DR_end___1_QR___1_QR_end___1__tmp4_;
  DATATYPE DR_end___1_QR___1_QR_start___1__tmp1_;
  DATATYPE DR_end___1_QR___1_QR_start___1__tmp2_;
  DATATYPE DR_end___1_QR___1__tmp5_0__;
  DATATYPE DR_end___1_QR___1__tmp5_1__;
  DATATYPE DR_end___1_QR___1__tmp5_2__;
  DATATYPE DR_end___1_QR___1__tmp5_3__;
  DATATYPE DR_end___1_QR___2_QR_end___1__tmp3_;
  DATATYPE DR_end___1_QR___2_QR_end___1__tmp4_;
  DATATYPE DR_end___1_QR___2_QR_start___1__tmp1_;
  DATATYPE DR_end___1_QR___2_QR_start___1__tmp2_;
  DATATYPE DR_end___1_QR___2__tmp5_0__;
  DATATYPE DR_end___1_QR___2__tmp5_1__;
  DATATYPE DR_end___1_QR___2__tmp5_2__;
  DATATYPE DR_end___1_QR___2__tmp5_3__;
  DATATYPE DR_end___1_QR___3_QR_end___1__tmp3_;
  DATATYPE DR_end___1_QR___3_QR_end___1__tmp4_;
  DATATYPE DR_end___1_QR___3_QR_start___1__tmp1_;
  DATATYPE DR_end___1_QR___3_QR_start___1__tmp2_;
  DATATYPE DR_end___1_QR___3__tmp5_0__;
  DATATYPE DR_end___1_QR___3__tmp5_1__;
  DATATYPE DR_end___1_QR___3__tmp5_2__;
  DATATYPE DR_end___1_QR___3__tmp5_3__;
  DATATYPE DR_end___1_QR___4_QR_end___1__tmp3_;
  DATATYPE DR_end___1_QR___4_QR_end___1__tmp4_;
  DATATYPE DR_end___1_QR___4_QR_start___1__tmp1_;
  DATATYPE DR_end___1_QR___4_QR_start___1__tmp2_;
  DATATYPE DR_end___1_QR___4__tmp5_0__;
  DATATYPE DR_end___1_QR___4__tmp5_1__;
  DATATYPE DR_end___1_QR___4__tmp5_2__;
  DATATYPE DR_end___1_QR___4__tmp5_3__;
  DATATYPE DR_start___1_QR___1_QR_end___1__tmp3_;
  DATATYPE DR_start___1_QR___1_QR_end___1__tmp4_;
  DATATYPE DR_start___1_QR___1_QR_start___1__tmp1_;
  DATATYPE DR_start___1_QR___1_QR_start___1__tmp2_;
  DATATYPE DR_start___1_QR___1__tmp5_0__;
  DATATYPE DR_start___1_QR___1__tmp5_1__;
  DATATYPE DR_start___1_QR___1__tmp5_2__;
  DATATYPE DR_start___1_QR___1__tmp5_3__;
  DATATYPE DR_start___1_QR___2_QR_end___1__tmp3_;
  DATATYPE DR_start___1_QR___2_QR_end___1__tmp4_;
  DATATYPE DR_start___1_QR___2_QR_start___1__tmp1_;
  DATATYPE DR_start___1_QR___2_QR_start___1__tmp2_;
  DATATYPE DR_start___1_QR___2__tmp5_0__;
  DATATYPE DR_start___1_QR___2__tmp5_1__;
  DATATYPE DR_start___1_QR___2__tmp5_2__;
  DATATYPE DR_start___1_QR___2__tmp5_3__;
  DATATYPE DR_start___1_QR___3_QR_end___1__tmp3_;
  DATATYPE DR_start___1_QR___3_QR_end___1__tmp4_;
  DATATYPE DR_start___1_QR___3_QR_start___1__tmp1_;
  DATATYPE DR_start___1_QR___3_QR_start___1__tmp2_;
  DATATYPE DR_start___1_QR___3__tmp5_0__;
  DATATYPE DR_start___1_QR___3__tmp5_1__;
  DATATYPE DR_start___1_QR___3__tmp5_2__;
  DATATYPE DR_start___1_QR___3__tmp5_3__;
  DATATYPE DR_start___1_QR___4_QR_end___1__tmp3_;
  DATATYPE DR_start___1_QR___4_QR_end___1__tmp4_;
  DATATYPE DR_start___1_QR___4_QR_start___1__tmp1_;
  DATATYPE DR_start___1_QR___4_QR_start___1__tmp2_;
  DATATYPE DR_start___1_QR___4__tmp5_0__;
  DATATYPE DR_start___1_QR___4__tmp5_1__;
  DATATYPE DR_start___1_QR___4__tmp5_2__;
  DATATYPE DR_start___1_QR___4__tmp5_3__;
  DATATYPE _tmp6_0__;
  DATATYPE _tmp6_1__;
  DATATYPE _tmp6_10__;
  DATATYPE _tmp6_11__;
  DATATYPE _tmp6_12__;
  DATATYPE _tmp6_13__;
  DATATYPE _tmp6_14__;
  DATATYPE _tmp6_15__;
  DATATYPE _tmp6_2__;
  DATATYPE _tmp6_3__;
  DATATYPE _tmp6_4__;
  DATATYPE _tmp6_5__;
  DATATYPE _tmp6_6__;
  DATATYPE _tmp6_7__;
  DATATYPE _tmp6_8__;
  DATATYPE _tmp6_9__;

  // Instructions (body)
  DR_start___1_QR___1__tmp5_0__ = ADD(state__0__,state__4__,32);
  DR_start___1_QR___1_QR_start___1__tmp1_ = XOR(state__12__,DR_start___1_QR___1__tmp5_0__);
  DR_start___1_QR___1__tmp5_3__ = L_ROTATE(DR_start___1_QR___1_QR_start___1__tmp1_,16,32);
  DR_start___1_QR___1__tmp5_2__ = ADD(state__8__,DR_start___1_QR___1__tmp5_3__,32);
  DR_start___1_QR___1_QR_start___1__tmp2_ = XOR(state__4__,DR_start___1_QR___1__tmp5_2__);
  DR_start___1_QR___1__tmp5_1__ = L_ROTATE(DR_start___1_QR___1_QR_start___1__tmp2_,12,32);
  _tmp6_0__ = ADD(DR_start___1_QR___1__tmp5_0__,DR_start___1_QR___1__tmp5_1__,32);
  DR_start___1_QR___1_QR_end___1__tmp3_ = XOR(DR_start___1_QR___1__tmp5_3__,_tmp6_0__);
  _tmp6_12__ = L_ROTATE(DR_start___1_QR___1_QR_end___1__tmp3_,8,32);
  _tmp6_8__ = ADD(DR_start___1_QR___1__tmp5_2__,_tmp6_12__,32);
  DR_start___1_QR___1_QR_end___1__tmp4_ = XOR(DR_start___1_QR___1__tmp5_1__,_tmp6_8__);
  _tmp6_4__ = L_ROTATE(DR_start___1_QR___1_QR_end___1__tmp4_,7,32);
  DR_start___1_QR___2__tmp5_0__ = ADD(state__1__,state__5__,32);
  DR_start___1_QR___2_QR_start___1__tmp1_ = XOR(state__13__,DR_start___1_QR___2__tmp5_0__);
  DR_start___1_QR___2__tmp5_3__ = L_ROTATE(DR_start___1_QR___2_QR_start___1__tmp1_,16,32);
  DR_start___1_QR___2__tmp5_2__ = ADD(state__9__,DR_start___1_QR___2__tmp5_3__,32);
  DR_start___1_QR___2_QR_start___1__tmp2_ = XOR(state__5__,DR_start___1_QR___2__tmp5_2__);
  DR_start___1_QR___2__tmp5_1__ = L_ROTATE(DR_start___1_QR___2_QR_start___1__tmp2_,12,32);
  _tmp6_1__ = ADD(DR_start___1_QR___2__tmp5_0__,DR_start___1_QR___2__tmp5_1__,32);
  DR_start___1_QR___2_QR_end___1__tmp3_ = XOR(DR_start___1_QR___2__tmp5_3__,_tmp6_1__);
  _tmp6_13__ = L_ROTATE(DR_start___1_QR___2_QR_end___1__tmp3_,8,32);
  _tmp6_9__ = ADD(DR_start___1_QR___2__tmp5_2__,_tmp6_13__,32);
  DR_start___1_QR___2_QR_end___1__tmp4_ = XOR(DR_start___1_QR___2__tmp5_1__,_tmp6_9__);
  _tmp6_5__ = L_ROTATE(DR_start___1_QR___2_QR_end___1__tmp4_,7,32);
  DR_start___1_QR___3__tmp5_0__ = ADD(state__2__,state__6__,32);
  DR_start___1_QR___3_QR_start___1__tmp1_ = XOR(state__14__,DR_start___1_QR___3__tmp5_0__);
  DR_start___1_QR___3__tmp5_3__ = L_ROTATE(DR_start___1_QR___3_QR_start___1__tmp1_,16,32);
  DR_start___1_QR___3__tmp5_2__ = ADD(state__10__,DR_start___1_QR___3__tmp5_3__,32);
  DR_start___1_QR___3_QR_start___1__tmp2_ = XOR(state__6__,DR_start___1_QR___3__tmp5_2__);
  DR_start___1_QR___3__tmp5_1__ = L_ROTATE(DR_start___1_QR___3_QR_start___1__tmp2_,12,32);
  _tmp6_2__ = ADD(DR_start___1_QR___3__tmp5_0__,DR_start___1_QR___3__tmp5_1__,32);
  DR_start___1_QR___3_QR_end___1__tmp3_ = XOR(DR_start___1_QR___3__tmp5_3__,_tmp6_2__);
  _tmp6_14__ = L_ROTATE(DR_start___1_QR___3_QR_end___1__tmp3_,8,32);
  _tmp6_10__ = ADD(DR_start___1_QR___3__tmp5_2__,_tmp6_14__,32);
  DR_start___1_QR___3_QR_end___1__tmp4_ = XOR(DR_start___1_QR___3__tmp5_1__,_tmp6_10__);
  _tmp6_6__ = L_ROTATE(DR_start___1_QR___3_QR_end___1__tmp4_,7,32);
  DR_start___1_QR___4__tmp5_0__ = ADD(state__3__,state__7__,32);
  DR_start___1_QR___4_QR_start___1__tmp1_ = XOR(state__15__,DR_start___1_QR___4__tmp5_0__);
  DR_start___1_QR___4__tmp5_3__ = L_ROTATE(DR_start___1_QR___4_QR_start___1__tmp1_,16,32);
  DR_start___1_QR___4__tmp5_2__ = ADD(state__11__,DR_start___1_QR___4__tmp5_3__,32);
  DR_start___1_QR___4_QR_start___1__tmp2_ = XOR(state__7__,DR_start___1_QR___4__tmp5_2__);
  DR_start___1_QR___4__tmp5_1__ = L_ROTATE(DR_start___1_QR___4_QR_start___1__tmp2_,12,32);
  _tmp6_3__ = ADD(DR_start___1_QR___4__tmp5_0__,DR_start___1_QR___4__tmp5_1__,32);
  DR_start___1_QR___4_QR_end___1__tmp3_ = XOR(DR_start___1_QR___4__tmp5_3__,_tmp6_3__);
  _tmp6_15__ = L_ROTATE(DR_start___1_QR___4_QR_end___1__tmp3_,8,32);
  _tmp6_11__ = ADD(DR_start___1_QR___4__tmp5_2__,_tmp6_15__,32);
  DR_start___1_QR___4_QR_end___1__tmp4_ = XOR(DR_start___1_QR___4__tmp5_1__,_tmp6_11__);
  _tmp6_7__ = L_ROTATE(DR_start___1_QR___4_QR_end___1__tmp4_,7,32);
  DR_end___1_QR___1__tmp5_0__ = ADD(_tmp6_0__,_tmp6_5__,32);
  DR_end___1_QR___1_QR_start___1__tmp1_ = XOR(_tmp6_15__,DR_end___1_QR___1__tmp5_0__);
  DR_end___1_QR___1__tmp5_3__ = L_ROTATE(DR_end___1_QR___1_QR_start___1__tmp1_,16,32);
  DR_end___1_QR___1__tmp5_2__ = ADD(_tmp6_10__,DR_end___1_QR___1__tmp5_3__,32);
  DR_end___1_QR___1_QR_start___1__tmp2_ = XOR(_tmp6_5__,DR_end___1_QR___1__tmp5_2__);
  DR_end___1_QR___1__tmp5_1__ = L_ROTATE(DR_end___1_QR___1_QR_start___1__tmp2_,12,32);
  *stateR__0__ = ADD(DR_end___1_QR___1__tmp5_0__,DR_end___1_QR___1__tmp5_1__,32);
  DR_end___1_QR___1_QR_end___1__tmp3_ = XOR(DR_end___1_QR___1__tmp5_3__,*stateR__0__);
  *stateR__15__ = L_ROTATE(DR_end___1_QR___1_QR_end___1__tmp3_,8,32);
  *stateR__10__ = ADD(DR_end___1_QR___1__tmp5_2__,*stateR__15__,32);
  DR_end___1_QR___1_QR_end___1__tmp4_ = XOR(DR_end___1_QR___1__tmp5_1__,*stateR__10__);
  *stateR__5__ = L_ROTATE(DR_end___1_QR___1_QR_end___1__tmp4_,7,32);
  DR_end___1_QR___2__tmp5_0__ = ADD(_tmp6_1__,_tmp6_6__,32);
  DR_end___1_QR___2_QR_start___1__tmp1_ = XOR(_tmp6_12__,DR_end___1_QR___2__tmp5_0__);
  DR_end___1_QR___2__tmp5_3__ = L_ROTATE(DR_end___1_QR___2_QR_start___1__tmp1_,16,32);
  DR_end___1_QR___2__tmp5_2__ = ADD(_tmp6_11__,DR_end___1_QR___2__tmp5_3__,32);
  DR_end___1_QR___2_QR_start___1__tmp2_ = XOR(_tmp6_6__,DR_end___1_QR___2__tmp5_2__);
  DR_end___1_QR___2__tmp5_1__ = L_ROTATE(DR_end___1_QR___2_QR_start___1__tmp2_,12,32);
  *stateR__1__ = ADD(DR_end___1_QR___2__tmp5_0__,DR_end___1_QR___2__tmp5_1__,32);
  DR_end___1_QR___2_QR_end___1__tmp3_ = XOR(DR_end___1_QR___2__tmp5_3__,*stateR__1__);
  *stateR__12__ = L_ROTATE(DR_end___1_QR___2_QR_end___1__tmp3_,8,32);
  *stateR__11__ = ADD(DR_end___1_QR___2__tmp5_2__,*stateR__12__,32);
  DR_end___1_QR___2_QR_end___1__tmp4_ = XOR(DR_end___1_QR___2__tmp5_1__,*stateR__11__);
  *stateR__6__ = L_ROTATE(DR_end___1_QR___2_QR_end___1__tmp4_,7,32);
  DR_end___1_QR___3__tmp5_0__ = ADD(_tmp6_2__,_tmp6_7__,32);
  DR_end___1_QR___3_QR_start___1__tmp1_ = XOR(_tmp6_13__,DR_end___1_QR___3__tmp5_0__);
  DR_end___1_QR___3__tmp5_3__ = L_ROTATE(DR_end___1_QR___3_QR_start___1__tmp1_,16,32);
  DR_end___1_QR___3__tmp5_2__ = ADD(_tmp6_8__,DR_end___1_QR___3__tmp5_3__,32);
  DR_end___1_QR___3_QR_start___1__tmp2_ = XOR(_tmp6_7__,DR_end___1_QR___3__tmp5_2__);
  DR_end___1_QR___3__tmp5_1__ = L_ROTATE(DR_end___1_QR___3_QR_start___1__tmp2_,12,32);
  *stateR__2__ = ADD(DR_end___1_QR___3__tmp5_0__,DR_end___1_QR___3__tmp5_1__,32);
  DR_end___1_QR___3_QR_end___1__tmp3_ = XOR(DR_end___1_QR___3__tmp5_3__,*stateR__2__);
  *stateR__13__ = L_ROTATE(DR_end___1_QR___3_QR_end___1__tmp3_,8,32);
  *stateR__8__ = ADD(DR_end___1_QR___3__tmp5_2__,*stateR__13__,32);
  DR_end___1_QR___3_QR_end___1__tmp4_ = XOR(DR_end___1_QR___3__tmp5_1__,*stateR__8__);
  *stateR__7__ = L_ROTATE(DR_end___1_QR___3_QR_end___1__tmp4_,7,32);
  DR_end___1_QR___4__tmp5_0__ = ADD(_tmp6_3__,_tmp6_4__,32);
  DR_end___1_QR___4_QR_start___1__tmp1_ = XOR(_tmp6_14__,DR_end___1_QR___4__tmp5_0__);
  DR_end___1_QR___4__tmp5_3__ = L_ROTATE(DR_end___1_QR___4_QR_start___1__tmp1_,16,32);
  DR_end___1_QR___4__tmp5_2__ = ADD(_tmp6_9__,DR_end___1_QR___4__tmp5_3__,32);
  DR_end___1_QR___4_QR_start___1__tmp2_ = XOR(_tmp6_4__,DR_end___1_QR___4__tmp5_2__);
  DR_end___1_QR___4__tmp5_1__ = L_ROTATE(DR_end___1_QR___4_QR_start___1__tmp2_,12,32);
  *stateR__3__ = ADD(DR_end___1_QR___4__tmp5_0__,DR_end___1_QR___4__tmp5_1__,32);
  DR_end___1_QR___4_QR_end___1__tmp3_ = XOR(DR_end___1_QR___4__tmp5_3__,*stateR__3__);
  *stateR__14__ = L_ROTATE(DR_end___1_QR___4_QR_end___1__tmp3_,8,32);
  *stateR__9__ = ADD(DR_end___1_QR___4__tmp5_2__,*stateR__14__,32);
  DR_end___1_QR___4_QR_end___1__tmp4_ = XOR(DR_end___1_QR___4__tmp5_1__,*stateR__9__);
  *stateR__4__ = L_ROTATE(DR_end___1_QR___4_QR_end___1__tmp4_,7,32);

}

/* main function */
void Chacha20__ (/*inputs*/ DATATYPE plain__[16], /*outputs*/ DATATYPE cipher__[16]) {
  
  // Variables declaration
  DATATYPE state__1__0__;
  DATATYPE state__1__1__;
  DATATYPE state__1__10__;
  DATATYPE state__1__11__;
  DATATYPE state__1__12__;
  DATATYPE state__1__13__;
  DATATYPE state__1__14__;
  DATATYPE state__1__15__;
  DATATYPE state__1__2__;
  DATATYPE state__1__3__;
  DATATYPE state__1__4__;
  DATATYPE state__1__5__;
  DATATYPE state__1__6__;
  DATATYPE state__1__7__;
  DATATYPE state__1__8__;
  DATATYPE state__1__9__;
  DATATYPE state__10__0__;
  DATATYPE state__10__1__;
  DATATYPE state__10__10__;
  DATATYPE state__10__11__;
  DATATYPE state__10__12__;
  DATATYPE state__10__13__;
  DATATYPE state__10__14__;
  DATATYPE state__10__15__;
  DATATYPE state__10__2__;
  DATATYPE state__10__3__;
  DATATYPE state__10__4__;
  DATATYPE state__10__5__;
  DATATYPE state__10__6__;
  DATATYPE state__10__7__;
  DATATYPE state__10__8__;
  DATATYPE state__10__9__;
  DATATYPE state__2__0__;
  DATATYPE state__2__1__;
  DATATYPE state__2__10__;
  DATATYPE state__2__11__;
  DATATYPE state__2__12__;
  DATATYPE state__2__13__;
  DATATYPE state__2__14__;
  DATATYPE state__2__15__;
  DATATYPE state__2__2__;
  DATATYPE state__2__3__;
  DATATYPE state__2__4__;
  DATATYPE state__2__5__;
  DATATYPE state__2__6__;
  DATATYPE state__2__7__;
  DATATYPE state__2__8__;
  DATATYPE state__2__9__;
  DATATYPE state__3__0__;
  DATATYPE state__3__1__;
  DATATYPE state__3__10__;
  DATATYPE state__3__11__;
  DATATYPE state__3__12__;
  DATATYPE state__3__13__;
  DATATYPE state__3__14__;
  DATATYPE state__3__15__;
  DATATYPE state__3__2__;
  DATATYPE state__3__3__;
  DATATYPE state__3__4__;
  DATATYPE state__3__5__;
  DATATYPE state__3__6__;
  DATATYPE state__3__7__;
  DATATYPE state__3__8__;
  DATATYPE state__3__9__;
  DATATYPE state__4__0__;
  DATATYPE state__4__1__;
  DATATYPE state__4__10__;
  DATATYPE state__4__11__;
  DATATYPE state__4__12__;
  DATATYPE state__4__13__;
  DATATYPE state__4__14__;
  DATATYPE state__4__15__;
  DATATYPE state__4__2__;
  DATATYPE state__4__3__;
  DATATYPE state__4__4__;
  DATATYPE state__4__5__;
  DATATYPE state__4__6__;
  DATATYPE state__4__7__;
  DATATYPE state__4__8__;
  DATATYPE state__4__9__;
  DATATYPE state__5__0__;
  DATATYPE state__5__1__;
  DATATYPE state__5__10__;
  DATATYPE state__5__11__;
  DATATYPE state__5__12__;
  DATATYPE state__5__13__;
  DATATYPE state__5__14__;
  DATATYPE state__5__15__;
  DATATYPE state__5__2__;
  DATATYPE state__5__3__;
  DATATYPE state__5__4__;
  DATATYPE state__5__5__;
  DATATYPE state__5__6__;
  DATATYPE state__5__7__;
  DATATYPE state__5__8__;
  DATATYPE state__5__9__;
  DATATYPE state__6__0__;
  DATATYPE state__6__1__;
  DATATYPE state__6__10__;
  DATATYPE state__6__11__;
  DATATYPE state__6__12__;
  DATATYPE state__6__13__;
  DATATYPE state__6__14__;
  DATATYPE state__6__15__;
  DATATYPE state__6__2__;
  DATATYPE state__6__3__;
  DATATYPE state__6__4__;
  DATATYPE state__6__5__;
  DATATYPE state__6__6__;
  DATATYPE state__6__7__;
  DATATYPE state__6__8__;
  DATATYPE state__6__9__;
  DATATYPE state__7__0__;
  DATATYPE state__7__1__;
  DATATYPE state__7__10__;
  DATATYPE state__7__11__;
  DATATYPE state__7__12__;
  DATATYPE state__7__13__;
  DATATYPE state__7__14__;
  DATATYPE state__7__15__;
  DATATYPE state__7__2__;
  DATATYPE state__7__3__;
  DATATYPE state__7__4__;
  DATATYPE state__7__5__;
  DATATYPE state__7__6__;
  DATATYPE state__7__7__;
  DATATYPE state__7__8__;
  DATATYPE state__7__9__;
  DATATYPE state__8__0__;
  DATATYPE state__8__1__;
  DATATYPE state__8__10__;
  DATATYPE state__8__11__;
  DATATYPE state__8__12__;
  DATATYPE state__8__13__;
  DATATYPE state__8__14__;
  DATATYPE state__8__15__;
  DATATYPE state__8__2__;
  DATATYPE state__8__3__;
  DATATYPE state__8__4__;
  DATATYPE state__8__5__;
  DATATYPE state__8__6__;
  DATATYPE state__8__7__;
  DATATYPE state__8__8__;
  DATATYPE state__8__9__;
  DATATYPE state__9__0__;
  DATATYPE state__9__1__;
  DATATYPE state__9__10__;
  DATATYPE state__9__11__;
  DATATYPE state__9__12__;
  DATATYPE state__9__13__;
  DATATYPE state__9__14__;
  DATATYPE state__9__15__;
  DATATYPE state__9__2__;
  DATATYPE state__9__3__;
  DATATYPE state__9__4__;
  DATATYPE state__9__5__;
  DATATYPE state__9__6__;
  DATATYPE state__9__7__;
  DATATYPE state__9__8__;
  DATATYPE state__9__9__;

  // Instructions (body)
  DR__(plain__[0],plain__[1],plain__[2],plain__[3],plain__[4],plain__[5],plain__[6],plain__[7],plain__[8],plain__[9],plain__[10],plain__[11],plain__[12],plain__[13],plain__[14],plain__[15],&state__1__0__,&state__1__1__,&state__1__2__,&state__1__3__,&state__1__4__,&state__1__5__,&state__1__6__,&state__1__7__,&state__1__8__,&state__1__9__,&state__1__10__,&state__1__11__,&state__1__12__,&state__1__13__,&state__1__14__,&state__1__15__);
  DR__(state__1__0__,state__1__1__,state__1__2__,state__1__3__,state__1__4__,state__1__5__,state__1__6__,state__1__7__,state__1__8__,state__1__9__,state__1__10__,state__1__11__,state__1__12__,state__1__13__,state__1__14__,state__1__15__,&state__2__0__,&state__2__1__,&state__2__2__,&state__2__3__,&state__2__4__,&state__2__5__,&state__2__6__,&state__2__7__,&state__2__8__,&state__2__9__,&state__2__10__,&state__2__11__,&state__2__12__,&state__2__13__,&state__2__14__,&state__2__15__);
  DR__(state__2__0__,state__2__1__,state__2__2__,state__2__3__,state__2__4__,state__2__5__,state__2__6__,state__2__7__,state__2__8__,state__2__9__,state__2__10__,state__2__11__,state__2__12__,state__2__13__,state__2__14__,state__2__15__,&state__3__0__,&state__3__1__,&state__3__2__,&state__3__3__,&state__3__4__,&state__3__5__,&state__3__6__,&state__3__7__,&state__3__8__,&state__3__9__,&state__3__10__,&state__3__11__,&state__3__12__,&state__3__13__,&state__3__14__,&state__3__15__);
  DR__(state__3__0__,state__3__1__,state__3__2__,state__3__3__,state__3__4__,state__3__5__,state__3__6__,state__3__7__,state__3__8__,state__3__9__,state__3__10__,state__3__11__,state__3__12__,state__3__13__,state__3__14__,state__3__15__,&state__4__0__,&state__4__1__,&state__4__2__,&state__4__3__,&state__4__4__,&state__4__5__,&state__4__6__,&state__4__7__,&state__4__8__,&state__4__9__,&state__4__10__,&state__4__11__,&state__4__12__,&state__4__13__,&state__4__14__,&state__4__15__);
  DR__(state__4__0__,state__4__1__,state__4__2__,state__4__3__,state__4__4__,state__4__5__,state__4__6__,state__4__7__,state__4__8__,state__4__9__,state__4__10__,state__4__11__,state__4__12__,state__4__13__,state__4__14__,state__4__15__,&state__5__0__,&state__5__1__,&state__5__2__,&state__5__3__,&state__5__4__,&state__5__5__,&state__5__6__,&state__5__7__,&state__5__8__,&state__5__9__,&state__5__10__,&state__5__11__,&state__5__12__,&state__5__13__,&state__5__14__,&state__5__15__);
  DR__(state__5__0__,state__5__1__,state__5__2__,state__5__3__,state__5__4__,state__5__5__,state__5__6__,state__5__7__,state__5__8__,state__5__9__,state__5__10__,state__5__11__,state__5__12__,state__5__13__,state__5__14__,state__5__15__,&state__6__0__,&state__6__1__,&state__6__2__,&state__6__3__,&state__6__4__,&state__6__5__,&state__6__6__,&state__6__7__,&state__6__8__,&state__6__9__,&state__6__10__,&state__6__11__,&state__6__12__,&state__6__13__,&state__6__14__,&state__6__15__);
  DR__(state__6__0__,state__6__1__,state__6__2__,state__6__3__,state__6__4__,state__6__5__,state__6__6__,state__6__7__,state__6__8__,state__6__9__,state__6__10__,state__6__11__,state__6__12__,state__6__13__,state__6__14__,state__6__15__,&state__7__0__,&state__7__1__,&state__7__2__,&state__7__3__,&state__7__4__,&state__7__5__,&state__7__6__,&state__7__7__,&state__7__8__,&state__7__9__,&state__7__10__,&state__7__11__,&state__7__12__,&state__7__13__,&state__7__14__,&state__7__15__);
  DR__(state__7__0__,state__7__1__,state__7__2__,state__7__3__,state__7__4__,state__7__5__,state__7__6__,state__7__7__,state__7__8__,state__7__9__,state__7__10__,state__7__11__,state__7__12__,state__7__13__,state__7__14__,state__7__15__,&state__8__0__,&state__8__1__,&state__8__2__,&state__8__3__,&state__8__4__,&state__8__5__,&state__8__6__,&state__8__7__,&state__8__8__,&state__8__9__,&state__8__10__,&state__8__11__,&state__8__12__,&state__8__13__,&state__8__14__,&state__8__15__);
  DR__(state__8__0__,state__8__1__,state__8__2__,state__8__3__,state__8__4__,state__8__5__,state__8__6__,state__8__7__,state__8__8__,state__8__9__,state__8__10__,state__8__11__,state__8__12__,state__8__13__,state__8__14__,state__8__15__,&state__9__0__,&state__9__1__,&state__9__2__,&state__9__3__,&state__9__4__,&state__9__5__,&state__9__6__,&state__9__7__,&state__9__8__,&state__9__9__,&state__9__10__,&state__9__11__,&state__9__12__,&state__9__13__,&state__9__14__,&state__9__15__);
  DR__(state__9__0__,state__9__1__,state__9__2__,state__9__3__,state__9__4__,state__9__5__,state__9__6__,state__9__7__,state__9__8__,state__9__9__,state__9__10__,state__9__11__,state__9__12__,state__9__13__,state__9__14__,state__9__15__,&state__10__0__,&state__10__1__,&state__10__2__,&state__10__3__,&state__10__4__,&state__10__5__,&state__10__6__,&state__10__7__,&state__10__8__,&state__10__9__,&state__10__10__,&state__10__11__,&state__10__12__,&state__10__13__,&state__10__14__,&state__10__15__);
  cipher__[0] = state__10__0__;
  cipher__[1] = state__10__1__;
  cipher__[2] = state__10__2__;
  cipher__[3] = state__10__3__;
  cipher__[4] = state__10__4__;
  cipher__[5] = state__10__5__;
  cipher__[6] = state__10__6__;
  cipher__[7] = state__10__7__;
  cipher__[8] = state__10__8__;
  cipher__[9] = state__10__9__;
  cipher__[10] = state__10__10__;
  cipher__[11] = state__10__11__;
  cipher__[12] = state__10__12__;
  cipher__[13] = state__10__13__;
  cipher__[14] = state__10__14__;
  cipher__[15] = state__10__15__;

}


/* **************************************************************** */
/*                            Usuba source                          */
/*                                                                  */
/*

 node QR_start(a :  u32x1 :: base,b :  u32x1 :: base,c :  u32x1 :: base,d :  u32x1 :: base)
  returns aR :  u32x1 :: base,bR :  u32x1 :: base,cR :  u32x1 :: base,dR :  u32x1 :: base
vars

let
  (aR) = (a + b);
  (dR) = ((d ^ aR) <<< 16);
  (cR) = (c + dR);
  (bR) = ((b ^ cR) <<< 12)
tel

 node QR_end(a :  u32x1 :: base,b :  u32x1 :: base,c :  u32x1 :: base,d :  u32x1 :: base)
  returns aR :  u32x1 :: base,bR :  u32x1 :: base,cR :  u32x1 :: base,dR :  u32x1 :: base
vars

let
  (aR) = (a + b);
  (dR) = ((d ^ aR) <<< 8);
  (cR) = (c + dR);
  (bR) = ((b ^ cR) <<< 7)
tel

 node QR(input :  u32x4 :: base)
  returns output :  u32x4 :: base
vars

let
  (output) = QR_end(QR_start(input))
tel

 node DR_start(state :  u32x16 :: base)
  returns stateR :  u32x16 :: base
vars

let
  (stateR[0,4,8,12]) = QR(state[0,4,8,12]);
  (stateR[1,5,9,13]) = QR(state[1,5,9,13]);
  (stateR[2,6,10,14]) = QR(state[2,6,10,14]);
  (stateR[3,7,11,15]) = QR(state[3,7,11,15])
tel

 node DR_end(state :  u32x16 :: base)
  returns stateR :  u32x16 :: base
vars

let
  (stateR[0,5,10,15]) = QR(state[0,5,10,15]);
  (stateR[1,6,11,12]) = QR(state[1,6,11,12]);
  (stateR[2,7,8,13]) = QR(state[2,7,8,13]);
  (stateR[3,4,9,14]) = QR(state[3,4,9,14])
tel

_no_inline node DR(state :  u32x16 :: base)
  returns stateR :  u32x16 :: base
vars

let
  (stateR) = DR_end(DR_start(state))
tel

 node Chacha20(plain :  u32x16 :: base)
  returns cipher :  u32x16 :: base
vars
  state :  u32x16[11] :: base
let
  (state[0]) = plain;
  _no_unroll forall i in [1,10] {
    (state[i]) = DR(state[(i - 1)])
  };
  (cipher) = state[10]
tel

*/
 