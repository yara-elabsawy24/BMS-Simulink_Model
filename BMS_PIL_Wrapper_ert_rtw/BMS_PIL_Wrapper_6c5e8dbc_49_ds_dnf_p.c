/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'BMS_PIL_Wrapper/Plant/Solver Configuration'.
 */

#include "ne_ds.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_sys_struct.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_dnf_p.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_externals.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T BMS_PIL_Wrapper_6c5e8dbc_49_ds_dnf_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  static int32_T _cg_const_1[169] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 4, 5, 6, 7, 8, 9, 10, 11, 12, 12, 12, 12,
    12, 12 };

  int32_T i;
  (void)t1;
  (void)LC;
  out->mDNF_P.mNumCol = 168ULL;
  out->mDNF_P.mNumRow = 205ULL;
  for (i = 0; i < 169; i++) {
    out->mDNF_P.mJc[i] = _cg_const_1[i];
  }

  out->mDNF_P.mIr[0] = 134;
  out->mDNF_P.mIr[1] = 140;
  out->mDNF_P.mIr[2] = 146;
  out->mDNF_P.mIr[3] = 152;
  out->mDNF_P.mIr[4] = 158;
  out->mDNF_P.mIr[5] = 164;
  out->mDNF_P.mIr[6] = 170;
  out->mDNF_P.mIr[7] = 176;
  out->mDNF_P.mIr[8] = 182;
  out->mDNF_P.mIr[9] = 188;
  out->mDNF_P.mIr[10] = 194;
  out->mDNF_P.mIr[11] = 200;
  (void)LC;
  (void)out;
  return 0;
}
