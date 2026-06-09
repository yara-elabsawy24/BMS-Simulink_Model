/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'BMS_PIL_Wrapper/Plant/Solver Configuration'.
 */

#include "ne_ds.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_sys_struct.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_duy_p.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_externals.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T BMS_PIL_Wrapper_6c5e8dbc_49_ds_duy_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  static int32_T _cg_const_1[16] = { 0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
    2 };

  (void)t1;
  (void)LC;
  out->mDUY_P.mNumCol = 15ULL;
  out->mDUY_P.mNumRow = 38ULL;
  out->mDUY_P.mJc[0] = _cg_const_1[0];
  out->mDUY_P.mJc[1] = _cg_const_1[1];
  out->mDUY_P.mJc[2] = _cg_const_1[2];
  out->mDUY_P.mJc[3] = _cg_const_1[3];
  out->mDUY_P.mJc[4] = _cg_const_1[4];
  out->mDUY_P.mJc[5] = _cg_const_1[5];
  out->mDUY_P.mJc[6] = _cg_const_1[6];
  out->mDUY_P.mJc[7] = _cg_const_1[7];
  out->mDUY_P.mJc[8] = _cg_const_1[8];
  out->mDUY_P.mJc[9] = _cg_const_1[9];
  out->mDUY_P.mJc[10] = _cg_const_1[10];
  out->mDUY_P.mJc[11] = _cg_const_1[11];
  out->mDUY_P.mJc[12] = _cg_const_1[12];
  out->mDUY_P.mJc[13] = _cg_const_1[13];
  out->mDUY_P.mJc[14] = _cg_const_1[14];
  out->mDUY_P.mJc[15] = _cg_const_1[15];
  out->mDUY_P.mIr[0] = 0;
  out->mDUY_P.mIr[1] = 0;
  (void)LC;
  (void)out;
  return 0;
}
