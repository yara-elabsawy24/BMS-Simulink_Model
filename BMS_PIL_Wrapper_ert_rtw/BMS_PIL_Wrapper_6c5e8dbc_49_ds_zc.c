/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'BMS_PIL_Wrapper/Plant/Solver Configuration'.
 */

#include "ne_ds.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_sys_struct.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_zc.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_externals.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T BMS_PIL_Wrapper_6c5e8dbc_49_ds_zc(const NeDynamicSystem *LC, const
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

  out->mZC.mX[0ULL] = (real_T)(t279->mX.mX[110ULL] < 0.0);
  out->mZC.mX[1ULL] = (real_T)(t279->mX.mX[113ULL] < 0.0);
  out->mZC.mX[2ULL] = (real_T)(t279->mX.mX[116ULL] < 0.0);
  out->mZC.mX[3ULL] = (real_T)(t279->mX.mX[119ULL] < 0.0);
  out->mZC.mX[4ULL] = (real_T)(t279->mX.mX[122ULL] < 0.0);
  out->mZC.mX[5ULL] = (real_T)(t279->mX.mX[125ULL] < 0.0);
  out->mZC.mX[6ULL] = (real_T)(t279->mX.mX[128ULL] < 0.0);
  out->mZC.mX[7ULL] = (real_T)(t279->mX.mX[131ULL] < 0.0);
  out->mZC.mX[8ULL] = (real_T)(t279->mX.mX[134ULL] < 0.0);
  out->mZC.mX[9ULL] = (real_T)(t279->mX.mX[137ULL] < 0.0);
  out->mZC.mX[10ULL] = (real_T)(t279->mX.mX[140ULL] < 0.0);
  out->mZC.mX[11ULL] = (real_T)(t279->mX.mX[143ULL] < 0.0);
  out->mZC.mX[12ULL] = t164[0ULL] - t279->mX.mX[146ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xVint;
  out->mZC.mX[13ULL] = 8.200000000000002E-8 - t279->mX.mX[145ULL] *
    intrm_sf_mf_0;
  out->mZC.mX[14ULL] = 0.02808 - t279->mX.mX[144ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xqnom;
  out->mZC.mX[15ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xVint;
  out->mZC.mX[16ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xqnom;
  out->mZC.mX[17ULL] = intrm_sf_mf_0;
  out->mZC.mX[18ULL] = t198[0ULL] - t279->mX.mX[152ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xVint;
  out->mZC.mX[19ULL] = 8.200000000000002E-8 - t279->mX.mX[151ULL] *
    intrm_sf_mf_1;
  out->mZC.mX[20ULL] = 0.02808 - t279->mX.mX[150ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xqnom;
  out->mZC.mX[21ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xVint;
  out->mZC.mX[22ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xqnom;
  out->mZC.mX[23ULL] = intrm_sf_mf_1;
  out->mZC.mX[24ULL] = t231[0ULL] - t279->mX.mX[157ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based10_cell_temperature;
  out->mZC.mX[25ULL] = 8.200000000000002E-8 - t279->mX.mX[156ULL] *
    intrm_sf_mf_2;
  out->mZC.mX[26ULL] = 0.033696000000000004 - t279->mX.mX[155ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_xqnom;
  out->mZC.mX[27ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based10_cell_temperature;
  out->mZC.mX[28ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_xqnom;
  out->mZC.mX[29ULL] = intrm_sf_mf_2;
  out->mZC.mX[30ULL] = t232[0ULL] - t279->mX.mX[162ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xVint;
  out->mZC.mX[31ULL] = 8.200000000000002E-8 - t279->mX.mX[161ULL] *
    intrm_sf_mf_3;
  out->mZC.mX[32ULL] = 0.041184 - t279->mX.mX[160ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xqnom;
  out->mZC.mX[33ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xVint;
  out->mZC.mX[34ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xqnom;
  out->mZC.mX[35ULL] = intrm_sf_mf_3;
  out->mZC.mX[36ULL] = t233[0ULL] - t279->mX.mX[167ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based2_cell_temperature;
  out->mZC.mX[37ULL] = 8.200000000000002E-8 - t279->mX.mX[166ULL] *
    intrm_sf_mf_4;
  out->mZC.mX[38ULL] = 0.02808 - t279->mX.mX[165ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_xqnom;
  out->mZC.mX[39ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based2_cell_temperature;
  out->mZC.mX[40ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_xqnom;
  out->mZC.mX[41ULL] = intrm_sf_mf_4;
  out->mZC.mX[42ULL] = t234[0ULL] - t279->mX.mX[172ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_xVint;
  out->mZC.mX[43ULL] = 8.200000000000002E-8 - t279->mX.mX[171ULL] *
    intrm_sf_mf_5;
  out->mZC.mX[44ULL] = 0.02808 - t279->mX.mX[170ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_xqnom;
  out->mZC.mX[45ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_xVint;
  out->mZC.mX[46ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_xqnom;
  out->mZC.mX[47ULL] = intrm_sf_mf_5;
  out->mZC.mX[48ULL] = t235[0ULL] - t279->mX.mX[177ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based4_cell_temperature;
  out->mZC.mX[49ULL] = 8.200000000000002E-8 - t279->mX.mX[176ULL] *
    intrm_sf_mf_6;
  out->mZC.mX[50ULL] = 0.02808 - t279->mX.mX[175ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_xqnom;
  out->mZC.mX[51ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based4_cell_temperature;
  out->mZC.mX[52ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_xqnom;
  out->mZC.mX[53ULL] = intrm_sf_mf_6;
  out->mZC.mX[54ULL] = t236[0ULL] - t279->mX.mX[182ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based5_cell_temperature;
  out->mZC.mX[55ULL] = 8.200000000000002E-8 - t279->mX.mX[181ULL] *
    intrm_sf_mf_7;
  out->mZC.mX[56ULL] = 0.02808 - t279->mX.mX[180ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_xqnom;
  out->mZC.mX[57ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based5_cell_temperature;
  out->mZC.mX[58ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_xqnom;
  out->mZC.mX[59ULL] = intrm_sf_mf_7;
  out->mZC.mX[60ULL] = t237[0ULL] - t279->mX.mX[187ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based6_cell_temperature;
  out->mZC.mX[61ULL] = 8.200000000000002E-8 - t279->mX.mX[186ULL] *
    intrm_sf_mf_8;
  out->mZC.mX[62ULL] = 0.02808 - t279->mX.mX[185ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_xqnom;
  out->mZC.mX[63ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based6_cell_temperature;
  out->mZC.mX[64ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_xqnom;
  out->mZC.mX[65ULL] = intrm_sf_mf_8;
  out->mZC.mX[66ULL] = t238[0ULL] - t279->mX.mX[192ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based7_cell_temperature;
  out->mZC.mX[67ULL] = 8.200000000000002E-8 - t279->mX.mX[191ULL] *
    intrm_sf_mf_9;
  out->mZC.mX[68ULL] = 0.02808 - t279->mX.mX[190ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based7_electricalModel_xqnom;
  out->mZC.mX[69ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based7_cell_temperature;
  out->mZC.mX[70ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based7_electricalModel_xqnom;
  out->mZC.mX[71ULL] = intrm_sf_mf_9;
  out->mZC.mX[72ULL] = t239[0ULL] - t279->mX.mX[197ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based8_cell_temperature;
  out->mZC.mX[73ULL] = 8.200000000000002E-8 - t279->mX.mX[196ULL] *
    intrm_sf_mf_10;
  out->mZC.mX[74ULL] = 0.02808 - t279->mX.mX[195ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_xqnom;
  out->mZC.mX[75ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based8_cell_temperature;
  out->mZC.mX[76ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_xqnom;
  out->mZC.mX[77ULL] = intrm_sf_mf_10;
  out->mZC.mX[78ULL] = t240[0ULL] - t279->mX.mX[202ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based9_cell_temperature;
  out->mZC.mX[79ULL] = 8.200000000000002E-8 - t279->mX.mX[201ULL] *
    intrm_sf_mf_11;
  out->mZC.mX[80ULL] = 0.02808 - t279->mX.mX[200ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_xqnom;
  out->mZC.mX[81ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based9_cell_temperature;
  out->mZC.mX[82ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_xqnom;
  out->mZC.mX[83ULL] = intrm_sf_mf_11;
  out->mZC.mX[84ULL] = t279->mX.mX[145ULL];
  out->mZC.mX[85ULL] = t279->mX.mX[146ULL];
  out->mZC.mX[86ULL] = t279->mX.mX[144ULL];
  out->mZC.mX[87ULL] = t279->mX.mX[151ULL];
  out->mZC.mX[88ULL] = t279->mX.mX[152ULL];
  out->mZC.mX[89ULL] = t279->mX.mX[150ULL];
  out->mZC.mX[90ULL] = t279->mX.mX[156ULL];
  out->mZC.mX[91ULL] = t279->mX.mX[157ULL];
  out->mZC.mX[92ULL] = t279->mX.mX[155ULL];
  out->mZC.mX[93ULL] = t279->mX.mX[161ULL];
  out->mZC.mX[94ULL] = t279->mX.mX[162ULL];
  out->mZC.mX[95ULL] = t279->mX.mX[160ULL];
  out->mZC.mX[96ULL] = t279->mX.mX[166ULL];
  out->mZC.mX[97ULL] = t279->mX.mX[167ULL];
  out->mZC.mX[98ULL] = t279->mX.mX[165ULL];
  out->mZC.mX[99ULL] = t279->mX.mX[171ULL];
  out->mZC.mX[100ULL] = t279->mX.mX[172ULL];
  out->mZC.mX[101ULL] = t279->mX.mX[170ULL];
  out->mZC.mX[102ULL] = t279->mX.mX[176ULL];
  out->mZC.mX[103ULL] = t279->mX.mX[177ULL];
  out->mZC.mX[104ULL] = t279->mX.mX[175ULL];
  out->mZC.mX[105ULL] = t279->mX.mX[181ULL];
  out->mZC.mX[106ULL] = t279->mX.mX[182ULL];
  out->mZC.mX[107ULL] = t279->mX.mX[180ULL];
  out->mZC.mX[108ULL] = t279->mX.mX[186ULL];
  out->mZC.mX[109ULL] = t279->mX.mX[187ULL];
  out->mZC.mX[110ULL] = t279->mX.mX[185ULL];
  out->mZC.mX[111ULL] = t279->mX.mX[191ULL];
  out->mZC.mX[112ULL] = t279->mX.mX[192ULL];
  out->mZC.mX[113ULL] = t279->mX.mX[190ULL];
  out->mZC.mX[114ULL] = t279->mX.mX[196ULL];
  out->mZC.mX[115ULL] = t279->mX.mX[197ULL];
  out->mZC.mX[116ULL] = t279->mX.mX[195ULL];
  out->mZC.mX[117ULL] = t279->mX.mX[201ULL];
  out->mZC.mX[118ULL] = t279->mX.mX[202ULL];
  out->mZC.mX[119ULL] = t279->mX.mX[200ULL];
  out->mZC.mX[120ULL] = t279->mU.mX[13ULL] - 0.5;
  out->mZC.mX[121ULL] = t279->mU.mX[4ULL] - 0.5;
  out->mZC.mX[122ULL] = t279->mU.mX[2ULL] - 0.5;
  out->mZC.mX[123ULL] = t279->mU.mX[3ULL] - 0.5;
  out->mZC.mX[124ULL] = t279->mU.mX[5ULL] - 0.5;
  out->mZC.mX[125ULL] = t279->mU.mX[6ULL] - 0.5;
  out->mZC.mX[126ULL] = t279->mU.mX[7ULL] - 0.5;
  out->mZC.mX[127ULL] = t279->mU.mX[8ULL] - 0.5;
  out->mZC.mX[128ULL] = t279->mU.mX[9ULL] - 0.5;
  out->mZC.mX[129ULL] = t279->mU.mX[10ULL] - 0.5;
  out->mZC.mX[130ULL] = t279->mU.mX[11ULL] - 0.5;
  out->mZC.mX[131ULL] = t279->mU.mX[12ULL] - 0.5;
  (void)LC;
  (void)out;
  return 0;
}
