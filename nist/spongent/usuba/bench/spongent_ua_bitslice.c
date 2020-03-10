/* This code was generated by Usuba.
   See https://github.com/DadaIsCrazy/usuba.
   From the file "nist/spongent/usuba/ua/spongent.ua" (included below). */

#include <stdint.h>

/* Do NOT change the order of those define/include */

#ifndef BITS_PER_REG
#define BITS_PER_REG 32
#endif
/* including the architecture specific .h */
#include "STD.h"

/* auxiliary functions */
void sBox__B1 (/*inputs*/ DATATYPE x0__,DATATYPE x1__,DATATYPE x2__,DATATYPE x3__, /*outputs*/ DATATYPE* y0__,DATATYPE* y1__,DATATYPE* y2__,DATATYPE* y3__) {

  // Variables declaration
  DATATYPE _tmp10_;
  DATATYPE _tmp14_;
  DATATYPE _tmp15_;
  DATATYPE _tmp16_;
  DATATYPE _tmp17_;
  DATATYPE _tmp18_;
  DATATYPE _tmp19_;
  DATATYPE _tmp2_;
  DATATYPE _tmp3_;
  DATATYPE _tmp4_;
  DATATYPE _tmp7_;
  DATATYPE _tmp8_;
  DATATYPE q[8];
  DATATYPE t[4];

  // Instructions (body)
  q[0] = XOR(x0__,x2__);
  q[1] = XOR(x1__,x2__);
  t[0] = AND(q[0],q[1]);
  _tmp2_ = NOT(x0__);
  _tmp3_ = XOR(_tmp2_,x1__);
  _tmp4_ = XOR(_tmp3_,x3__);
  q[2] = XOR(_tmp4_,t[0]);
  t[1] = AND(q[2],_tmp2_);
  q[4] = XOR(x1__,t[1]);
  _tmp7_ = XOR(q[1],x3__);
  _tmp8_ = XOR(_tmp7_,t[0]);
  q[5] = XOR(_tmp8_,t[1]);
  t[2] = AND(q[4],q[5]);
  q[6] = XOR(x2__,t[0]);
  _tmp10_ = NOT(x1__);
  q[7] = XOR(_tmp10_,t[0]);
  t[3] = AND(q[6],q[7]);
  *y0__ = XOR(_tmp7_,t[2]);
  _tmp14_ = XOR(q[0],x3__);
  _tmp15_ = XOR(_tmp14_,t[0]);
  *y1__ = XOR(_tmp15_,t[1]);
  _tmp16_ = XOR(x0__,x1__);
  _tmp17_ = XOR(_tmp16_,x2__);
  *y2__ = XOR(_tmp17_,t[1]);
  _tmp18_ = XOR(x0__,x3__);
  _tmp19_ = XOR(_tmp18_,t[0]);
  *y3__ = XOR(_tmp19_,t[3]);

}

void sBoxLayer__B1 (/*inputs*/ DATATYPE state__[20][8], /*outputs*/ DATATYPE stateR__[20][8]) {

  // Variables declaration
  ;

  // Instructions (body)
  for (int i__ = 0; i__ <= 19; i__++) {
    sBox__B1(state__[i__][0],state__[i__][1],state__[i__][2],state__[i__][3],&stateR__[i__][0],&stateR__[i__][1],&stateR__[i__][2],&stateR__[i__][3]);
    sBox__B1(state__[i__][4],state__[i__][5],state__[i__][6],state__[i__][7],&stateR__[i__][4],&stateR__[i__][5],&stateR__[i__][6],&stateR__[i__][7]);
  }

}

void pLayer__B1 (/*inputs*/ DATATYPE state__[20][8], /*outputs*/ DATATYPE stateR__[20][8]) {

  // Variables declaration
  DATATYPE x__;

  // Instructions (body)
  for (int i__ = 0; i__ <= 18; i__++) {
    for (int j__ = 0; j__ <= 7; j__++) {
      x__ = state__[i__][(7 - j__)];
      stateR__[(((((8 * i__) + j__) * 40) % 159) / 8)][(7 - (((((8 * i__) + j__) * 40) % 159) - (8 * (((((8 * i__) + j__) * 40) % 159) / 8))))] = x__;
    }
  }
  for (int j__ = 0; j__ <= 6; j__++) {
    x__ = state__[19][(7 - j__)];
    stateR__[((((152 + j__) * 40) % 159) / 8)][(7 - ((((152 + j__) * 40) % 159) - (8 * ((((152 + j__) * 40) % 159) / 8))))] = x__;
  }
  stateR__[19][0] = state__[19][0];

}

void counterLayer__B1 (/*inputs*/ DATATYPE state__[20][8],DATATYPE counter__[8], /*outputs*/ DATATYPE stateR__[20][8]) {

  // Variables declaration
  ;

  // Instructions (body)
  stateR__[1][0] = state__[1][0];
  stateR__[1][1] = state__[1][1];
  stateR__[1][2] = state__[1][2];
  stateR__[1][3] = state__[1][3];
  stateR__[1][4] = state__[1][4];
  stateR__[1][5] = state__[1][5];
  stateR__[1][6] = state__[1][6];
  stateR__[1][7] = state__[1][7];
  stateR__[2][0] = state__[2][0];
  stateR__[2][1] = state__[2][1];
  stateR__[2][2] = state__[2][2];
  stateR__[2][3] = state__[2][3];
  stateR__[2][4] = state__[2][4];
  stateR__[2][5] = state__[2][5];
  stateR__[2][6] = state__[2][6];
  stateR__[2][7] = state__[2][7];
  stateR__[3][0] = state__[3][0];
  stateR__[3][1] = state__[3][1];
  stateR__[3][2] = state__[3][2];
  stateR__[3][3] = state__[3][3];
  stateR__[3][4] = state__[3][4];
  stateR__[3][5] = state__[3][5];
  stateR__[3][6] = state__[3][6];
  stateR__[3][7] = state__[3][7];
  stateR__[4][0] = state__[4][0];
  stateR__[4][1] = state__[4][1];
  stateR__[4][2] = state__[4][2];
  stateR__[4][3] = state__[4][3];
  stateR__[4][4] = state__[4][4];
  stateR__[4][5] = state__[4][5];
  stateR__[4][6] = state__[4][6];
  stateR__[4][7] = state__[4][7];
  stateR__[5][0] = state__[5][0];
  stateR__[5][1] = state__[5][1];
  stateR__[5][2] = state__[5][2];
  stateR__[5][3] = state__[5][3];
  stateR__[5][4] = state__[5][4];
  stateR__[5][5] = state__[5][5];
  stateR__[5][6] = state__[5][6];
  stateR__[5][7] = state__[5][7];
  stateR__[6][0] = state__[6][0];
  stateR__[6][1] = state__[6][1];
  stateR__[6][2] = state__[6][2];
  stateR__[6][3] = state__[6][3];
  stateR__[6][4] = state__[6][4];
  stateR__[6][5] = state__[6][5];
  stateR__[6][6] = state__[6][6];
  stateR__[6][7] = state__[6][7];
  stateR__[7][0] = state__[7][0];
  stateR__[7][1] = state__[7][1];
  stateR__[7][2] = state__[7][2];
  stateR__[7][3] = state__[7][3];
  stateR__[7][4] = state__[7][4];
  stateR__[7][5] = state__[7][5];
  stateR__[7][6] = state__[7][6];
  stateR__[7][7] = state__[7][7];
  stateR__[8][0] = state__[8][0];
  stateR__[8][1] = state__[8][1];
  stateR__[8][2] = state__[8][2];
  stateR__[8][3] = state__[8][3];
  stateR__[8][4] = state__[8][4];
  stateR__[8][5] = state__[8][5];
  stateR__[8][6] = state__[8][6];
  stateR__[8][7] = state__[8][7];
  stateR__[9][0] = state__[9][0];
  stateR__[9][1] = state__[9][1];
  stateR__[9][2] = state__[9][2];
  stateR__[9][3] = state__[9][3];
  stateR__[9][4] = state__[9][4];
  stateR__[9][5] = state__[9][5];
  stateR__[9][6] = state__[9][6];
  stateR__[9][7] = state__[9][7];
  stateR__[10][0] = state__[10][0];
  stateR__[10][1] = state__[10][1];
  stateR__[10][2] = state__[10][2];
  stateR__[10][3] = state__[10][3];
  stateR__[10][4] = state__[10][4];
  stateR__[10][5] = state__[10][5];
  stateR__[10][6] = state__[10][6];
  stateR__[10][7] = state__[10][7];
  stateR__[11][0] = state__[11][0];
  stateR__[11][1] = state__[11][1];
  stateR__[11][2] = state__[11][2];
  stateR__[11][3] = state__[11][3];
  stateR__[11][4] = state__[11][4];
  stateR__[11][5] = state__[11][5];
  stateR__[11][6] = state__[11][6];
  stateR__[11][7] = state__[11][7];
  stateR__[12][0] = state__[12][0];
  stateR__[12][1] = state__[12][1];
  stateR__[12][2] = state__[12][2];
  stateR__[12][3] = state__[12][3];
  stateR__[12][4] = state__[12][4];
  stateR__[12][5] = state__[12][5];
  stateR__[12][6] = state__[12][6];
  stateR__[12][7] = state__[12][7];
  stateR__[13][0] = state__[13][0];
  stateR__[13][1] = state__[13][1];
  stateR__[13][2] = state__[13][2];
  stateR__[13][3] = state__[13][3];
  stateR__[13][4] = state__[13][4];
  stateR__[13][5] = state__[13][5];
  stateR__[13][6] = state__[13][6];
  stateR__[13][7] = state__[13][7];
  stateR__[14][0] = state__[14][0];
  stateR__[14][1] = state__[14][1];
  stateR__[14][2] = state__[14][2];
  stateR__[14][3] = state__[14][3];
  stateR__[14][4] = state__[14][4];
  stateR__[14][5] = state__[14][5];
  stateR__[14][6] = state__[14][6];
  stateR__[14][7] = state__[14][7];
  stateR__[15][0] = state__[15][0];
  stateR__[15][1] = state__[15][1];
  stateR__[15][2] = state__[15][2];
  stateR__[15][3] = state__[15][3];
  stateR__[15][4] = state__[15][4];
  stateR__[15][5] = state__[15][5];
  stateR__[15][6] = state__[15][6];
  stateR__[15][7] = state__[15][7];
  stateR__[16][0] = state__[16][0];
  stateR__[16][1] = state__[16][1];
  stateR__[16][2] = state__[16][2];
  stateR__[16][3] = state__[16][3];
  stateR__[16][4] = state__[16][4];
  stateR__[16][5] = state__[16][5];
  stateR__[16][6] = state__[16][6];
  stateR__[16][7] = state__[16][7];
  stateR__[17][0] = state__[17][0];
  stateR__[17][1] = state__[17][1];
  stateR__[17][2] = state__[17][2];
  stateR__[17][3] = state__[17][3];
  stateR__[17][4] = state__[17][4];
  stateR__[17][5] = state__[17][5];
  stateR__[17][6] = state__[17][6];
  stateR__[17][7] = state__[17][7];
  stateR__[18][0] = state__[18][0];
  stateR__[18][1] = state__[18][1];
  stateR__[18][2] = state__[18][2];
  stateR__[18][3] = state__[18][3];
  stateR__[18][4] = state__[18][4];
  stateR__[18][5] = state__[18][5];
  stateR__[18][6] = state__[18][6];
  stateR__[18][7] = state__[18][7];
  stateR__[0][0] = XOR(state__[0][0],counter__[0]);
  stateR__[0][1] = XOR(state__[0][1],counter__[1]);
  stateR__[0][2] = XOR(state__[0][2],counter__[2]);
  stateR__[0][3] = XOR(state__[0][3],counter__[3]);
  stateR__[0][4] = XOR(state__[0][4],counter__[4]);
  stateR__[0][5] = XOR(state__[0][5],counter__[5]);
  stateR__[0][6] = XOR(state__[0][6],counter__[6]);
  stateR__[0][7] = XOR(state__[0][7],counter__[7]);
  stateR__[19][0] = XOR(state__[19][0],counter__[7]);
  stateR__[19][1] = XOR(state__[19][1],counter__[6]);
  stateR__[19][2] = XOR(state__[19][2],counter__[5]);
  stateR__[19][3] = XOR(state__[19][3],counter__[4]);
  stateR__[19][4] = XOR(state__[19][4],counter__[3]);
  stateR__[19][5] = XOR(state__[19][5],counter__[2]);
  stateR__[19][6] = XOR(state__[19][6],counter__[1]);
  stateR__[19][7] = XOR(state__[19][7],counter__[0]);

}

void lfsr__B1 (/*inputs*/ DATATYPE counter__[8], /*outputs*/ DATATYPE counterR__[8]) {

  // Variables declaration
  DATATYPE _tmp27_;

  // Instructions (body)
  _tmp27_ = XOR(counter__[1],counter__[2]);
  counterR__[0] = SET_ALL_ZERO();
  counterR__[1] = counter__[2];
  counterR__[2] = counter__[3];
  counterR__[3] = counter__[4];
  counterR__[4] = counter__[5];
  counterR__[5] = counter__[6];
  counterR__[6] = counter__[7];
  counterR__[7] = _tmp27_;

}

/* main function */
void permutation__ (/*inputs*/ DATATYPE input__[20][8], /*outputs*/ DATATYPE output__[20][8]) {

  // Variables declaration
  DATATYPE _tmp30_[20][8];
  DATATYPE _tmp31_[20][8];
  DATATYPE counter__[8];
  DATATYPE state__[20][8];

  // Instructions (body)
  state__[0][0] = input__[0][0];
  state__[0][1] = input__[0][1];
  state__[0][2] = input__[0][2];
  state__[0][3] = input__[0][3];
  state__[0][4] = input__[0][4];
  state__[0][5] = input__[0][5];
  state__[0][6] = input__[0][6];
  state__[0][7] = input__[0][7];
  state__[1][0] = input__[1][0];
  state__[1][1] = input__[1][1];
  state__[1][2] = input__[1][2];
  state__[1][3] = input__[1][3];
  state__[1][4] = input__[1][4];
  state__[1][5] = input__[1][5];
  state__[1][6] = input__[1][6];
  state__[1][7] = input__[1][7];
  state__[2][0] = input__[2][0];
  state__[2][1] = input__[2][1];
  state__[2][2] = input__[2][2];
  state__[2][3] = input__[2][3];
  state__[2][4] = input__[2][4];
  state__[2][5] = input__[2][5];
  state__[2][6] = input__[2][6];
  state__[2][7] = input__[2][7];
  state__[3][0] = input__[3][0];
  state__[3][1] = input__[3][1];
  state__[3][2] = input__[3][2];
  state__[3][3] = input__[3][3];
  state__[3][4] = input__[3][4];
  state__[3][5] = input__[3][5];
  state__[3][6] = input__[3][6];
  state__[3][7] = input__[3][7];
  state__[4][0] = input__[4][0];
  state__[4][1] = input__[4][1];
  state__[4][2] = input__[4][2];
  state__[4][3] = input__[4][3];
  state__[4][4] = input__[4][4];
  state__[4][5] = input__[4][5];
  state__[4][6] = input__[4][6];
  state__[4][7] = input__[4][7];
  state__[5][0] = input__[5][0];
  state__[5][1] = input__[5][1];
  state__[5][2] = input__[5][2];
  state__[5][3] = input__[5][3];
  state__[5][4] = input__[5][4];
  state__[5][5] = input__[5][5];
  state__[5][6] = input__[5][6];
  state__[5][7] = input__[5][7];
  state__[6][0] = input__[6][0];
  state__[6][1] = input__[6][1];
  state__[6][2] = input__[6][2];
  state__[6][3] = input__[6][3];
  state__[6][4] = input__[6][4];
  state__[6][5] = input__[6][5];
  state__[6][6] = input__[6][6];
  state__[6][7] = input__[6][7];
  state__[7][0] = input__[7][0];
  state__[7][1] = input__[7][1];
  state__[7][2] = input__[7][2];
  state__[7][3] = input__[7][3];
  state__[7][4] = input__[7][4];
  state__[7][5] = input__[7][5];
  state__[7][6] = input__[7][6];
  state__[7][7] = input__[7][7];
  state__[8][0] = input__[8][0];
  state__[8][1] = input__[8][1];
  state__[8][2] = input__[8][2];
  state__[8][3] = input__[8][3];
  state__[8][4] = input__[8][4];
  state__[8][5] = input__[8][5];
  state__[8][6] = input__[8][6];
  state__[8][7] = input__[8][7];
  state__[9][0] = input__[9][0];
  state__[9][1] = input__[9][1];
  state__[9][2] = input__[9][2];
  state__[9][3] = input__[9][3];
  state__[9][4] = input__[9][4];
  state__[9][5] = input__[9][5];
  state__[9][6] = input__[9][6];
  state__[9][7] = input__[9][7];
  state__[10][0] = input__[10][0];
  state__[10][1] = input__[10][1];
  state__[10][2] = input__[10][2];
  state__[10][3] = input__[10][3];
  state__[10][4] = input__[10][4];
  state__[10][5] = input__[10][5];
  state__[10][6] = input__[10][6];
  state__[10][7] = input__[10][7];
  state__[11][0] = input__[11][0];
  state__[11][1] = input__[11][1];
  state__[11][2] = input__[11][2];
  state__[11][3] = input__[11][3];
  state__[11][4] = input__[11][4];
  state__[11][5] = input__[11][5];
  state__[11][6] = input__[11][6];
  state__[11][7] = input__[11][7];
  state__[12][0] = input__[12][0];
  state__[12][1] = input__[12][1];
  state__[12][2] = input__[12][2];
  state__[12][3] = input__[12][3];
  state__[12][4] = input__[12][4];
  state__[12][5] = input__[12][5];
  state__[12][6] = input__[12][6];
  state__[12][7] = input__[12][7];
  state__[13][0] = input__[13][0];
  state__[13][1] = input__[13][1];
  state__[13][2] = input__[13][2];
  state__[13][3] = input__[13][3];
  state__[13][4] = input__[13][4];
  state__[13][5] = input__[13][5];
  state__[13][6] = input__[13][6];
  state__[13][7] = input__[13][7];
  state__[14][0] = input__[14][0];
  state__[14][1] = input__[14][1];
  state__[14][2] = input__[14][2];
  state__[14][3] = input__[14][3];
  state__[14][4] = input__[14][4];
  state__[14][5] = input__[14][5];
  state__[14][6] = input__[14][6];
  state__[14][7] = input__[14][7];
  state__[15][0] = input__[15][0];
  state__[15][1] = input__[15][1];
  state__[15][2] = input__[15][2];
  state__[15][3] = input__[15][3];
  state__[15][4] = input__[15][4];
  state__[15][5] = input__[15][5];
  state__[15][6] = input__[15][6];
  state__[15][7] = input__[15][7];
  state__[16][0] = input__[16][0];
  state__[16][1] = input__[16][1];
  state__[16][2] = input__[16][2];
  state__[16][3] = input__[16][3];
  state__[16][4] = input__[16][4];
  state__[16][5] = input__[16][5];
  state__[16][6] = input__[16][6];
  state__[16][7] = input__[16][7];
  state__[17][0] = input__[17][0];
  state__[17][1] = input__[17][1];
  state__[17][2] = input__[17][2];
  state__[17][3] = input__[17][3];
  state__[17][4] = input__[17][4];
  state__[17][5] = input__[17][5];
  state__[17][6] = input__[17][6];
  state__[17][7] = input__[17][7];
  state__[18][0] = input__[18][0];
  state__[18][1] = input__[18][1];
  state__[18][2] = input__[18][2];
  state__[18][3] = input__[18][3];
  state__[18][4] = input__[18][4];
  state__[18][5] = input__[18][5];
  state__[18][6] = input__[18][6];
  state__[18][7] = input__[18][7];
  state__[19][0] = input__[19][0];
  state__[19][1] = input__[19][1];
  state__[19][2] = input__[19][2];
  state__[19][3] = input__[19][3];
  state__[19][4] = input__[19][4];
  state__[19][5] = input__[19][5];
  state__[19][6] = input__[19][6];
  state__[19][7] = input__[19][7];
  counter__[0] = SET_ALL_ZERO();
  counter__[1] = SET_ALL_ONE();
  counter__[2] = SET_ALL_ONE();
  counter__[3] = SET_ALL_ONE();
  counter__[4] = SET_ALL_ZERO();
  counter__[5] = SET_ALL_ONE();
  counter__[6] = SET_ALL_ZERO();
  counter__[7] = SET_ALL_ONE();
  for (int i__ = 0; i__ <= 79; i__++) {
    counterLayer__B1(state__,counter__,_tmp30_);
    sBoxLayer__B1(_tmp30_,_tmp31_);
    pLayer__B1(_tmp31_,state__);
    lfsr__B1(counter__,counter__);
  }
  output__[0][0] = state__[0][0];
  output__[0][1] = state__[0][1];
  output__[0][2] = state__[0][2];
  output__[0][3] = state__[0][3];
  output__[0][4] = state__[0][4];
  output__[0][5] = state__[0][5];
  output__[0][6] = state__[0][6];
  output__[0][7] = state__[0][7];
  output__[1][0] = state__[1][0];
  output__[1][1] = state__[1][1];
  output__[1][2] = state__[1][2];
  output__[1][3] = state__[1][3];
  output__[1][4] = state__[1][4];
  output__[1][5] = state__[1][5];
  output__[1][6] = state__[1][6];
  output__[1][7] = state__[1][7];
  output__[2][0] = state__[2][0];
  output__[2][1] = state__[2][1];
  output__[2][2] = state__[2][2];
  output__[2][3] = state__[2][3];
  output__[2][4] = state__[2][4];
  output__[2][5] = state__[2][5];
  output__[2][6] = state__[2][6];
  output__[2][7] = state__[2][7];
  output__[3][0] = state__[3][0];
  output__[3][1] = state__[3][1];
  output__[3][2] = state__[3][2];
  output__[3][3] = state__[3][3];
  output__[3][4] = state__[3][4];
  output__[3][5] = state__[3][5];
  output__[3][6] = state__[3][6];
  output__[3][7] = state__[3][7];
  output__[4][0] = state__[4][0];
  output__[4][1] = state__[4][1];
  output__[4][2] = state__[4][2];
  output__[4][3] = state__[4][3];
  output__[4][4] = state__[4][4];
  output__[4][5] = state__[4][5];
  output__[4][6] = state__[4][6];
  output__[4][7] = state__[4][7];
  output__[5][0] = state__[5][0];
  output__[5][1] = state__[5][1];
  output__[5][2] = state__[5][2];
  output__[5][3] = state__[5][3];
  output__[5][4] = state__[5][4];
  output__[5][5] = state__[5][5];
  output__[5][6] = state__[5][6];
  output__[5][7] = state__[5][7];
  output__[6][0] = state__[6][0];
  output__[6][1] = state__[6][1];
  output__[6][2] = state__[6][2];
  output__[6][3] = state__[6][3];
  output__[6][4] = state__[6][4];
  output__[6][5] = state__[6][5];
  output__[6][6] = state__[6][6];
  output__[6][7] = state__[6][7];
  output__[7][0] = state__[7][0];
  output__[7][1] = state__[7][1];
  output__[7][2] = state__[7][2];
  output__[7][3] = state__[7][3];
  output__[7][4] = state__[7][4];
  output__[7][5] = state__[7][5];
  output__[7][6] = state__[7][6];
  output__[7][7] = state__[7][7];
  output__[8][0] = state__[8][0];
  output__[8][1] = state__[8][1];
  output__[8][2] = state__[8][2];
  output__[8][3] = state__[8][3];
  output__[8][4] = state__[8][4];
  output__[8][5] = state__[8][5];
  output__[8][6] = state__[8][6];
  output__[8][7] = state__[8][7];
  output__[9][0] = state__[9][0];
  output__[9][1] = state__[9][1];
  output__[9][2] = state__[9][2];
  output__[9][3] = state__[9][3];
  output__[9][4] = state__[9][4];
  output__[9][5] = state__[9][5];
  output__[9][6] = state__[9][6];
  output__[9][7] = state__[9][7];
  output__[10][0] = state__[10][0];
  output__[10][1] = state__[10][1];
  output__[10][2] = state__[10][2];
  output__[10][3] = state__[10][3];
  output__[10][4] = state__[10][4];
  output__[10][5] = state__[10][5];
  output__[10][6] = state__[10][6];
  output__[10][7] = state__[10][7];
  output__[11][0] = state__[11][0];
  output__[11][1] = state__[11][1];
  output__[11][2] = state__[11][2];
  output__[11][3] = state__[11][3];
  output__[11][4] = state__[11][4];
  output__[11][5] = state__[11][5];
  output__[11][6] = state__[11][6];
  output__[11][7] = state__[11][7];
  output__[12][0] = state__[12][0];
  output__[12][1] = state__[12][1];
  output__[12][2] = state__[12][2];
  output__[12][3] = state__[12][3];
  output__[12][4] = state__[12][4];
  output__[12][5] = state__[12][5];
  output__[12][6] = state__[12][6];
  output__[12][7] = state__[12][7];
  output__[13][0] = state__[13][0];
  output__[13][1] = state__[13][1];
  output__[13][2] = state__[13][2];
  output__[13][3] = state__[13][3];
  output__[13][4] = state__[13][4];
  output__[13][5] = state__[13][5];
  output__[13][6] = state__[13][6];
  output__[13][7] = state__[13][7];
  output__[14][0] = state__[14][0];
  output__[14][1] = state__[14][1];
  output__[14][2] = state__[14][2];
  output__[14][3] = state__[14][3];
  output__[14][4] = state__[14][4];
  output__[14][5] = state__[14][5];
  output__[14][6] = state__[14][6];
  output__[14][7] = state__[14][7];
  output__[15][0] = state__[15][0];
  output__[15][1] = state__[15][1];
  output__[15][2] = state__[15][2];
  output__[15][3] = state__[15][3];
  output__[15][4] = state__[15][4];
  output__[15][5] = state__[15][5];
  output__[15][6] = state__[15][6];
  output__[15][7] = state__[15][7];
  output__[16][0] = state__[16][0];
  output__[16][1] = state__[16][1];
  output__[16][2] = state__[16][2];
  output__[16][3] = state__[16][3];
  output__[16][4] = state__[16][4];
  output__[16][5] = state__[16][5];
  output__[16][6] = state__[16][6];
  output__[16][7] = state__[16][7];
  output__[17][0] = state__[17][0];
  output__[17][1] = state__[17][1];
  output__[17][2] = state__[17][2];
  output__[17][3] = state__[17][3];
  output__[17][4] = state__[17][4];
  output__[17][5] = state__[17][5];
  output__[17][6] = state__[17][6];
  output__[17][7] = state__[17][7];
  output__[18][0] = state__[18][0];
  output__[18][1] = state__[18][1];
  output__[18][2] = state__[18][2];
  output__[18][3] = state__[18][3];
  output__[18][4] = state__[18][4];
  output__[18][5] = state__[18][5];
  output__[18][6] = state__[18][6];
  output__[18][7] = state__[18][7];
  output__[19][0] = state__[19][0];
  output__[19][1] = state__[19][1];
  output__[19][2] = state__[19][2];
  output__[19][3] = state__[19][3];
  output__[19][4] = state__[19][4];
  output__[19][5] = state__[19][5];
  output__[19][6] = state__[19][6];
  output__[19][7] = state__[19][7];

}

/* Additional functions */
uint32_t bench_speed() {
  /* inputs */
  DATATYPE input__[20][8] = { 0 };
  /* outputs */
  DATATYPE output__[20][8] = { 0 };
  /* fun call */
  permutation__(input__,output__);

  /* Returning the number of encrypted bytes */
  return 640;
}

/* **************************************************************** */
/*                            Usuba source                          */
/*                                                                  */
/*

 table sBox(x :  b4 :: base)
  returns y :  b4 :: base
{
  14, 13, 11, 0, 2, 1, 4, 15, 7, 10, 8, 5, 9, 12, 3, 6
}


 node sBoxLayer(state :  b8[20] :: base)
  returns stateR :  b8[20] :: base
vars

let
  forall i in [0,19] {
    (stateR[i][0 .. 3]) = sBox(state[i][0 .. 3]);
    (stateR[i][4 .. 7]) = sBox(state[i][4 .. 7])
  }
tel

 node pLayer(state :  b8[20] :: base)
  returns stateR :  b8[20] :: base
vars
  x :  b1[160] :: base,
  PermutedBitNo :  nat :: base,
  y :  nat :: base
let
  forall i in [0,18] {
    forall j in [0,7] {
      (x[((i * 8) + j)]) = state[i][(7 - j)];
      (stateR[(((((8 * i) + j) * 40) % 159) / 8)][(7 - (((((8 * i) + j) * 40) % 159) - (8 * (((((8 * i) + j) * 40) % 159) / 8))))]) = x[((i * 8) + j)]
    }
  };
  forall j in [0,6] {
    (x[((19 * 8) + j)]) = state[19][(7 - j)];
    (stateR[(((((8 * 19) + j) * 40) % 159) / 8)][(7 - (((((8 * 19) + j) * 40) % 159) - (8 * (((((8 * 19) + j) * 40) % 159) / 8))))]) = x[((19 * 8) + j)]
  };
  (stateR[19][0]) = state[19][0]
tel

 node counterLayer(state :  b8[20] :: base,counter :  b8 :: base)
  returns stateR :  b8[20] :: base
vars

let
  (stateR[1 .. 18]) = state[1 .. 18];
  (stateR[0]) = (state[0] ^ counter);
  (stateR[19]) = (state[19] ^ counter[7 .. 0])
tel

 node lfsr(counter :  b8 :: base)
  returns counterR :  b8 :: base
vars

let
  (counterR) = (((counter << 1) | (((64 & counter) >> 6) ^ ((32 & counter) >> 5))) & 127)
tel

 node permutation(input :  b8[20] :: base)
  returns output :  b8[20] :: base
vars
  state :  b8[81][20] :: base,
  counter :  b8[81] :: base
let
  (state[0]) = input;
  (counter[0]) = 117;
  forall i in [0,79] {
    (state[(i + 1)]) = pLayer(sBoxLayer(counterLayer(state[i],counter[i])));
    (counter[(i + 1)]) = lfsr(counter[i])
  };
  (output) = state[80]
tel

*/
 