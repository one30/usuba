/* This code was generated by Usuba.
   See https://github.com/DadaIsCrazy/usuba.
   From the file "nist/pyjamask/usuba/ua/pyjamask_bitslice.ua" (included below). */

#include <stdint.h>

/* Do NOT change the order of those define/include */

#ifndef BITS_PER_REG
#define BITS_PER_REG 32
#endif
/* including the architecture specific .h */
#include "STD.h"

/* auxiliary functions */
void SubBytes__B1 (/*inputs*/ DATATYPE s0,DATATYPE s1,DATATYPE s2,DATATYPE s3, /*outputs*/ DATATYPE* ret0__,DATATYPE* ret1__,DATATYPE* ret2__,DATATYPE* ret3__) {

  // Variables declaration
  DATATYPE _shadow_s01_;
  DATATYPE _shadow_s03_;
  DATATYPE _shadow_s14_;
  DATATYPE _shadow_s17_;
  DATATYPE _shadow_s25_;
  DATATYPE _shadow_s26_;
  DATATYPE _shadow_s32_;
  DATATYPE _shadow_s38_;
  DATATYPE _tmp1_;
  DATATYPE _tmp2_;
  DATATYPE _tmp3_;
  DATATYPE _tmp4_;

  // Instructions (body)
  _shadow_s01_ = XOR(s0,s3);
  _tmp1_ = AND(_shadow_s01_,s1);
  _shadow_s32_ = XOR(s3,_tmp1_);
  _tmp2_ = AND(s1,s2);
  _shadow_s03_ = XOR(_shadow_s01_,_tmp2_);
  _tmp3_ = AND(s2,_shadow_s32_);
  _shadow_s14_ = XOR(s1,_tmp3_);
  _tmp4_ = AND(_shadow_s03_,_shadow_s32_);
  _shadow_s25_ = XOR(s2,_tmp4_);
  _shadow_s26_ = XOR(_shadow_s25_,_shadow_s14_);
  _shadow_s17_ = XOR(_shadow_s14_,_shadow_s03_);
  _shadow_s38_ = NOT(_shadow_s32_);
  *ret0__ = _shadow_s03_;
  *ret1__ = _shadow_s17_;
  *ret2__ = _shadow_s38_;
  *ret3__ = _shadow_s26_;

}

void AddRoundKey__B1 (/*inputs*/ DATATYPE i__[128],DATATYPE k__[128], /*outputs*/ DATATYPE o__[128]) {

  // Variables declaration
  ;

  // Instructions (body)
  o__[0] = XOR(i__[0],k__[0]);
  o__[1] = XOR(i__[1],k__[1]);
  o__[2] = XOR(i__[2],k__[2]);
  o__[3] = XOR(i__[3],k__[3]);
  o__[4] = XOR(i__[4],k__[4]);
  o__[5] = XOR(i__[5],k__[5]);
  o__[6] = XOR(i__[6],k__[6]);
  o__[7] = XOR(i__[7],k__[7]);
  o__[8] = XOR(i__[8],k__[8]);
  o__[9] = XOR(i__[9],k__[9]);
  o__[10] = XOR(i__[10],k__[10]);
  o__[11] = XOR(i__[11],k__[11]);
  o__[12] = XOR(i__[12],k__[12]);
  o__[13] = XOR(i__[13],k__[13]);
  o__[14] = XOR(i__[14],k__[14]);
  o__[15] = XOR(i__[15],k__[15]);
  o__[16] = XOR(i__[16],k__[16]);
  o__[17] = XOR(i__[17],k__[17]);
  o__[18] = XOR(i__[18],k__[18]);
  o__[19] = XOR(i__[19],k__[19]);
  o__[20] = XOR(i__[20],k__[20]);
  o__[21] = XOR(i__[21],k__[21]);
  o__[22] = XOR(i__[22],k__[22]);
  o__[23] = XOR(i__[23],k__[23]);
  o__[24] = XOR(i__[24],k__[24]);
  o__[25] = XOR(i__[25],k__[25]);
  o__[26] = XOR(i__[26],k__[26]);
  o__[27] = XOR(i__[27],k__[27]);
  o__[28] = XOR(i__[28],k__[28]);
  o__[29] = XOR(i__[29],k__[29]);
  o__[30] = XOR(i__[30],k__[30]);
  o__[31] = XOR(i__[31],k__[31]);
  o__[32] = XOR(i__[32],k__[32]);
  o__[33] = XOR(i__[33],k__[33]);
  o__[34] = XOR(i__[34],k__[34]);
  o__[35] = XOR(i__[35],k__[35]);
  o__[36] = XOR(i__[36],k__[36]);
  o__[37] = XOR(i__[37],k__[37]);
  o__[38] = XOR(i__[38],k__[38]);
  o__[39] = XOR(i__[39],k__[39]);
  o__[40] = XOR(i__[40],k__[40]);
  o__[41] = XOR(i__[41],k__[41]);
  o__[42] = XOR(i__[42],k__[42]);
  o__[43] = XOR(i__[43],k__[43]);
  o__[44] = XOR(i__[44],k__[44]);
  o__[45] = XOR(i__[45],k__[45]);
  o__[46] = XOR(i__[46],k__[46]);
  o__[47] = XOR(i__[47],k__[47]);
  o__[48] = XOR(i__[48],k__[48]);
  o__[49] = XOR(i__[49],k__[49]);
  o__[50] = XOR(i__[50],k__[50]);
  o__[51] = XOR(i__[51],k__[51]);
  o__[52] = XOR(i__[52],k__[52]);
  o__[53] = XOR(i__[53],k__[53]);
  o__[54] = XOR(i__[54],k__[54]);
  o__[55] = XOR(i__[55],k__[55]);
  o__[56] = XOR(i__[56],k__[56]);
  o__[57] = XOR(i__[57],k__[57]);
  o__[58] = XOR(i__[58],k__[58]);
  o__[59] = XOR(i__[59],k__[59]);
  o__[60] = XOR(i__[60],k__[60]);
  o__[61] = XOR(i__[61],k__[61]);
  o__[62] = XOR(i__[62],k__[62]);
  o__[63] = XOR(i__[63],k__[63]);
  o__[64] = XOR(i__[64],k__[64]);
  o__[65] = XOR(i__[65],k__[65]);
  o__[66] = XOR(i__[66],k__[66]);
  o__[67] = XOR(i__[67],k__[67]);
  o__[68] = XOR(i__[68],k__[68]);
  o__[69] = XOR(i__[69],k__[69]);
  o__[70] = XOR(i__[70],k__[70]);
  o__[71] = XOR(i__[71],k__[71]);
  o__[72] = XOR(i__[72],k__[72]);
  o__[73] = XOR(i__[73],k__[73]);
  o__[74] = XOR(i__[74],k__[74]);
  o__[75] = XOR(i__[75],k__[75]);
  o__[76] = XOR(i__[76],k__[76]);
  o__[77] = XOR(i__[77],k__[77]);
  o__[78] = XOR(i__[78],k__[78]);
  o__[79] = XOR(i__[79],k__[79]);
  o__[80] = XOR(i__[80],k__[80]);
  o__[81] = XOR(i__[81],k__[81]);
  o__[82] = XOR(i__[82],k__[82]);
  o__[83] = XOR(i__[83],k__[83]);
  o__[84] = XOR(i__[84],k__[84]);
  o__[85] = XOR(i__[85],k__[85]);
  o__[86] = XOR(i__[86],k__[86]);
  o__[87] = XOR(i__[87],k__[87]);
  o__[88] = XOR(i__[88],k__[88]);
  o__[89] = XOR(i__[89],k__[89]);
  o__[90] = XOR(i__[90],k__[90]);
  o__[91] = XOR(i__[91],k__[91]);
  o__[92] = XOR(i__[92],k__[92]);
  o__[93] = XOR(i__[93],k__[93]);
  o__[94] = XOR(i__[94],k__[94]);
  o__[95] = XOR(i__[95],k__[95]);
  o__[96] = XOR(i__[96],k__[96]);
  o__[97] = XOR(i__[97],k__[97]);
  o__[98] = XOR(i__[98],k__[98]);
  o__[99] = XOR(i__[99],k__[99]);
  o__[100] = XOR(i__[100],k__[100]);
  o__[101] = XOR(i__[101],k__[101]);
  o__[102] = XOR(i__[102],k__[102]);
  o__[103] = XOR(i__[103],k__[103]);
  o__[104] = XOR(i__[104],k__[104]);
  o__[105] = XOR(i__[105],k__[105]);
  o__[106] = XOR(i__[106],k__[106]);
  o__[107] = XOR(i__[107],k__[107]);
  o__[108] = XOR(i__[108],k__[108]);
  o__[109] = XOR(i__[109],k__[109]);
  o__[110] = XOR(i__[110],k__[110]);
  o__[111] = XOR(i__[111],k__[111]);
  o__[112] = XOR(i__[112],k__[112]);
  o__[113] = XOR(i__[113],k__[113]);
  o__[114] = XOR(i__[114],k__[114]);
  o__[115] = XOR(i__[115],k__[115]);
  o__[116] = XOR(i__[116],k__[116]);
  o__[117] = XOR(i__[117],k__[117]);
  o__[118] = XOR(i__[118],k__[118]);
  o__[119] = XOR(i__[119],k__[119]);
  o__[120] = XOR(i__[120],k__[120]);
  o__[121] = XOR(i__[121],k__[121]);
  o__[122] = XOR(i__[122],k__[122]);
  o__[123] = XOR(i__[123],k__[123]);
  o__[124] = XOR(i__[124],k__[124]);
  o__[125] = XOR(i__[125],k__[125]);
  o__[126] = XOR(i__[126],k__[126]);
  o__[127] = XOR(i__[127],k__[127]);

}

void SubBytesAll__B1 (/*inputs*/ DATATYPE input__[128], /*outputs*/ DATATYPE output__[4][32]) {

  // Variables declaration
  ;

  // Instructions (body)
  for (int i__ = 0; i__ <= 31; i__++) {
    SubBytes__B1(input__[(0 + i__)],input__[(32 + i__)],input__[(64 + i__)],input__[(96 + i__)],&output__[0][i__],&output__[1][i__],&output__[2][i__],&output__[3][i__]);
  }

}

void col_mult__B1 (/*inputs*/ DATATYPE a__[32],DATATYPE b__[32], /*outputs*/ DATATYPE* r__) {

  // Variables declaration
  DATATYPE _tmp5_;
  DATATYPE acc__;

  // Instructions (body)
  acc__ = AND(a__[0],b__[0]);
  for (int i__ = 1; i__ <= 31; i__++) {
    _tmp5_ = AND(a__[i__],b__[i__]);
    acc__ = XOR(acc__,_tmp5_);
  }
  *r__ = acc__;

}

void MixRows__B1 (/*inputs*/ DATATYPE input__[4][32], /*outputs*/ DATATYPE output__[128]) {

  // Variables declaration
  DATATYPE M__[4][33][32];

  // Instructions (body)
  M__[0][0][0] = SET_ALL_ONE();
  M__[0][0][1] = SET_ALL_ZERO();
  M__[0][0][2] = SET_ALL_ONE();
  M__[0][0][3] = SET_ALL_ZERO();
  M__[0][0][4] = SET_ALL_ZERO();
  M__[0][0][5] = SET_ALL_ZERO();
  M__[0][0][6] = SET_ALL_ONE();
  M__[0][0][7] = SET_ALL_ONE();
  M__[0][0][8] = SET_ALL_ONE();
  M__[0][0][9] = SET_ALL_ZERO();
  M__[0][0][10] = SET_ALL_ZERO();
  M__[0][0][11] = SET_ALL_ZERO();
  M__[0][0][12] = SET_ALL_ZERO();
  M__[0][0][13] = SET_ALL_ONE();
  M__[0][0][14] = SET_ALL_ONE();
  M__[0][0][15] = SET_ALL_ZERO();
  M__[0][0][16] = SET_ALL_ZERO();
  M__[0][0][17] = SET_ALL_ZERO();
  M__[0][0][18] = SET_ALL_ZERO();
  M__[0][0][19] = SET_ALL_ONE();
  M__[0][0][20] = SET_ALL_ZERO();
  M__[0][0][21] = SET_ALL_ZERO();
  M__[0][0][22] = SET_ALL_ZERO();
  M__[0][0][23] = SET_ALL_ZERO();
  M__[0][0][24] = SET_ALL_ONE();
  M__[0][0][25] = SET_ALL_ZERO();
  M__[0][0][26] = SET_ALL_ZERO();
  M__[0][0][27] = SET_ALL_ZERO();
  M__[0][0][28] = SET_ALL_ZERO();
  M__[0][0][29] = SET_ALL_ONE();
  M__[0][0][30] = SET_ALL_ZERO();
  M__[0][0][31] = SET_ALL_ONE();
  M__[1][0][0] = SET_ALL_ZERO();
  M__[1][0][1] = SET_ALL_ONE();
  M__[1][0][2] = SET_ALL_ONE();
  M__[1][0][3] = SET_ALL_ZERO();
  M__[1][0][4] = SET_ALL_ZERO();
  M__[1][0][5] = SET_ALL_ZERO();
  M__[1][0][6] = SET_ALL_ONE();
  M__[1][0][7] = SET_ALL_ONE();
  M__[1][0][8] = SET_ALL_ZERO();
  M__[1][0][9] = SET_ALL_ONE();
  M__[1][0][10] = SET_ALL_ZERO();
  M__[1][0][11] = SET_ALL_ZERO();
  M__[1][0][12] = SET_ALL_ZERO();
  M__[1][0][13] = SET_ALL_ZERO();
  M__[1][0][14] = SET_ALL_ZERO();
  M__[1][0][15] = SET_ALL_ONE();
  M__[1][0][16] = SET_ALL_ZERO();
  M__[1][0][17] = SET_ALL_ONE();
  M__[1][0][18] = SET_ALL_ONE();
  M__[1][0][19] = SET_ALL_ONE();
  M__[1][0][20] = SET_ALL_ZERO();
  M__[1][0][21] = SET_ALL_ZERO();
  M__[1][0][22] = SET_ALL_ZERO();
  M__[1][0][23] = SET_ALL_ZERO();
  M__[1][0][24] = SET_ALL_ZERO();
  M__[1][0][25] = SET_ALL_ZERO();
  M__[1][0][26] = SET_ALL_ONE();
  M__[1][0][27] = SET_ALL_ZERO();
  M__[1][0][28] = SET_ALL_ZERO();
  M__[1][0][29] = SET_ALL_ZERO();
  M__[1][0][30] = SET_ALL_ZERO();
  M__[1][0][31] = SET_ALL_ONE();
  M__[2][0][0] = SET_ALL_ZERO();
  M__[2][0][1] = SET_ALL_ONE();
  M__[2][0][2] = SET_ALL_ONE();
  M__[2][0][3] = SET_ALL_ZERO();
  M__[2][0][4] = SET_ALL_ONE();
  M__[2][0][5] = SET_ALL_ZERO();
  M__[2][0][6] = SET_ALL_ZERO();
  M__[2][0][7] = SET_ALL_ONE();
  M__[2][0][8] = SET_ALL_ZERO();
  M__[2][0][9] = SET_ALL_ZERO();
  M__[2][0][10] = SET_ALL_ONE();
  M__[2][0][11] = SET_ALL_ZERO();
  M__[2][0][12] = SET_ALL_ONE();
  M__[2][0][13] = SET_ALL_ONE();
  M__[2][0][14] = SET_ALL_ZERO();
  M__[2][0][15] = SET_ALL_ZERO();
  M__[2][0][16] = SET_ALL_ONE();
  M__[2][0][17] = SET_ALL_ONE();
  M__[2][0][18] = SET_ALL_ONE();
  M__[2][0][19] = SET_ALL_ONE();
  M__[2][0][20] = SET_ALL_ZERO();
  M__[2][0][21] = SET_ALL_ZERO();
  M__[2][0][22] = SET_ALL_ONE();
  M__[2][0][23] = SET_ALL_ZERO();
  M__[2][0][24] = SET_ALL_ONE();
  M__[2][0][25] = SET_ALL_ZERO();
  M__[2][0][26] = SET_ALL_ZERO();
  M__[2][0][27] = SET_ALL_ZERO();
  M__[2][0][28] = SET_ALL_ZERO();
  M__[2][0][29] = SET_ALL_ZERO();
  M__[2][0][30] = SET_ALL_ZERO();
  M__[2][0][31] = SET_ALL_ZERO();
  M__[3][0][0] = SET_ALL_ZERO();
  M__[3][0][1] = SET_ALL_ONE();
  M__[3][0][2] = SET_ALL_ZERO();
  M__[3][0][3] = SET_ALL_ZERO();
  M__[3][0][4] = SET_ALL_ONE();
  M__[3][0][5] = SET_ALL_ZERO();
  M__[3][0][6] = SET_ALL_ZERO();
  M__[3][0][7] = SET_ALL_ZERO();
  M__[3][0][8] = SET_ALL_ONE();
  M__[3][0][9] = SET_ALL_ZERO();
  M__[3][0][10] = SET_ALL_ONE();
  M__[3][0][11] = SET_ALL_ZERO();
  M__[3][0][12] = SET_ALL_ZERO();
  M__[3][0][13] = SET_ALL_ONE();
  M__[3][0][14] = SET_ALL_ZERO();
  M__[3][0][15] = SET_ALL_ONE();
  M__[3][0][16] = SET_ALL_ZERO();
  M__[3][0][17] = SET_ALL_ONE();
  M__[3][0][18] = SET_ALL_ZERO();
  M__[3][0][19] = SET_ALL_ZERO();
  M__[3][0][20] = SET_ALL_ONE();
  M__[3][0][21] = SET_ALL_ZERO();
  M__[3][0][22] = SET_ALL_ZERO();
  M__[3][0][23] = SET_ALL_ZERO();
  M__[3][0][24] = SET_ALL_ZERO();
  M__[3][0][25] = SET_ALL_ZERO();
  M__[3][0][26] = SET_ALL_ZERO();
  M__[3][0][27] = SET_ALL_ONE();
  M__[3][0][28] = SET_ALL_ZERO();
  M__[3][0][29] = SET_ALL_ZERO();
  M__[3][0][30] = SET_ALL_ONE();
  M__[3][0][31] = SET_ALL_ONE();
  for (int col__ = 0; col__ <= 3; col__++) {
    for (int idx__ = 0; idx__ <= 31; idx__++) {
      col_mult__B1(input__[col__],M__[col__][idx__],&output__[((col__ * 32) + idx__)]);
      M__[col__][(idx__ + 1)][0] = M__[col__][idx__][31];
      M__[col__][(idx__ + 1)][1] = M__[col__][idx__][0];
      M__[col__][(idx__ + 1)][2] = M__[col__][idx__][1];
      M__[col__][(idx__ + 1)][3] = M__[col__][idx__][2];
      M__[col__][(idx__ + 1)][4] = M__[col__][idx__][3];
      M__[col__][(idx__ + 1)][5] = M__[col__][idx__][4];
      M__[col__][(idx__ + 1)][6] = M__[col__][idx__][5];
      M__[col__][(idx__ + 1)][7] = M__[col__][idx__][6];
      M__[col__][(idx__ + 1)][8] = M__[col__][idx__][7];
      M__[col__][(idx__ + 1)][9] = M__[col__][idx__][8];
      M__[col__][(idx__ + 1)][10] = M__[col__][idx__][9];
      M__[col__][(idx__ + 1)][11] = M__[col__][idx__][10];
      M__[col__][(idx__ + 1)][12] = M__[col__][idx__][11];
      M__[col__][(idx__ + 1)][13] = M__[col__][idx__][12];
      M__[col__][(idx__ + 1)][14] = M__[col__][idx__][13];
      M__[col__][(idx__ + 1)][15] = M__[col__][idx__][14];
      M__[col__][(idx__ + 1)][16] = M__[col__][idx__][15];
      M__[col__][(idx__ + 1)][17] = M__[col__][idx__][16];
      M__[col__][(idx__ + 1)][18] = M__[col__][idx__][17];
      M__[col__][(idx__ + 1)][19] = M__[col__][idx__][18];
      M__[col__][(idx__ + 1)][20] = M__[col__][idx__][19];
      M__[col__][(idx__ + 1)][21] = M__[col__][idx__][20];
      M__[col__][(idx__ + 1)][22] = M__[col__][idx__][21];
      M__[col__][(idx__ + 1)][23] = M__[col__][idx__][22];
      M__[col__][(idx__ + 1)][24] = M__[col__][idx__][23];
      M__[col__][(idx__ + 1)][25] = M__[col__][idx__][24];
      M__[col__][(idx__ + 1)][26] = M__[col__][idx__][25];
      M__[col__][(idx__ + 1)][27] = M__[col__][idx__][26];
      M__[col__][(idx__ + 1)][28] = M__[col__][idx__][27];
      M__[col__][(idx__ + 1)][29] = M__[col__][idx__][28];
      M__[col__][(idx__ + 1)][30] = M__[col__][idx__][29];
      M__[col__][(idx__ + 1)][31] = M__[col__][idx__][30];
    }
  }

}

/* main function */
void pyjamask__ (/*inputs*/ DATATYPE plaintext__[4][32],DATATYPE key__[15][128], /*outputs*/ DATATYPE ciphertext__[128]) {

  // Variables declaration
  DATATYPE _tmp134_[128];
  DATATYPE _tmp135_[4][32];
  DATATYPE round__[128];

  // Instructions (body)
  round__[0] = plaintext__[0][0];
  round__[1] = plaintext__[0][1];
  round__[2] = plaintext__[0][2];
  round__[3] = plaintext__[0][3];
  round__[4] = plaintext__[0][4];
  round__[5] = plaintext__[0][5];
  round__[6] = plaintext__[0][6];
  round__[7] = plaintext__[0][7];
  round__[8] = plaintext__[0][8];
  round__[9] = plaintext__[0][9];
  round__[10] = plaintext__[0][10];
  round__[11] = plaintext__[0][11];
  round__[12] = plaintext__[0][12];
  round__[13] = plaintext__[0][13];
  round__[14] = plaintext__[0][14];
  round__[15] = plaintext__[0][15];
  round__[16] = plaintext__[0][16];
  round__[17] = plaintext__[0][17];
  round__[18] = plaintext__[0][18];
  round__[19] = plaintext__[0][19];
  round__[20] = plaintext__[0][20];
  round__[21] = plaintext__[0][21];
  round__[22] = plaintext__[0][22];
  round__[23] = plaintext__[0][23];
  round__[24] = plaintext__[0][24];
  round__[25] = plaintext__[0][25];
  round__[26] = plaintext__[0][26];
  round__[27] = plaintext__[0][27];
  round__[28] = plaintext__[0][28];
  round__[29] = plaintext__[0][29];
  round__[30] = plaintext__[0][30];
  round__[31] = plaintext__[0][31];
  round__[32] = plaintext__[1][0];
  round__[33] = plaintext__[1][1];
  round__[34] = plaintext__[1][2];
  round__[35] = plaintext__[1][3];
  round__[36] = plaintext__[1][4];
  round__[37] = plaintext__[1][5];
  round__[38] = plaintext__[1][6];
  round__[39] = plaintext__[1][7];
  round__[40] = plaintext__[1][8];
  round__[41] = plaintext__[1][9];
  round__[42] = plaintext__[1][10];
  round__[43] = plaintext__[1][11];
  round__[44] = plaintext__[1][12];
  round__[45] = plaintext__[1][13];
  round__[46] = plaintext__[1][14];
  round__[47] = plaintext__[1][15];
  round__[48] = plaintext__[1][16];
  round__[49] = plaintext__[1][17];
  round__[50] = plaintext__[1][18];
  round__[51] = plaintext__[1][19];
  round__[52] = plaintext__[1][20];
  round__[53] = plaintext__[1][21];
  round__[54] = plaintext__[1][22];
  round__[55] = plaintext__[1][23];
  round__[56] = plaintext__[1][24];
  round__[57] = plaintext__[1][25];
  round__[58] = plaintext__[1][26];
  round__[59] = plaintext__[1][27];
  round__[60] = plaintext__[1][28];
  round__[61] = plaintext__[1][29];
  round__[62] = plaintext__[1][30];
  round__[63] = plaintext__[1][31];
  round__[64] = plaintext__[2][0];
  round__[65] = plaintext__[2][1];
  round__[66] = plaintext__[2][2];
  round__[67] = plaintext__[2][3];
  round__[68] = plaintext__[2][4];
  round__[69] = plaintext__[2][5];
  round__[70] = plaintext__[2][6];
  round__[71] = plaintext__[2][7];
  round__[72] = plaintext__[2][8];
  round__[73] = plaintext__[2][9];
  round__[74] = plaintext__[2][10];
  round__[75] = plaintext__[2][11];
  round__[76] = plaintext__[2][12];
  round__[77] = plaintext__[2][13];
  round__[78] = plaintext__[2][14];
  round__[79] = plaintext__[2][15];
  round__[80] = plaintext__[2][16];
  round__[81] = plaintext__[2][17];
  round__[82] = plaintext__[2][18];
  round__[83] = plaintext__[2][19];
  round__[84] = plaintext__[2][20];
  round__[85] = plaintext__[2][21];
  round__[86] = plaintext__[2][22];
  round__[87] = plaintext__[2][23];
  round__[88] = plaintext__[2][24];
  round__[89] = plaintext__[2][25];
  round__[90] = plaintext__[2][26];
  round__[91] = plaintext__[2][27];
  round__[92] = plaintext__[2][28];
  round__[93] = plaintext__[2][29];
  round__[94] = plaintext__[2][30];
  round__[95] = plaintext__[2][31];
  round__[96] = plaintext__[3][0];
  round__[97] = plaintext__[3][1];
  round__[98] = plaintext__[3][2];
  round__[99] = plaintext__[3][3];
  round__[100] = plaintext__[3][4];
  round__[101] = plaintext__[3][5];
  round__[102] = plaintext__[3][6];
  round__[103] = plaintext__[3][7];
  round__[104] = plaintext__[3][8];
  round__[105] = plaintext__[3][9];
  round__[106] = plaintext__[3][10];
  round__[107] = plaintext__[3][11];
  round__[108] = plaintext__[3][12];
  round__[109] = plaintext__[3][13];
  round__[110] = plaintext__[3][14];
  round__[111] = plaintext__[3][15];
  round__[112] = plaintext__[3][16];
  round__[113] = plaintext__[3][17];
  round__[114] = plaintext__[3][18];
  round__[115] = plaintext__[3][19];
  round__[116] = plaintext__[3][20];
  round__[117] = plaintext__[3][21];
  round__[118] = plaintext__[3][22];
  round__[119] = plaintext__[3][23];
  round__[120] = plaintext__[3][24];
  round__[121] = plaintext__[3][25];
  round__[122] = plaintext__[3][26];
  round__[123] = plaintext__[3][27];
  round__[124] = plaintext__[3][28];
  round__[125] = plaintext__[3][29];
  round__[126] = plaintext__[3][30];
  round__[127] = plaintext__[3][31];
  for (int i__ = 0; i__ <= 13; i__++) {
    AddRoundKey__B1(round__,key__[i__],_tmp134_);
    SubBytesAll__B1(_tmp134_,_tmp135_);
    MixRows__B1(_tmp135_,round__);
  }
  AddRoundKey__B1(round__,key__[14],ciphertext__);

}

/* Additional functions */
uint32_t bench_speed() {
  /* inputs */
  DATATYPE plaintext__[4][32] = { 0 };
  DATATYPE key__[15][128] = { 0 };
  /* outputs */
  DATATYPE ciphertext__[128] = { 0 };
  /* fun call */
  pyjamask__(plaintext__, key__,ciphertext__);

  /* Returning the number of encrypted bytes */
  return 512;
}

/* **************************************************************** */
/*                            Usuba source                          */
/*                                                                  */
/*

 _no_inline table SubBytes(i :  b4 :: base)
  returns o :  b4 :: base
{
  2, 13, 3, 9, 7, 11, 10, 6, 14, 0, 15, 4, 8, 5, 1, 12
}


_no_inline node AddRoundKey(i :  b128 :: base,k :  b128 :: base)
  returns o :  b128 :: base
vars

let
  (o) = (i ^ k)
tel

_no_inline node SubBytesAll(input :  b32[4] :: base)
  returns output :  b32[4] :: base
vars

let
  forall i in [0,31] {
    (output[0 .. 3][i]) = SubBytes(input[0 .. 3][i])
  }
tel

 node col_mult(a :  b32 :: base,b : const b32 :: base)
  returns r :  b1 :: base
vars
  acc :  b32 :: base
let
  (acc[0]) = (a[0] & b[0]);
  forall i in [1,31] {
    (acc[i]) = (acc[(i - 1)] ^ (a[i] & b[i]))
  };
  (r) = acc[31]
tel

_no_inline node MixRows(input :  b32[4] :: base)
  returns output :  b32[4] :: base
vars
  M : const b32[4][33] :: base
let
  (M[0][0]) = (1,0,1,0,0,0,1,1,1,0,0,0,0,1,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,1);
  (M[1][0]) = (0,1,1,0,0,0,1,1,0,1,0,0,0,0,0,1,0,1,1,1,0,0,0,0,0,0,1,0,0,0,0,1);
  (M[2][0]) = (0,1,1,0,1,0,0,1,0,0,1,0,1,1,0,0,1,1,1,1,0,0,1,0,1,0,0,0,0,0,0,0);
  (M[3][0]) = (0,1,0,0,1,0,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,0,0,0,0,0,1,0,0,1,1);
  forall col in [0,3] {
    forall idx in [0,31] {
      (output[col][idx]) = col_mult(input[col],M[col][idx]);
      (M[col][(idx + 1)]) = (M[col][idx] >>> 1)
    }
  }
tel

 node pyjamask(plaintext :  b32[4] :: base,key :  b32[15][4] :: base)
  returns ciphertext :  b32[4] :: base
vars
  round :  b32[15][4] :: base
let
  (round[0]) = plaintext;
  forall i in [0,13] {
    (round[(i + 1)]) = MixRows(SubBytesAll(AddRoundKey(round[i],key[i])))
  };
  (ciphertext) = AddRoundKey(round[14],key[14])
tel

*/
 