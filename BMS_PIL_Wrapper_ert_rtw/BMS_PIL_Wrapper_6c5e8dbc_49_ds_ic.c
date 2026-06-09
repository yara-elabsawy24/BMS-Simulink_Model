/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'BMS_PIL_Wrapper/Plant/Solver Configuration'.
 */

#include "ne_ds.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_sys_struct.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_ic.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_externals.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T BMS_PIL_Wrapper_6c5e8dbc_49_ds_ic(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t13, NeDsMethodOutput *out)
{
  size_t t12;
  (void)LC;
  out->mIC.mX[0ULL] = 298.15;
  out->mIC.mX[1ULL] = 0.0;
  out->mIC.mX[2ULL] = 0.0;
  for (t12 = 3ULL; t12 - 3ULL < 5ULL; t12++) {
    out->mIC.mX[t12] = 0.0;
  }

  out->mIC.mX[8ULL] = 298.15;
  out->mIC.mX[9ULL] = 0.0;
  out->mIC.mX[10ULL] = 0.0;
  for (t12 = 11ULL; t12 - 11ULL < 5ULL; t12++) {
    out->mIC.mX[t12] = 0.0;
  }

  out->mIC.mX[16ULL] = 298.15;
  out->mIC.mX[17ULL] = 298.15;
  out->mIC.mX[18ULL] = 0.0;
  out->mIC.mX[19ULL] = 0.0;
  for (t12 = 20ULL; t12 - 20ULL < 5ULL; t12++) {
    out->mIC.mX[t12] = 0.0;
  }

  out->mIC.mX[25ULL] = 298.15;
  out->mIC.mX[26ULL] = 298.15;
  out->mIC.mX[27ULL] = 0.0;
  out->mIC.mX[28ULL] = 0.0;
  for (t12 = 29ULL; t12 - 29ULL < 5ULL; t12++) {
    out->mIC.mX[t12] = 0.0;
  }

  out->mIC.mX[34ULL] = 0.0;
  out->mIC.mX[35ULL] = 0.0;
  for (t12 = 36ULL; t12 - 36ULL < 5ULL; t12++) {
    out->mIC.mX[t12] = 0.0;
  }

  out->mIC.mX[41ULL] = 298.15;
  out->mIC.mX[42ULL] = 0.0;
  out->mIC.mX[43ULL] = 0.0;
  for (t12 = 44ULL; t12 - 44ULL < 5ULL; t12++) {
    out->mIC.mX[t12] = 0.0;
  }

  out->mIC.mX[49ULL] = 298.15;
  out->mIC.mX[50ULL] = 0.0;
  out->mIC.mX[51ULL] = 0.0;
  for (t12 = 52ULL; t12 - 52ULL < 5ULL; t12++) {
    out->mIC.mX[t12] = 0.0;
  }

  out->mIC.mX[57ULL] = 298.15;
  out->mIC.mX[58ULL] = 0.0;
  out->mIC.mX[59ULL] = 0.0;
  for (t12 = 60ULL; t12 - 60ULL < 5ULL; t12++) {
    out->mIC.mX[t12] = 0.0;
  }

  out->mIC.mX[65ULL] = 298.15;
  out->mIC.mX[66ULL] = 0.0;
  out->mIC.mX[67ULL] = 0.0;
  for (t12 = 68ULL; t12 - 68ULL < 5ULL; t12++) {
    out->mIC.mX[t12] = 0.0;
  }

  out->mIC.mX[73ULL] = 298.15;
  out->mIC.mX[74ULL] = 0.0;
  out->mIC.mX[75ULL] = 0.0;
  for (t12 = 76ULL; t12 - 76ULL < 5ULL; t12++) {
    out->mIC.mX[t12] = 0.0;
  }

  out->mIC.mX[81ULL] = 298.15;
  out->mIC.mX[82ULL] = 0.0;
  out->mIC.mX[83ULL] = 0.0;
  for (t12 = 84ULL; t12 - 84ULL < 5ULL; t12++) {
    out->mIC.mX[t12] = 0.0;
  }

  out->mIC.mX[89ULL] = 0.0;
  out->mIC.mX[90ULL] = 0.0;
  for (t12 = 91ULL; t12 - 91ULL < 5ULL; t12++) {
    out->mIC.mX[t12] = 0.0;
  }

  out->mIC.mX[96ULL] = 0.0;
  out->mIC.mX[97ULL] = 0.0;
  out->mIC.mX[98ULL] = 0.0;
  out->mIC.mX[99ULL] = 0.0;
  out->mIC.mX[100ULL] = 0.0;
  out->mIC.mX[101ULL] = 0.0;
  out->mIC.mX[102ULL] = 0.0;
  out->mIC.mX[103ULL] = 0.0;
  out->mIC.mX[104ULL] = 0.0;
  out->mIC.mX[105ULL] = 0.0;
  out->mIC.mX[106ULL] = 0.0;
  out->mIC.mX[107ULL] = 0.0;
  out->mIC.mX[108ULL] = 0.0;
  out->mIC.mX[109ULL] = 0.0;
  out->mIC.mX[110ULL] = 0.0;
  out->mIC.mX[111ULL] = 0.0;
  out->mIC.mX[112ULL] = 0.0;
  out->mIC.mX[113ULL] = 0.0;
  out->mIC.mX[114ULL] = 0.0;
  out->mIC.mX[115ULL] = 0.0;
  out->mIC.mX[116ULL] = 0.0;
  out->mIC.mX[117ULL] = 0.0;
  out->mIC.mX[118ULL] = 0.0;
  out->mIC.mX[119ULL] = 0.0;
  out->mIC.mX[120ULL] = 0.0;
  out->mIC.mX[121ULL] = 0.0;
  out->mIC.mX[122ULL] = 0.0;
  out->mIC.mX[123ULL] = 0.0;
  out->mIC.mX[124ULL] = 0.0;
  out->mIC.mX[125ULL] = 0.0;
  out->mIC.mX[126ULL] = 0.0;
  out->mIC.mX[127ULL] = 0.0;
  out->mIC.mX[128ULL] = 0.0;
  out->mIC.mX[129ULL] = 0.0;
  out->mIC.mX[130ULL] = 0.0;
  out->mIC.mX[131ULL] = 0.0;
  out->mIC.mX[132ULL] = 0.0;
  out->mIC.mX[133ULL] = 0.0;
  out->mIC.mX[134ULL] = 0.0;
  out->mIC.mX[135ULL] = 0.0;
  out->mIC.mX[136ULL] = 0.0;
  out->mIC.mX[137ULL] = 0.0;
  out->mIC.mX[138ULL] = 0.0;
  out->mIC.mX[139ULL] = 0.0;
  out->mIC.mX[140ULL] = 0.0;
  out->mIC.mX[141ULL] = 0.0;
  out->mIC.mX[142ULL] = 0.0;
  out->mIC.mX[143ULL] = 0.0;
  out->mIC.mX[144ULL] = 1.0;
  out->mIC.mX[145ULL] = 1.0;
  out->mIC.mX[146ULL] = 1.0;
  out->mIC.mX[147ULL] = t13->mP_R.mX[0ULL];
  out->mIC.mX[148ULL] = 0.0;
  out->mIC.mX[149ULL] = 0.0;
  out->mIC.mX[150ULL] = 1.0;
  out->mIC.mX[151ULL] = 1.0;
  out->mIC.mX[152ULL] = 1.0;
  out->mIC.mX[153ULL] = t13->mP_R.mX[1ULL];
  out->mIC.mX[154ULL] = 0.0;
  out->mIC.mX[155ULL] = 1.0;
  out->mIC.mX[156ULL] = 1.0;
  out->mIC.mX[157ULL] = 1.0;
  out->mIC.mX[158ULL] = t13->mP_R.mX[2ULL];
  out->mIC.mX[159ULL] = 0.0;
  out->mIC.mX[160ULL] = 1.0;
  out->mIC.mX[161ULL] = 1.0;
  out->mIC.mX[162ULL] = 1.0;
  out->mIC.mX[163ULL] = t13->mP_R.mX[3ULL];
  out->mIC.mX[164ULL] = 0.0;
  out->mIC.mX[165ULL] = 1.0;
  out->mIC.mX[166ULL] = 1.0;
  out->mIC.mX[167ULL] = 1.0;
  out->mIC.mX[168ULL] = t13->mP_R.mX[4ULL];
  out->mIC.mX[169ULL] = 0.0;
  out->mIC.mX[170ULL] = 1.0;
  out->mIC.mX[171ULL] = 1.0;
  out->mIC.mX[172ULL] = 1.0;
  out->mIC.mX[173ULL] = t13->mP_R.mX[5ULL];
  out->mIC.mX[174ULL] = 0.0;
  out->mIC.mX[175ULL] = 1.0;
  out->mIC.mX[176ULL] = 1.0;
  out->mIC.mX[177ULL] = 1.0;
  out->mIC.mX[178ULL] = t13->mP_R.mX[6ULL];
  out->mIC.mX[179ULL] = 0.0;
  out->mIC.mX[180ULL] = 1.0;
  out->mIC.mX[181ULL] = 1.0;
  out->mIC.mX[182ULL] = 1.0;
  out->mIC.mX[183ULL] = t13->mP_R.mX[7ULL];
  out->mIC.mX[184ULL] = 0.0;
  out->mIC.mX[185ULL] = 1.0;
  out->mIC.mX[186ULL] = 1.0;
  out->mIC.mX[187ULL] = 1.0;
  out->mIC.mX[188ULL] = t13->mP_R.mX[8ULL];
  out->mIC.mX[189ULL] = 0.0;
  out->mIC.mX[190ULL] = 1.0;
  out->mIC.mX[191ULL] = 1.0;
  out->mIC.mX[192ULL] = 1.0;
  out->mIC.mX[193ULL] = t13->mP_R.mX[9ULL];
  out->mIC.mX[194ULL] = 0.0;
  out->mIC.mX[195ULL] = 1.0;
  out->mIC.mX[196ULL] = 1.0;
  out->mIC.mX[197ULL] = 1.0;
  out->mIC.mX[198ULL] = t13->mP_R.mX[10ULL];
  out->mIC.mX[199ULL] = 0.0;
  out->mIC.mX[200ULL] = 1.0;
  out->mIC.mX[201ULL] = 1.0;
  out->mIC.mX[202ULL] = 1.0;
  out->mIC.mX[203ULL] = t13->mP_R.mX[11ULL];
  out->mIC.mX[204ULL] = 0.0;
  (void)LC;
  (void)out;
  return 0;
}
