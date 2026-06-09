/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'BMS_PIL_Wrapper/Plant/Solver Configuration'.
 */

#include "ne_ds.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_sys_struct.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_vdf.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_externals.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T BMS_PIL_Wrapper_6c5e8dbc_49_ds_vdf(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  static boolean_T _cg_const_1[205] = { true, true, false, false, false, false,
    false, false, true, true, false, false, false, false, false, false, true,
    true, false, false, false, false, false, false, true, true, false, false,
    false, false, false, false, true, true, false, false, false, false, false,
    false, true, true, false, false, false, false, false, false, true, true,
    false, false, false, false, false, false, true, true, false, false, false,
    false, false, false, true, true, false, false, false, false, false, false,
    true, true, false, false, false, false, false, false, true, true, false,
    false, false, false, false, false, true, true, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, false };

  int32_T i;
  (void)t1;
  (void)LC;
  for (i = 0; i < 205; i++) {
    out->mVDF.mX[i] = _cg_const_1[i];
  }

  (void)LC;
  (void)out;
  return 0;
}
