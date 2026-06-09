/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'BMS_PIL_Wrapper/Plant/Solver Configuration'.
 */

#include "ne_ds.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_sys_struct.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_dxicr_p.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_externals.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T BMS_PIL_Wrapper_6c5e8dbc_49_ds_dxicr_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  static int32_T _cg_const_1[206] = { 0, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 4, 4, 4,
    4, 4, 4, 5, 6, 6, 7, 7, 7, 7, 7, 7, 8, 9, 9, 10, 10, 10, 10, 10, 10, 10, 11,
    11, 11, 11, 11, 11, 12, 12, 13, 13, 13, 13, 13, 13, 14, 14, 15, 15, 15, 15,
    15, 15, 16, 16, 17, 17, 17, 17, 17, 17, 18, 18, 19, 19, 19, 19, 19, 19, 20,
    20, 21, 21, 21, 21, 21, 21, 22, 22, 23, 23, 23, 23, 23, 23, 23, 24, 24, 24,
    24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24,
    24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24,
    24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24,
    24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24,
    24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24,
    24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24 };

  static int32_T _cg_const_2[24] = { 12, 13, 14, 15, 20, 16, 17, 18, 34, 19, 21,
    22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 35 };

  int32_T i;
  (void)t1;
  (void)LC;
  out->mDXICR_P.mNumCol = 205ULL;
  out->mDXICR_P.mNumRow = 36ULL;
  for (i = 0; i < 206; i++) {
    out->mDXICR_P.mJc[i] = _cg_const_1[i];
  }

  out->mDXICR_P.mIr[0] = _cg_const_2[0];
  out->mDXICR_P.mIr[1] = _cg_const_2[1];
  out->mDXICR_P.mIr[2] = _cg_const_2[2];
  out->mDXICR_P.mIr[3] = _cg_const_2[3];
  out->mDXICR_P.mIr[4] = _cg_const_2[4];
  out->mDXICR_P.mIr[5] = _cg_const_2[5];
  out->mDXICR_P.mIr[6] = _cg_const_2[6];
  out->mDXICR_P.mIr[7] = _cg_const_2[7];
  out->mDXICR_P.mIr[8] = _cg_const_2[8];
  out->mDXICR_P.mIr[9] = _cg_const_2[9];
  out->mDXICR_P.mIr[10] = _cg_const_2[10];
  out->mDXICR_P.mIr[11] = _cg_const_2[11];
  out->mDXICR_P.mIr[12] = _cg_const_2[12];
  out->mDXICR_P.mIr[13] = _cg_const_2[13];
  out->mDXICR_P.mIr[14] = _cg_const_2[14];
  out->mDXICR_P.mIr[15] = _cg_const_2[15];
  out->mDXICR_P.mIr[16] = _cg_const_2[16];
  out->mDXICR_P.mIr[17] = _cg_const_2[17];
  out->mDXICR_P.mIr[18] = _cg_const_2[18];
  out->mDXICR_P.mIr[19] = _cg_const_2[19];
  out->mDXICR_P.mIr[20] = _cg_const_2[20];
  out->mDXICR_P.mIr[21] = _cg_const_2[21];
  out->mDXICR_P.mIr[22] = _cg_const_2[22];
  out->mDXICR_P.mIr[23] = _cg_const_2[23];
  (void)LC;
  (void)out;
  return 0;
}
