/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'BMS_PIL_Wrapper/Plant/Solver Configuration'.
 */

#include "ne_ds.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_sys_struct.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_tdxy_p.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_externals.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T BMS_PIL_Wrapper_6c5e8dbc_49_ds_tdxy_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  static int32_T _cg_const_1[206] = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2,
    2, 2, 2, 3, 4, 4, 4, 4, 4, 4, 4, 4, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
    6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 8, 8, 9, 9, 9, 9, 9, 9, 9, 9,
    10, 10, 10, 10, 10, 10, 10, 10, 11, 11, 11, 11, 11, 11, 11, 11, 12, 12, 12,
    12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 15, 17, 19, 21, 23, 25, 27,
    29, 31, 33, 35, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
    37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
    37, 37, 37, 37, 37, 37, 38, 38, 38, 38, 38, 38, 39, 39, 39, 39, 39, 40, 40,
    40, 40, 40, 41, 41, 41, 41, 41, 42, 42, 42, 42, 42, 43, 43, 43, 43, 43, 44,
    44, 44, 44, 44, 45, 45, 45, 45, 45, 46, 46, 46, 46, 46, 47, 47, 47, 47, 47,
    48, 48, 48, 48, 48, 49, 49 };

  static int32_T _cg_const_2[49] = { 36, 27, 28, 25, 26, 35, 29, 30, 31, 32, 33,
    34, 3, 12, 37, 12, 37, 1, 11, 1, 2, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9,
    10, 10, 11, 24, 15, 13, 14, 16, 17, 18, 19, 20, 21, 22, 23 };

  int32_T i;
  (void)t1;
  (void)LC;
  out->mTDXY_P.mNumCol = 205ULL;
  out->mTDXY_P.mNumRow = 38ULL;
  for (i = 0; i < 206; i++) {
    out->mTDXY_P.mJc[i] = _cg_const_1[i];
  }

  out->mTDXY_P.mIr[0] = _cg_const_2[0];
  out->mTDXY_P.mIr[1] = _cg_const_2[1];
  out->mTDXY_P.mIr[2] = _cg_const_2[2];
  out->mTDXY_P.mIr[3] = _cg_const_2[3];
  out->mTDXY_P.mIr[4] = _cg_const_2[4];
  out->mTDXY_P.mIr[5] = _cg_const_2[5];
  out->mTDXY_P.mIr[6] = _cg_const_2[6];
  out->mTDXY_P.mIr[7] = _cg_const_2[7];
  out->mTDXY_P.mIr[8] = _cg_const_2[8];
  out->mTDXY_P.mIr[9] = _cg_const_2[9];
  out->mTDXY_P.mIr[10] = _cg_const_2[10];
  out->mTDXY_P.mIr[11] = _cg_const_2[11];
  out->mTDXY_P.mIr[12] = _cg_const_2[12];
  out->mTDXY_P.mIr[13] = _cg_const_2[13];
  out->mTDXY_P.mIr[14] = _cg_const_2[14];
  out->mTDXY_P.mIr[15] = _cg_const_2[15];
  out->mTDXY_P.mIr[16] = _cg_const_2[16];
  out->mTDXY_P.mIr[17] = _cg_const_2[17];
  out->mTDXY_P.mIr[18] = _cg_const_2[18];
  out->mTDXY_P.mIr[19] = _cg_const_2[19];
  out->mTDXY_P.mIr[20] = _cg_const_2[20];
  out->mTDXY_P.mIr[21] = _cg_const_2[21];
  out->mTDXY_P.mIr[22] = _cg_const_2[22];
  out->mTDXY_P.mIr[23] = _cg_const_2[23];
  out->mTDXY_P.mIr[24] = _cg_const_2[24];
  out->mTDXY_P.mIr[25] = _cg_const_2[25];
  out->mTDXY_P.mIr[26] = _cg_const_2[26];
  out->mTDXY_P.mIr[27] = _cg_const_2[27];
  out->mTDXY_P.mIr[28] = _cg_const_2[28];
  out->mTDXY_P.mIr[29] = _cg_const_2[29];
  out->mTDXY_P.mIr[30] = _cg_const_2[30];
  out->mTDXY_P.mIr[31] = _cg_const_2[31];
  out->mTDXY_P.mIr[32] = _cg_const_2[32];
  out->mTDXY_P.mIr[33] = _cg_const_2[33];
  out->mTDXY_P.mIr[34] = _cg_const_2[34];
  out->mTDXY_P.mIr[35] = _cg_const_2[35];
  out->mTDXY_P.mIr[36] = _cg_const_2[36];
  out->mTDXY_P.mIr[37] = _cg_const_2[37];
  out->mTDXY_P.mIr[38] = _cg_const_2[38];
  out->mTDXY_P.mIr[39] = _cg_const_2[39];
  out->mTDXY_P.mIr[40] = _cg_const_2[40];
  out->mTDXY_P.mIr[41] = _cg_const_2[41];
  out->mTDXY_P.mIr[42] = _cg_const_2[42];
  out->mTDXY_P.mIr[43] = _cg_const_2[43];
  out->mTDXY_P.mIr[44] = _cg_const_2[44];
  out->mTDXY_P.mIr[45] = _cg_const_2[45];
  out->mTDXY_P.mIr[46] = _cg_const_2[46];
  out->mTDXY_P.mIr[47] = _cg_const_2[47];
  out->mTDXY_P.mIr[48] = _cg_const_2[48];
  (void)LC;
  (void)out;
  return 0;
}
