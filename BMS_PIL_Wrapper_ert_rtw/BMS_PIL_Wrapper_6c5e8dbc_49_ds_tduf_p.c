/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'BMS_PIL_Wrapper/Plant/Solver Configuration'.
 */

#include "ne_ds.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_sys_struct.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_tduf_p.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_externals.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T BMS_PIL_Wrapper_6c5e8dbc_49_ds_tduf_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  static int32_T _cg_const_2[109] = { 0, 1, 8, 9, 16, 17, 24, 25, 32, 33, 40, 41,
    48, 49, 56, 57, 64, 65, 72, 73, 80, 81, 88, 89, 132, 134, 138, 140, 144, 146,
    150, 152, 156, 158, 162, 164, 168, 170, 174, 176, 180, 182, 186, 188, 192,
    194, 198, 200, 0, 1, 8, 9, 16, 17, 24, 25, 32, 33, 40, 41, 48, 49, 56, 57,
    64, 65, 72, 73, 80, 81, 88, 89, 132, 134, 138, 140, 144, 146, 150, 152, 156,
    158, 162, 164, 168, 170, 174, 176, 180, 182, 186, 188, 192, 194, 198, 200,
    122, 123, 121, 124, 125, 126, 127, 128, 129, 130, 131, 120, 204 };

  static int32_T _cg_const_1[16] = { 0, 48, 96, 97, 98, 99, 100, 101, 102, 103,
    104, 105, 106, 107, 108, 109 };

  int32_T i1;
  (void)t1;
  (void)LC;
  out->mTDUF_P.mNumCol = 15ULL;
  out->mTDUF_P.mNumRow = 205ULL;
  out->mTDUF_P.mJc[0] = _cg_const_1[0];
  out->mTDUF_P.mJc[1] = _cg_const_1[1];
  out->mTDUF_P.mJc[2] = _cg_const_1[2];
  out->mTDUF_P.mJc[3] = _cg_const_1[3];
  out->mTDUF_P.mJc[4] = _cg_const_1[4];
  out->mTDUF_P.mJc[5] = _cg_const_1[5];
  out->mTDUF_P.mJc[6] = _cg_const_1[6];
  out->mTDUF_P.mJc[7] = _cg_const_1[7];
  out->mTDUF_P.mJc[8] = _cg_const_1[8];
  out->mTDUF_P.mJc[9] = _cg_const_1[9];
  out->mTDUF_P.mJc[10] = _cg_const_1[10];
  out->mTDUF_P.mJc[11] = _cg_const_1[11];
  out->mTDUF_P.mJc[12] = _cg_const_1[12];
  out->mTDUF_P.mJc[13] = _cg_const_1[13];
  out->mTDUF_P.mJc[14] = _cg_const_1[14];
  out->mTDUF_P.mJc[15] = _cg_const_1[15];
  for (i1 = 0; i1 < 109; i1++) {
    out->mTDUF_P.mIr[i1] = _cg_const_2[i1];
  }

  (void)LC;
  (void)out;
  return 0;
}
