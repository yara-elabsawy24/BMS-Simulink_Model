/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'BMS_PIL_Wrapper/Plant/Solver Configuration'.
 */

#include "ne_ds.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_sys_struct.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_icr.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_externals.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T BMS_PIL_Wrapper_6c5e8dbc_49_ds_icr(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  (void)LC;
  out->mICR.mX[13ULL] = t1->mX.mX[2ULL];
  out->mICR.mX[15ULL] = t1->mX.mX[10ULL];
  out->mICR.mX[17ULL] = t1->mX.mX[19ULL];
  out->mICR.mX[19ULL] = t1->mX.mX[28ULL];
  out->mICR.mX[21ULL] = t1->mX.mX[35ULL];
  out->mICR.mX[23ULL] = t1->mX.mX[43ULL];
  out->mICR.mX[25ULL] = t1->mX.mX[51ULL];
  out->mICR.mX[27ULL] = t1->mX.mX[59ULL];
  out->mICR.mX[29ULL] = t1->mX.mX[67ULL];
  out->mICR.mX[31ULL] = t1->mX.mX[75ULL];
  out->mICR.mX[33ULL] = t1->mX.mX[83ULL];
  out->mICR.mX[35ULL] = t1->mX.mX[90ULL];
  out->mICR.mX[0ULL] = 0.0;
  out->mICR.mX[1ULL] = 0.0;
  out->mICR.mX[2ULL] = 0.0;
  out->mICR.mX[3ULL] = 0.0;
  out->mICR.mX[4ULL] = 0.0;
  out->mICR.mX[5ULL] = 0.0;
  out->mICR.mX[6ULL] = 0.0;
  out->mICR.mX[7ULL] = 0.0;
  out->mICR.mX[8ULL] = 0.0;
  out->mICR.mX[9ULL] = 0.0;
  out->mICR.mX[10ULL] = 0.0;
  out->mICR.mX[11ULL] = 0.0;
  out->mICR.mX[12ULL] = t1->mX.mX[0ULL] - t1->mP_R.mX[14ULL];
  out->mICR.mX[14ULL] = t1->mX.mX[8ULL] - t1->mP_R.mX[18ULL];
  out->mICR.mX[16ULL] = t1->mX.mX[17ULL] - t1->mP_R.mX[22ULL];
  out->mICR.mX[18ULL] = t1->mX.mX[25ULL] - t1->mP_R.mX[21ULL];
  out->mICR.mX[20ULL] = t1->mX.mX[16ULL] - t1->mP_R.mX[12ULL];
  out->mICR.mX[22ULL] = t1->mX.mX[41ULL] - t1->mP_R.mX[16ULL];
  out->mICR.mX[24ULL] = t1->mX.mX[49ULL] - t1->mP_R.mX[13ULL];
  out->mICR.mX[26ULL] = t1->mX.mX[57ULL] - t1->mP_R.mX[19ULL];
  out->mICR.mX[28ULL] = t1->mX.mX[65ULL] - t1->mP_R.mX[23ULL];
  out->mICR.mX[30ULL] = t1->mX.mX[73ULL] - t1->mP_R.mX[20ULL];
  out->mICR.mX[32ULL] = t1->mX.mX[81ULL] - t1->mP_R.mX[15ULL];
  out->mICR.mX[34ULL] = t1->mX.mX[26ULL] - t1->mP_R.mX[17ULL];
  (void)LC;
  (void)out;
  return 0;
}
