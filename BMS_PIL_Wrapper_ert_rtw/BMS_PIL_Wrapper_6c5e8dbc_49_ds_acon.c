/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'BMS_PIL_Wrapper/Plant/Solver Configuration'.
 */

#include "ne_ds.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_sys_struct.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_acon.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_externals.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T BMS_PIL_Wrapper_6c5e8dbc_49_ds_acon(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t134, NeDsMethodOutput *out)
{
  real_T t2[5];
  real_T t27[4];
  real_T t28[4];
  real_T t29[4];
  real_T t30[4];
  real_T t31[4];
  real_T t32[4];
  real_T t33[4];
  real_T t34[4];
  real_T t35[4];
  real_T t36[4];
  size_t t61;
  (void)t134;
  (void)LC;
  t2[0] = -0.2;
  t2[1] = -0.2;
  t2[2] = -0.2;
  t2[3] = -0.2;
  t2[4] = -0.2;
  t27[0ULL] = -0.02564102564102564;
  t27[1ULL] = 0.02564102564102564;
  t27[2ULL] = 0.2;
  t27[3ULL] = -0.2;
  t28[0ULL] = 0.02564102564102564;
  t28[1ULL] = -0.02564102564102564;
  t28[2ULL] = -0.2;
  t28[3ULL] = 0.2;
  t29[0ULL] = 0.02564102564102564;
  t29[1ULL] = -0.02564102564102564;
  t29[2ULL] = -0.2;
  t29[3ULL] = 0.2;
  t30[0ULL] = 0.02564102564102564;
  t30[1ULL] = -0.02564102564102564;
  t30[2ULL] = -0.2;
  t30[3ULL] = 0.2;
  t31[0ULL] = 0.02564102564102564;
  t31[1ULL] = -0.02564102564102564;
  t31[2ULL] = -0.2;
  t31[3ULL] = 0.2;
  t32[0ULL] = 0.02564102564102564;
  t32[1ULL] = -0.02564102564102564;
  t32[2ULL] = -0.2;
  t32[3ULL] = 0.2;
  t33[0ULL] = 0.02564102564102564;
  t33[1ULL] = -0.02564102564102564;
  t33[2ULL] = -0.2;
  t33[3ULL] = 0.2;
  t34[0ULL] = 0.02564102564102564;
  t34[1ULL] = -0.02564102564102564;
  t34[2ULL] = -0.2;
  t34[3ULL] = 0.2;
  t35[0ULL] = 0.02564102564102564;
  t35[1ULL] = -0.02564102564102564;
  t35[2ULL] = -0.2;
  t35[3ULL] = 0.2;
  t36[0ULL] = 0.02564102564102564;
  t36[1ULL] = -0.02564102564102564;
  t36[2ULL] = -0.2;
  t36[3ULL] = 0.2;
  out->mACON.mX[0ULL] = 2.0E-6;
  out->mACON.mX[1ULL] = 1.0;
  for (t61 = 0ULL; t61 < 5ULL; t61++) {
    out->mACON.mX[t61 + 2ULL] = t2[t61];
  }

  out->mACON.mX[7ULL] = -4.0E-6;
  out->mACON.mX[8ULL] = 2.0E-6;
  for (t61 = 0ULL; t61 < 5ULL; t61++) {
    out->mACON.mX[t61 + 9ULL] = t2[t61];
  }

  out->mACON.mX[14ULL] = 2.0E-6;
  out->mACON.mX[15ULL] = -4.0E-6;
  out->mACON.mX[16ULL] = 2.0E-6;
  out->mACON.mX[17ULL] = -4.0E-6;
  out->mACON.mX[18ULL] = 2.0E-6;
  out->mACON.mX[19ULL] = 2.0E-6;
  for (t61 = 0ULL; t61 < 5ULL; t61++) {
    out->mACON.mX[t61 + 20ULL] = t2[t61];
  }

  out->mACON.mX[25ULL] = 2.0E-6;
  out->mACON.mX[26ULL] = -2.0E-6;
  out->mACON.mX[27ULL] = 2.0E-6;
  out->mACON.mX[28ULL] = 2.0E-6;
  out->mACON.mX[29ULL] = -4.0E-6;
  for (t61 = 0ULL; t61 < 5ULL; t61++) {
    out->mACON.mX[t61 + 30ULL] = t2[t61];
  }

  for (t61 = 0ULL; t61 < 5ULL; t61++) {
    out->mACON.mX[t61 + 35ULL] = t2[t61];
  }

  out->mACON.mX[40ULL] = 2.0E-6;
  out->mACON.mX[41ULL] = -4.0E-6;
  out->mACON.mX[42ULL] = 2.0E-6;
  for (t61 = 0ULL; t61 < 5ULL; t61++) {
    out->mACON.mX[t61 + 43ULL] = t2[t61];
  }

  out->mACON.mX[48ULL] = 2.0E-6;
  out->mACON.mX[49ULL] = -4.0E-6;
  out->mACON.mX[50ULL] = 2.0E-6;
  for (t61 = 0ULL; t61 < 5ULL; t61++) {
    out->mACON.mX[t61 + 51ULL] = t2[t61];
  }

  out->mACON.mX[56ULL] = 2.0E-6;
  out->mACON.mX[57ULL] = -4.0E-6;
  out->mACON.mX[58ULL] = 2.0E-6;
  for (t61 = 0ULL; t61 < 5ULL; t61++) {
    out->mACON.mX[t61 + 59ULL] = t2[t61];
  }

  out->mACON.mX[64ULL] = 2.0E-6;
  out->mACON.mX[65ULL] = -4.0E-6;
  out->mACON.mX[66ULL] = 2.0E-6;
  for (t61 = 0ULL; t61 < 5ULL; t61++) {
    out->mACON.mX[t61 + 67ULL] = t2[t61];
  }

  out->mACON.mX[72ULL] = 2.0E-6;
  out->mACON.mX[73ULL] = -4.0E-6;
  out->mACON.mX[74ULL] = 2.0E-6;
  for (t61 = 0ULL; t61 < 5ULL; t61++) {
    out->mACON.mX[t61 + 75ULL] = t2[t61];
  }

  out->mACON.mX[80ULL] = 2.0E-6;
  out->mACON.mX[81ULL] = -4.0E-6;
  out->mACON.mX[82ULL] = 2.0E-6;
  for (t61 = 0ULL; t61 < 5ULL; t61++) {
    out->mACON.mX[t61 + 83ULL] = t2[t61];
  }

  for (t61 = 0ULL; t61 < 5ULL; t61++) {
    out->mACON.mX[t61 + 88ULL] = t2[t61];
  }

  out->mACON.mX[93ULL] = -0.02564102564102564;
  out->mACON.mX[94ULL] = 0.2;
  out->mACON.mX[95ULL] = -0.02564102564102564;
  out->mACON.mX[96ULL] = 0.2;
  for (t61 = 0ULL; t61 < 4ULL; t61++) {
    out->mACON.mX[t61 + 97ULL] = t27[t61];
  }

  for (t61 = 0ULL; t61 < 4ULL; t61++) {
    out->mACON.mX[t61 + 101ULL] = t28[t61];
  }

  for (t61 = 0ULL; t61 < 4ULL; t61++) {
    out->mACON.mX[t61 + 105ULL] = t29[t61];
  }

  for (t61 = 0ULL; t61 < 4ULL; t61++) {
    out->mACON.mX[t61 + 109ULL] = t30[t61];
  }

  for (t61 = 0ULL; t61 < 4ULL; t61++) {
    out->mACON.mX[t61 + 113ULL] = t31[t61];
  }

  for (t61 = 0ULL; t61 < 4ULL; t61++) {
    out->mACON.mX[t61 + 117ULL] = t32[t61];
  }

  for (t61 = 0ULL; t61 < 4ULL; t61++) {
    out->mACON.mX[t61 + 121ULL] = t33[t61];
  }

  for (t61 = 0ULL; t61 < 4ULL; t61++) {
    out->mACON.mX[t61 + 125ULL] = t34[t61];
  }

  for (t61 = 0ULL; t61 < 4ULL; t61++) {
    out->mACON.mX[t61 + 129ULL] = t35[t61];
  }

  for (t61 = 0ULL; t61 < 4ULL; t61++) {
    out->mACON.mX[t61 + 133ULL] = t36[t61];
  }

  out->mACON.mX[137ULL] = 0.02564102564102564;
  out->mACON.mX[138ULL] = 0.02564102564102564;
  out->mACON.mX[139ULL] = 0.02564102564102564;
  out->mACON.mX[140ULL] = 0.02564102564102564;
  out->mACON.mX[141ULL] = 0.02564102564102564;
  out->mACON.mX[142ULL] = 0.02564102564102564;
  out->mACON.mX[143ULL] = 0.02564102564102564;
  out->mACON.mX[144ULL] = 0.02564102564102564;
  out->mACON.mX[145ULL] = 0.02564102564102564;
  out->mACON.mX[146ULL] = 0.02564102564102564;
  out->mACON.mX[147ULL] = 0.02564102564102564;
  out->mACON.mX[148ULL] = 0.02564102564102564;
  out->mACON.mX[149ULL] = 0.02564102564102564;
  out->mACON.mX[150ULL] = 0.02564102564102564;
  out->mACON.mX[151ULL] = 0.02564102564102564;
  out->mACON.mX[152ULL] = 0.02564102564102564;
  out->mACON.mX[153ULL] = 0.02564102564102564;
  out->mACON.mX[154ULL] = 0.02564102564102564;
  out->mACON.mX[155ULL] = 0.02564102564102564;
  out->mACON.mX[156ULL] = 0.02564102564102564;
  out->mACON.mX[157ULL] = 0.02564102564102564;
  out->mACON.mX[158ULL] = 0.02564102564102564;
  out->mACON.mX[159ULL] = 0.02564102564102564;
  out->mACON.mX[160ULL] = 0.02564102564102564;
  out->mACON.mX[161ULL] = 1.0;
  out->mACON.mX[162ULL] = 1.0;
  out->mACON.mX[163ULL] = 1.0;
  out->mACON.mX[164ULL] = 1.0;
  out->mACON.mX[165ULL] = 1.0;
  out->mACON.mX[166ULL] = 1.0;
  out->mACON.mX[167ULL] = 1.0;
  out->mACON.mX[168ULL] = 1.0;
  out->mACON.mX[169ULL] = 1.0;
  out->mACON.mX[170ULL] = 1.0;
  out->mACON.mX[171ULL] = 1.0;
  out->mACON.mX[172ULL] = 1.0;
  out->mACON.mX[173ULL] = 1.0;
  out->mACON.mX[174ULL] = 1.0;
  out->mACON.mX[175ULL] = 1.0;
  out->mACON.mX[176ULL] = 1.0;
  out->mACON.mX[177ULL] = 1.0;
  out->mACON.mX[178ULL] = 1.0;
  out->mACON.mX[179ULL] = 1.0;
  out->mACON.mX[180ULL] = 1.0;
  out->mACON.mX[181ULL] = 1.0;
  out->mACON.mX[182ULL] = 1.0;
  out->mACON.mX[183ULL] = 1.0;
  out->mACON.mX[184ULL] = 1.0;
  out->mACON.mX[185ULL] = 1.0;
  out->mACON.mX[186ULL] = 1.0;
  out->mACON.mX[187ULL] = 1.0;
  out->mACON.mX[188ULL] = 1.0;
  out->mACON.mX[189ULL] = 1.0;
  out->mACON.mX[190ULL] = 1.0;
  out->mACON.mX[191ULL] = 1.0;
  out->mACON.mX[192ULL] = 1.0;
  out->mACON.mX[193ULL] = 1.0;
  out->mACON.mX[194ULL] = 1.0;
  out->mACON.mX[195ULL] = 1.0;
  out->mACON.mX[196ULL] = 1.0;
  out->mACON.mX[197ULL] = 1.0;
  out->mACON.mX[198ULL] = 1.0;
  out->mACON.mX[199ULL] = 1.0;
  out->mACON.mX[200ULL] = 1.0;
  out->mACON.mX[201ULL] = 1.0;
  out->mACON.mX[202ULL] = 1.0;
  out->mACON.mX[203ULL] = 1.0;
  out->mACON.mX[204ULL] = 1.0;
  out->mACON.mX[205ULL] = 1.0;
  out->mACON.mX[206ULL] = 1.0;
  out->mACON.mX[207ULL] = 1.0;
  out->mACON.mX[208ULL] = 1.0;
  out->mACON.mX[209ULL] = 1.0;
  out->mACON.mX[210ULL] = 1.0;
  out->mACON.mX[211ULL] = 1.0;
  out->mACON.mX[212ULL] = 1.0;
  out->mACON.mX[213ULL] = 1.0;
  out->mACON.mX[214ULL] = 1.0;
  out->mACON.mX[215ULL] = 1.0;
  out->mACON.mX[216ULL] = 1.0;
  out->mACON.mX[217ULL] = 1.0;
  out->mACON.mX[218ULL] = 1.0;
  out->mACON.mX[219ULL] = 1.0;
  out->mACON.mX[220ULL] = 1.0;
  out->mACON.mX[221ULL] = 1.0;
  out->mACON.mX[222ULL] = 1.0;
  out->mACON.mX[223ULL] = 1.0;
  out->mACON.mX[224ULL] = 1.0;
  out->mACON.mX[225ULL] = 1.0;
  out->mACON.mX[226ULL] = 1.0;
  out->mACON.mX[227ULL] = 1.0;
  out->mACON.mX[228ULL] = 1.0;
  out->mACON.mX[229ULL] = 1.0;
  out->mACON.mX[230ULL] = 1.0;
  out->mACON.mX[231ULL] = 1.0;
  out->mACON.mX[232ULL] = 1.0;
  out->mACON.mX[233ULL] = 1.0;
  (void)LC;
  (void)out;
  return 0;
}
