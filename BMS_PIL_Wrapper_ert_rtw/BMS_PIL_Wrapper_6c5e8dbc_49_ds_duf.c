/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'BMS_PIL_Wrapper/Plant/Solver Configuration'.
 */

#include "ne_ds.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_sys_struct.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_duf.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_externals.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T BMS_PIL_Wrapper_6c5e8dbc_49_ds_duf(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t208, NeDsMethodOutput *out)
{
  static real_T _cg_const_1[5] = { 263.15, 273.15, 298.15, 313.15, 328.15 };

  ETTSf3049b48 t11;
  ETTSf3049b48 t12;
  ETTSf3049b48 t6;
  ETTSf3049b48 t7;
  ETTSf3049b48 t8;
  real_T t156[72];
  real_T t181[36];
  real_T t182[36];
  real_T nonscalar2[5];
  real_T nonscalar4[5];
  real_T nonscalar5[5];
  real_T nonscalar6[5];
  real_T t101[1];
  real_T t161[1];
  real_T
    Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xqnom;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based1_cell_temperature;
  real_T
    Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xqnom;
  real_T
    Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_xqnom;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_i;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based8_cell_temperature;
  real_T
    Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_xqnom;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_i;
  real_T
    Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_xqnom;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_i;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xqnom;
  real_T intermediate_der528;
  real_T intermediate_der540;
  real_T intermediate_der554;
  real_T intermediate_der568;
  real_T intermediate_der575;
  real_T intermediate_der582;
  real_T intermediate_der588;
  real_T intermediate_der595;
  real_T intermediate_der601;
  real_T intermediate_der608;
  real_T intermediate_der615;
  real_T intrm_sf_mf_11;
  real_T intrm_sf_mf_4;
  real_T intrm_sf_mf_5;
  real_T intrm_sf_mf_7;
  real_T t185;
  real_T t187;
  real_T t188;
  real_T t189;
  real_T t190;
  real_T t193;
  real_T t194;
  real_T t195;
  real_T t196;
  real_T t198;
  real_T t199;
  real_T t203;
  real_T t205;
  real_T t207;
  real_T zc_int27;
  real_T zc_int30;
  real_T zc_int31;
  real_T zc_int32;
  real_T zc_int33;
  real_T zc_int34;
  real_T zc_int6;
  real_T zc_int8;
  size_t t25[1];
  size_t t26[1];
  size_t t28[1];
  size_t t183;
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
  Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_i =
    (((t208->mX.mX[108ULL] * 0.02564102564102564 + t208->mX.mX[109ULL] *
       0.02564102564102564) + t208->mX.mX[97ULL] * -0.02564102564102564) +
     t208->mU.mX[0ULL]) + t208->mU.mX[1ULL];
  t101[0ULL] = t208->mX.mX[147ULL];
  t25[0] = 11ULL;
  t26[0] = 1ULL;
  tlu2_linear_nearest_prelookup(&t11.mField0[0ULL], &t11.mField1[0ULL],
    &t11.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t101[0ULL],
    &t25[0ULL], &t26[0ULL]);
  t101[0ULL] = t208->mX.mX[0ULL];
  t28[0] = 5ULL;
  tlu2_linear_nearest_prelookup(&t12.mField0[0ULL], &t12.mField1[0ULL],
    &t12.mField2[0ULL], &nonscalar2[0ULL], &t101[0ULL], &t28[0ULL], &t26[0ULL]);
  tlu2_2d_linear_nearest_value(&t161[0ULL], &t11.mField0[0ULL], &t11.mField2
    [0ULL], &t12.mField0[0ULL], &t12.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField2, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  t203 = t161[0ULL];
  tlu2_1d_linear_nearest_value(&t161[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], &nonscalar4[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xqnom =
    t161[0ULL];
  t187 = ((((t208->mX.mX[96ULL] * -0.02564102564102564 + t208->mX.mX[100ULL] *
             0.02564102564102564) + t208->mX.mX[111ULL] * 0.02564102564102564) +
           t208->mX.mX[112ULL] * 0.02564102564102564) + t208->mU.mX[0ULL]) +
    t208->mU.mX[1ULL];
  t101[0ULL] = t208->mX.mX[153ULL];
  tlu2_linear_nearest_prelookup(&t12.mField0[0ULL], &t12.mField1[0ULL],
    &t12.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t101[0ULL],
    &t25[0ULL], &t26[0ULL]);
  t101[0ULL] = t208->mX.mX[8ULL];
  tlu2_linear_nearest_prelookup(&t11.mField0[0ULL], &t11.mField1[0ULL],
    &t11.mField2[0ULL], &nonscalar2[0ULL], &t101[0ULL], &t28[0ULL], &t26[0ULL]);
  tlu2_2d_linear_nearest_value(&t161[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], &t11.mField0[0ULL], &t11.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField2, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based1_cell_temperature = t161
    [0ULL];
  tlu2_1d_linear_nearest_value(&t161[0ULL], &t11.mField0[0ULL], &t11.mField2
    [0ULL], &nonscalar4[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xqnom =
    t161[0ULL];
  t188 = ((((t208->mX.mX[98ULL] * -0.02564102564102564 + t208->mX.mX[99ULL] *
             0.02564102564102564) + t208->mX.mX[114ULL] * 0.02564102564102564) +
           t208->mX.mX[115ULL] * 0.02564102564102564) + t208->mU.mX[0ULL]) +
    t208->mU.mX[1ULL];
  t101[0ULL] = t208->mX.mX[158ULL];
  tlu2_linear_nearest_prelookup(&t7.mField0[0ULL], &t7.mField1[0ULL],
    &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t101[0ULL],
    &t25[0ULL], &t26[0ULL]);
  t101[0ULL] = t208->mX.mX[17ULL];
  tlu2_linear_nearest_prelookup(&t11.mField0[0ULL], &t11.mField1[0ULL],
    &t11.mField2[0ULL], &nonscalar2[0ULL], &t101[0ULL], &t28[0ULL], &t26[0ULL]);
  tlu2_2d_linear_nearest_value(&t161[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    &t11.mField0[0ULL], &t11.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  zc_int6 = t161[0ULL];
  tlu2_1d_linear_nearest_value(&t161[0ULL], &t11.mField0[0ULL], &t11.mField2
    [0ULL], &nonscalar5[0ULL], &t28[0ULL], &t26[0ULL]);
  zc_int27 = t161[0ULL];
  t189 = (((t208->mX.mX[99ULL] * -0.02564102564102564 + t208->mX.mX[117ULL] *
            0.02564102564102564) + t208->mX.mX[118ULL] * 0.02564102564102564) +
          t208->mU.mX[0ULL]) + t208->mU.mX[1ULL];
  t101[0ULL] = t208->mX.mX[163ULL];
  tlu2_linear_nearest_prelookup(&t11.mField0[0ULL], &t11.mField1[0ULL],
    &t11.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t101[0ULL],
    &t25[0ULL], &t26[0ULL]);
  t101[0ULL] = t208->mX.mX[25ULL];
  tlu2_linear_nearest_prelookup(&t6.mField0[0ULL], &t6.mField1[0ULL],
    &t6.mField2[0ULL], &nonscalar2[0ULL], &t101[0ULL], &t28[0ULL], &t26[0ULL]);
  tlu2_2d_linear_nearest_value(&t161[0ULL], &t11.mField0[0ULL], &t11.mField2
    [0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  zc_int8 = t161[0ULL];
  tlu2_1d_linear_nearest_value(&t161[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    &nonscalar6[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xqnom =
    t161[0ULL];
  t190 = ((((t208->mX.mX[100ULL] * -0.02564102564102564 + t208->mX.mX[101ULL] *
             0.02564102564102564) + t208->mX.mX[120ULL] * 0.02564102564102564) +
           t208->mX.mX[121ULL] * 0.02564102564102564) + t208->mU.mX[0ULL]) +
    t208->mU.mX[1ULL];
  t101[0ULL] = t208->mX.mX[168ULL];
  tlu2_linear_nearest_prelookup(&t12.mField0[0ULL], &t12.mField1[0ULL],
    &t12.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t101[0ULL],
    &t25[0ULL], &t26[0ULL]);
  t101[0ULL] = t208->mX.mX[16ULL];
  tlu2_linear_nearest_prelookup(&t6.mField0[0ULL], &t6.mField1[0ULL],
    &t6.mField2[0ULL], &nonscalar2[0ULL], &t101[0ULL], &t28[0ULL], &t26[0ULL]);
  tlu2_2d_linear_nearest_value(&t161[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  intrm_sf_mf_4 = t161[0ULL];
  tlu2_1d_linear_nearest_value(&t161[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    &nonscalar4[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_xqnom =
    t161[0ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i =
    ((((t208->mX.mX[101ULL] * -0.02564102564102564 + t208->mX.mX[102ULL] *
        0.02564102564102564) + t208->mX.mX[123ULL] * 0.02564102564102564) +
      t208->mX.mX[124ULL] * 0.02564102564102564) + t208->mU.mX[0ULL]) +
    t208->mU.mX[1ULL];
  t101[0ULL] = t208->mX.mX[173ULL];
  tlu2_linear_nearest_prelookup(&t12.mField0[0ULL], &t12.mField1[0ULL],
    &t12.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t101[0ULL],
    &t25[0ULL], &t26[0ULL]);
  t101[0ULL] = t208->mX.mX[41ULL];
  tlu2_linear_nearest_prelookup(&t11.mField0[0ULL], &t11.mField1[0ULL],
    &t11.mField2[0ULL], &nonscalar2[0ULL], &t101[0ULL], &t28[0ULL], &t26[0ULL]);
  tlu2_2d_linear_nearest_value(&t161[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], &t11.mField0[0ULL], &t11.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField2, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  intrm_sf_mf_5 = t161[0ULL];
  tlu2_1d_linear_nearest_value(&t161[0ULL], &t11.mField0[0ULL], &t11.mField2
    [0ULL], &nonscalar4[0ULL], &t28[0ULL], &t26[0ULL]);
  zc_int30 = t161[0ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_i =
    ((((t208->mX.mX[102ULL] * -0.02564102564102564 + t208->mX.mX[103ULL] *
        0.02564102564102564) + t208->mX.mX[126ULL] * 0.02564102564102564) +
      t208->mX.mX[127ULL] * 0.02564102564102564) + t208->mU.mX[0ULL]) +
    t208->mU.mX[1ULL];
  t101[0ULL] = t208->mX.mX[178ULL];
  tlu2_linear_nearest_prelookup(&t11.mField0[0ULL], &t11.mField1[0ULL],
    &t11.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t101[0ULL],
    &t25[0ULL], &t26[0ULL]);
  t101[0ULL] = t208->mX.mX[49ULL];
  tlu2_linear_nearest_prelookup(&t7.mField0[0ULL], &t7.mField1[0ULL],
    &t7.mField2[0ULL], &nonscalar2[0ULL], &t101[0ULL], &t28[0ULL], &t26[0ULL]);
  tlu2_2d_linear_nearest_value(&t161[0ULL], &t11.mField0[0ULL], &t11.mField2
    [0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  t205 = t161[0ULL];
  tlu2_1d_linear_nearest_value(&t161[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    &nonscalar4[0ULL], &t28[0ULL], &t26[0ULL]);
  zc_int31 = t161[0ULL];
  t193 = ((((t208->mX.mX[103ULL] * -0.02564102564102564 + t208->mX.mX[104ULL] *
             0.02564102564102564) + t208->mX.mX[129ULL] * 0.02564102564102564) +
           t208->mX.mX[130ULL] * 0.02564102564102564) + t208->mU.mX[0ULL]) +
    t208->mU.mX[1ULL];
  t101[0ULL] = t208->mX.mX[183ULL];
  tlu2_linear_nearest_prelookup(&t8.mField0[0ULL], &t8.mField1[0ULL],
    &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t101[0ULL],
    &t25[0ULL], &t26[0ULL]);
  t101[0ULL] = t208->mX.mX[57ULL];
  tlu2_linear_nearest_prelookup(&t12.mField0[0ULL], &t12.mField1[0ULL],
    &t12.mField2[0ULL], &nonscalar2[0ULL], &t101[0ULL], &t28[0ULL], &t26[0ULL]);
  tlu2_2d_linear_nearest_value(&t161[0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL],
    &t12.mField0[0ULL], &t12.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  intrm_sf_mf_7 = t161[0ULL];
  tlu2_1d_linear_nearest_value(&t161[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], &nonscalar4[0ULL], &t28[0ULL], &t26[0ULL]);
  zc_int32 = t161[0ULL];
  t194 = ((((t208->mX.mX[104ULL] * -0.02564102564102564 + t208->mX.mX[105ULL] *
             0.02564102564102564) + t208->mX.mX[132ULL] * 0.02564102564102564) +
           t208->mX.mX[133ULL] * 0.02564102564102564) + t208->mU.mX[0ULL]) +
    t208->mU.mX[1ULL];
  t101[0ULL] = t208->mX.mX[188ULL];
  tlu2_linear_nearest_prelookup(&t8.mField0[0ULL], &t8.mField1[0ULL],
    &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t101[0ULL],
    &t25[0ULL], &t26[0ULL]);
  t101[0ULL] = t208->mX.mX[65ULL];
  tlu2_linear_nearest_prelookup(&t7.mField0[0ULL], &t7.mField1[0ULL],
    &t7.mField2[0ULL], &nonscalar2[0ULL], &t101[0ULL], &t28[0ULL], &t26[0ULL]);
  tlu2_2d_linear_nearest_value(&t161[0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL],
    &t7.mField0[0ULL], &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  t207 = t161[0ULL];
  tlu2_1d_linear_nearest_value(&t161[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    &nonscalar4[0ULL], &t28[0ULL], &t26[0ULL]);
  zc_int33 = t161[0ULL];
  t195 = ((((t208->mX.mX[105ULL] * -0.02564102564102564 + t208->mX.mX[106ULL] *
             0.02564102564102564) + t208->mX.mX[135ULL] * 0.02564102564102564) +
           t208->mX.mX[136ULL] * 0.02564102564102564) + t208->mU.mX[0ULL]) +
    t208->mU.mX[1ULL];
  t101[0ULL] = t208->mX.mX[193ULL];
  tlu2_linear_nearest_prelookup(&t7.mField0[0ULL], &t7.mField1[0ULL],
    &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t101[0ULL],
    &t25[0ULL], &t26[0ULL]);
  t101[0ULL] = t208->mX.mX[73ULL];
  tlu2_linear_nearest_prelookup(&t6.mField0[0ULL], &t6.mField1[0ULL],
    &t6.mField2[0ULL], &nonscalar2[0ULL], &t101[0ULL], &t28[0ULL], &t26[0ULL]);
  tlu2_2d_linear_nearest_value(&t161[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    &t6.mField0[0ULL], &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  t199 = t161[0ULL];
  tlu2_1d_linear_nearest_value(&t161[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    &nonscalar4[0ULL], &t28[0ULL], &t26[0ULL]);
  zc_int34 = t161[0ULL];
  t196 = ((((t208->mX.mX[106ULL] * -0.02564102564102564 + t208->mX.mX[107ULL] *
             0.02564102564102564) + t208->mX.mX[138ULL] * 0.02564102564102564) +
           t208->mX.mX[139ULL] * 0.02564102564102564) + t208->mU.mX[0ULL]) +
    t208->mU.mX[1ULL];
  t101[0ULL] = t208->mX.mX[198ULL];
  tlu2_linear_nearest_prelookup(&t11.mField0[0ULL], &t11.mField1[0ULL],
    &t11.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t101[0ULL],
    &t25[0ULL], &t26[0ULL]);
  t101[0ULL] = t208->mX.mX[81ULL];
  tlu2_linear_nearest_prelookup(&t7.mField0[0ULL], &t7.mField1[0ULL],
    &t7.mField2[0ULL], &nonscalar2[0ULL], &t101[0ULL], &t28[0ULL], &t26[0ULL]);
  tlu2_2d_linear_nearest_value(&t161[0ULL], &t11.mField0[0ULL], &t11.mField2
    [0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based8_cell_temperature = t161
    [0ULL];
  tlu2_1d_linear_nearest_value(&t161[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    &nonscalar4[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_i =
    ((((t208->mX.mX[98ULL] * 0.02564102564102564 + t208->mX.mX[107ULL] *
        -0.02564102564102564) + t208->mX.mX[141ULL] * 0.02564102564102564) +
      t208->mX.mX[142ULL] * 0.02564102564102564) + t208->mU.mX[0ULL]) +
    t208->mU.mX[1ULL];
  t101[0ULL] = t208->mX.mX[203ULL];
  tlu2_linear_nearest_prelookup(&t12.mField0[0ULL], &t12.mField1[0ULL],
    &t12.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t101[0ULL],
    &t25[0ULL], &t26[0ULL]);
  t101[0ULL] = t208->mX.mX[26ULL];
  tlu2_linear_nearest_prelookup(&t11.mField0[0ULL], &t11.mField1[0ULL],
    &t11.mField2[0ULL], &nonscalar2[0ULL], &t101[0ULL], &t28[0ULL], &t26[0ULL]);
  tlu2_2d_linear_nearest_value(&t101[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], &t11.mField0[0ULL], &t11.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField2, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  intrm_sf_mf_11 = t101[0ULL];
  tlu2_1d_linear_nearest_value(&t101[0ULL], &t11.mField0[0ULL], &t11.mField2
    [0ULL], &nonscalar4[0ULL], &t28[0ULL], &t26[0ULL]);
  if (t208->mM.mX[1ULL] != 0) {
    t198 = 8.200000000000002E-8;
  } else {
    t198 = t208->mX.mX[145ULL] * t203;
  }

  if (t208->mM.mX[40ULL] != 0) {
    t203 = 8.200000000000002E-8;
  } else {
    t203 = t208->mX.mX[171ULL] * intrm_sf_mf_5;
  }

  if (t208->mM.mX[43ULL] != 0) {
    intrm_sf_mf_5 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_5 = t208->mX.mX[176ULL] * t205;
  }

  if (t208->mM.mX[47ULL] != 0) {
    t205 = 8.200000000000002E-8;
  } else {
    t205 = t208->mX.mX[181ULL] * intrm_sf_mf_7;
  }

  if (t208->mM.mX[50ULL] != 0) {
    intrm_sf_mf_7 = 8.200000000000002E-8;
  } else {
    intrm_sf_mf_7 = t208->mX.mX[186ULL] * t207;
  }

  if (t208->mM.mX[53ULL] != 0) {
    t207 = 8.200000000000002E-8;
  } else {
    t207 = t208->mX.mX[191ULL] * t199;
  }

  if (t208->mM.mX[66ULL] != 0) {
    t199 = 8.200000000000002E-8;
  } else {
    t199 = t208->mX.mX[151ULL] *
      Plant_Subsystem_Series_Module_Battery_Table_Based1_cell_temperature;
  }

  if (t208->mM.mX[57ULL] != 0) {
    Plant_Subsystem_Series_Module_Battery_Table_Based1_cell_temperature =
      8.200000000000002E-8;
  } else {
    Plant_Subsystem_Series_Module_Battery_Table_Based1_cell_temperature =
      t208->mX.mX[196ULL] *
      Plant_Subsystem_Series_Module_Battery_Table_Based8_cell_temperature;
  }

  if (t208->mM.mX[60ULL] != 0) {
    Plant_Subsystem_Series_Module_Battery_Table_Based8_cell_temperature =
      8.200000000000002E-8;
  } else {
    Plant_Subsystem_Series_Module_Battery_Table_Based8_cell_temperature =
      t208->mX.mX[201ULL] * intrm_sf_mf_11;
  }

  if (t208->mM.mX[44ULL] != 0) {
    intrm_sf_mf_11 = 0.02808;
  } else {
    intrm_sf_mf_11 = t208->mX.mX[144ULL] *
      Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xqnom;
  }

  if (t208->mM.mX[77ULL] != 0) {
    Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xqnom =
      0.02808;
  } else {
    Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xqnom =
      t208->mX.mX[150ULL] *
      Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xqnom;
  }

  if (t208->mM.mX[110ULL] != 0) {
    Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xqnom =
      0.033696000000000004;
  } else {
    Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xqnom =
      t208->mX.mX[155ULL] * zc_int27;
  }

  if (t208->mM.mX[13ULL] != 0) {
    zc_int27 = 0.041184;
  } else {
    zc_int27 = t208->mX.mX[160ULL] *
      Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xqnom;
  }

  if (t208->mM.mX[38ULL] != 0) {
    Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xqnom =
      0.02808;
  } else {
    Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xqnom =
      t208->mX.mX[165ULL] *
      Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_xqnom;
  }

  if (t208->mM.mX[41ULL] != 0) {
    Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_xqnom =
      0.02808;
  } else {
    Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_xqnom =
      t208->mX.mX[170ULL] * zc_int30;
  }

  if (t208->mM.mX[45ULL] != 0) {
    zc_int30 = 0.02808;
  } else {
    zc_int30 = t208->mX.mX[175ULL] * zc_int31;
  }

  if (t208->mM.mX[48ULL] != 0) {
    zc_int31 = 0.02808;
  } else {
    zc_int31 = t208->mX.mX[180ULL] * zc_int32;
  }

  if (t208->mM.mX[51ULL] != 0) {
    zc_int32 = 0.02808;
  } else {
    zc_int32 = t208->mX.mX[185ULL] * zc_int33;
  }

  if (t208->mM.mX[54ULL] != 0) {
    zc_int33 = 0.02808;
  } else {
    zc_int33 = t208->mX.mX[190ULL] * zc_int34;
  }

  if (t208->mM.mX[58ULL] != 0) {
    zc_int34 = 0.02808;
  } else {
    zc_int34 = t161[0ULL] * t208->mX.mX[195ULL];
  }

  if (t208->mM.mX[61ULL] != 0) {
    Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_xqnom =
      0.02808;
  } else {
    Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_xqnom =
      t101[0ULL] * t208->mX.mX[200ULL];
  }

  if (t208->mM.mX[99ULL] != 0) {
    Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_xqnom =
      8.200000000000002E-8;
  } else {
    Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_xqnom =
      t208->mX.mX[156ULL] * zc_int6;
  }

  if (t208->mM.mX[2ULL] != 0) {
    zc_int6 = 8.200000000000002E-8;
  } else {
    zc_int6 = t208->mX.mX[161ULL] * zc_int8;
  }

  if (t208->mM.mX[35ULL] != 0) {
    zc_int8 = 8.200000000000002E-8;
  } else {
    zc_int8 = t208->mX.mX[166ULL] * intrm_sf_mf_4;
  }

  intrm_sf_mf_4 =
    Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_i * t198 *
    0.002;
  intermediate_der528 = t187 * t199 * 0.002;
  intermediate_der540 = t188 *
    Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_xqnom *
    0.002;
  intermediate_der554 = t189 * zc_int6 * 0.002;
  intermediate_der568 = t190 * zc_int8 * 0.002;
  intermediate_der575 =
    Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i * t203 *
    0.002;
  intermediate_der582 =
    Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_i *
    intrm_sf_mf_5 * 0.002;
  intermediate_der588 = t193 * t205 * 0.002;
  intermediate_der595 = t194 * intrm_sf_mf_7 * 0.002;
  intermediate_der601 = t195 * t207 * 0.002;
  intermediate_der608 = t196 *
    Plant_Subsystem_Series_Module_Battery_Table_Based1_cell_temperature * 0.002;
  intermediate_der615 =
    Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_i *
    Plant_Subsystem_Series_Module_Battery_Table_Based8_cell_temperature * 0.002;
  t185 = -(real_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_i < 0.0);
  t181[0ULL] = t185 / (intrm_sf_mf_11 == 0.0 ? 1.0E-16 : intrm_sf_mf_11);
  Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_i = -(real_T)
    (t187 < 0.0);
  t181[1ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_i /
    (Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xqnom ==
     0.0 ? 1.0E-16 :
     Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xqnom);
  t187 = -(real_T)(t188 < 0.0);
  t181[2ULL] = t187 /
    (Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xqnom ==
     0.0 ? 1.0E-16 :
     Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xqnom);
  t188 = -(real_T)(t189 < 0.0);
  t181[3ULL] = t188 / (zc_int27 == 0.0 ? 1.0E-16 : zc_int27);
  t189 = -(real_T)(t190 < 0.0);
  t181[4ULL] = t189 /
    (Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xqnom ==
     0.0 ? 1.0E-16 :
     Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xqnom);
  t190 = -(real_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i < 0.0);
  t181[5ULL] = t190 /
    (Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_xqnom ==
     0.0 ? 1.0E-16 :
     Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_xqnom);
  Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i =
    -(real_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_i < 0.0);
  t181[6ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i /
    (zc_int30 == 0.0 ? 1.0E-16 : zc_int30);
  Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_i =
    -(real_T)(t193 < 0.0);
  t181[7ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_i /
    (zc_int31 == 0.0 ? 1.0E-16 : zc_int31);
  t193 = -(real_T)(t194 < 0.0);
  t181[8ULL] = t193 / (zc_int32 == 0.0 ? 1.0E-16 : zc_int32);
  t194 = -(real_T)(t195 < 0.0);
  t181[9ULL] = t194 / (zc_int33 == 0.0 ? 1.0E-16 : zc_int33);
  t195 = -(real_T)(t196 < 0.0);
  t181[10ULL] = t195 / (zc_int34 == 0.0 ? 1.0E-16 : zc_int34);
  t196 = -(real_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_i < 0.0);
  t181[11ULL] = t196 /
    (Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_xqnom ==
     0.0 ? 1.0E-16 :
     Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_xqnom);
  Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_i = -t198;
  t181[12ULL] = -t198 / 5.0;
  t181[13ULL] = -intrm_sf_mf_4;
  t198 = -t199;
  t181[14ULL] = -t199 / 5.0;
  t181[15ULL] = -intermediate_der528;
  t199 =
    -Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_xqnom;
  t181[16ULL] =
    -Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_xqnom /
    5.0;
  t181[17ULL] = -intermediate_der540;
  Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_xqnom =
    -zc_int6;
  t181[18ULL] = -zc_int6 / 5.0;
  t181[19ULL] = -intermediate_der554;
  zc_int6 = -zc_int8;
  t181[20ULL] = -zc_int8 / 5.0;
  t181[21ULL] = -intermediate_der568;
  zc_int8 = -t203;
  t181[22ULL] = -t203 / 5.0;
  t181[23ULL] = -intermediate_der575;
  t203 = -intrm_sf_mf_5;
  t181[24ULL] = -intrm_sf_mf_5 / 5.0;
  t181[25ULL] = -intermediate_der582;
  t181[26ULL] = -t205 / 5.0;
  t181[27ULL] = -intermediate_der588;
  t181[28ULL] = -intrm_sf_mf_7 / 5.0;
  t181[29ULL] = -intermediate_der595;
  t181[30ULL] = -t207 / 5.0;
  t181[31ULL] = -intermediate_der601;
  t181[32ULL] =
    -Plant_Subsystem_Series_Module_Battery_Table_Based1_cell_temperature / 5.0;
  t181[33ULL] = -intermediate_der608;
  t181[34ULL] =
    -Plant_Subsystem_Series_Module_Battery_Table_Based8_cell_temperature / 5.0;
  t181[35ULL] = -intermediate_der615;
  t182[0ULL] = t185 / (intrm_sf_mf_11 == 0.0 ? 1.0E-16 : intrm_sf_mf_11);
  t182[1ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_i /
    (Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xqnom ==
     0.0 ? 1.0E-16 :
     Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xqnom);
  t182[2ULL] = t187 /
    (Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xqnom ==
     0.0 ? 1.0E-16 :
     Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xqnom);
  t182[3ULL] = t188 / (zc_int27 == 0.0 ? 1.0E-16 : zc_int27);
  t182[4ULL] = t189 /
    (Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xqnom ==
     0.0 ? 1.0E-16 :
     Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xqnom);
  t182[5ULL] = t190 /
    (Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_xqnom ==
     0.0 ? 1.0E-16 :
     Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_xqnom);
  t182[6ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i /
    (zc_int30 == 0.0 ? 1.0E-16 : zc_int30);
  t182[7ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_i /
    (zc_int31 == 0.0 ? 1.0E-16 : zc_int31);
  t182[8ULL] = t193 / (zc_int32 == 0.0 ? 1.0E-16 : zc_int32);
  t182[9ULL] = t194 / (zc_int33 == 0.0 ? 1.0E-16 : zc_int33);
  t182[10ULL] = t195 / (zc_int34 == 0.0 ? 1.0E-16 : zc_int34);
  t182[11ULL] = t196 /
    (Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_xqnom ==
     0.0 ? 1.0E-16 :
     Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_xqnom);
  t182[12ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_i / 5.0;
  t182[13ULL] = -intrm_sf_mf_4;
  t182[14ULL] = t198 / 5.0;
  t182[15ULL] = -intermediate_der528;
  t182[16ULL] = t199 / 5.0;
  t182[17ULL] = -intermediate_der540;
  t182[18ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_xqnom /
    5.0;
  t182[19ULL] = -intermediate_der554;
  t182[20ULL] = zc_int6 / 5.0;
  t182[21ULL] = -intermediate_der568;
  t182[22ULL] = zc_int8 / 5.0;
  t182[23ULL] = -intermediate_der575;
  t182[24ULL] = t203 / 5.0;
  t182[25ULL] = -intermediate_der582;
  t182[26ULL] = -t205 / 5.0;
  t182[27ULL] = -intermediate_der588;
  t182[28ULL] = -intrm_sf_mf_7 / 5.0;
  t182[29ULL] = -intermediate_der595;
  t182[30ULL] = -t207 / 5.0;
  t182[31ULL] = -intermediate_der601;
  t182[32ULL] =
    -Plant_Subsystem_Series_Module_Battery_Table_Based1_cell_temperature / 5.0;
  t182[33ULL] = -intermediate_der608;
  t182[34ULL] =
    -Plant_Subsystem_Series_Module_Battery_Table_Based8_cell_temperature / 5.0;
  t182[35ULL] = -intermediate_der615;
  for (t183 = 0ULL; t183 < 36ULL; t183++) {
    t156[t183] = t181[t183];
  }

  for (t183 = 0ULL; t183 < 36ULL; t183++) {
    t156[t183 + 36ULL] = t182[t183];
  }

  out->mDUF.mX[0] = t156[0];
  out->mDUF.mX[1] = t156[1];
  out->mDUF.mX[2] = t156[2];
  out->mDUF.mX[3] = t156[3];
  out->mDUF.mX[4] = t156[4];
  out->mDUF.mX[5] = t156[5];
  out->mDUF.mX[6] = t156[6];
  out->mDUF.mX[7] = t156[7];
  out->mDUF.mX[8] = t156[8];
  out->mDUF.mX[9] = t156[9];
  out->mDUF.mX[10] = t156[10];
  out->mDUF.mX[11] = t156[11];
  out->mDUF.mX[12] = t156[12];
  out->mDUF.mX[13] = t156[13];
  out->mDUF.mX[14] = t156[14];
  out->mDUF.mX[15] = t156[15];
  out->mDUF.mX[16] = t156[16];
  out->mDUF.mX[17] = t156[17];
  out->mDUF.mX[18] = t156[18];
  out->mDUF.mX[19] = t156[19];
  out->mDUF.mX[20] = t156[20];
  out->mDUF.mX[21] = t156[21];
  out->mDUF.mX[22] = t156[22];
  out->mDUF.mX[23] = t156[23];
  out->mDUF.mX[24] = t156[24];
  out->mDUF.mX[25] = t156[25];
  out->mDUF.mX[26] = t156[26];
  out->mDUF.mX[27] = t156[27];
  out->mDUF.mX[28] = t156[28];
  out->mDUF.mX[29] = t156[29];
  out->mDUF.mX[30] = t156[30];
  out->mDUF.mX[31] = t156[31];
  out->mDUF.mX[32] = t156[32];
  out->mDUF.mX[33] = t156[33];
  out->mDUF.mX[34] = t156[34];
  out->mDUF.mX[35] = t156[35];
  out->mDUF.mX[36] = t156[36];
  out->mDUF.mX[37] = t156[37];
  out->mDUF.mX[38] = t156[38];
  out->mDUF.mX[39] = t156[39];
  out->mDUF.mX[40] = t156[40];
  out->mDUF.mX[41] = t156[41];
  out->mDUF.mX[42] = t156[42];
  out->mDUF.mX[43] = t156[43];
  out->mDUF.mX[44] = t156[44];
  out->mDUF.mX[45] = t156[45];
  out->mDUF.mX[46] = t156[46];
  out->mDUF.mX[47] = t156[47];
  out->mDUF.mX[48] = t156[48];
  out->mDUF.mX[49] = t156[49];
  out->mDUF.mX[50] = t156[50];
  out->mDUF.mX[51] = t156[51];
  out->mDUF.mX[52] = t156[52];
  out->mDUF.mX[53] = t156[53];
  out->mDUF.mX[54] = t156[54];
  out->mDUF.mX[55] = t156[55];
  out->mDUF.mX[56] = t156[56];
  out->mDUF.mX[57] = t156[57];
  out->mDUF.mX[58] = t156[58];
  out->mDUF.mX[59] = t156[59];
  out->mDUF.mX[60] = t156[60];
  out->mDUF.mX[61] = t156[61];
  out->mDUF.mX[62] = t156[62];
  out->mDUF.mX[63] = t156[63];
  out->mDUF.mX[64] = t156[64];
  out->mDUF.mX[65] = t156[65];
  out->mDUF.mX[66] = t156[66];
  out->mDUF.mX[67] = t156[67];
  out->mDUF.mX[68] = t156[68];
  out->mDUF.mX[69] = t156[69];
  out->mDUF.mX[70] = t156[70];
  out->mDUF.mX[71] = t156[71];
  (void)LC;
  (void)out;
  return 0;
}
