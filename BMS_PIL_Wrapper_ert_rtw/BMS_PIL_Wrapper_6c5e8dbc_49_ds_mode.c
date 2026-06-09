/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'BMS_PIL_Wrapper/Plant/Solver Configuration'.
 */

#include "ne_ds.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_sys_struct.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_mode.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_externals.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T BMS_PIL_Wrapper_6c5e8dbc_49_ds_mode(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t279, NeDsMethodOutput *out)
{
  static real_T _cg_const_1[5] = { 263.15, 273.15, 298.15, 313.15, 328.15 };

  ETTSf3049b48 t11;
  ETTSf3049b48 t12;
  ETTSf3049b48 t14;
  ETTSf3049b48 t18;
  ETTSf3049b48 t22;
  real_T nonscalar2[5];
  real_T nonscalar4[5];
  real_T nonscalar5[5];
  real_T nonscalar6[5];
  real_T t164[1];
  real_T t198[1];
  real_T t231[1];
  real_T t232[1];
  real_T t233[1];
  real_T t234[1];
  real_T t235[1];
  real_T t236[1];
  real_T t237[1];
  real_T t238[1];
  real_T t239[1];
  real_T t240[1];
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based10_cell_temperature;
  real_T
    Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_xqnom;
  real_T
    Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xVint;
  real_T
    Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xqnom;
  real_T
    Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xVint;
  real_T
    Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xqnom;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based2_cell_temperature;
  real_T
    Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_xqnom;
  real_T
    Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_xVint;
  real_T
    Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_xqnom;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based4_cell_temperature;
  real_T
    Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_xqnom;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based5_cell_temperature;
  real_T
    Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_xqnom;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based6_cell_temperature;
  real_T
    Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_xqnom;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based7_cell_temperature;
  real_T
    Plant_Subsystem_Series_Module_Battery_Table_Based7_electricalModel_xqnom;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based8_cell_temperature;
  real_T
    Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_xqnom;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based9_cell_temperature;
  real_T
    Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_xqnom;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xVint;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xqnom;
  real_T intrm_sf_mf_0;
  real_T intrm_sf_mf_1;
  real_T intrm_sf_mf_10;
  real_T intrm_sf_mf_11;
  real_T intrm_sf_mf_2;
  real_T intrm_sf_mf_3;
  real_T intrm_sf_mf_4;
  real_T intrm_sf_mf_5;
  real_T intrm_sf_mf_6;
  real_T intrm_sf_mf_7;
  real_T intrm_sf_mf_8;
  real_T intrm_sf_mf_9;
  real_T t271;
  real_T t278;
  size_t t25[1];
  size_t t26[1];
  size_t t28[1];
  size_t t245;
  size_t t260;
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
  t164[0ULL] = t279->mX.mX[147ULL];
  t25[0] = 11ULL;
  t26[0] = 1ULL;
  tlu2_linear_nearest_prelookup(&t11.mField0[0ULL], &t11.mField1[0ULL],
    &t11.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t164[0ULL],
    &t25[0ULL], &t26[0ULL]);
  t164[0ULL] = t279->mX.mX[0ULL];
  t28[0] = 5ULL;
  tlu2_linear_nearest_prelookup(&t18.mField0[0ULL], &t18.mField1[0ULL],
    &t18.mField2[0ULL], &nonscalar2[0ULL], &t164[0ULL], &t28[0ULL], &t26[0ULL]);
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t11.mField0[0ULL], &t11.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField0, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xVint =
    t198[0ULL];
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t11.mField0[0ULL], &t11.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField2, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  intrm_sf_mf_0 = t198[0ULL];
  tlu2_1d_linear_nearest_value(&t198[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], &nonscalar4[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xqnom =
    t198[0ULL];
  t164[0ULL] = t279->mX.mX[153ULL];
  tlu2_linear_nearest_prelookup(&t18.mField0[0ULL], &t18.mField1[0ULL],
    &t18.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t164[0ULL],
    &t25[0ULL], &t26[0ULL]);
  t164[0ULL] = t279->mX.mX[8ULL];
  tlu2_linear_nearest_prelookup(&t11.mField0[0ULL], &t11.mField1[0ULL],
    &t11.mField2[0ULL], &nonscalar2[0ULL], &t164[0ULL], &t28[0ULL], &t26[0ULL]);
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], &t11.mField0[0ULL], &t11.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField0, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xVint =
    t198[0ULL];
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], &t11.mField0[0ULL], &t11.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField2, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  intrm_sf_mf_1 = t198[0ULL];
  tlu2_1d_linear_nearest_value(&t198[0ULL], &t11.mField0[0ULL], &t11.mField2
    [0ULL], &nonscalar4[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xqnom =
    t198[0ULL];
  t164[0ULL] = t279->mX.mX[158ULL];
  tlu2_linear_nearest_prelookup(&t22.mField0[0ULL], &t22.mField1[0ULL],
    &t22.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t164[0ULL],
    &t25[0ULL], &t26[0ULL]);
  t164[0ULL] = t279->mX.mX[17ULL];
  tlu2_linear_nearest_prelookup(&t11.mField0[0ULL], &t11.mField1[0ULL],
    &t11.mField2[0ULL], &nonscalar2[0ULL], &t164[0ULL], &t28[0ULL], &t26[0ULL]);
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t22.mField0[0ULL], &t22.mField2
    [0ULL], &t11.mField0[0ULL], &t11.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField0, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based10_cell_temperature = t198
    [0ULL];
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t22.mField0[0ULL], &t22.mField2
    [0ULL], &t11.mField0[0ULL], &t11.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField2, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  intrm_sf_mf_2 = t198[0ULL];
  tlu2_1d_linear_nearest_value(&t198[0ULL], &t11.mField0[0ULL], &t11.mField2
    [0ULL], &nonscalar5[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_xqnom =
    t198[0ULL];
  t164[0ULL] = t279->mX.mX[163ULL];
  tlu2_linear_nearest_prelookup(&t11.mField0[0ULL], &t11.mField1[0ULL],
    &t11.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t164[0ULL],
    &t25[0ULL], &t26[0ULL]);
  t164[0ULL] = t279->mX.mX[25ULL];
  tlu2_linear_nearest_prelookup(&t12.mField0[0ULL], &t12.mField1[0ULL],
    &t12.mField2[0ULL], &nonscalar2[0ULL], &t164[0ULL], &t28[0ULL], &t26[0ULL]);
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t11.mField0[0ULL], &t11.mField2
    [0ULL], &t12.mField0[0ULL], &t12.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField0, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xVint =
    t198[0ULL];
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t11.mField0[0ULL], &t11.mField2
    [0ULL], &t12.mField0[0ULL], &t12.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField2, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  intrm_sf_mf_3 = t198[0ULL];
  tlu2_1d_linear_nearest_value(&t198[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], &nonscalar6[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xqnom =
    t198[0ULL];
  t164[0ULL] = t279->mX.mX[168ULL];
  tlu2_linear_nearest_prelookup(&t18.mField0[0ULL], &t18.mField1[0ULL],
    &t18.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t164[0ULL],
    &t25[0ULL], &t26[0ULL]);
  t164[0ULL] = t279->mX.mX[16ULL];
  tlu2_linear_nearest_prelookup(&t12.mField0[0ULL], &t12.mField1[0ULL],
    &t12.mField2[0ULL], &nonscalar2[0ULL], &t164[0ULL], &t28[0ULL], &t26[0ULL]);
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], &t12.mField0[0ULL], &t12.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField0, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based2_cell_temperature = t198
    [0ULL];
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], &t12.mField0[0ULL], &t12.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField2, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  intrm_sf_mf_4 = t198[0ULL];
  tlu2_1d_linear_nearest_value(&t198[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], &nonscalar4[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_xqnom =
    t198[0ULL];
  t164[0ULL] = t279->mX.mX[173ULL];
  tlu2_linear_nearest_prelookup(&t18.mField0[0ULL], &t18.mField1[0ULL],
    &t18.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t164[0ULL],
    &t25[0ULL], &t26[0ULL]);
  t164[0ULL] = t279->mX.mX[41ULL];
  tlu2_linear_nearest_prelookup(&t11.mField0[0ULL], &t11.mField1[0ULL],
    &t11.mField2[0ULL], &nonscalar2[0ULL], &t164[0ULL], &t28[0ULL], &t26[0ULL]);
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], &t11.mField0[0ULL], &t11.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField0, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_xVint =
    t198[0ULL];
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], &t11.mField0[0ULL], &t11.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField2, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  intrm_sf_mf_5 = t198[0ULL];
  tlu2_1d_linear_nearest_value(&t198[0ULL], &t11.mField0[0ULL], &t11.mField2
    [0ULL], &nonscalar4[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_xqnom =
    t198[0ULL];
  t164[0ULL] = t279->mX.mX[178ULL];
  tlu2_linear_nearest_prelookup(&t11.mField0[0ULL], &t11.mField1[0ULL],
    &t11.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t164[0ULL],
    &t25[0ULL], &t26[0ULL]);
  t164[0ULL] = t279->mX.mX[49ULL];
  tlu2_linear_nearest_prelookup(&t22.mField0[0ULL], &t22.mField1[0ULL],
    &t22.mField2[0ULL], &nonscalar2[0ULL], &t164[0ULL], &t28[0ULL], &t26[0ULL]);
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t11.mField0[0ULL], &t11.mField2
    [0ULL], &t22.mField0[0ULL], &t22.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField0, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based4_cell_temperature = t198
    [0ULL];
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t11.mField0[0ULL], &t11.mField2
    [0ULL], &t22.mField0[0ULL], &t22.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField2, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  intrm_sf_mf_6 = t198[0ULL];
  tlu2_1d_linear_nearest_value(&t198[0ULL], &t22.mField0[0ULL], &t22.mField2
    [0ULL], &nonscalar4[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_xqnom =
    t198[0ULL];
  t164[0ULL] = t279->mX.mX[183ULL];
  tlu2_linear_nearest_prelookup(&t14.mField0[0ULL], &t14.mField1[0ULL],
    &t14.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t164[0ULL],
    &t25[0ULL], &t26[0ULL]);
  t164[0ULL] = t279->mX.mX[57ULL];
  tlu2_linear_nearest_prelookup(&t18.mField0[0ULL], &t18.mField1[0ULL],
    &t18.mField2[0ULL], &nonscalar2[0ULL], &t164[0ULL], &t28[0ULL], &t26[0ULL]);
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t14.mField0[0ULL], &t14.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField0, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based5_cell_temperature = t198
    [0ULL];
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t14.mField0[0ULL], &t14.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField2, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  intrm_sf_mf_7 = t198[0ULL];
  tlu2_1d_linear_nearest_value(&t198[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], &nonscalar4[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_xqnom =
    t198[0ULL];
  t164[0ULL] = t279->mX.mX[188ULL];
  tlu2_linear_nearest_prelookup(&t14.mField0[0ULL], &t14.mField1[0ULL],
    &t14.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t164[0ULL],
    &t25[0ULL], &t26[0ULL]);
  t164[0ULL] = t279->mX.mX[65ULL];
  tlu2_linear_nearest_prelookup(&t22.mField0[0ULL], &t22.mField1[0ULL],
    &t22.mField2[0ULL], &nonscalar2[0ULL], &t164[0ULL], &t28[0ULL], &t26[0ULL]);
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t14.mField0[0ULL], &t14.mField2
    [0ULL], &t22.mField0[0ULL], &t22.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField0, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based6_cell_temperature = t198
    [0ULL];
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t14.mField0[0ULL], &t14.mField2
    [0ULL], &t22.mField0[0ULL], &t22.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField2, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  intrm_sf_mf_8 = t198[0ULL];
  tlu2_1d_linear_nearest_value(&t198[0ULL], &t22.mField0[0ULL], &t22.mField2
    [0ULL], &nonscalar4[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_xqnom =
    t198[0ULL];
  t164[0ULL] = t279->mX.mX[193ULL];
  tlu2_linear_nearest_prelookup(&t22.mField0[0ULL], &t22.mField1[0ULL],
    &t22.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t164[0ULL],
    &t25[0ULL], &t26[0ULL]);
  t164[0ULL] = t279->mX.mX[73ULL];
  tlu2_linear_nearest_prelookup(&t12.mField0[0ULL], &t12.mField1[0ULL],
    &t12.mField2[0ULL], &nonscalar2[0ULL], &t164[0ULL], &t28[0ULL], &t26[0ULL]);
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t22.mField0[0ULL], &t22.mField2
    [0ULL], &t12.mField0[0ULL], &t12.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField0, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based7_cell_temperature = t198
    [0ULL];
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t22.mField0[0ULL], &t22.mField2
    [0ULL], &t12.mField0[0ULL], &t12.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField2, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  intrm_sf_mf_9 = t198[0ULL];
  tlu2_1d_linear_nearest_value(&t198[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], &nonscalar4[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based7_electricalModel_xqnom =
    t198[0ULL];
  t164[0ULL] = t279->mX.mX[198ULL];
  tlu2_linear_nearest_prelookup(&t11.mField0[0ULL], &t11.mField1[0ULL],
    &t11.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t164[0ULL],
    &t25[0ULL], &t26[0ULL]);
  t164[0ULL] = t279->mX.mX[81ULL];
  tlu2_linear_nearest_prelookup(&t22.mField0[0ULL], &t22.mField1[0ULL],
    &t22.mField2[0ULL], &nonscalar2[0ULL], &t164[0ULL], &t28[0ULL], &t26[0ULL]);
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t11.mField0[0ULL], &t11.mField2
    [0ULL], &t22.mField0[0ULL], &t22.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField0, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based8_cell_temperature = t198
    [0ULL];
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t11.mField0[0ULL], &t11.mField2
    [0ULL], &t22.mField0[0ULL], &t22.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField2, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  intrm_sf_mf_10 = t198[0ULL];
  tlu2_1d_linear_nearest_value(&t198[0ULL], &t22.mField0[0ULL], &t22.mField2
    [0ULL], &nonscalar4[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_xqnom =
    t198[0ULL];
  t164[0ULL] = t279->mX.mX[203ULL];
  tlu2_linear_nearest_prelookup(&t18.mField0[0ULL], &t18.mField1[0ULL],
    &t18.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t164[0ULL],
    &t25[0ULL], &t26[0ULL]);
  t164[0ULL] = t279->mX.mX[26ULL];
  tlu2_linear_nearest_prelookup(&t11.mField0[0ULL], &t11.mField1[0ULL],
    &t11.mField2[0ULL], &nonscalar2[0ULL], &t164[0ULL], &t28[0ULL], &t26[0ULL]);
  tlu2_2d_linear_nearest_value(&t164[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], &t11.mField0[0ULL], &t11.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField0, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based9_cell_temperature = t164
    [0ULL];
  tlu2_2d_linear_nearest_value(&t164[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], &t11.mField0[0ULL], &t11.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField2, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  intrm_sf_mf_11 = t164[0ULL];
  tlu2_1d_linear_nearest_value(&t164[0ULL], &t11.mField0[0ULL], &t11.mField2
    [0ULL], &nonscalar4[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_xqnom =
    t164[0ULL];
  t164[0ULL] = pmf_get_inf();
  for (t245 = 0ULL; t245 < 55ULL; t245++) {
    t260 = t245 / 55ULL;
    t271 = t164[t260 > 0ULL ? 0ULL : t260];
    t278 = ((const _NeDynamicSystem*)(LC))->mField0[t245] * 1.0E-5;
    t164[t260 > 0ULL ? 0ULL : t260] = t271 > t278 ? t278 : t271;
  }

  t198[0ULL] = pmf_get_inf();
  for (t245 = 0ULL; t245 < 55ULL; t245++) {
    t260 = t245 / 55ULL;
    t271 = t198[t260 > 0ULL ? 0ULL : t260];
    t278 = ((const _NeDynamicSystem*)(LC))->mField0[t245] * 1.0E-5;
    t198[t260 > 0ULL ? 0ULL : t260] = t271 > t278 ? t278 : t271;
  }

  t231[0ULL] = pmf_get_inf();
  for (t245 = 0ULL; t245 < 55ULL; t245++) {
    t260 = t245 / 55ULL;
    t271 = t231[t260 > 0ULL ? 0ULL : t260];
    t278 = ((const _NeDynamicSystem*)(LC))->mField0[t245] * 1.0E-5;
    t231[t260 > 0ULL ? 0ULL : t260] = t271 > t278 ? t278 : t271;
  }

  t232[0ULL] = pmf_get_inf();
  for (t245 = 0ULL; t245 < 55ULL; t245++) {
    t260 = t245 / 55ULL;
    t271 = t232[t260 > 0ULL ? 0ULL : t260];
    t278 = ((const _NeDynamicSystem*)(LC))->mField0[t245] * 1.0E-5;
    t232[t260 > 0ULL ? 0ULL : t260] = t271 > t278 ? t278 : t271;
  }

  t233[0ULL] = pmf_get_inf();
  for (t245 = 0ULL; t245 < 55ULL; t245++) {
    t260 = t245 / 55ULL;
    t271 = t233[t260 > 0ULL ? 0ULL : t260];
    t278 = ((const _NeDynamicSystem*)(LC))->mField0[t245] * 1.0E-5;
    t233[t260 > 0ULL ? 0ULL : t260] = t271 > t278 ? t278 : t271;
  }

  t234[0ULL] = pmf_get_inf();
  for (t245 = 0ULL; t245 < 55ULL; t245++) {
    t260 = t245 / 55ULL;
    t271 = t234[t260 > 0ULL ? 0ULL : t260];
    t278 = ((const _NeDynamicSystem*)(LC))->mField0[t245] * 1.0E-5;
    t234[t260 > 0ULL ? 0ULL : t260] = t271 > t278 ? t278 : t271;
  }

  t235[0ULL] = pmf_get_inf();
  for (t245 = 0ULL; t245 < 55ULL; t245++) {
    t260 = t245 / 55ULL;
    t271 = t235[t260 > 0ULL ? 0ULL : t260];
    t278 = ((const _NeDynamicSystem*)(LC))->mField0[t245] * 1.0E-5;
    t235[t260 > 0ULL ? 0ULL : t260] = t271 > t278 ? t278 : t271;
  }

  t236[0ULL] = pmf_get_inf();
  for (t245 = 0ULL; t245 < 55ULL; t245++) {
    t260 = t245 / 55ULL;
    t271 = t236[t260 > 0ULL ? 0ULL : t260];
    t278 = ((const _NeDynamicSystem*)(LC))->mField0[t245] * 1.0E-5;
    t236[t260 > 0ULL ? 0ULL : t260] = t271 > t278 ? t278 : t271;
  }

  t237[0ULL] = pmf_get_inf();
  for (t245 = 0ULL; t245 < 55ULL; t245++) {
    t260 = t245 / 55ULL;
    t271 = t237[t260 > 0ULL ? 0ULL : t260];
    t278 = ((const _NeDynamicSystem*)(LC))->mField0[t245] * 1.0E-5;
    t237[t260 > 0ULL ? 0ULL : t260] = t271 > t278 ? t278 : t271;
  }

  t238[0ULL] = pmf_get_inf();
  for (t245 = 0ULL; t245 < 55ULL; t245++) {
    t260 = t245 / 55ULL;
    t271 = t238[t260 > 0ULL ? 0ULL : t260];
    t278 = ((const _NeDynamicSystem*)(LC))->mField0[t245] * 1.0E-5;
    t238[t260 > 0ULL ? 0ULL : t260] = t271 > t278 ? t278 : t271;
  }

  t239[0ULL] = pmf_get_inf();
  for (t245 = 0ULL; t245 < 55ULL; t245++) {
    t260 = t245 / 55ULL;
    t271 = t239[t260 > 0ULL ? 0ULL : t260];
    t278 = ((const _NeDynamicSystem*)(LC))->mField0[t245] * 1.0E-5;
    t239[t260 > 0ULL ? 0ULL : t260] = t271 > t278 ? t278 : t271;
  }

  t240[0ULL] = pmf_get_inf();
  for (t245 = 0ULL; t245 < 55ULL; t245++) {
    t260 = t245 / 55ULL;
    t271 = t240[t260 > 0ULL ? 0ULL : t260];
    t278 = ((const _NeDynamicSystem*)(LC))->mField0[t245] * 1.0E-5;
    t240[t260 > 0ULL ? 0ULL : t260] = t271 > t278 ? t278 : t271;
  }

  out->mMODE.mX[0ULL] = (int32_T)(t164[0ULL] >= t279->mX.mX[146ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xVint);
  out->mMODE.mX[1ULL] = (int32_T)(t279->mX.mX[145ULL] * intrm_sf_mf_0 <=
    8.200000000000002E-8);
  out->mMODE.mX[2ULL] = (int32_T)(t279->mX.mX[161ULL] * intrm_sf_mf_3 <=
    8.200000000000002E-8);
  out->mMODE.mX[3ULL] = (int32_T)(t279->mX.mX[177ULL] > 0.0);
  out->mMODE.mX[4ULL] = (int32_T)(t279->mX.mX[175ULL] > 0.0);
  out->mMODE.mX[5ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based5_cell_temperature >= 0.0);
  out->mMODE.mX[6ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_xqnom >
     0.0);
  out->mMODE.mX[7ULL] = (int32_T)(intrm_sf_mf_7 > 0.0);
  out->mMODE.mX[8ULL] = (int32_T)(t279->mX.mX[181ULL] > 0.0);
  out->mMODE.mX[9ULL] = (int32_T)(t279->mX.mX[182ULL] > 0.0);
  out->mMODE.mX[10ULL] = (int32_T)(t279->mX.mX[180ULL] > 0.0);
  out->mMODE.mX[11ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based6_cell_temperature >= 0.0);
  out->mMODE.mX[12ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_xqnom >
     0.0);
  out->mMODE.mX[13ULL] = (int32_T)(t279->mX.mX[160ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xqnom <=
    0.041184);
  out->mMODE.mX[14ULL] = (int32_T)(intrm_sf_mf_8 > 0.0);
  out->mMODE.mX[15ULL] = (int32_T)(t279->mX.mX[186ULL] > 0.0);
  out->mMODE.mX[16ULL] = (int32_T)(t279->mX.mX[187ULL] > 0.0);
  out->mMODE.mX[17ULL] = (int32_T)(t279->mX.mX[185ULL] > 0.0);
  out->mMODE.mX[18ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based7_cell_temperature >= 0.0);
  out->mMODE.mX[19ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based7_electricalModel_xqnom >
     0.0);
  out->mMODE.mX[20ULL] = (int32_T)(intrm_sf_mf_9 > 0.0);
  out->mMODE.mX[21ULL] = (int32_T)(t279->mX.mX[191ULL] > 0.0);
  out->mMODE.mX[22ULL] = (int32_T)(t279->mX.mX[192ULL] > 0.0);
  out->mMODE.mX[23ULL] = (int32_T)(t279->mX.mX[190ULL] > 0.0);
  out->mMODE.mX[24ULL] = (int32_T)(t198[0ULL] >= t279->mX.mX[167ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based2_cell_temperature);
  out->mMODE.mX[25ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based8_cell_temperature >= 0.0);
  out->mMODE.mX[26ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_xqnom >
     0.0);
  out->mMODE.mX[27ULL] = (int32_T)(intrm_sf_mf_10 > 0.0);
  out->mMODE.mX[28ULL] = (int32_T)(t279->mX.mX[196ULL] > 0.0);
  out->mMODE.mX[29ULL] = (int32_T)(t279->mX.mX[197ULL] > 0.0);
  out->mMODE.mX[30ULL] = (int32_T)(t279->mX.mX[195ULL] > 0.0);
  out->mMODE.mX[31ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based9_cell_temperature >= 0.0);
  out->mMODE.mX[32ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_xqnom >
     0.0);
  out->mMODE.mX[33ULL] = (int32_T)(intrm_sf_mf_11 > 0.0);
  out->mMODE.mX[34ULL] = (int32_T)(t279->mX.mX[201ULL] > 0.0);
  out->mMODE.mX[35ULL] = (int32_T)(t279->mX.mX[166ULL] * intrm_sf_mf_4 <=
    8.200000000000002E-8);
  out->mMODE.mX[36ULL] = (int32_T)(t279->mX.mX[202ULL] > 0.0);
  out->mMODE.mX[37ULL] = (int32_T)(t279->mX.mX[200ULL] > 0.0);
  out->mMODE.mX[38ULL] = (int32_T)(t279->mX.mX[165ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_xqnom <=
    0.02808);
  out->mMODE.mX[39ULL] = (int32_T)(t231[0ULL] >= t279->mX.mX[172ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_xVint);
  out->mMODE.mX[40ULL] = (int32_T)(t279->mX.mX[171ULL] * intrm_sf_mf_5 <=
    8.200000000000002E-8);
  out->mMODE.mX[41ULL] = (int32_T)(t279->mX.mX[170ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_xqnom <=
    0.02808);
  out->mMODE.mX[42ULL] = (int32_T)(t232[0ULL] >= t279->mX.mX[177ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based4_cell_temperature);
  out->mMODE.mX[43ULL] = (int32_T)(t279->mX.mX[176ULL] * intrm_sf_mf_6 <=
    8.200000000000002E-8);
  out->mMODE.mX[44ULL] = (int32_T)(t279->mX.mX[144ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xqnom <=
    0.02808);
  out->mMODE.mX[45ULL] = (int32_T)(t279->mX.mX[175ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_xqnom <=
    0.02808);
  out->mMODE.mX[46ULL] = (int32_T)(t233[0ULL] >= t279->mX.mX[182ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based5_cell_temperature);
  out->mMODE.mX[47ULL] = (int32_T)(t279->mX.mX[181ULL] * intrm_sf_mf_7 <=
    8.200000000000002E-8);
  out->mMODE.mX[48ULL] = (int32_T)(t279->mX.mX[180ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_xqnom <=
    0.02808);
  out->mMODE.mX[49ULL] = (int32_T)(t234[0ULL] >= t279->mX.mX[187ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based6_cell_temperature);
  out->mMODE.mX[50ULL] = (int32_T)(t279->mX.mX[186ULL] * intrm_sf_mf_8 <=
    8.200000000000002E-8);
  out->mMODE.mX[51ULL] = (int32_T)(t279->mX.mX[185ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_xqnom <=
    0.02808);
  out->mMODE.mX[52ULL] = (int32_T)(t235[0ULL] >= t279->mX.mX[192ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based7_cell_temperature);
  out->mMODE.mX[53ULL] = (int32_T)(t279->mX.mX[191ULL] * intrm_sf_mf_9 <=
    8.200000000000002E-8);
  out->mMODE.mX[54ULL] = (int32_T)(t279->mX.mX[190ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based7_electricalModel_xqnom <=
    0.02808);
  out->mMODE.mX[55ULL] = (int32_T)(t236[0ULL] >= t279->mX.mX[152ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xVint);
  out->mMODE.mX[56ULL] = (int32_T)(t237[0ULL] >= t279->mX.mX[197ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based8_cell_temperature);
  out->mMODE.mX[57ULL] = (int32_T)(t279->mX.mX[196ULL] * intrm_sf_mf_10 <=
    8.200000000000002E-8);
  out->mMODE.mX[58ULL] = (int32_T)(t279->mX.mX[195ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_xqnom <=
    0.02808);
  out->mMODE.mX[59ULL] = (int32_T)(t238[0ULL] >= t279->mX.mX[202ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based9_cell_temperature);
  out->mMODE.mX[60ULL] = (int32_T)(t279->mX.mX[201ULL] * intrm_sf_mf_11 <=
    8.200000000000002E-8);
  out->mMODE.mX[61ULL] = (int32_T)(t279->mX.mX[200ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_xqnom <=
    0.02808);
  out->mMODE.mX[62ULL] = (int32_T)(t279->mX.mX[110ULL] < 0.0);
  out->mMODE.mX[63ULL] = (int32_T)(t279->mX.mX[113ULL] < 0.0);
  out->mMODE.mX[64ULL] = (int32_T)(t279->mX.mX[116ULL] < 0.0);
  out->mMODE.mX[65ULL] = (int32_T)(t279->mX.mX[119ULL] < 0.0);
  out->mMODE.mX[66ULL] = (int32_T)(t279->mX.mX[151ULL] * intrm_sf_mf_1 <=
    8.200000000000002E-8);
  out->mMODE.mX[67ULL] = (int32_T)(t279->mX.mX[122ULL] < 0.0);
  out->mMODE.mX[68ULL] = (int32_T)(t279->mX.mX[125ULL] < 0.0);
  out->mMODE.mX[69ULL] = (int32_T)(t279->mX.mX[128ULL] < 0.0);
  out->mMODE.mX[70ULL] = (int32_T)(t279->mX.mX[131ULL] < 0.0);
  out->mMODE.mX[71ULL] = (int32_T)(t279->mX.mX[134ULL] < 0.0);
  out->mMODE.mX[72ULL] = (int32_T)(t279->mX.mX[137ULL] < 0.0);
  out->mMODE.mX[73ULL] = (int32_T)(t279->mX.mX[140ULL] < 0.0);
  out->mMODE.mX[74ULL] = (int32_T)(t279->mX.mX[143ULL] < 0.0);
  out->mMODE.mX[75ULL] = (int32_T)(t279->mU.mX[13ULL] > 0.5);
  out->mMODE.mX[76ULL] = (int32_T)(t279->mU.mX[4ULL] > 0.5);
  out->mMODE.mX[77ULL] = (int32_T)(t279->mX.mX[150ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xqnom <=
    0.02808);
  out->mMODE.mX[78ULL] = (int32_T)(t279->mU.mX[2ULL] > 0.5);
  out->mMODE.mX[79ULL] = (int32_T)(t279->mU.mX[3ULL] > 0.5);
  out->mMODE.mX[80ULL] = (int32_T)(t279->mU.mX[5ULL] > 0.5);
  out->mMODE.mX[81ULL] = (int32_T)(t279->mU.mX[6ULL] > 0.5);
  out->mMODE.mX[82ULL] = (int32_T)(t279->mU.mX[7ULL] > 0.5);
  out->mMODE.mX[83ULL] = (int32_T)(t279->mU.mX[8ULL] > 0.5);
  out->mMODE.mX[84ULL] = (int32_T)(t279->mU.mX[9ULL] > 0.5);
  out->mMODE.mX[85ULL] = (int32_T)(t279->mU.mX[10ULL] > 0.5);
  out->mMODE.mX[86ULL] = (int32_T)(t279->mU.mX[11ULL] > 0.5);
  out->mMODE.mX[87ULL] = (int32_T)(t279->mU.mX[12ULL] > 0.5);
  out->mMODE.mX[88ULL] = (int32_T)(t239[0ULL] >= t279->mX.mX[157ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based10_cell_temperature);
  out->mMODE.mX[89ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xVint >=
     0.0);
  out->mMODE.mX[90ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xqnom >
     0.0);
  out->mMODE.mX[91ULL] = (int32_T)(intrm_sf_mf_0 > 0.0);
  out->mMODE.mX[92ULL] = (int32_T)(t279->mX.mX[145ULL] > 0.0);
  out->mMODE.mX[93ULL] = (int32_T)(t279->mX.mX[146ULL] > 0.0);
  out->mMODE.mX[94ULL] = (int32_T)(t279->mX.mX[144ULL] > 0.0);
  out->mMODE.mX[95ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xVint >=
     0.0);
  out->mMODE.mX[96ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xqnom >
     0.0);
  out->mMODE.mX[97ULL] = (int32_T)(intrm_sf_mf_1 > 0.0);
  out->mMODE.mX[98ULL] = (int32_T)(t279->mX.mX[151ULL] > 0.0);
  out->mMODE.mX[99ULL] = (int32_T)(t279->mX.mX[156ULL] * intrm_sf_mf_2 <=
    8.200000000000002E-8);
  out->mMODE.mX[100ULL] = (int32_T)(t279->mX.mX[152ULL] > 0.0);
  out->mMODE.mX[101ULL] = (int32_T)(t279->mX.mX[150ULL] > 0.0);
  out->mMODE.mX[102ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based10_cell_temperature >= 0.0);
  out->mMODE.mX[103ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_xqnom >
     0.0);
  out->mMODE.mX[104ULL] = (int32_T)(intrm_sf_mf_2 > 0.0);
  out->mMODE.mX[105ULL] = (int32_T)(t279->mX.mX[156ULL] > 0.0);
  out->mMODE.mX[106ULL] = (int32_T)(t279->mX.mX[157ULL] > 0.0);
  out->mMODE.mX[107ULL] = (int32_T)(t279->mX.mX[155ULL] > 0.0);
  out->mMODE.mX[108ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xVint >=
     0.0);
  out->mMODE.mX[109ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xqnom >
     0.0);
  out->mMODE.mX[110ULL] = (int32_T)(t279->mX.mX[155ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_xqnom <=
    0.033696000000000004);
  out->mMODE.mX[111ULL] = (int32_T)(intrm_sf_mf_3 > 0.0);
  out->mMODE.mX[112ULL] = (int32_T)(t279->mX.mX[161ULL] > 0.0);
  out->mMODE.mX[113ULL] = (int32_T)(t279->mX.mX[162ULL] > 0.0);
  out->mMODE.mX[114ULL] = (int32_T)(t279->mX.mX[160ULL] > 0.0);
  out->mMODE.mX[115ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based2_cell_temperature >= 0.0);
  out->mMODE.mX[116ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_xqnom >
     0.0);
  out->mMODE.mX[117ULL] = (int32_T)(intrm_sf_mf_4 > 0.0);
  out->mMODE.mX[118ULL] = (int32_T)(t279->mX.mX[166ULL] > 0.0);
  out->mMODE.mX[119ULL] = (int32_T)(t279->mX.mX[167ULL] > 0.0);
  out->mMODE.mX[120ULL] = (int32_T)(t279->mX.mX[165ULL] > 0.0);
  out->mMODE.mX[121ULL] = (int32_T)(t240[0ULL] >= t279->mX.mX[162ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xVint);
  out->mMODE.mX[122ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_xVint >=
     0.0);
  out->mMODE.mX[123ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_xqnom >
     0.0);
  out->mMODE.mX[124ULL] = (int32_T)(intrm_sf_mf_5 > 0.0);
  out->mMODE.mX[125ULL] = (int32_T)(t279->mX.mX[171ULL] > 0.0);
  out->mMODE.mX[126ULL] = (int32_T)(t279->mX.mX[172ULL] > 0.0);
  out->mMODE.mX[127ULL] = (int32_T)(t279->mX.mX[170ULL] > 0.0);
  out->mMODE.mX[128ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based4_cell_temperature >= 0.0);
  out->mMODE.mX[129ULL] = (int32_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_xqnom >
     0.0);
  out->mMODE.mX[130ULL] = (int32_T)(intrm_sf_mf_6 > 0.0);
  out->mMODE.mX[131ULL] = (int32_T)(t279->mX.mX[176ULL] > 0.0);
  (void)LC;
  (void)out;
  return 0;
}
