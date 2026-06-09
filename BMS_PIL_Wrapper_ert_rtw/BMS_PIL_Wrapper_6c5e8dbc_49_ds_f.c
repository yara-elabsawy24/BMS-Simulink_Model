/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'BMS_PIL_Wrapper/Plant/Solver Configuration'.
 */

#include "ne_ds.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_sys_struct.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_f.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_externals.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T BMS_PIL_Wrapper_6c5e8dbc_49_ds_f(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t529, NeDsMethodOutput *out)
{
  static real_T _cg_const_1[5] = { 263.15, 273.15, 298.15, 313.15, 328.15 };

  ETTSf3049b48 t11;
  ETTSf3049b48 t12;
  ETTSf3049b48 t14;
  ETTSf3049b48 t2;
  ETTSf3049b48 t21;
  ETTSf3049b48 t22;
  ETTSf3049b48 t26;
  ETTSf3049b48 t27;
  ETTSf3049b48 t32;
  ETTSf3049b48 t6;
  ETTSf3049b48 t7;
  ETTSf3049b48 t8;
  real_T nonscalar2[5];
  real_T nonscalar4[5];
  real_T nonscalar5[5];
  real_T nonscalar6[5];
  real_T t198[1];
  real_T t376[1];
  real_T t399[1];
  real_T t400[1];
  real_T t401[1];
  real_T t402[1];
  real_T t403[1];
  real_T t404[1];
  real_T t405[1];
  real_T t406[1];
  real_T t407[1];
  real_T t408[1];
  real_T t409[1];
  real_T t410[1];
  real_T t411[1];
  real_T t412[1];
  real_T t413[1];
  real_T t414[1];
  real_T t415[1];
  real_T t416[1];
  real_T t417[1];
  real_T t418[1];
  real_T t419[1];
  real_T t420[1];
  real_T t421[1];
  real_T t422[1];
  real_T t423[1];
  real_T t424[1];
  real_T t425[1];
  real_T t426[1];
  real_T t427[1];
  real_T t428[1];
  real_T t429[1];
  real_T t430[1];
  real_T t431[1];
  real_T t432[1];
  real_T Plant_Subsystem_Monitoring_Diode11_i;
  real_T Plant_Subsystem_Monitoring_Diode1_i;
  real_T Plant_Subsystem_Monitoring_Diode5_i;
  real_T Plant_Subsystem_Monitoring_Diode6_i;
  real_T Plant_Subsystem_Monitoring_Diode7_i;
  real_T Plant_Subsystem_Monitoring_Diode8_i;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_i;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_i;
  real_T
    Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xqnom;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_i;
  real_T
    Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xVint;
  real_T
    Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xqnom;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_i;
  real_T
    Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_xqnom;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i;
  real_T
    Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_xVint;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based4_cell_temperature;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_i;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based5_cell_temperature;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_i;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based6_cell_temperature;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_i;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based7_cell_temperature;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based7_electricalModel_i;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based8_cell_temperature;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_i;
  real_T
    Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_xqnom;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_i;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_i;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xVint;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xqnom;
  real_T intrm_sf_mf_11;
  real_T intrm_sf_mf_4;
  real_T intrm_sf_mf_5;
  real_T intrm_sf_mf_6;
  real_T intrm_sf_mf_7;
  real_T intrm_sf_mf_8;
  real_T intrm_sf_mf_9;
  real_T t513;
  real_T t528;
  real_T t63;
  real_T t65;
  real_T t66;
  real_T t67;
  real_T zc_int0;
  real_T zc_int1;
  real_T zc_int20;
  real_T zc_int21;
  real_T zc_int24;
  real_T zc_int27;
  real_T zc_int3;
  real_T zc_int31;
  real_T zc_int32;
  real_T zc_int33;
  real_T zc_int34;
  real_T zc_int38;
  real_T zc_int39;
  real_T zc_int4;
  real_T zc_int40;
  real_T zc_int5;
  real_T zc_int6;
  real_T zc_int7;
  size_t t241[1];
  size_t t392[1];
  size_t t74[1];
  size_t t449;
  size_t t459;
  size_t t466;
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
  t528 = (t529->mX.mX[108ULL] * -0.02564102564102564 + t529->mX.mX[109ULL] *
          -0.02564102564102564) + t529->mX.mX[97ULL] * 0.02564102564102564;
  Plant_Subsystem_Monitoring_Diode1_i = ((t529->mX.mX[96ULL] *
    0.02564102564102564 + t529->mX.mX[100ULL] * -0.02564102564102564) +
    t529->mX.mX[111ULL] * -0.02564102564102564) + t529->mX.mX[112ULL] *
    -0.02564102564102564;
  t63 = ((t529->mX.mX[98ULL] * 0.02564102564102564 + t529->mX.mX[99ULL] *
          -0.02564102564102564) + t529->mX.mX[114ULL] * -0.02564102564102564) +
    t529->mX.mX[115ULL] * -0.02564102564102564;
  Plant_Subsystem_Monitoring_Diode11_i = (t529->mX.mX[99ULL] *
    0.02564102564102564 + t529->mX.mX[117ULL] * -0.02564102564102564) +
    t529->mX.mX[118ULL] * -0.02564102564102564;
  t65 = ((t529->mX.mX[100ULL] * 0.02564102564102564 + t529->mX.mX[101ULL] *
          -0.02564102564102564) + t529->mX.mX[120ULL] * -0.02564102564102564) +
    t529->mX.mX[121ULL] * -0.02564102564102564;
  t66 = ((t529->mX.mX[101ULL] * 0.02564102564102564 + t529->mX.mX[102ULL] *
          -0.02564102564102564) + t529->mX.mX[123ULL] * -0.02564102564102564) +
    t529->mX.mX[124ULL] * -0.02564102564102564;
  t67 = ((t529->mX.mX[102ULL] * 0.02564102564102564 + t529->mX.mX[103ULL] *
          -0.02564102564102564) + t529->mX.mX[126ULL] * -0.02564102564102564) +
    t529->mX.mX[127ULL] * -0.02564102564102564;
  Plant_Subsystem_Monitoring_Diode5_i = ((t529->mX.mX[103ULL] *
    0.02564102564102564 + t529->mX.mX[104ULL] * -0.02564102564102564) +
    t529->mX.mX[129ULL] * -0.02564102564102564) + t529->mX.mX[130ULL] *
    -0.02564102564102564;
  Plant_Subsystem_Monitoring_Diode6_i = ((t529->mX.mX[104ULL] *
    0.02564102564102564 + t529->mX.mX[105ULL] * -0.02564102564102564) +
    t529->mX.mX[132ULL] * -0.02564102564102564) + t529->mX.mX[133ULL] *
    -0.02564102564102564;
  Plant_Subsystem_Monitoring_Diode7_i = ((t529->mX.mX[105ULL] *
    0.02564102564102564 + t529->mX.mX[106ULL] * -0.02564102564102564) +
    t529->mX.mX[135ULL] * -0.02564102564102564) + t529->mX.mX[136ULL] *
    -0.02564102564102564;
  Plant_Subsystem_Monitoring_Diode8_i = ((t529->mX.mX[106ULL] *
    0.02564102564102564 + t529->mX.mX[107ULL] * -0.02564102564102564) +
    t529->mX.mX[138ULL] * -0.02564102564102564) + t529->mX.mX[139ULL] *
    -0.02564102564102564;
  t513 = ((t529->mX.mX[98ULL] * -0.02564102564102564 + t529->mX.mX[107ULL] *
           0.02564102564102564) + t529->mX.mX[141ULL] * -0.02564102564102564) +
    t529->mX.mX[142ULL] * -0.02564102564102564;
  Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_i =
    (((t529->mX.mX[108ULL] * 0.02564102564102564 + t529->mX.mX[109ULL] *
       0.02564102564102564) + t529->mX.mX[97ULL] * -0.02564102564102564) +
     t529->mU.mX[0ULL]) + t529->mU.mX[1ULL];
  t198[0ULL] = t529->mX.mX[147ULL];
  t241[0] = 11ULL;
  t74[0] = 1ULL;
  tlu2_linear_nearest_prelookup(&t26.mField0[0ULL], &t26.mField1[0ULL],
    &t26.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t198[0ULL],
    &t241[0ULL], &t74[0ULL]);
  t198[0ULL] = t529->mX.mX[0ULL];
  t392[0] = 5ULL;
  tlu2_linear_nearest_prelookup(&t32.mField0[0ULL], &t32.mField1[0ULL],
    &t32.mField2[0ULL], &nonscalar2[0ULL], &t198[0ULL], &t392[0ULL], &t74[0ULL]);
  tlu2_2d_linear_nearest_value(&t376[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], &t32.mField0[0ULL], &t32.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField0, &t241[0ULL], &t392[0ULL], &t74[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xVint =
    t376[0ULL];
  tlu2_2d_linear_nearest_value(&t376[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], &t32.mField0[0ULL], &t32.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField2, &t241[0ULL], &t392[0ULL], &t74[0ULL]);
  zc_int1 = t376[0ULL];
  tlu2_1d_linear_nearest_value(&t376[0ULL], &t32.mField0[0ULL], &t32.mField2
    [0ULL], &nonscalar4[0ULL], &t392[0ULL], &t74[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xqnom =
    t376[0ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_i =
    ((((t529->mX.mX[96ULL] * -0.02564102564102564 + t529->mX.mX[100ULL] *
        0.02564102564102564) + t529->mX.mX[111ULL] * 0.02564102564102564) +
      t529->mX.mX[112ULL] * 0.02564102564102564) + t529->mU.mX[0ULL]) +
    t529->mU.mX[1ULL];
  t198[0ULL] = t529->mX.mX[153ULL];
  tlu2_linear_nearest_prelookup(&t27.mField0[0ULL], &t27.mField1[0ULL],
    &t27.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t198[0ULL],
    &t241[0ULL], &t74[0ULL]);
  t198[0ULL] = t529->mX.mX[8ULL];
  tlu2_linear_nearest_prelookup(&t32.mField0[0ULL], &t32.mField1[0ULL],
    &t32.mField2[0ULL], &nonscalar2[0ULL], &t198[0ULL], &t392[0ULL], &t74[0ULL]);
  tlu2_2d_linear_nearest_value(&t376[0ULL], &t27.mField0[0ULL], &t27.mField2
    [0ULL], &t32.mField0[0ULL], &t32.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField0, &t241[0ULL], &t392[0ULL], &t74[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xVint =
    t376[0ULL];
  tlu2_2d_linear_nearest_value(&t376[0ULL], &t27.mField0[0ULL], &t27.mField2
    [0ULL], &t32.mField0[0ULL], &t32.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField2, &t241[0ULL], &t392[0ULL], &t74[0ULL]);
  zc_int20 = t376[0ULL];
  tlu2_1d_linear_nearest_value(&t376[0ULL], &t32.mField0[0ULL], &t32.mField2
    [0ULL], &nonscalar4[0ULL], &t392[0ULL], &t74[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xqnom =
    t376[0ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_i =
    ((((t529->mX.mX[98ULL] * -0.02564102564102564 + t529->mX.mX[99ULL] *
        0.02564102564102564) + t529->mX.mX[114ULL] * 0.02564102564102564) +
      t529->mX.mX[115ULL] * 0.02564102564102564) + t529->mU.mX[0ULL]) +
    t529->mU.mX[1ULL];
  t198[0ULL] = t529->mX.mX[158ULL];
  tlu2_linear_nearest_prelookup(&t27.mField0[0ULL], &t27.mField1[0ULL],
    &t27.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t198[0ULL],
    &t241[0ULL], &t74[0ULL]);
  t198[0ULL] = t529->mX.mX[17ULL];
  tlu2_linear_nearest_prelookup(&t26.mField0[0ULL], &t26.mField1[0ULL],
    &t26.mField2[0ULL], &nonscalar2[0ULL], &t198[0ULL], &t392[0ULL], &t74[0ULL]);
  tlu2_2d_linear_nearest_value(&t376[0ULL], &t27.mField0[0ULL], &t27.mField2
    [0ULL], &t26.mField0[0ULL], &t26.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField0, &t241[0ULL], &t392[0ULL], &t74[0ULL]);
  zc_int38 = t376[0ULL];
  tlu2_2d_linear_nearest_value(&t376[0ULL], &t27.mField0[0ULL], &t27.mField2
    [0ULL], &t26.mField0[0ULL], &t26.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField2, &t241[0ULL], &t392[0ULL], &t74[0ULL]);
  zc_int5 = t376[0ULL];
  tlu2_1d_linear_nearest_value(&t376[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], &nonscalar5[0ULL], &t392[0ULL], &t74[0ULL]);
  zc_int27 = t376[0ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_i =
    (((t529->mX.mX[99ULL] * -0.02564102564102564 + t529->mX.mX[117ULL] *
       0.02564102564102564) + t529->mX.mX[118ULL] * 0.02564102564102564) +
     t529->mU.mX[0ULL]) + t529->mU.mX[1ULL];
  t198[0ULL] = t529->mX.mX[163ULL];
  tlu2_linear_nearest_prelookup(&t32.mField0[0ULL], &t32.mField1[0ULL],
    &t32.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t198[0ULL],
    &t241[0ULL], &t74[0ULL]);
  t198[0ULL] = t529->mX.mX[25ULL];
  tlu2_linear_nearest_prelookup(&t7.mField0[0ULL], &t7.mField1[0ULL],
    &t7.mField2[0ULL], &nonscalar2[0ULL], &t198[0ULL], &t392[0ULL], &t74[0ULL]);
  tlu2_2d_linear_nearest_value(&t376[0ULL], &t32.mField0[0ULL], &t32.mField2
    [0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t241[0ULL], &t392[0ULL], &t74[0ULL]);
  zc_int39 = t376[0ULL];
  tlu2_2d_linear_nearest_value(&t376[0ULL], &t32.mField0[0ULL], &t32.mField2
    [0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t241[0ULL], &t392[0ULL], &t74[0ULL]);
  zc_int7 = t376[0ULL];
  tlu2_1d_linear_nearest_value(&t376[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    &nonscalar6[0ULL], &t392[0ULL], &t74[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xqnom =
    t376[0ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_i =
    ((((t529->mX.mX[100ULL] * -0.02564102564102564 + t529->mX.mX[101ULL] *
        0.02564102564102564) + t529->mX.mX[120ULL] * 0.02564102564102564) +
      t529->mX.mX[121ULL] * 0.02564102564102564) + t529->mU.mX[0ULL]) +
    t529->mU.mX[1ULL];
  t198[0ULL] = t529->mX.mX[168ULL];
  tlu2_linear_nearest_prelookup(&t27.mField0[0ULL], &t27.mField1[0ULL],
    &t27.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t198[0ULL],
    &t241[0ULL], &t74[0ULL]);
  t198[0ULL] = t529->mX.mX[16ULL];
  tlu2_linear_nearest_prelookup(&t26.mField0[0ULL], &t26.mField1[0ULL],
    &t26.mField2[0ULL], &nonscalar2[0ULL], &t198[0ULL], &t392[0ULL], &t74[0ULL]);
  tlu2_2d_linear_nearest_value(&t376[0ULL], &t27.mField0[0ULL], &t27.mField2
    [0ULL], &t26.mField0[0ULL], &t26.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField0, &t241[0ULL], &t392[0ULL], &t74[0ULL]);
  zc_int40 = t376[0ULL];
  tlu2_2d_linear_nearest_value(&t376[0ULL], &t27.mField0[0ULL], &t27.mField2
    [0ULL], &t26.mField0[0ULL], &t26.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField2, &t241[0ULL], &t392[0ULL], &t74[0ULL]);
  intrm_sf_mf_4 = t376[0ULL];
  tlu2_1d_linear_nearest_value(&t376[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], &nonscalar4[0ULL], &t392[0ULL], &t74[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_xqnom =
    t376[0ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i =
    ((((t529->mX.mX[101ULL] * -0.02564102564102564 + t529->mX.mX[102ULL] *
        0.02564102564102564) + t529->mX.mX[123ULL] * 0.02564102564102564) +
      t529->mX.mX[124ULL] * 0.02564102564102564) + t529->mU.mX[0ULL]) +
    t529->mU.mX[1ULL];
  t198[0ULL] = t529->mX.mX[173ULL];
  tlu2_linear_nearest_prelookup(&t27.mField0[0ULL], &t27.mField1[0ULL],
    &t27.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t198[0ULL],
    &t241[0ULL], &t74[0ULL]);
  t198[0ULL] = t529->mX.mX[41ULL];
  tlu2_linear_nearest_prelookup(&t26.mField0[0ULL], &t26.mField1[0ULL],
    &t26.mField2[0ULL], &nonscalar2[0ULL], &t198[0ULL], &t392[0ULL], &t74[0ULL]);
  tlu2_2d_linear_nearest_value(&t376[0ULL], &t27.mField0[0ULL], &t27.mField2
    [0ULL], &t26.mField0[0ULL], &t26.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField0, &t241[0ULL], &t392[0ULL], &t74[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_xVint =
    t376[0ULL];
  tlu2_2d_linear_nearest_value(&t376[0ULL], &t27.mField0[0ULL], &t27.mField2
    [0ULL], &t26.mField0[0ULL], &t26.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField2, &t241[0ULL], &t392[0ULL], &t74[0ULL]);
  intrm_sf_mf_5 = t376[0ULL];
  tlu2_1d_linear_nearest_value(&t376[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], &nonscalar4[0ULL], &t392[0ULL], &t74[0ULL]);
  zc_int3 = t376[0ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_i =
    ((((t529->mX.mX[102ULL] * -0.02564102564102564 + t529->mX.mX[103ULL] *
        0.02564102564102564) + t529->mX.mX[126ULL] * 0.02564102564102564) +
      t529->mX.mX[127ULL] * 0.02564102564102564) + t529->mU.mX[0ULL]) +
    t529->mU.mX[1ULL];
  t198[0ULL] = t529->mX.mX[178ULL];
  tlu2_linear_nearest_prelookup(&t2.mField0[0ULL], &t2.mField1[0ULL],
    &t2.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t198[0ULL],
    &t241[0ULL], &t74[0ULL]);
  t198[0ULL] = t529->mX.mX[49ULL];
  tlu2_linear_nearest_prelookup(&t7.mField0[0ULL], &t7.mField1[0ULL],
    &t7.mField2[0ULL], &nonscalar2[0ULL], &t198[0ULL], &t392[0ULL], &t74[0ULL]);
  tlu2_2d_linear_nearest_value(&t376[0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL],
    &t7.mField0[0ULL], &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t241[0ULL], &t392[0ULL], &t74[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based4_cell_temperature = t376
    [0ULL];
  tlu2_2d_linear_nearest_value(&t376[0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL],
    &t7.mField0[0ULL], &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t241[0ULL], &t392[0ULL], &t74[0ULL]);
  intrm_sf_mf_6 = t376[0ULL];
  tlu2_1d_linear_nearest_value(&t376[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    &nonscalar4[0ULL], &t392[0ULL], &t74[0ULL]);
  zc_int31 = t376[0ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_i =
    ((((t529->mX.mX[103ULL] * -0.02564102564102564 + t529->mX.mX[104ULL] *
        0.02564102564102564) + t529->mX.mX[129ULL] * 0.02564102564102564) +
      t529->mX.mX[130ULL] * 0.02564102564102564) + t529->mU.mX[0ULL]) +
    t529->mU.mX[1ULL];
  t198[0ULL] = t529->mX.mX[183ULL];
  tlu2_linear_nearest_prelookup(&t7.mField0[0ULL], &t7.mField1[0ULL],
    &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t198[0ULL],
    &t241[0ULL], &t74[0ULL]);
  t198[0ULL] = t529->mX.mX[57ULL];
  tlu2_linear_nearest_prelookup(&t26.mField0[0ULL], &t26.mField1[0ULL],
    &t26.mField2[0ULL], &nonscalar2[0ULL], &t198[0ULL], &t392[0ULL], &t74[0ULL]);
  tlu2_2d_linear_nearest_value(&t376[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    &t26.mField0[0ULL], &t26.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t241[0ULL], &t392[0ULL], &t74[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based5_cell_temperature = t376
    [0ULL];
  tlu2_2d_linear_nearest_value(&t376[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    &t26.mField0[0ULL], &t26.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t241[0ULL], &t392[0ULL], &t74[0ULL]);
  intrm_sf_mf_7 = t376[0ULL];
  tlu2_1d_linear_nearest_value(&t376[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], &nonscalar4[0ULL], &t392[0ULL], &t74[0ULL]);
  zc_int32 = t376[0ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_i =
    ((((t529->mX.mX[104ULL] * -0.02564102564102564 + t529->mX.mX[105ULL] *
        0.02564102564102564) + t529->mX.mX[132ULL] * 0.02564102564102564) +
      t529->mX.mX[133ULL] * 0.02564102564102564) + t529->mU.mX[0ULL]) +
    t529->mU.mX[1ULL];
  t198[0ULL] = t529->mX.mX[188ULL];
  tlu2_linear_nearest_prelookup(&t27.mField0[0ULL], &t27.mField1[0ULL],
    &t27.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t198[0ULL],
    &t241[0ULL], &t74[0ULL]);
  t198[0ULL] = t529->mX.mX[65ULL];
  tlu2_linear_nearest_prelookup(&t7.mField0[0ULL], &t7.mField1[0ULL],
    &t7.mField2[0ULL], &nonscalar2[0ULL], &t198[0ULL], &t392[0ULL], &t74[0ULL]);
  tlu2_2d_linear_nearest_value(&t376[0ULL], &t27.mField0[0ULL], &t27.mField2
    [0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t241[0ULL], &t392[0ULL], &t74[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based6_cell_temperature = t376
    [0ULL];
  tlu2_2d_linear_nearest_value(&t376[0ULL], &t27.mField0[0ULL], &t27.mField2
    [0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t241[0ULL], &t392[0ULL], &t74[0ULL]);
  intrm_sf_mf_8 = t376[0ULL];
  tlu2_1d_linear_nearest_value(&t376[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    &nonscalar4[0ULL], &t392[0ULL], &t74[0ULL]);
  zc_int33 = t376[0ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based7_electricalModel_i =
    ((((t529->mX.mX[105ULL] * -0.02564102564102564 + t529->mX.mX[106ULL] *
        0.02564102564102564) + t529->mX.mX[135ULL] * 0.02564102564102564) +
      t529->mX.mX[136ULL] * 0.02564102564102564) + t529->mU.mX[0ULL]) +
    t529->mU.mX[1ULL];
  t198[0ULL] = t529->mX.mX[193ULL];
  tlu2_linear_nearest_prelookup(&t27.mField0[0ULL], &t27.mField1[0ULL],
    &t27.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t198[0ULL],
    &t241[0ULL], &t74[0ULL]);
  t198[0ULL] = t529->mX.mX[73ULL];
  tlu2_linear_nearest_prelookup(&t22.mField0[0ULL], &t22.mField1[0ULL],
    &t22.mField2[0ULL], &nonscalar2[0ULL], &t198[0ULL], &t392[0ULL], &t74[0ULL]);
  tlu2_2d_linear_nearest_value(&t376[0ULL], &t27.mField0[0ULL], &t27.mField2
    [0ULL], &t22.mField0[0ULL], &t22.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField0, &t241[0ULL], &t392[0ULL], &t74[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based7_cell_temperature = t376
    [0ULL];
  tlu2_2d_linear_nearest_value(&t376[0ULL], &t27.mField0[0ULL], &t27.mField2
    [0ULL], &t22.mField0[0ULL], &t22.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField2, &t241[0ULL], &t392[0ULL], &t74[0ULL]);
  intrm_sf_mf_9 = t376[0ULL];
  tlu2_1d_linear_nearest_value(&t376[0ULL], &t22.mField0[0ULL], &t22.mField2
    [0ULL], &nonscalar4[0ULL], &t392[0ULL], &t74[0ULL]);
  zc_int34 = t376[0ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_i =
    ((((t529->mX.mX[106ULL] * -0.02564102564102564 + t529->mX.mX[107ULL] *
        0.02564102564102564) + t529->mX.mX[138ULL] * 0.02564102564102564) +
      t529->mX.mX[139ULL] * 0.02564102564102564) + t529->mU.mX[0ULL]) +
    t529->mU.mX[1ULL];
  t198[0ULL] = t529->mX.mX[198ULL];
  tlu2_linear_nearest_prelookup(&t2.mField0[0ULL], &t2.mField1[0ULL],
    &t2.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t198[0ULL],
    &t241[0ULL], &t74[0ULL]);
  t198[0ULL] = t529->mX.mX[81ULL];
  tlu2_linear_nearest_prelookup(&t7.mField0[0ULL], &t7.mField1[0ULL],
    &t7.mField2[0ULL], &nonscalar2[0ULL], &t198[0ULL], &t392[0ULL], &t74[0ULL]);
  tlu2_2d_linear_nearest_value(&t376[0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL],
    &t7.mField0[0ULL], &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t241[0ULL], &t392[0ULL], &t74[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based8_cell_temperature = t376
    [0ULL];
  tlu2_2d_linear_nearest_value(&t376[0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL],
    &t7.mField0[0ULL], &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t241[0ULL], &t392[0ULL], &t74[0ULL]);
  zc_int21 = t376[0ULL];
  tlu2_1d_linear_nearest_value(&t376[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    &nonscalar4[0ULL], &t392[0ULL], &t74[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_xqnom =
    t376[0ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_i =
    ((((t529->mX.mX[98ULL] * 0.02564102564102564 + t529->mX.mX[107ULL] *
        -0.02564102564102564) + t529->mX.mX[141ULL] * 0.02564102564102564) +
      t529->mX.mX[142ULL] * 0.02564102564102564) + t529->mU.mX[0ULL]) +
    t529->mU.mX[1ULL];
  t198[0ULL] = t529->mX.mX[203ULL];
  tlu2_linear_nearest_prelookup(&t22.mField0[0ULL], &t22.mField1[0ULL],
    &t22.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t198[0ULL],
    &t241[0ULL], &t74[0ULL]);
  t198[0ULL] = t529->mX.mX[26ULL];
  tlu2_linear_nearest_prelookup(&t11.mField0[0ULL], &t11.mField1[0ULL],
    &t11.mField2[0ULL], &nonscalar2[0ULL], &t198[0ULL], &t392[0ULL], &t74[0ULL]);
  tlu2_2d_linear_nearest_value(&t376[0ULL], &t22.mField0[0ULL], &t22.mField2
    [0ULL], &t11.mField0[0ULL], &t11.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField0, &t241[0ULL], &t392[0ULL], &t74[0ULL]);
  zc_int24 = t376[0ULL];
  tlu2_2d_linear_nearest_value(&t376[0ULL], &t22.mField0[0ULL], &t22.mField2
    [0ULL], &t11.mField0[0ULL], &t11.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField2, &t241[0ULL], &t392[0ULL], &t74[0ULL]);
  intrm_sf_mf_11 = t376[0ULL];
  tlu2_1d_linear_nearest_value(&t376[0ULL], &t11.mField0[0ULL], &t11.mField2
    [0ULL], &nonscalar4[0ULL], &t392[0ULL], &t74[0ULL]);
  if (t529->mM.mX[1ULL] != 0) {
    zc_int0 = 8.200000000000002E-8;
  } else {
    zc_int0 = t529->mX.mX[145ULL] * zc_int1;
  }

  if (t529->mM.mX[0ULL] != 0) {
    t392[0ULL] = 0ULL;
    for (t466 = 0ULL; t466 < 55ULL; t466++) {
      t449 = t466 / 55ULL;
      t459 = (t466 - t466 % 55ULL) + t392[t449 > 0ULL ? 0ULL : t449];
      if (((const _NeDynamicSystem*)(LC))->mField0[t466] * 1.0E-5 < ((const
            _NeDynamicSystem*)(LC))->mField0[t459 > 54ULL ? 54ULL : t459] *
          1.0E-5) {
        t392[t449 > 0ULL ? 0ULL : t449] = t466 % 55ULL;
      }
    }

    zc_int1 = ((const _NeDynamicSystem*)(LC))->mField0[t392[0ULL] > 54ULL ?
      54ULL : t392[0ULL]] * 1.0E-5;
  } else {
    zc_int1 = t529->mX.mX[146ULL] *
      Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xVint;
  }

  if (t529->mM.mX[40ULL] != 0) {
    Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xVint =
      t529->mX.mX[171ULL] * intrm_sf_mf_5;
  }

  if (t529->mM.mX[39ULL] != 0) {
    t392[0ULL] = 0ULL;
    for (t466 = 0ULL; t466 < 55ULL; t466++) {
      t449 = t466 / 55ULL;
      t459 = (t466 - t466 % 55ULL) + t392[t449 > 0ULL ? 0ULL : t449];
      if (((const _NeDynamicSystem*)(LC))->mField0[t466] * 1.0E-5 < ((const
            _NeDynamicSystem*)(LC))->mField0[t459 > 54ULL ? 54ULL : t459] *
          1.0E-5) {
        t392[t449 > 0ULL ? 0ULL : t449] = t466 % 55ULL;
      }
    }

    intrm_sf_mf_5 = ((const _NeDynamicSystem*)(LC))->mField0[t392[0ULL] > 54ULL ?
      54ULL : t392[0ULL]] * 1.0E-5;
  } else {
    intrm_sf_mf_5 = t529->mX.mX[172ULL] *
      Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_xVint;
  }

  if (t529->mM.mX[43ULL] != 0) {
    Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_xVint =
      8.200000000000002E-8;
  } else {
    Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_xVint =
      t529->mX.mX[176ULL] * intrm_sf_mf_6;
  }

  if (t529->mM.mX[42ULL] != 0) {
    t392[0ULL] = 0ULL;
    for (t466 = 0ULL; t466 < 55ULL; t466++) {
      t449 = t466 / 55ULL;
      t459 = (t466 - t466 % 55ULL) + t392[t449 > 0ULL ? 0ULL : t449];
      if (((const _NeDynamicSystem*)(LC))->mField0[t466] * 1.0E-5 < ((const
            _NeDynamicSystem*)(LC))->mField0[t459 > 54ULL ? 54ULL : t459] *
          1.0E-5) {
        t392[t449 > 0ULL ? 0ULL : t449] = t466 % 55ULL;
      }
    }

    intrm_sf_mf_6 = ((const _NeDynamicSystem*)(LC))->mField0[t392[0ULL] > 54ULL ?
      54ULL : t392[0ULL]] * 1.0E-5;
  } else {
    intrm_sf_mf_6 = t529->mX.mX[177ULL] *
      Plant_Subsystem_Series_Module_Battery_Table_Based4_cell_temperature;
  }

  if (t529->mM.mX[47ULL] != 0) {
    Plant_Subsystem_Series_Module_Battery_Table_Based4_cell_temperature =
      8.200000000000002E-8;
  } else {
    Plant_Subsystem_Series_Module_Battery_Table_Based4_cell_temperature =
      t529->mX.mX[181ULL] * intrm_sf_mf_7;
  }

  if (t529->mM.mX[46ULL] != 0) {
    t392[0ULL] = 0ULL;
    for (t466 = 0ULL; t466 < 55ULL; t466++) {
      t449 = t466 / 55ULL;
      t459 = (t466 - t466 % 55ULL) + t392[t449 > 0ULL ? 0ULL : t449];
      if (((const _NeDynamicSystem*)(LC))->mField0[t466] * 1.0E-5 < ((const
            _NeDynamicSystem*)(LC))->mField0[t459 > 54ULL ? 54ULL : t459] *
          1.0E-5) {
        t392[t449 > 0ULL ? 0ULL : t449] = t466 % 55ULL;
      }
    }

    intrm_sf_mf_7 = ((const _NeDynamicSystem*)(LC))->mField0[t392[0ULL] > 54ULL ?
      54ULL : t392[0ULL]] * 1.0E-5;
  } else {
    intrm_sf_mf_7 = t529->mX.mX[182ULL] *
      Plant_Subsystem_Series_Module_Battery_Table_Based5_cell_temperature;
  }

  if (t529->mM.mX[50ULL] != 0) {
    Plant_Subsystem_Series_Module_Battery_Table_Based5_cell_temperature =
      8.200000000000002E-8;
  } else {
    Plant_Subsystem_Series_Module_Battery_Table_Based5_cell_temperature =
      t529->mX.mX[186ULL] * intrm_sf_mf_8;
  }

  if (t529->mM.mX[49ULL] != 0) {
    t392[0ULL] = 0ULL;
    for (t466 = 0ULL; t466 < 55ULL; t466++) {
      t449 = t466 / 55ULL;
      t459 = (t466 - t466 % 55ULL) + t392[t449 > 0ULL ? 0ULL : t449];
      if (((const _NeDynamicSystem*)(LC))->mField0[t466] * 1.0E-5 < ((const
            _NeDynamicSystem*)(LC))->mField0[t459 > 54ULL ? 54ULL : t459] *
          1.0E-5) {
        t392[t449 > 0ULL ? 0ULL : t449] = t466 % 55ULL;
      }
    }

    intrm_sf_mf_8 = ((const _NeDynamicSystem*)(LC))->mField0[t392[0ULL] > 54ULL ?
      54ULL : t392[0ULL]] * 1.0E-5;
  } else {
    intrm_sf_mf_8 = t529->mX.mX[187ULL] *
      Plant_Subsystem_Series_Module_Battery_Table_Based6_cell_temperature;
  }

  if (t529->mM.mX[53ULL] != 0) {
    Plant_Subsystem_Series_Module_Battery_Table_Based6_cell_temperature =
      8.200000000000002E-8;
  } else {
    Plant_Subsystem_Series_Module_Battery_Table_Based6_cell_temperature =
      t529->mX.mX[191ULL] * intrm_sf_mf_9;
  }

  if (t529->mM.mX[52ULL] != 0) {
    t392[0ULL] = 0ULL;
    for (t466 = 0ULL; t466 < 55ULL; t466++) {
      t449 = t466 / 55ULL;
      t459 = (t466 - t466 % 55ULL) + t392[t449 > 0ULL ? 0ULL : t449];
      if (((const _NeDynamicSystem*)(LC))->mField0[t466] * 1.0E-5 < ((const
            _NeDynamicSystem*)(LC))->mField0[t459 > 54ULL ? 54ULL : t459] *
          1.0E-5) {
        t392[t449 > 0ULL ? 0ULL : t449] = t466 % 55ULL;
      }
    }

    intrm_sf_mf_9 = ((const _NeDynamicSystem*)(LC))->mField0[t392[0ULL] > 54ULL ?
      54ULL : t392[0ULL]] * 1.0E-5;
  } else {
    intrm_sf_mf_9 = t529->mX.mX[192ULL] *
      Plant_Subsystem_Series_Module_Battery_Table_Based7_cell_temperature;
  }

  if (t529->mM.mX[66ULL] != 0) {
    Plant_Subsystem_Series_Module_Battery_Table_Based7_cell_temperature =
      8.200000000000002E-8;
  } else {
    Plant_Subsystem_Series_Module_Battery_Table_Based7_cell_temperature =
      t529->mX.mX[151ULL] * zc_int20;
  }

  if (t529->mM.mX[57ULL] != 0) {
    zc_int20 = 8.200000000000002E-8;
  } else {
    zc_int20 = t529->mX.mX[196ULL] * zc_int21;
  }

  if (t529->mM.mX[56ULL] != 0) {
    t392[0ULL] = 0ULL;
    for (t466 = 0ULL; t466 < 55ULL; t466++) {
      t449 = t466 / 55ULL;
      t459 = (t466 - t466 % 55ULL) + t392[t449 > 0ULL ? 0ULL : t449];
      if (((const _NeDynamicSystem*)(LC))->mField0[t466] * 1.0E-5 < ((const
            _NeDynamicSystem*)(LC))->mField0[t459 > 54ULL ? 54ULL : t459] *
          1.0E-5) {
        t392[t449 > 0ULL ? 0ULL : t449] = t466 % 55ULL;
      }
    }

    zc_int21 = ((const _NeDynamicSystem*)(LC))->mField0[t392[0ULL] > 54ULL ?
      54ULL : t392[0ULL]] * 1.0E-5;
  } else {
    zc_int21 = t529->mX.mX[197ULL] *
      Plant_Subsystem_Series_Module_Battery_Table_Based8_cell_temperature;
  }

  if (t529->mM.mX[60ULL] != 0) {
    Plant_Subsystem_Series_Module_Battery_Table_Based8_cell_temperature =
      8.200000000000002E-8;
  } else {
    Plant_Subsystem_Series_Module_Battery_Table_Based8_cell_temperature =
      t529->mX.mX[201ULL] * intrm_sf_mf_11;
  }

  if (t529->mM.mX[59ULL] != 0) {
    t392[0ULL] = 0ULL;
    for (t466 = 0ULL; t466 < 55ULL; t466++) {
      t449 = t466 / 55ULL;
      t459 = (t466 - t466 % 55ULL) + t392[t449 > 0ULL ? 0ULL : t449];
      if (((const _NeDynamicSystem*)(LC))->mField0[t466] * 1.0E-5 < ((const
            _NeDynamicSystem*)(LC))->mField0[t459 > 54ULL ? 54ULL : t459] *
          1.0E-5) {
        t392[t449 > 0ULL ? 0ULL : t449] = t466 % 55ULL;
      }
    }

    intrm_sf_mf_11 = ((const _NeDynamicSystem*)(LC))->mField0[t392[0ULL] > 54ULL
      ? 54ULL : t392[0ULL]] * 1.0E-5;
  } else {
    intrm_sf_mf_11 = t529->mX.mX[202ULL] * zc_int24;
  }

  if (t529->mM.mX[44ULL] != 0) {
    zc_int24 = 0.02808;
  } else {
    zc_int24 = t529->mX.mX[144ULL] *
      Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xqnom;
  }

  if (t529->mM.mX[77ULL] != 0) {
    Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xqnom =
      0.02808;
  } else {
    Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xqnom =
      t529->mX.mX[150ULL] *
      Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xqnom;
  }

  if (t529->mM.mX[110ULL] != 0) {
    Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xqnom =
      0.033696000000000004;
  } else {
    Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xqnom =
      t529->mX.mX[155ULL] * zc_int27;
  }

  if (t529->mM.mX[13ULL] != 0) {
    zc_int27 = 0.041184;
  } else {
    zc_int27 = t529->mX.mX[160ULL] *
      Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xqnom;
  }

  if (t529->mM.mX[38ULL] != 0) {
    Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xqnom =
      0.02808;
  } else {
    Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xqnom =
      t529->mX.mX[165ULL] *
      Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_xqnom;
  }

  if (t529->mM.mX[41ULL] != 0) {
    Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_xqnom =
      0.02808;
  } else {
    Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_xqnom =
      t529->mX.mX[170ULL] * zc_int3;
  }

  if (t529->mM.mX[55ULL] != 0) {
    t392[0ULL] = 0ULL;
    for (t466 = 0ULL; t466 < 55ULL; t466++) {
      t449 = t466 / 55ULL;
      t459 = (t466 - t466 % 55ULL) + t392[t449 > 0ULL ? 0ULL : t449];
      if (((const _NeDynamicSystem*)(LC))->mField0[t466] * 1.0E-5 < ((const
            _NeDynamicSystem*)(LC))->mField0[t459 > 54ULL ? 54ULL : t459] *
          1.0E-5) {
        t392[t449 > 0ULL ? 0ULL : t449] = t466 % 55ULL;
      }
    }

    zc_int3 = ((const _NeDynamicSystem*)(LC))->mField0[t392[0ULL] > 54ULL ?
      54ULL : t392[0ULL]] * 1.0E-5;
  } else {
    zc_int3 = t529->mX.mX[152ULL] *
      Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xVint;
  }

  if (t529->mM.mX[45ULL] != 0) {
    Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xVint =
      0.02808;
  } else {
    Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xVint =
      t529->mX.mX[175ULL] * zc_int31;
  }

  if (t529->mM.mX[48ULL] != 0) {
    zc_int31 = 0.02808;
  } else {
    zc_int31 = t529->mX.mX[180ULL] * zc_int32;
  }

  if (t529->mM.mX[51ULL] != 0) {
    zc_int32 = 0.02808;
  } else {
    zc_int32 = t529->mX.mX[185ULL] * zc_int33;
  }

  if (t529->mM.mX[54ULL] != 0) {
    zc_int33 = 0.02808;
  } else {
    zc_int33 = t529->mX.mX[190ULL] * zc_int34;
  }

  if (t529->mM.mX[58ULL] != 0) {
    zc_int34 = 0.02808;
  } else {
    zc_int34 = t529->mX.mX[195ULL] *
      Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_xqnom;
  }

  if (t529->mM.mX[61ULL] != 0) {
    Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_xqnom =
      0.02808;
  } else {
    Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_xqnom =
      t376[0ULL] * t529->mX.mX[200ULL];
  }

  if (t529->mM.mX[99ULL] != 0) {
    zc_int4 = 8.200000000000002E-8;
  } else {
    zc_int4 = t529->mX.mX[156ULL] * zc_int5;
  }

  if (t529->mM.mX[88ULL] != 0) {
    t392[0ULL] = 0ULL;
    for (t466 = 0ULL; t466 < 55ULL; t466++) {
      t449 = t466 / 55ULL;
      t459 = (t466 - t466 % 55ULL) + t392[t449 > 0ULL ? 0ULL : t449];
      if (((const _NeDynamicSystem*)(LC))->mField0[t466] * 1.0E-5 < ((const
            _NeDynamicSystem*)(LC))->mField0[t459 > 54ULL ? 54ULL : t459] *
          1.0E-5) {
        t392[t449 > 0ULL ? 0ULL : t449] = t466 % 55ULL;
      }
    }

    zc_int5 = ((const _NeDynamicSystem*)(LC))->mField0[t392[0ULL] > 54ULL ?
      54ULL : t392[0ULL]] * 1.0E-5;
  } else {
    zc_int5 = t529->mX.mX[157ULL] * zc_int38;
  }

  if (t529->mM.mX[2ULL] != 0) {
    zc_int6 = 8.200000000000002E-8;
  } else {
    zc_int6 = t529->mX.mX[161ULL] * zc_int7;
  }

  if (t529->mM.mX[121ULL] != 0) {
    t392[0ULL] = 0ULL;
    for (t466 = 0ULL; t466 < 55ULL; t466++) {
      t449 = t466 / 55ULL;
      t459 = (t466 - t466 % 55ULL) + t392[t449 > 0ULL ? 0ULL : t449];
      if (((const _NeDynamicSystem*)(LC))->mField0[t466] * 1.0E-5 < ((const
            _NeDynamicSystem*)(LC))->mField0[t459 > 54ULL ? 54ULL : t459] *
          1.0E-5) {
        t392[t449 > 0ULL ? 0ULL : t449] = t466 % 55ULL;
      }
    }

    zc_int7 = ((const _NeDynamicSystem*)(LC))->mField0[t392[0ULL] > 54ULL ?
      54ULL : t392[0ULL]] * 1.0E-5;
  } else {
    zc_int7 = t529->mX.mX[162ULL] * zc_int39;
  }

  if (t529->mM.mX[35ULL] != 0) {
    zc_int38 = 8.200000000000002E-8;
  } else {
    zc_int38 = t529->mX.mX[166ULL] * intrm_sf_mf_4;
  }

  if (t529->mM.mX[24ULL] != 0) {
    t392[0ULL] = 0ULL;
    for (t466 = 0ULL; t466 < 55ULL; t466++) {
      t449 = t466 / 55ULL;
      t459 = (t466 - t466 % 55ULL) + t392[t449 > 0ULL ? 0ULL : t449];
      if (((const _NeDynamicSystem*)(LC))->mField0[t466] * 1.0E-5 < ((const
            _NeDynamicSystem*)(LC))->mField0[t459 > 54ULL ? 54ULL : t459] *
          1.0E-5) {
        t392[t449 > 0ULL ? 0ULL : t449] = t466 % 55ULL;
      }
    }

    intrm_sf_mf_4 = ((const _NeDynamicSystem*)(LC))->mField0[t392[0ULL] > 54ULL ?
      54ULL : t392[0ULL]] * 1.0E-5;
  } else {
    intrm_sf_mf_4 = t529->mX.mX[167ULL] * zc_int40;
  }

  t198[0ULL] = t529->mX.mX[2ULL] + 1.0E-6;
  t241[0] = 100ULL;
  tlu2_linear_nearest_prelookup(&t22.mField0[0ULL], &t22.mField1[0ULL],
    &t22.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField6, &t198[0ULL],
    &t241[0ULL], &t74[0ULL]);
  t198[0ULL] = t529->mX.mX[10ULL] + 1.0E-6;
  tlu2_linear_nearest_prelookup(&t7.mField0[0ULL], &t7.mField1[0ULL],
    &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField6, &t198[0ULL],
    &t241[0ULL], &t74[0ULL]);
  t198[0ULL] = t529->mX.mX[19ULL] + 1.0E-6;
  tlu2_linear_nearest_prelookup(&t11.mField0[0ULL], &t11.mField1[0ULL],
    &t11.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField6, &t198[0ULL],
    &t241[0ULL], &t74[0ULL]);
  t198[0ULL] = t529->mX.mX[28ULL] + 1.0E-6;
  tlu2_linear_nearest_prelookup(&t21.mField0[0ULL], &t21.mField1[0ULL],
    &t21.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField6, &t198[0ULL],
    &t241[0ULL], &t74[0ULL]);
  t198[0ULL] = t529->mX.mX[35ULL] + 1.0E-6;
  tlu2_linear_nearest_prelookup(&t12.mField0[0ULL], &t12.mField1[0ULL],
    &t12.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField6, &t198[0ULL],
    &t241[0ULL], &t74[0ULL]);
  t198[0ULL] = t529->mX.mX[43ULL] + 1.0E-6;
  tlu2_linear_nearest_prelookup(&t8.mField0[0ULL], &t8.mField1[0ULL],
    &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField6, &t198[0ULL],
    &t241[0ULL], &t74[0ULL]);
  t198[0ULL] = t529->mX.mX[51ULL] + 1.0E-6;
  tlu2_linear_nearest_prelookup(&t26.mField0[0ULL], &t26.mField1[0ULL],
    &t26.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField6, &t198[0ULL],
    &t241[0ULL], &t74[0ULL]);
  t198[0ULL] = t529->mX.mX[59ULL] + 1.0E-6;
  tlu2_linear_nearest_prelookup(&t2.mField0[0ULL], &t2.mField1[0ULL],
    &t2.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField6, &t198[0ULL],
    &t241[0ULL], &t74[0ULL]);
  t198[0ULL] = t529->mX.mX[67ULL] + 1.0E-6;
  tlu2_linear_nearest_prelookup(&t32.mField0[0ULL], &t32.mField1[0ULL],
    &t32.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField6, &t198[0ULL],
    &t241[0ULL], &t74[0ULL]);
  t198[0ULL] = t529->mX.mX[75ULL] + 1.0E-6;
  tlu2_linear_nearest_prelookup(&t27.mField0[0ULL], &t27.mField1[0ULL],
    &t27.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField6, &t198[0ULL],
    &t241[0ULL], &t74[0ULL]);
  t198[0ULL] = t529->mX.mX[83ULL] + 1.0E-6;
  tlu2_linear_nearest_prelookup(&t14.mField0[0ULL], &t14.mField1[0ULL],
    &t14.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField6, &t198[0ULL],
    &t241[0ULL], &t74[0ULL]);
  t198[0ULL] = t529->mX.mX[90ULL] + 1.0E-6;
  tlu2_linear_nearest_prelookup(&t6.mField0[0ULL], &t6.mField1[0ULL],
    &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField6, &t198[0ULL],
    &t241[0ULL], &t74[0ULL]);
  if (t529->mM.mX[62ULL] != 0) {
    out->mF.mX[96ULL] = t529->mX.mX[108ULL] - (t529->mX.mX[110ULL] + 0.6);
  } else {
    out->mF.mX[96ULL] = t529->mX.mX[108ULL] - (t529->mX.mX[110ULL] * 0.3 + 0.6);
  }

  if (t529->mM.mX[62ULL] != 0) {
    out->mF.mX[97ULL] = t528 - (t529->mX.mX[110ULL] * 1.0E-8 + 6.0E-9);
  } else {
    out->mF.mX[97ULL] = t528 - (t529->mX.mX[110ULL] + 6.0E-9);
  }

  if (t529->mM.mX[63ULL] != 0) {
    out->mF.mX[98ULL] = t529->mX.mX[111ULL] - (t529->mX.mX[113ULL] + 0.6);
  } else {
    out->mF.mX[98ULL] = t529->mX.mX[111ULL] - (t529->mX.mX[113ULL] * 0.3 + 0.6);
  }

  if (t529->mM.mX[63ULL] != 0) {
    out->mF.mX[99ULL] = Plant_Subsystem_Monitoring_Diode1_i - (t529->mX.mX
      [113ULL] * 1.0E-8 + 6.0E-9);
  } else {
    out->mF.mX[99ULL] = Plant_Subsystem_Monitoring_Diode1_i - (t529->mX.mX
      [113ULL] + 6.0E-9);
  }

  if (t529->mM.mX[64ULL] != 0) {
    out->mF.mX[100ULL] = t529->mX.mX[114ULL] - (t529->mX.mX[116ULL] + 0.6);
  } else {
    out->mF.mX[100ULL] = t529->mX.mX[114ULL] - (t529->mX.mX[116ULL] * 0.3 + 0.6);
  }

  if (t529->mM.mX[64ULL] != 0) {
    out->mF.mX[101ULL] = t63 - (t529->mX.mX[116ULL] * 1.0E-8 + 6.0E-9);
  } else {
    out->mF.mX[101ULL] = t63 - (t529->mX.mX[116ULL] + 6.0E-9);
  }

  if (t529->mM.mX[65ULL] != 0) {
    out->mF.mX[102ULL] = t529->mX.mX[117ULL] - (t529->mX.mX[119ULL] + 0.6);
  } else {
    out->mF.mX[102ULL] = t529->mX.mX[117ULL] - (t529->mX.mX[119ULL] * 0.3 + 0.6);
  }

  if (t529->mM.mX[65ULL] != 0) {
    out->mF.mX[103ULL] = Plant_Subsystem_Monitoring_Diode11_i - (t529->mX.mX
      [119ULL] * 1.0E-8 + 6.0E-9);
  } else {
    out->mF.mX[103ULL] = Plant_Subsystem_Monitoring_Diode11_i - (t529->mX.mX
      [119ULL] + 6.0E-9);
  }

  if (t529->mM.mX[67ULL] != 0) {
    out->mF.mX[104ULL] = t529->mX.mX[120ULL] - (t529->mX.mX[122ULL] + 0.6);
  } else {
    out->mF.mX[104ULL] = t529->mX.mX[120ULL] - (t529->mX.mX[122ULL] * 0.3 + 0.6);
  }

  if (t529->mM.mX[67ULL] != 0) {
    out->mF.mX[105ULL] = t65 - (t529->mX.mX[122ULL] * 1.0E-8 + 6.0E-9);
  } else {
    out->mF.mX[105ULL] = t65 - (t529->mX.mX[122ULL] + 6.0E-9);
  }

  if (t529->mM.mX[68ULL] != 0) {
    out->mF.mX[106ULL] = t529->mX.mX[123ULL] - (t529->mX.mX[125ULL] + 0.6);
  } else {
    out->mF.mX[106ULL] = t529->mX.mX[123ULL] - (t529->mX.mX[125ULL] * 0.3 + 0.6);
  }

  if (t529->mM.mX[68ULL] != 0) {
    out->mF.mX[107ULL] = t66 - (t529->mX.mX[125ULL] * 1.0E-8 + 6.0E-9);
  } else {
    out->mF.mX[107ULL] = t66 - (t529->mX.mX[125ULL] + 6.0E-9);
  }

  if (t529->mM.mX[69ULL] != 0) {
    out->mF.mX[108ULL] = t529->mX.mX[126ULL] - (t529->mX.mX[128ULL] + 0.6);
  } else {
    out->mF.mX[108ULL] = t529->mX.mX[126ULL] - (t529->mX.mX[128ULL] * 0.3 + 0.6);
  }

  if (t529->mM.mX[69ULL] != 0) {
    out->mF.mX[109ULL] = t67 - (t529->mX.mX[128ULL] * 1.0E-8 + 6.0E-9);
  } else {
    out->mF.mX[109ULL] = t67 - (t529->mX.mX[128ULL] + 6.0E-9);
  }

  if (t529->mM.mX[70ULL] != 0) {
    out->mF.mX[110ULL] = t529->mX.mX[129ULL] - (t529->mX.mX[131ULL] + 0.6);
  } else {
    out->mF.mX[110ULL] = t529->mX.mX[129ULL] - (t529->mX.mX[131ULL] * 0.3 + 0.6);
  }

  if (t529->mM.mX[70ULL] != 0) {
    out->mF.mX[111ULL] = Plant_Subsystem_Monitoring_Diode5_i - (t529->mX.mX
      [131ULL] * 1.0E-8 + 6.0E-9);
  } else {
    out->mF.mX[111ULL] = Plant_Subsystem_Monitoring_Diode5_i - (t529->mX.mX
      [131ULL] + 6.0E-9);
  }

  if (t529->mM.mX[71ULL] != 0) {
    out->mF.mX[112ULL] = t529->mX.mX[132ULL] - (t529->mX.mX[134ULL] + 0.6);
  } else {
    out->mF.mX[112ULL] = t529->mX.mX[132ULL] - (t529->mX.mX[134ULL] * 0.3 + 0.6);
  }

  if (t529->mM.mX[71ULL] != 0) {
    out->mF.mX[113ULL] = Plant_Subsystem_Monitoring_Diode6_i - (t529->mX.mX
      [134ULL] * 1.0E-8 + 6.0E-9);
  } else {
    out->mF.mX[113ULL] = Plant_Subsystem_Monitoring_Diode6_i - (t529->mX.mX
      [134ULL] + 6.0E-9);
  }

  if (t529->mM.mX[72ULL] != 0) {
    out->mF.mX[114ULL] = t529->mX.mX[135ULL] - (t529->mX.mX[137ULL] + 0.6);
  } else {
    out->mF.mX[114ULL] = t529->mX.mX[135ULL] - (t529->mX.mX[137ULL] * 0.3 + 0.6);
  }

  if (t529->mM.mX[72ULL] != 0) {
    out->mF.mX[115ULL] = Plant_Subsystem_Monitoring_Diode7_i - (t529->mX.mX
      [137ULL] * 1.0E-8 + 6.0E-9);
  } else {
    out->mF.mX[115ULL] = Plant_Subsystem_Monitoring_Diode7_i - (t529->mX.mX
      [137ULL] + 6.0E-9);
  }

  if (t529->mM.mX[73ULL] != 0) {
    out->mF.mX[116ULL] = t529->mX.mX[138ULL] - (t529->mX.mX[140ULL] + 0.6);
  } else {
    out->mF.mX[116ULL] = t529->mX.mX[138ULL] - (t529->mX.mX[140ULL] * 0.3 + 0.6);
  }

  if (t529->mM.mX[73ULL] != 0) {
    out->mF.mX[117ULL] = Plant_Subsystem_Monitoring_Diode8_i - (t529->mX.mX
      [140ULL] * 1.0E-8 + 6.0E-9);
  } else {
    out->mF.mX[117ULL] = Plant_Subsystem_Monitoring_Diode8_i - (t529->mX.mX
      [140ULL] + 6.0E-9);
  }

  if (t529->mM.mX[74ULL] != 0) {
    out->mF.mX[118ULL] = t529->mX.mX[141ULL] - (t529->mX.mX[143ULL] + 0.6);
  } else {
    out->mF.mX[118ULL] = t529->mX.mX[141ULL] - (t529->mX.mX[143ULL] * 0.3 + 0.6);
  }

  if (t529->mM.mX[74ULL] != 0) {
    out->mF.mX[119ULL] = t513 - (t529->mX.mX[143ULL] * 1.0E-8 + 6.0E-9);
  } else {
    out->mF.mX[119ULL] = t513 - (t529->mX.mX[143ULL] + 6.0E-9);
  }

  if (t529->mM.mX[75ULL] != 0) {
    out->mF.mX[120ULL] = t529->mX.mX[109ULL] - t528 * 0.01;
  } else {
    out->mF.mX[120ULL] = t529->mX.mX[109ULL] * 1.0E-8 - t528;
  }

  if (t529->mM.mX[76ULL] != 0) {
    out->mF.mX[121ULL] = t529->mX.mX[112ULL] -
      Plant_Subsystem_Monitoring_Diode1_i * 0.01;
  } else {
    out->mF.mX[121ULL] = t529->mX.mX[112ULL] * 1.0E-8 -
      Plant_Subsystem_Monitoring_Diode1_i;
  }

  if (t529->mM.mX[78ULL] != 0) {
    out->mF.mX[122ULL] = t529->mX.mX[115ULL] - t63 * 0.01;
  } else {
    out->mF.mX[122ULL] = t529->mX.mX[115ULL] * 1.0E-8 - t63;
  }

  if (t529->mM.mX[79ULL] != 0) {
    out->mF.mX[123ULL] = t529->mX.mX[118ULL] -
      Plant_Subsystem_Monitoring_Diode11_i * 0.01;
  } else {
    out->mF.mX[123ULL] = t529->mX.mX[118ULL] * 1.0E-8 -
      Plant_Subsystem_Monitoring_Diode11_i;
  }

  if (t529->mM.mX[80ULL] != 0) {
    out->mF.mX[124ULL] = t529->mX.mX[121ULL] - t65 * 0.01;
  } else {
    out->mF.mX[124ULL] = t529->mX.mX[121ULL] * 1.0E-8 - t65;
  }

  if (t529->mM.mX[81ULL] != 0) {
    out->mF.mX[125ULL] = t529->mX.mX[124ULL] - t66 * 0.01;
  } else {
    out->mF.mX[125ULL] = t529->mX.mX[124ULL] * 1.0E-8 - t66;
  }

  if (t529->mM.mX[82ULL] != 0) {
    out->mF.mX[126ULL] = t529->mX.mX[127ULL] - t67 * 0.01;
  } else {
    out->mF.mX[126ULL] = t529->mX.mX[127ULL] * 1.0E-8 - t67;
  }

  if (t529->mM.mX[83ULL] != 0) {
    out->mF.mX[127ULL] = t529->mX.mX[130ULL] -
      Plant_Subsystem_Monitoring_Diode5_i * 0.01;
  } else {
    out->mF.mX[127ULL] = t529->mX.mX[130ULL] * 1.0E-8 -
      Plant_Subsystem_Monitoring_Diode5_i;
  }

  if (t529->mM.mX[84ULL] != 0) {
    out->mF.mX[128ULL] = t529->mX.mX[133ULL] -
      Plant_Subsystem_Monitoring_Diode6_i * 0.01;
  } else {
    out->mF.mX[128ULL] = t529->mX.mX[133ULL] * 1.0E-8 -
      Plant_Subsystem_Monitoring_Diode6_i;
  }

  if (t529->mM.mX[85ULL] != 0) {
    out->mF.mX[129ULL] = t529->mX.mX[136ULL] -
      Plant_Subsystem_Monitoring_Diode7_i * 0.01;
  } else {
    out->mF.mX[129ULL] = t529->mX.mX[136ULL] * 1.0E-8 -
      Plant_Subsystem_Monitoring_Diode7_i;
  }

  if (t529->mM.mX[86ULL] != 0) {
    out->mF.mX[130ULL] = t529->mX.mX[139ULL] -
      Plant_Subsystem_Monitoring_Diode8_i * 0.01;
  } else {
    out->mF.mX[130ULL] = t529->mX.mX[139ULL] * 1.0E-8 -
      Plant_Subsystem_Monitoring_Diode8_i;
  }

  if (t529->mM.mX[87ULL] != 0) {
    out->mF.mX[131ULL] = t529->mX.mX[142ULL] - t513 * 0.01;
  } else {
    out->mF.mX[131ULL] = t529->mX.mX[142ULL] * 1.0E-8 - t513;
  }

  tlu2_1d_linear_nearest_value(&t198[0ULL], &t22.mField0[0ULL], &t22.mField2
    [0ULL], ((const _NeDynamicSystem*)(LC))->mField5, &t241[0ULL], &t74[0ULL]);
  tlu2_1d_linear_nearest_value(&t376[0ULL], &t22.mField0[0ULL], &t22.mField2
    [0ULL], ((const _NeDynamicSystem*)(LC))->mField3, &t241[0ULL], &t74[0ULL]);
  tlu2_1d_linear_nearest_value(&t399[0ULL], &t22.mField0[0ULL], &t22.mField2
    [0ULL], ((const _NeDynamicSystem*)(LC))->mField4, &t241[0ULL], &t74[0ULL]);
  tlu2_1d_linear_nearest_value(&t400[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField5, &t241[0ULL], &t74[0ULL]);
  tlu2_1d_linear_nearest_value(&t401[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField3, &t241[0ULL], &t74[0ULL]);
  tlu2_1d_linear_nearest_value(&t402[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField4, &t241[0ULL], &t74[0ULL]);
  tlu2_1d_linear_nearest_value(&t403[0ULL], &t11.mField0[0ULL], &t11.mField2
    [0ULL], ((const _NeDynamicSystem*)(LC))->mField5, &t241[0ULL], &t74[0ULL]);
  tlu2_1d_linear_nearest_value(&t404[0ULL], &t11.mField0[0ULL], &t11.mField2
    [0ULL], ((const _NeDynamicSystem*)(LC))->mField3, &t241[0ULL], &t74[0ULL]);
  tlu2_1d_linear_nearest_value(&t405[0ULL], &t11.mField0[0ULL], &t11.mField2
    [0ULL], ((const _NeDynamicSystem*)(LC))->mField4, &t241[0ULL], &t74[0ULL]);
  tlu2_1d_linear_nearest_value(&t406[0ULL], &t21.mField0[0ULL], &t21.mField2
    [0ULL], ((const _NeDynamicSystem*)(LC))->mField5, &t241[0ULL], &t74[0ULL]);
  tlu2_1d_linear_nearest_value(&t407[0ULL], &t21.mField0[0ULL], &t21.mField2
    [0ULL], ((const _NeDynamicSystem*)(LC))->mField3, &t241[0ULL], &t74[0ULL]);
  tlu2_1d_linear_nearest_value(&t408[0ULL], &t21.mField0[0ULL], &t21.mField2
    [0ULL], ((const _NeDynamicSystem*)(LC))->mField4, &t241[0ULL], &t74[0ULL]);
  tlu2_1d_linear_nearest_value(&t409[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], ((const _NeDynamicSystem*)(LC))->mField5, &t241[0ULL], &t74[0ULL]);
  tlu2_1d_linear_nearest_value(&t410[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], ((const _NeDynamicSystem*)(LC))->mField3, &t241[0ULL], &t74[0ULL]);
  tlu2_1d_linear_nearest_value(&t411[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], ((const _NeDynamicSystem*)(LC))->mField4, &t241[0ULL], &t74[0ULL]);
  tlu2_1d_linear_nearest_value(&t412[0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField5, &t241[0ULL], &t74[0ULL]);
  tlu2_1d_linear_nearest_value(&t413[0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField3, &t241[0ULL], &t74[0ULL]);
  tlu2_1d_linear_nearest_value(&t414[0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField4, &t241[0ULL], &t74[0ULL]);
  tlu2_1d_linear_nearest_value(&t415[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], ((const _NeDynamicSystem*)(LC))->mField5, &t241[0ULL], &t74[0ULL]);
  tlu2_1d_linear_nearest_value(&t416[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], ((const _NeDynamicSystem*)(LC))->mField3, &t241[0ULL], &t74[0ULL]);
  tlu2_1d_linear_nearest_value(&t417[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], ((const _NeDynamicSystem*)(LC))->mField4, &t241[0ULL], &t74[0ULL]);
  tlu2_1d_linear_nearest_value(&t418[0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField5, &t241[0ULL], &t74[0ULL]);
  tlu2_1d_linear_nearest_value(&t419[0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField3, &t241[0ULL], &t74[0ULL]);
  tlu2_1d_linear_nearest_value(&t420[0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField4, &t241[0ULL], &t74[0ULL]);
  tlu2_1d_linear_nearest_value(&t421[0ULL], &t32.mField0[0ULL], &t32.mField2
    [0ULL], ((const _NeDynamicSystem*)(LC))->mField5, &t241[0ULL], &t74[0ULL]);
  tlu2_1d_linear_nearest_value(&t422[0ULL], &t32.mField0[0ULL], &t32.mField2
    [0ULL], ((const _NeDynamicSystem*)(LC))->mField3, &t241[0ULL], &t74[0ULL]);
  tlu2_1d_linear_nearest_value(&t423[0ULL], &t32.mField0[0ULL], &t32.mField2
    [0ULL], ((const _NeDynamicSystem*)(LC))->mField4, &t241[0ULL], &t74[0ULL]);
  tlu2_1d_linear_nearest_value(&t424[0ULL], &t27.mField0[0ULL], &t27.mField2
    [0ULL], ((const _NeDynamicSystem*)(LC))->mField5, &t241[0ULL], &t74[0ULL]);
  tlu2_1d_linear_nearest_value(&t425[0ULL], &t27.mField0[0ULL], &t27.mField2
    [0ULL], ((const _NeDynamicSystem*)(LC))->mField3, &t241[0ULL], &t74[0ULL]);
  tlu2_1d_linear_nearest_value(&t426[0ULL], &t27.mField0[0ULL], &t27.mField2
    [0ULL], ((const _NeDynamicSystem*)(LC))->mField4, &t241[0ULL], &t74[0ULL]);
  tlu2_1d_linear_nearest_value(&t427[0ULL], &t14.mField0[0ULL], &t14.mField2
    [0ULL], ((const _NeDynamicSystem*)(LC))->mField5, &t241[0ULL], &t74[0ULL]);
  tlu2_1d_linear_nearest_value(&t428[0ULL], &t14.mField0[0ULL], &t14.mField2
    [0ULL], ((const _NeDynamicSystem*)(LC))->mField3, &t241[0ULL], &t74[0ULL]);
  tlu2_1d_linear_nearest_value(&t429[0ULL], &t14.mField0[0ULL], &t14.mField2
    [0ULL], ((const _NeDynamicSystem*)(LC))->mField4, &t241[0ULL], &t74[0ULL]);
  tlu2_1d_linear_nearest_value(&t430[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField5, &t241[0ULL], &t74[0ULL]);
  tlu2_1d_linear_nearest_value(&t431[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField3, &t241[0ULL], &t74[0ULL]);
  tlu2_1d_linear_nearest_value(&t432[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField4, &t241[0ULL], &t74[0ULL]);
  out->mF.mX[0ULL] = -0.0;
  out->mF.mX[1ULL] =
    -Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_i *
    (real_T)(Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_i
             < 0.0) / (zc_int24 == 0.0 ? 1.0E-16 : zc_int24);
  out->mF.mX[2ULL] = 0.0;
  out->mF.mX[3ULL] = 0.0;
  out->mF.mX[4ULL] = 0.0;
  out->mF.mX[5ULL] = 0.0;
  out->mF.mX[6ULL] = 0.0;
  out->mF.mX[7ULL] = -0.0;
  out->mF.mX[8ULL] = -0.0;
  out->mF.mX[9ULL] =
    -Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_i *
    (real_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_i < 0.0)
    / (Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xqnom ==
       0.0 ? 1.0E-16 :
       Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xqnom);
  out->mF.mX[10ULL] = 0.0;
  out->mF.mX[11ULL] = 0.0;
  out->mF.mX[12ULL] = 0.0;
  out->mF.mX[13ULL] = 0.0;
  out->mF.mX[14ULL] = 0.0;
  out->mF.mX[15ULL] = -0.0;
  out->mF.mX[16ULL] = -0.0;
  out->mF.mX[17ULL] =
    -Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_i *
    (real_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_i < 0.0)
    / (Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xqnom ==
       0.0 ? 1.0E-16 :
       Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xqnom);
  out->mF.mX[18ULL] = 0.0;
  out->mF.mX[19ULL] = 0.0;
  out->mF.mX[20ULL] = 0.0;
  out->mF.mX[21ULL] = 0.0;
  out->mF.mX[22ULL] = 0.0;
  out->mF.mX[23ULL] = -0.0;
  out->mF.mX[24ULL] = -0.0;
  out->mF.mX[25ULL] =
    -Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_i *
    (real_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_i < 0.0)
    / (zc_int27 == 0.0 ? 1.0E-16 : zc_int27);
  out->mF.mX[26ULL] = 0.0;
  out->mF.mX[27ULL] = 0.0;
  out->mF.mX[28ULL] = 0.0;
  out->mF.mX[29ULL] = 0.0;
  out->mF.mX[30ULL] = 0.0;
  out->mF.mX[31ULL] = -0.0;
  out->mF.mX[32ULL] = -0.0;
  out->mF.mX[33ULL] =
    -Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_i *
    (real_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_i < 0.0)
    / (Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xqnom
       == 0.0 ? 1.0E-16 :
       Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xqnom);
  out->mF.mX[34ULL] = 0.0;
  out->mF.mX[35ULL] = 0.0;
  out->mF.mX[36ULL] = 0.0;
  out->mF.mX[37ULL] = 0.0;
  out->mF.mX[38ULL] = 0.0;
  out->mF.mX[39ULL] = -0.0;
  out->mF.mX[40ULL] = -0.0;
  out->mF.mX[41ULL] =
    -Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i *
    (real_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i < 0.0)
    / (Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_xqnom ==
       0.0 ? 1.0E-16 :
       Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_xqnom);
  out->mF.mX[42ULL] = 0.0;
  out->mF.mX[43ULL] = 0.0;
  out->mF.mX[44ULL] = 0.0;
  out->mF.mX[45ULL] = 0.0;
  out->mF.mX[46ULL] = 0.0;
  out->mF.mX[47ULL] = -0.0;
  out->mF.mX[48ULL] = -0.0;
  out->mF.mX[49ULL] =
    -Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_i *
    (real_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_i < 0.0)
    / (Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xVint ==
       0.0 ? 1.0E-16 :
       Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xVint);
  out->mF.mX[50ULL] = 0.0;
  out->mF.mX[51ULL] = 0.0;
  out->mF.mX[52ULL] = 0.0;
  out->mF.mX[53ULL] = 0.0;
  out->mF.mX[54ULL] = 0.0;
  out->mF.mX[55ULL] = -0.0;
  out->mF.mX[56ULL] = -0.0;
  out->mF.mX[57ULL] =
    -Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_i *
    (real_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_i < 0.0)
    / (zc_int31 == 0.0 ? 1.0E-16 : zc_int31);
  out->mF.mX[58ULL] = 0.0;
  out->mF.mX[59ULL] = 0.0;
  out->mF.mX[60ULL] = 0.0;
  out->mF.mX[61ULL] = 0.0;
  out->mF.mX[62ULL] = 0.0;
  out->mF.mX[63ULL] = -0.0;
  out->mF.mX[64ULL] = -0.0;
  out->mF.mX[65ULL] =
    -Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_i *
    (real_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_i < 0.0)
    / (zc_int32 == 0.0 ? 1.0E-16 : zc_int32);
  out->mF.mX[66ULL] = 0.0;
  out->mF.mX[67ULL] = 0.0;
  out->mF.mX[68ULL] = 0.0;
  out->mF.mX[69ULL] = 0.0;
  out->mF.mX[70ULL] = 0.0;
  out->mF.mX[71ULL] = -0.0;
  out->mF.mX[72ULL] = -0.0;
  out->mF.mX[73ULL] =
    -Plant_Subsystem_Series_Module_Battery_Table_Based7_electricalModel_i *
    (real_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based7_electricalModel_i < 0.0)
    / (zc_int33 == 0.0 ? 1.0E-16 : zc_int33);
  out->mF.mX[74ULL] = 0.0;
  out->mF.mX[75ULL] = 0.0;
  out->mF.mX[76ULL] = 0.0;
  out->mF.mX[77ULL] = 0.0;
  out->mF.mX[78ULL] = 0.0;
  out->mF.mX[79ULL] = -0.0;
  out->mF.mX[80ULL] = -0.0;
  out->mF.mX[81ULL] =
    -Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_i *
    (real_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_i < 0.0)
    / (zc_int34 == 0.0 ? 1.0E-16 : zc_int34);
  out->mF.mX[82ULL] = 0.0;
  out->mF.mX[83ULL] = 0.0;
  out->mF.mX[84ULL] = 0.0;
  out->mF.mX[85ULL] = 0.0;
  out->mF.mX[86ULL] = 0.0;
  out->mF.mX[87ULL] = -0.0;
  out->mF.mX[88ULL] = -0.0;
  out->mF.mX[89ULL] =
    -Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_i *
    (real_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_i < 0.0)
    / (Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_xqnom ==
       0.0 ? 1.0E-16 :
       Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_xqnom);
  out->mF.mX[90ULL] = 0.0;
  out->mF.mX[91ULL] = 0.0;
  out->mF.mX[92ULL] = 0.0;
  out->mF.mX[93ULL] = 0.0;
  out->mF.mX[94ULL] = 0.0;
  out->mF.mX[95ULL] = -0.0;
  out->mF.mX[132ULL] =
    -(Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_i *
      zc_int0 + zc_int1) / 5.0;
  out->mF.mX[133ULL] = -(t529->mX.mX[1ULL] / (zc_int24 == 0.0 ? 1.0E-16 :
    zc_int24));
  out->mF.mX[134ULL] =
    -(Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_i *
      Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_i *
      zc_int0 * 0.001 + ((((t529->mX.mX[3ULL] * t529->mX.mX[3ULL] * 0.0 +
          t529->mX.mX[4ULL] * t529->mX.mX[4ULL] * 0.0) + t529->mX.mX[5ULL] *
         t529->mX.mX[5ULL] * 0.0) + t529->mX.mX[6ULL] * t529->mX.mX[6ULL] * 0.0)
       + t529->mX.mX[7ULL] * t529->mX.mX[7ULL] * 0.0) * 0.001);
  out->mF.mX[135ULL] = -t198[0ULL] - 1.0;
  out->mF.mX[136ULL] = -t376[0ULL] - 1.0;
  out->mF.mX[137ULL] = -t399[0ULL] - 1.0;
  out->mF.mX[138ULL] =
    -(Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_i *
      Plant_Subsystem_Series_Module_Battery_Table_Based7_cell_temperature +
      zc_int3) / 5.0;
  out->mF.mX[139ULL] = -(t529->mX.mX[9ULL] /
    (Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xqnom ==
     0.0 ? 1.0E-16 :
     Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xqnom));
  out->mF.mX[140ULL] =
    -(Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_i *
      Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_i *
      Plant_Subsystem_Series_Module_Battery_Table_Based7_cell_temperature *
      0.001 + ((((t529->mX.mX[11ULL] * t529->mX.mX[11ULL] * 0.0 + t529->mX.mX
                  [12ULL] * t529->mX.mX[12ULL] * 0.0) + t529->mX.mX[13ULL] *
                 t529->mX.mX[13ULL] * 0.0) + t529->mX.mX[14ULL] * t529->mX.mX
                [14ULL] * 0.0) + t529->mX.mX[15ULL] * t529->mX.mX[15ULL] * 0.0) *
      0.001);
  out->mF.mX[141ULL] = -t400[0ULL] - 1.0;
  out->mF.mX[142ULL] = -t401[0ULL] - 1.0;
  out->mF.mX[143ULL] = -t402[0ULL] - 1.0;
  out->mF.mX[144ULL] =
    -(Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_i *
      zc_int4 + zc_int5) / 5.0;
  out->mF.mX[145ULL] = -(t529->mX.mX[18ULL] /
    (Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xqnom ==
     0.0 ? 1.0E-16 :
     Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xqnom));
  out->mF.mX[146ULL] =
    -(Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_i *
      Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_i *
      zc_int4 * 0.001 + ((((t529->mX.mX[20ULL] * t529->mX.mX[20ULL] * 0.0 +
          t529->mX.mX[21ULL] * t529->mX.mX[21ULL] * 0.0) + t529->mX.mX[22ULL] *
         t529->mX.mX[22ULL] * 0.0) + t529->mX.mX[23ULL] * t529->mX.mX[23ULL] *
        0.0) + t529->mX.mX[24ULL] * t529->mX.mX[24ULL] * 0.0) * 0.001);
  out->mF.mX[147ULL] = -t403[0ULL] - 1.0;
  out->mF.mX[148ULL] = -t404[0ULL] - 1.0;
  out->mF.mX[149ULL] = -t405[0ULL] - 1.0;
  out->mF.mX[150ULL] =
    -(Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_i *
      zc_int6 + zc_int7) / 5.0;
  out->mF.mX[151ULL] = -(t529->mX.mX[27ULL] / (zc_int27 == 0.0 ? 1.0E-16 :
    zc_int27));
  out->mF.mX[152ULL] =
    -(Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_i *
      Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_i *
      zc_int6 * 0.001 + ((((t529->mX.mX[29ULL] * t529->mX.mX[29ULL] * 0.0 +
          t529->mX.mX[30ULL] * t529->mX.mX[30ULL] * 0.0) + t529->mX.mX[31ULL] *
         t529->mX.mX[31ULL] * 0.0) + t529->mX.mX[32ULL] * t529->mX.mX[32ULL] *
        0.0) + t529->mX.mX[33ULL] * t529->mX.mX[33ULL] * 0.0) * 0.001);
  out->mF.mX[153ULL] = -t406[0ULL] - 1.0;
  out->mF.mX[154ULL] = -t407[0ULL] - 1.0;
  out->mF.mX[155ULL] = -t408[0ULL] - 1.0;
  out->mF.mX[156ULL] =
    -(Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_i *
      zc_int38 + intrm_sf_mf_4) / 5.0;
  out->mF.mX[157ULL] = -(t529->mX.mX[34ULL] /
    (Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xqnom ==
     0.0 ? 1.0E-16 :
     Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xqnom));
  out->mF.mX[158ULL] =
    -(Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_i *
      Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_i *
      zc_int38 * 0.001 + ((((t529->mX.mX[36ULL] * t529->mX.mX[36ULL] * 0.0 +
          t529->mX.mX[37ULL] * t529->mX.mX[37ULL] * 0.0) + t529->mX.mX[38ULL] *
         t529->mX.mX[38ULL] * 0.0) + t529->mX.mX[39ULL] * t529->mX.mX[39ULL] *
        0.0) + t529->mX.mX[40ULL] * t529->mX.mX[40ULL] * 0.0) * 0.001);
  out->mF.mX[159ULL] = -t409[0ULL] - 1.0;
  out->mF.mX[160ULL] = -t410[0ULL] - 1.0;
  out->mF.mX[161ULL] = -t411[0ULL] - 1.0;
  out->mF.mX[162ULL] =
    -(Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i *
      Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xVint
      + intrm_sf_mf_5) / 5.0;
  out->mF.mX[163ULL] = -(t529->mX.mX[42ULL] /
    (Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_xqnom ==
     0.0 ? 1.0E-16 :
     Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_xqnom));
  out->mF.mX[164ULL] =
    -(Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i *
      Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i *
      Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xVint
      * 0.001 + ((((t529->mX.mX[44ULL] * t529->mX.mX[44ULL] * 0.0 + t529->mX.mX
                    [45ULL] * t529->mX.mX[45ULL] * 0.0) + t529->mX.mX[46ULL] *
                   t529->mX.mX[46ULL] * 0.0) + t529->mX.mX[47ULL] * t529->mX.mX
                  [47ULL] * 0.0) + t529->mX.mX[48ULL] * t529->mX.mX[48ULL] * 0.0)
      * 0.001);
  out->mF.mX[165ULL] = -t412[0ULL] - 1.0;
  out->mF.mX[166ULL] = -t413[0ULL] - 1.0;
  out->mF.mX[167ULL] = -t414[0ULL] - 1.0;
  out->mF.mX[168ULL] =
    -(Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_i *
      Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_xVint +
      intrm_sf_mf_6) / 5.0;
  out->mF.mX[169ULL] = -(t529->mX.mX[50ULL] /
    (Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xVint ==
     0.0 ? 1.0E-16 :
     Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xVint));
  out->mF.mX[170ULL] =
    -(Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_i *
      Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_i *
      Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_xVint *
      0.001 + ((((t529->mX.mX[52ULL] * t529->mX.mX[52ULL] * 0.0 + t529->mX.mX
                  [53ULL] * t529->mX.mX[53ULL] * 0.0) + t529->mX.mX[54ULL] *
                 t529->mX.mX[54ULL] * 0.0) + t529->mX.mX[55ULL] * t529->mX.mX
                [55ULL] * 0.0) + t529->mX.mX[56ULL] * t529->mX.mX[56ULL] * 0.0) *
      0.001);
  out->mF.mX[171ULL] = -t415[0ULL] - 1.0;
  out->mF.mX[172ULL] = -t416[0ULL] - 1.0;
  out->mF.mX[173ULL] = -t417[0ULL] - 1.0;
  out->mF.mX[174ULL] =
    -(Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_i *
      Plant_Subsystem_Series_Module_Battery_Table_Based4_cell_temperature +
      intrm_sf_mf_7) / 5.0;
  out->mF.mX[175ULL] = -(t529->mX.mX[58ULL] / (zc_int31 == 0.0 ? 1.0E-16 :
    zc_int31));
  out->mF.mX[176ULL] =
    -(Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_i *
      Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_i *
      Plant_Subsystem_Series_Module_Battery_Table_Based4_cell_temperature *
      0.001 + ((((t529->mX.mX[60ULL] * t529->mX.mX[60ULL] * 0.0 + t529->mX.mX
                  [61ULL] * t529->mX.mX[61ULL] * 0.0) + t529->mX.mX[62ULL] *
                 t529->mX.mX[62ULL] * 0.0) + t529->mX.mX[63ULL] * t529->mX.mX
                [63ULL] * 0.0) + t529->mX.mX[64ULL] * t529->mX.mX[64ULL] * 0.0) *
      0.001);
  out->mF.mX[177ULL] = -t418[0ULL] - 1.0;
  out->mF.mX[178ULL] = -t419[0ULL] - 1.0;
  out->mF.mX[179ULL] = -t420[0ULL] - 1.0;
  out->mF.mX[180ULL] =
    -(Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_i *
      Plant_Subsystem_Series_Module_Battery_Table_Based5_cell_temperature +
      intrm_sf_mf_8) / 5.0;
  out->mF.mX[181ULL] = -(t529->mX.mX[66ULL] / (zc_int32 == 0.0 ? 1.0E-16 :
    zc_int32));
  out->mF.mX[182ULL] =
    -(Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_i *
      Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_i *
      Plant_Subsystem_Series_Module_Battery_Table_Based5_cell_temperature *
      0.001 + ((((t529->mX.mX[68ULL] * t529->mX.mX[68ULL] * 0.0 + t529->mX.mX
                  [69ULL] * t529->mX.mX[69ULL] * 0.0) + t529->mX.mX[70ULL] *
                 t529->mX.mX[70ULL] * 0.0) + t529->mX.mX[71ULL] * t529->mX.mX
                [71ULL] * 0.0) + t529->mX.mX[72ULL] * t529->mX.mX[72ULL] * 0.0) *
      0.001);
  out->mF.mX[183ULL] = -t421[0ULL] - 1.0;
  out->mF.mX[184ULL] = -t422[0ULL] - 1.0;
  out->mF.mX[185ULL] = -t423[0ULL] - 1.0;
  out->mF.mX[186ULL] =
    -(Plant_Subsystem_Series_Module_Battery_Table_Based7_electricalModel_i *
      Plant_Subsystem_Series_Module_Battery_Table_Based6_cell_temperature +
      intrm_sf_mf_9) / 5.0;
  out->mF.mX[187ULL] = -(t529->mX.mX[74ULL] / (zc_int33 == 0.0 ? 1.0E-16 :
    zc_int33));
  out->mF.mX[188ULL] =
    -(Plant_Subsystem_Series_Module_Battery_Table_Based7_electricalModel_i *
      Plant_Subsystem_Series_Module_Battery_Table_Based7_electricalModel_i *
      Plant_Subsystem_Series_Module_Battery_Table_Based6_cell_temperature *
      0.001 + ((((t529->mX.mX[76ULL] * t529->mX.mX[76ULL] * 0.0 + t529->mX.mX
                  [77ULL] * t529->mX.mX[77ULL] * 0.0) + t529->mX.mX[78ULL] *
                 t529->mX.mX[78ULL] * 0.0) + t529->mX.mX[79ULL] * t529->mX.mX
                [79ULL] * 0.0) + t529->mX.mX[80ULL] * t529->mX.mX[80ULL] * 0.0) *
      0.001);
  out->mF.mX[189ULL] = -t424[0ULL] - 1.0;
  out->mF.mX[190ULL] = -t425[0ULL] - 1.0;
  out->mF.mX[191ULL] = -t426[0ULL] - 1.0;
  out->mF.mX[192ULL] =
    -(Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_i *
      zc_int20 + zc_int21) / 5.0;
  out->mF.mX[193ULL] = -(t529->mX.mX[82ULL] / (zc_int34 == 0.0 ? 1.0E-16 :
    zc_int34));
  out->mF.mX[194ULL] =
    -(Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_i *
      Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_i *
      zc_int20 * 0.001 + ((((t529->mX.mX[84ULL] * t529->mX.mX[84ULL] * 0.0 +
          t529->mX.mX[85ULL] * t529->mX.mX[85ULL] * 0.0) + t529->mX.mX[86ULL] *
         t529->mX.mX[86ULL] * 0.0) + t529->mX.mX[87ULL] * t529->mX.mX[87ULL] *
        0.0) + t529->mX.mX[88ULL] * t529->mX.mX[88ULL] * 0.0) * 0.001);
  out->mF.mX[195ULL] = -t427[0ULL] - 1.0;
  out->mF.mX[196ULL] = -t428[0ULL] - 1.0;
  out->mF.mX[197ULL] = -t429[0ULL] - 1.0;
  out->mF.mX[198ULL] =
    -(Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_i *
      Plant_Subsystem_Series_Module_Battery_Table_Based8_cell_temperature +
      intrm_sf_mf_11) / 5.0;
  out->mF.mX[199ULL] = -(t529->mX.mX[89ULL] /
    (Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_xqnom ==
     0.0 ? 1.0E-16 :
     Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_xqnom));
  out->mF.mX[200ULL] =
    -(Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_i *
      Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_i *
      Plant_Subsystem_Series_Module_Battery_Table_Based8_cell_temperature *
      0.001 + ((((t529->mX.mX[91ULL] * t529->mX.mX[91ULL] * 0.0 + t529->mX.mX
                  [92ULL] * t529->mX.mX[92ULL] * 0.0) + t529->mX.mX[93ULL] *
                 t529->mX.mX[93ULL] * 0.0) + t529->mX.mX[94ULL] * t529->mX.mX
                [94ULL] * 0.0) + t529->mX.mX[95ULL] * t529->mX.mX[95ULL] * 0.0) *
      0.001);
  out->mF.mX[201ULL] = -t430[0ULL] - 1.0;
  out->mF.mX[202ULL] = -t431[0ULL] - 1.0;
  out->mF.mX[203ULL] = -t432[0ULL] - 1.0;
  out->mF.mX[204ULL] = 0.0;
  (void)LC;
  (void)out;
  return 0;
}
