/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'BMS_PIL_Wrapper/Plant/Solver Configuration'.
 */

#include "ne_ds.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_sys_struct.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_bcon_p.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_externals.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T BMS_PIL_Wrapper_6c5e8dbc_49_ds_bcon_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  static int32_T _cg_const_2[25] = { 0, 8, 16, 24, 32, 40, 48, 56, 64, 72, 80,
    88, 0, 8, 16, 24, 32, 40, 48, 56, 64, 72, 80, 88, 204 };

  static int32_T _cg_const_1[16] = { 0, 12, 24, 24, 24, 24, 24, 24, 24, 24, 24,
    24, 24, 24, 24, 25 };

  (void)t1;
  (void)LC;
  out->mBCON_P.mNumCol = 15ULL;
  out->mBCON_P.mNumRow = 205ULL;
  out->mBCON_P.mJc[0] = _cg_const_1[0];
  out->mBCON_P.mJc[1] = _cg_const_1[1];
  out->mBCON_P.mJc[2] = _cg_const_1[2];
  out->mBCON_P.mJc[3] = _cg_const_1[3];
  out->mBCON_P.mJc[4] = _cg_const_1[4];
  out->mBCON_P.mJc[5] = _cg_const_1[5];
  out->mBCON_P.mJc[6] = _cg_const_1[6];
  out->mBCON_P.mJc[7] = _cg_const_1[7];
  out->mBCON_P.mJc[8] = _cg_const_1[8];
  out->mBCON_P.mJc[9] = _cg_const_1[9];
  out->mBCON_P.mJc[10] = _cg_const_1[10];
  out->mBCON_P.mJc[11] = _cg_const_1[11];
  out->mBCON_P.mJc[12] = _cg_const_1[12];
  out->mBCON_P.mJc[13] = _cg_const_1[13];
  out->mBCON_P.mJc[14] = _cg_const_1[14];
  out->mBCON_P.mJc[15] = _cg_const_1[15];
  out->mBCON_P.mIr[0] = _cg_const_2[0];
  out->mBCON_P.mIr[1] = _cg_const_2[1];
  out->mBCON_P.mIr[2] = _cg_const_2[2];
  out->mBCON_P.mIr[3] = _cg_const_2[3];
  out->mBCON_P.mIr[4] = _cg_const_2[4];
  out->mBCON_P.mIr[5] = _cg_const_2[5];
  out->mBCON_P.mIr[6] = _cg_const_2[6];
  out->mBCON_P.mIr[7] = _cg_const_2[7];
  out->mBCON_P.mIr[8] = _cg_const_2[8];
  out->mBCON_P.mIr[9] = _cg_const_2[9];
  out->mBCON_P.mIr[10] = _cg_const_2[10];
  out->mBCON_P.mIr[11] = _cg_const_2[11];
  out->mBCON_P.mIr[12] = _cg_const_2[12];
  out->mBCON_P.mIr[13] = _cg_const_2[13];
  out->mBCON_P.mIr[14] = _cg_const_2[14];
  out->mBCON_P.mIr[15] = _cg_const_2[15];
  out->mBCON_P.mIr[16] = _cg_const_2[16];
  out->mBCON_P.mIr[17] = _cg_const_2[17];
  out->mBCON_P.mIr[18] = _cg_const_2[18];
  out->mBCON_P.mIr[19] = _cg_const_2[19];
  out->mBCON_P.mIr[20] = _cg_const_2[20];
  out->mBCON_P.mIr[21] = _cg_const_2[21];
  out->mBCON_P.mIr[22] = _cg_const_2[22];
  out->mBCON_P.mIr[23] = _cg_const_2[23];
  out->mBCON_P.mIr[24] = _cg_const_2[24];
  (void)LC;
  (void)out;
  return 0;
}
