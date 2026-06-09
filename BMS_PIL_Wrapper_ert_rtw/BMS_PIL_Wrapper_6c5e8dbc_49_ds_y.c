/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'BMS_PIL_Wrapper/Plant/Solver Configuration'.
 */

#include "ne_ds.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_sys_struct.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_y.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_externals.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T BMS_PIL_Wrapper_6c5e8dbc_49_ds_y(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t19, NeDsMethodOutput *out)
{
  real_T Plant_Voltage_Sensor_V;
  (void)LC;
  Plant_Voltage_Sensor_V = t19->mX.mX[96ULL] + t19->mX.mX[97ULL];
  out->mY.mX[0ULL] = t19->mU.mX[0ULL] + t19->mU.mX[1ULL];
  out->mY.mX[12ULL] = Plant_Voltage_Sensor_V - t19->mX.mX[96ULL];
  out->mY.mX[3ULL] = t19->mX.mX[96ULL] - t19->mX.mX[100ULL];
  out->mY.mX[1ULL] = t19->mX.mX[98ULL] - t19->mX.mX[99ULL];
  out->mY.mX[2ULL] = t19->mX.mX[99ULL];
  out->mY.mX[4ULL] = t19->mX.mX[100ULL] - t19->mX.mX[101ULL];
  out->mY.mX[5ULL] = t19->mX.mX[101ULL] - t19->mX.mX[102ULL];
  out->mY.mX[6ULL] = t19->mX.mX[102ULL] - t19->mX.mX[103ULL];
  out->mY.mX[7ULL] = t19->mX.mX[103ULL] - t19->mX.mX[104ULL];
  out->mY.mX[8ULL] = t19->mX.mX[104ULL] - t19->mX.mX[105ULL];
  out->mY.mX[9ULL] = t19->mX.mX[105ULL] - t19->mX.mX[106ULL];
  out->mY.mX[10ULL] = t19->mX.mX[106ULL] - t19->mX.mX[107ULL];
  out->mY.mX[11ULL] = t19->mX.mX[107ULL] - t19->mX.mX[98ULL];
  out->mY.mX[36ULL] = t19->mX.mX[0ULL];
  out->mY.mX[27ULL] = t19->mX.mX[8ULL];
  out->mY.mX[25ULL] = t19->mX.mX[17ULL];
  out->mY.mX[26ULL] = t19->mX.mX[25ULL];
  out->mY.mX[28ULL] = t19->mX.mX[16ULL];
  out->mY.mX[29ULL] = t19->mX.mX[41ULL];
  out->mY.mX[30ULL] = t19->mX.mX[49ULL];
  out->mY.mX[31ULL] = t19->mX.mX[57ULL];
  out->mY.mX[32ULL] = t19->mX.mX[65ULL];
  out->mY.mX[33ULL] = t19->mX.mX[73ULL];
  out->mY.mX[34ULL] = t19->mX.mX[81ULL];
  out->mY.mX[35ULL] = t19->mX.mX[26ULL];
  out->mY.mX[37ULL] = Plant_Voltage_Sensor_V;
  out->mY.mX[13ULL] = t19->mX.mX[158ULL];
  out->mY.mX[14ULL] = t19->mX.mX[163ULL];
  out->mY.mX[15ULL] = t19->mX.mX[153ULL];
  out->mY.mX[16ULL] = t19->mX.mX[168ULL];
  out->mY.mX[17ULL] = t19->mX.mX[173ULL];
  out->mY.mX[18ULL] = t19->mX.mX[178ULL];
  out->mY.mX[19ULL] = t19->mX.mX[183ULL];
  out->mY.mX[20ULL] = t19->mX.mX[188ULL];
  out->mY.mX[21ULL] = t19->mX.mX[193ULL];
  out->mY.mX[22ULL] = t19->mX.mX[198ULL];
  out->mY.mX[23ULL] = t19->mX.mX[203ULL];
  out->mY.mX[24ULL] = t19->mX.mX[147ULL];
  (void)LC;
  (void)out;
  return 0;
}
