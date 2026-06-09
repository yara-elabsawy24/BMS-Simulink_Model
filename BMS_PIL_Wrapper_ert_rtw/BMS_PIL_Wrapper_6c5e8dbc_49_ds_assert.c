/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'BMS_PIL_Wrapper/Plant/Solver Configuration'.
 */

#include "ne_ds.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_sys_struct.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_assert.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_externals.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T BMS_PIL_Wrapper_6c5e8dbc_49_ds_assert(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t97, NeDsMethodOutput *out)
{
  static real_T _cg_const_1[5] = { 263.15, 273.15, 298.15, 313.15, 328.15 };

  ETTSf3049b48 t11;
  ETTSf3049b48 t2;
  ETTSf3049b48 t3;
  real_T nonscalar2[5];
  real_T nonscalar4[5];
  real_T nonscalar5[5];
  real_T nonscalar6[5];
  real_T t27[1];
  real_T t83[1];
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_v;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_v;
  real_T
    Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xqnom;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based2_cell_temperature;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_v;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based3_cell_temperature;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_v;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_v;
  real_T
    Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_xxqnom;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based5_cell_temperature;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_v;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based6_cell_temperature;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_v;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based7_cell_temperature;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based7_electricalModel_v;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based8_cell_temperature;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_v;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_v;
  real_T
    Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xxqnom;
  real_T t86;
  real_T t87;
  real_T t95;
  size_t t13[1];
  size_t t14[1];
  (void)LC;
  nonscalar2[0] = _cg_const_1[0];
  nonscalar2[1] = _cg_const_1[1];
  nonscalar2[2] = _cg_const_1[2];
  nonscalar2[3] = _cg_const_1[3];
  nonscalar2[4] = _cg_const_1[4];
  nonscalar4[0] = 2808.0;
  nonscalar4[1] = 2808.0;
  nonscalar4[2] = 2808.0;
  nonscalar4[3] = 2808.0;
  nonscalar4[4] = 2808.0;
  nonscalar5[0] = 3369.6000000000004;
  nonscalar5[1] = 3369.6000000000004;
  nonscalar5[2] = 3369.6000000000004;
  nonscalar5[3] = 3369.6000000000004;
  nonscalar5[4] = 3369.6000000000004;
  nonscalar6[0] = 4118.4;
  nonscalar6[1] = 4118.4;
  nonscalar6[2] = 4118.4;
  nonscalar6[3] = 4118.4;
  nonscalar6[4] = 4118.4;
  t27[0ULL] = t97->mX.mX[0ULL];
  t13[0] = 5ULL;
  t14[0] = 1ULL;
  tlu2_linear_nearest_prelookup(&t11.mField0[0ULL], &t11.mField1[0ULL],
    &t11.mField2[0ULL], &nonscalar2[0ULL], &t27[0ULL], &t13[0ULL], &t14[0ULL]);
  tlu2_1d_linear_nearest_value(&t83[0ULL], &t11.mField0[0ULL], &t11.mField2[0ULL],
    &nonscalar4[0ULL], &t13[0ULL], &t14[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xqnom =
    t83[0ULL] * t97->mX.mX[144ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xxqnom =
    Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xqnom >
    0.02808 ?
    Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xqnom :
    0.02808;
  t27[0ULL] = t97->mX.mX[8ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_v =
    -t97->mX.mX[100ULL] + t97->mX.mX[96ULL];
  tlu2_linear_nearest_prelookup(&t11.mField0[0ULL], &t11.mField1[0ULL],
    &t11.mField2[0ULL], &nonscalar2[0ULL], &t27[0ULL], &t13[0ULL], &t14[0ULL]);
  tlu2_1d_linear_nearest_value(&t83[0ULL], &t11.mField0[0ULL], &t11.mField2[0ULL],
    &nonscalar4[0ULL], &t13[0ULL], &t14[0ULL]);
  t86 = t83[0ULL] * t97->mX.mX[150ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xqnom = t86
    > 0.02808 ? t86 : 0.02808;
  t27[0ULL] = t97->mX.mX[17ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_v =
    -t97->mX.mX[99ULL] + t97->mX.mX[98ULL];
  tlu2_linear_nearest_prelookup(&t11.mField0[0ULL], &t11.mField1[0ULL],
    &t11.mField2[0ULL], &nonscalar2[0ULL], &t27[0ULL], &t13[0ULL], &t14[0ULL]);
  tlu2_1d_linear_nearest_value(&t83[0ULL], &t11.mField0[0ULL], &t11.mField2[0ULL],
    &nonscalar5[0ULL], &t13[0ULL], &t14[0ULL]);
  t87 = t83[0ULL] * t97->mX.mX[155ULL];
  t86 = t87 > 0.033696000000000004 ? t87 : 0.033696000000000004;
  t27[0ULL] = t97->mX.mX[25ULL];
  tlu2_linear_nearest_prelookup(&t2.mField0[0ULL], &t2.mField1[0ULL],
    &t2.mField2[0ULL], &nonscalar2[0ULL], &t27[0ULL], &t13[0ULL], &t14[0ULL]);
  tlu2_1d_linear_nearest_value(&t83[0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL],
    &nonscalar6[0ULL], &t13[0ULL], &t14[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based2_cell_temperature = t83[0ULL]
    * t97->mX.mX[160ULL];
  t87 = Plant_Subsystem_Series_Module_Battery_Table_Based2_cell_temperature >
    0.041184 ?
    Plant_Subsystem_Series_Module_Battery_Table_Based2_cell_temperature :
    0.041184;
  t27[0ULL] = t97->mX.mX[16ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_v =
    -t97->mX.mX[101ULL] + t97->mX.mX[100ULL];
  tlu2_linear_nearest_prelookup(&t2.mField0[0ULL], &t2.mField1[0ULL],
    &t2.mField2[0ULL], &nonscalar2[0ULL], &t27[0ULL], &t13[0ULL], &t14[0ULL]);
  tlu2_1d_linear_nearest_value(&t83[0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL],
    &nonscalar4[0ULL], &t13[0ULL], &t14[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based3_cell_temperature = t83[0ULL]
    * t97->mX.mX[165ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based2_cell_temperature =
    Plant_Subsystem_Series_Module_Battery_Table_Based3_cell_temperature >
    0.02808 ?
    Plant_Subsystem_Series_Module_Battery_Table_Based3_cell_temperature :
    0.02808;
  t27[0ULL] = t97->mX.mX[41ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_v =
    -t97->mX.mX[102ULL] + t97->mX.mX[101ULL];
  tlu2_linear_nearest_prelookup(&t3.mField0[0ULL], &t3.mField1[0ULL],
    &t3.mField2[0ULL], &nonscalar2[0ULL], &t27[0ULL], &t13[0ULL], &t14[0ULL]);
  tlu2_1d_linear_nearest_value(&t83[0ULL], &t3.mField0[0ULL], &t3.mField2[0ULL],
    &nonscalar4[0ULL], &t13[0ULL], &t14[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_xxqnom =
    t83[0ULL] * t97->mX.mX[170ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based3_cell_temperature =
    Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_xxqnom >
    0.02808 ?
    Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_xxqnom :
    0.02808;
  t27[0ULL] = t97->mX.mX[49ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_v =
    -t97->mX.mX[103ULL] + t97->mX.mX[102ULL];
  tlu2_linear_nearest_prelookup(&t3.mField0[0ULL], &t3.mField1[0ULL],
    &t3.mField2[0ULL], &nonscalar2[0ULL], &t27[0ULL], &t13[0ULL], &t14[0ULL]);
  tlu2_1d_linear_nearest_value(&t83[0ULL], &t3.mField0[0ULL], &t3.mField2[0ULL],
    &nonscalar4[0ULL], &t13[0ULL], &t14[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based5_cell_temperature = t83[0ULL]
    * t97->mX.mX[175ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_xxqnom =
    Plant_Subsystem_Series_Module_Battery_Table_Based5_cell_temperature >
    0.02808 ?
    Plant_Subsystem_Series_Module_Battery_Table_Based5_cell_temperature :
    0.02808;
  t27[0ULL] = t97->mX.mX[57ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_v =
    -t97->mX.mX[104ULL] + t97->mX.mX[103ULL];
  tlu2_linear_nearest_prelookup(&t2.mField0[0ULL], &t2.mField1[0ULL],
    &t2.mField2[0ULL], &nonscalar2[0ULL], &t27[0ULL], &t13[0ULL], &t14[0ULL]);
  tlu2_1d_linear_nearest_value(&t83[0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL],
    &nonscalar4[0ULL], &t13[0ULL], &t14[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based6_cell_temperature = t83[0ULL]
    * t97->mX.mX[180ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based5_cell_temperature =
    Plant_Subsystem_Series_Module_Battery_Table_Based6_cell_temperature >
    0.02808 ?
    Plant_Subsystem_Series_Module_Battery_Table_Based6_cell_temperature :
    0.02808;
  t27[0ULL] = t97->mX.mX[65ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_v =
    -t97->mX.mX[105ULL] + t97->mX.mX[104ULL];
  tlu2_linear_nearest_prelookup(&t2.mField0[0ULL], &t2.mField1[0ULL],
    &t2.mField2[0ULL], &nonscalar2[0ULL], &t27[0ULL], &t13[0ULL], &t14[0ULL]);
  tlu2_1d_linear_nearest_value(&t83[0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL],
    &nonscalar4[0ULL], &t13[0ULL], &t14[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based7_cell_temperature = t83[0ULL]
    * t97->mX.mX[185ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based6_cell_temperature =
    Plant_Subsystem_Series_Module_Battery_Table_Based7_cell_temperature >
    0.02808 ?
    Plant_Subsystem_Series_Module_Battery_Table_Based7_cell_temperature :
    0.02808;
  t27[0ULL] = t97->mX.mX[73ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based7_electricalModel_v =
    -t97->mX.mX[106ULL] + t97->mX.mX[105ULL];
  tlu2_linear_nearest_prelookup(&t11.mField0[0ULL], &t11.mField1[0ULL],
    &t11.mField2[0ULL], &nonscalar2[0ULL], &t27[0ULL], &t13[0ULL], &t14[0ULL]);
  tlu2_1d_linear_nearest_value(&t83[0ULL], &t11.mField0[0ULL], &t11.mField2[0ULL],
    &nonscalar4[0ULL], &t13[0ULL], &t14[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based8_cell_temperature = t83[0ULL]
    * t97->mX.mX[190ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based7_cell_temperature =
    Plant_Subsystem_Series_Module_Battery_Table_Based8_cell_temperature >
    0.02808 ?
    Plant_Subsystem_Series_Module_Battery_Table_Based8_cell_temperature :
    0.02808;
  t27[0ULL] = t97->mX.mX[81ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_v =
    -t97->mX.mX[107ULL] + t97->mX.mX[106ULL];
  tlu2_linear_nearest_prelookup(&t11.mField0[0ULL], &t11.mField1[0ULL],
    &t11.mField2[0ULL], &nonscalar2[0ULL], &t27[0ULL], &t13[0ULL], &t14[0ULL]);
  tlu2_1d_linear_nearest_value(&t83[0ULL], &t11.mField0[0ULL], &t11.mField2[0ULL],
    &nonscalar4[0ULL], &t13[0ULL], &t14[0ULL]);
  t95 = t83[0ULL] * t97->mX.mX[195ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based8_cell_temperature = t95 >
    0.02808 ? t95 : 0.02808;
  t27[0ULL] = t97->mX.mX[26ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_v =
    -t97->mX.mX[98ULL] + t97->mX.mX[107ULL];
  tlu2_linear_nearest_prelookup(&t11.mField0[0ULL], &t11.mField1[0ULL],
    &t11.mField2[0ULL], &nonscalar2[0ULL], &t27[0ULL], &t13[0ULL], &t14[0ULL]);
  tlu2_1d_linear_nearest_value(&t27[0ULL], &t11.mField0[0ULL], &t11.mField2[0ULL],
    &nonscalar4[0ULL], &t13[0ULL], &t14[0ULL]);
  t95 = t27[0ULL] * t97->mX.mX[200ULL];
  t95 = t95 > 0.02808 ? t95 : 0.02808;
  out->mASSERT.mX[0ULL] = (int32_T)(t97->mM.mX[89ULL] != 0);
  out->mASSERT.mX[1ULL] = (int32_T)(t97->mM.mX[90ULL] != 0);
  out->mASSERT.mX[2ULL] = (int32_T)(t97->mM.mX[91ULL] != 0);
  out->mASSERT.mX[3ULL] = (int32_T)(t97->mX.mX[147ULL] >= 0.0);
  out->mASSERT.mX[4ULL] = (int32_T)(t97->mX.mX[147ULL] <= 1.0);
  out->mASSERT.mX[5ULL] = (int32_T)(t97->mX.mX[97ULL] >= 2.25);
  out->mASSERT.mX[6ULL] = (int32_T)(t97->mX.mX[97ULL] <= pmf_get_inf());
  out->mASSERT.mX[7ULL] = (int32_T)(t97->mM.mX[92ULL] != 0);
  out->mASSERT.mX[8ULL] = (int32_T)(t97->mM.mX[93ULL] != 0);
  out->mASSERT.mX[9ULL] = (int32_T)(t97->mM.mX[94ULL] != 0);
  out->mASSERT.mX[10ULL] = (int32_T)(t97->mM.mX[95ULL] != 0);
  out->mASSERT.mX[11ULL] = (int32_T)(t97->mM.mX[96ULL] != 0);
  out->mASSERT.mX[12ULL] = (int32_T)(t97->mM.mX[97ULL] != 0);
  out->mASSERT.mX[13ULL] = (int32_T)(t97->mX.mX[153ULL] >= 0.0);
  out->mASSERT.mX[14ULL] = (int32_T)(t97->mX.mX[153ULL] <= 1.0);
  out->mASSERT.mX[15ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_v >=
     2.25);
  out->mASSERT.mX[16ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_v <=
     pmf_get_inf());
  out->mASSERT.mX[17ULL] = (int32_T)(t97->mM.mX[98ULL] != 0);
  out->mASSERT.mX[18ULL] = (int32_T)(t97->mM.mX[100ULL] != 0);
  out->mASSERT.mX[19ULL] = (int32_T)(t97->mM.mX[101ULL] != 0);
  out->mASSERT.mX[20ULL] = (int32_T)(t97->mM.mX[102ULL] != 0);
  out->mASSERT.mX[21ULL] = (int32_T)(t97->mM.mX[103ULL] != 0);
  out->mASSERT.mX[22ULL] = (int32_T)(t97->mM.mX[104ULL] != 0);
  out->mASSERT.mX[23ULL] = (int32_T)(t97->mX.mX[158ULL] >= 0.0);
  out->mASSERT.mX[24ULL] = (int32_T)(t97->mX.mX[158ULL] <= 1.0);
  out->mASSERT.mX[25ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_v >=
     2.25);
  out->mASSERT.mX[26ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_v <=
     pmf_get_inf());
  out->mASSERT.mX[27ULL] = (int32_T)(t97->mM.mX[105ULL] != 0);
  out->mASSERT.mX[28ULL] = (int32_T)(t97->mM.mX[106ULL] != 0);
  out->mASSERT.mX[29ULL] = (int32_T)(t97->mM.mX[107ULL] != 0);
  out->mASSERT.mX[30ULL] = (int32_T)(t97->mM.mX[108ULL] != 0);
  out->mASSERT.mX[31ULL] = (int32_T)(t97->mM.mX[109ULL] != 0);
  out->mASSERT.mX[32ULL] = (int32_T)(t97->mM.mX[111ULL] != 0);
  out->mASSERT.mX[33ULL] = (int32_T)(t97->mX.mX[163ULL] >= 0.0);
  out->mASSERT.mX[34ULL] = (int32_T)(t97->mX.mX[163ULL] <= 1.0);
  out->mASSERT.mX[35ULL] = (int32_T)(t97->mX.mX[99ULL] >= 2.25);
  out->mASSERT.mX[36ULL] = (int32_T)(t97->mX.mX[99ULL] <= pmf_get_inf());
  out->mASSERT.mX[37ULL] = (int32_T)(t97->mM.mX[112ULL] != 0);
  out->mASSERT.mX[38ULL] = (int32_T)(t97->mM.mX[113ULL] != 0);
  out->mASSERT.mX[39ULL] = (int32_T)(t97->mM.mX[114ULL] != 0);
  out->mASSERT.mX[40ULL] = (int32_T)(t97->mM.mX[115ULL] != 0);
  out->mASSERT.mX[41ULL] = (int32_T)(t97->mM.mX[116ULL] != 0);
  out->mASSERT.mX[42ULL] = (int32_T)(t97->mM.mX[117ULL] != 0);
  out->mASSERT.mX[43ULL] = (int32_T)(t97->mX.mX[168ULL] >= 0.0);
  out->mASSERT.mX[44ULL] = (int32_T)(t97->mX.mX[168ULL] <= 1.0);
  out->mASSERT.mX[45ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_v >=
     2.25);
  out->mASSERT.mX[46ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_v <=
     pmf_get_inf());
  out->mASSERT.mX[47ULL] = (int32_T)(t97->mM.mX[118ULL] != 0);
  out->mASSERT.mX[48ULL] = (int32_T)(t97->mM.mX[119ULL] != 0);
  out->mASSERT.mX[49ULL] = (int32_T)(t97->mM.mX[120ULL] != 0);
  out->mASSERT.mX[50ULL] = (int32_T)(t97->mM.mX[122ULL] != 0);
  out->mASSERT.mX[51ULL] = (int32_T)(t97->mM.mX[123ULL] != 0);
  out->mASSERT.mX[52ULL] = (int32_T)(t97->mM.mX[124ULL] != 0);
  out->mASSERT.mX[53ULL] = (int32_T)(t97->mX.mX[173ULL] >= 0.0);
  out->mASSERT.mX[54ULL] = (int32_T)(t97->mX.mX[173ULL] <= 1.0);
  out->mASSERT.mX[55ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_v >=
     2.25);
  out->mASSERT.mX[56ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_v <=
     pmf_get_inf());
  out->mASSERT.mX[57ULL] = (int32_T)(t97->mM.mX[125ULL] != 0);
  out->mASSERT.mX[58ULL] = (int32_T)(t97->mM.mX[126ULL] != 0);
  out->mASSERT.mX[59ULL] = (int32_T)(t97->mM.mX[127ULL] != 0);
  out->mASSERT.mX[60ULL] = (int32_T)(t97->mM.mX[128ULL] != 0);
  out->mASSERT.mX[61ULL] = (int32_T)(t97->mM.mX[129ULL] != 0);
  out->mASSERT.mX[62ULL] = (int32_T)(t97->mM.mX[130ULL] != 0);
  out->mASSERT.mX[63ULL] = (int32_T)(t97->mX.mX[178ULL] >= 0.0);
  out->mASSERT.mX[64ULL] = (int32_T)(t97->mX.mX[178ULL] <= 1.0);
  out->mASSERT.mX[65ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_v >=
     2.25);
  out->mASSERT.mX[66ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_v <=
     pmf_get_inf());
  out->mASSERT.mX[67ULL] = (int32_T)(t97->mM.mX[131ULL] != 0);
  out->mASSERT.mX[68ULL] = (int32_T)(t97->mM.mX[3ULL] != 0);
  out->mASSERT.mX[69ULL] = (int32_T)(t97->mM.mX[4ULL] != 0);
  out->mASSERT.mX[70ULL] = (int32_T)(t97->mM.mX[5ULL] != 0);
  out->mASSERT.mX[71ULL] = (int32_T)(t97->mM.mX[6ULL] != 0);
  out->mASSERT.mX[72ULL] = (int32_T)(t97->mM.mX[7ULL] != 0);
  out->mASSERT.mX[73ULL] = (int32_T)(t97->mX.mX[183ULL] >= 0.0);
  out->mASSERT.mX[74ULL] = (int32_T)(t97->mX.mX[183ULL] <= 1.0);
  out->mASSERT.mX[75ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_v >=
     2.25);
  out->mASSERT.mX[76ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_v <=
     pmf_get_inf());
  out->mASSERT.mX[77ULL] = (int32_T)(t97->mM.mX[8ULL] != 0);
  out->mASSERT.mX[78ULL] = (int32_T)(t97->mM.mX[9ULL] != 0);
  out->mASSERT.mX[79ULL] = (int32_T)(t97->mM.mX[10ULL] != 0);
  out->mASSERT.mX[80ULL] = (int32_T)(t97->mM.mX[11ULL] != 0);
  out->mASSERT.mX[81ULL] = (int32_T)(t97->mM.mX[12ULL] != 0);
  out->mASSERT.mX[82ULL] = (int32_T)(t97->mM.mX[14ULL] != 0);
  out->mASSERT.mX[83ULL] = (int32_T)(t97->mX.mX[188ULL] >= 0.0);
  out->mASSERT.mX[84ULL] = (int32_T)(t97->mX.mX[188ULL] <= 1.0);
  out->mASSERT.mX[85ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_v >=
     2.25);
  out->mASSERT.mX[86ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_v <=
     pmf_get_inf());
  out->mASSERT.mX[87ULL] = (int32_T)(t97->mM.mX[15ULL] != 0);
  out->mASSERT.mX[88ULL] = (int32_T)(t97->mM.mX[16ULL] != 0);
  out->mASSERT.mX[89ULL] = (int32_T)(t97->mM.mX[17ULL] != 0);
  out->mASSERT.mX[90ULL] = (int32_T)(t97->mM.mX[18ULL] != 0);
  out->mASSERT.mX[91ULL] = (int32_T)(t97->mM.mX[19ULL] != 0);
  out->mASSERT.mX[92ULL] = (int32_T)(t97->mM.mX[20ULL] != 0);
  out->mASSERT.mX[93ULL] = (int32_T)(t97->mX.mX[193ULL] >= 0.0);
  out->mASSERT.mX[94ULL] = (int32_T)(t97->mX.mX[193ULL] <= 1.0);
  out->mASSERT.mX[95ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based7_electricalModel_v >=
     2.25);
  out->mASSERT.mX[96ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based7_electricalModel_v <=
     pmf_get_inf());
  out->mASSERT.mX[97ULL] = (int32_T)(t97->mM.mX[21ULL] != 0);
  out->mASSERT.mX[98ULL] = (int32_T)(t97->mM.mX[22ULL] != 0);
  out->mASSERT.mX[99ULL] = (int32_T)(t97->mM.mX[23ULL] != 0);
  out->mASSERT.mX[100ULL] = (int32_T)(t97->mM.mX[25ULL] != 0);
  out->mASSERT.mX[101ULL] = (int32_T)(t97->mM.mX[26ULL] != 0);
  out->mASSERT.mX[102ULL] = (int32_T)(t97->mM.mX[27ULL] != 0);
  out->mASSERT.mX[103ULL] = (int32_T)(t97->mX.mX[198ULL] >= 0.0);
  out->mASSERT.mX[104ULL] = (int32_T)(t97->mX.mX[198ULL] <= 1.0);
  out->mASSERT.mX[105ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_v >=
     2.25);
  out->mASSERT.mX[106ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_v <=
     pmf_get_inf());
  out->mASSERT.mX[107ULL] = (int32_T)(t97->mM.mX[28ULL] != 0);
  out->mASSERT.mX[108ULL] = (int32_T)(t97->mM.mX[29ULL] != 0);
  out->mASSERT.mX[109ULL] = (int32_T)(t97->mM.mX[30ULL] != 0);
  out->mASSERT.mX[110ULL] = (int32_T)(t97->mM.mX[31ULL] != 0);
  out->mASSERT.mX[111ULL] = (int32_T)(t97->mM.mX[32ULL] != 0);
  out->mASSERT.mX[112ULL] = (int32_T)(t97->mM.mX[33ULL] != 0);
  out->mASSERT.mX[113ULL] = (int32_T)(t97->mX.mX[203ULL] >= 0.0);
  out->mASSERT.mX[114ULL] = (int32_T)(t97->mX.mX[203ULL] <= 1.0);
  out->mASSERT.mX[115ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_v >=
     2.25);
  out->mASSERT.mX[116ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_v <=
     pmf_get_inf());
  out->mASSERT.mX[117ULL] = (int32_T)(t97->mM.mX[34ULL] != 0);
  out->mASSERT.mX[118ULL] = (int32_T)(t97->mM.mX[36ULL] != 0);
  out->mASSERT.mX[119ULL] = (int32_T)(t97->mM.mX[37ULL] != 0);
  out->mASSERT.mX[120ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xxqnom !=
     0.0);
  out->mASSERT.mX[121ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xqnom !=
     0.0);
  out->mASSERT.mX[122ULL] = (int32_T)(t86 != 0.0);
  out->mASSERT.mX[123ULL] = (int32_T)(t87 != 0.0);
  out->mASSERT.mX[124ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based2_cell_temperature != 0.0);
  out->mASSERT.mX[125ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based3_cell_temperature != 0.0);
  out->mASSERT.mX[126ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_xxqnom
     != 0.0);
  out->mASSERT.mX[127ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based5_cell_temperature != 0.0);
  out->mASSERT.mX[128ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based6_cell_temperature != 0.0);
  out->mASSERT.mX[129ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based7_cell_temperature != 0.0);
  out->mASSERT.mX[130ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based8_cell_temperature != 0.0);
  out->mASSERT.mX[131ULL] = (int32_T)(t95 != 0.0);
  out->mASSERT.mX[132ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xxqnom !=
     0.0);
  out->mASSERT.mX[133ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xqnom !=
     0.0);
  out->mASSERT.mX[134ULL] = (int32_T)(t86 != 0.0);
  out->mASSERT.mX[135ULL] = (int32_T)(t87 != 0.0);
  out->mASSERT.mX[136ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based2_cell_temperature != 0.0);
  out->mASSERT.mX[137ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based3_cell_temperature != 0.0);
  out->mASSERT.mX[138ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_xxqnom
     != 0.0);
  out->mASSERT.mX[139ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based5_cell_temperature != 0.0);
  out->mASSERT.mX[140ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based6_cell_temperature != 0.0);
  out->mASSERT.mX[141ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based7_cell_temperature != 0.0);
  out->mASSERT.mX[142ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based8_cell_temperature != 0.0);
  out->mASSERT.mX[143ULL] = (int32_T)(t95 != 0.0);
  (void)LC;
  (void)out;
  return 0;
}
