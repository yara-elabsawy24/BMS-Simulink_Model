/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'BMS_PIL_Wrapper/Plant/Solver Configuration'.
 */

#include "ne_ds.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_sys_struct.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_dxf.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_externals.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T BMS_PIL_Wrapper_6c5e8dbc_49_ds_dxf(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1360, NeDsMethodOutput *out)
{
  static real_T _cg_const_1[5] = { 263.15, 273.15, 298.15, 313.15, 328.15 };

  static real_T _cg_const_10[5] = { 0.0, 0.0, 2.0, 0.0, 0.0 };

  static real_T _cg_const_11[5] = { 0.0, 0.0, 0.0, 2.0, 0.0 };

  static real_T _cg_const_12[5] = { 0.0, 0.0, 0.0, 0.0, 2.0 };

  static real_T _cg_const_8[5] = { 2.0, 0.0, 0.0, 0.0, 0.0 };

  static real_T _cg_const_9[5] = { 0.0, 2.0, 0.0, 0.0, 0.0 };

  ETTSf3049b48 t0;
  ETTSf3049b48 t11;
  ETTSf3049b48 t12;
  ETTSf3049b48 t13;
  ETTSf3049b48 t14;
  ETTSf3049b48 t15;
  ETTSf3049b48 t16;
  ETTSf3049b48 t18;
  ETTSf3049b48 t2;
  ETTSf3049b48 t22;
  ETTSf3049b48 t24;
  ETTSf3049b48 t25;
  ETTSf3049b48 t27;
  ETTSf3049b48 t29;
  ETTSf3049b48 t3;
  ETTSf3049b48 t31;
  ETTSf3049b48 t32;
  ETTSf3049b48 t35;
  ETTSf3049b48 t4;
  ETTSf3049b48 t5;
  ETTSf3049b48 t6;
  ETTSf3049b48 t7;
  ETTSf3049b48 t8;
  ETTSf3049b48 t9;
  real_T t745[10];
  real_T t746[10];
  real_T t747[10];
  real_T t748[10];
  real_T t749[10];
  real_T t750[10];
  real_T t751[10];
  real_T t752[10];
  real_T t753[10];
  real_T t754[10];
  real_T t755[6];
  real_T t758[6];
  real_T t761[6];
  real_T t764[6];
  real_T t767[6];
  real_T t770[6];
  real_T t773[6];
  real_T t776[6];
  real_T t779[6];
  real_T t782[6];
  real_T t785[6];
  real_T t788[6];
  real_T intermediate_der185[5];
  real_T intermediate_der207[5];
  real_T intermediate_der229[5];
  real_T intermediate_der248[5];
  real_T intermediate_der274[5];
  real_T intermediate_der291[5];
  real_T intermediate_der317[5];
  real_T intermediate_der339[5];
  real_T intermediate_der361[5];
  real_T intermediate_der376[5];
  real_T intermediate_der396[5];
  real_T intermediate_der420[5];
  real_T nonscalar2[5];
  real_T nonscalar4[5];
  real_T nonscalar5[5];
  real_T nonscalar6[5];
  real_T t568[5];
  real_T t569[5];
  real_T t570[5];
  real_T t571[5];
  real_T t683[5];
  real_T t688[5];
  real_T t693[5];
  real_T t694[5];
  real_T t699[5];
  real_T t700[5];
  real_T t709[5];
  real_T t714[5];
  real_T t719[5];
  real_T t724[5];
  real_T t729[5];
  real_T t734[5];
  real_T t743[5];
  real_T t744[5];
  real_T t756[5];
  real_T t759[5];
  real_T t762[5];
  real_T t765[5];
  real_T t768[5];
  real_T t771[5];
  real_T t774[5];
  real_T t777[5];
  real_T t780[5];
  real_T t783[5];
  real_T t786[5];
  real_T t789[5];
  real_T t634[1];
  real_T t707[1];
  real_T t96[1];
  real_T
    Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xVint;
  real_T
    Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xqnom;
  real_T
    Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xqnom;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based6_cell_temperature;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based8_cell_temperature;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_i;
  real_T
    Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_xqnom;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_i;
  real_T
    Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_xqnom;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xqnom;
  real_T intermediate_der194;
  real_T intermediate_der198;
  real_T intermediate_der212;
  real_T intermediate_der222;
  real_T intermediate_der223;
  real_T intermediate_der239;
  real_T intermediate_der243;
  real_T intermediate_der260;
  real_T intermediate_der278;
  real_T intermediate_der282;
  real_T intermediate_der286;
  real_T intermediate_der299;
  real_T intermediate_der328;
  real_T intermediate_der341;
  real_T intermediate_der345;
  real_T intermediate_der370;
  real_T intermediate_der371;
  real_T intermediate_der443;
  real_T intermediate_der446;
  real_T intermediate_der447;
  real_T intermediate_der451;
  real_T intermediate_der453;
  real_T intermediate_der455;
  real_T intermediate_der460;
  real_T intermediate_der464;
  real_T intermediate_der465;
  real_T intermediate_der467;
  real_T intermediate_der468;
  real_T intermediate_der477;
  real_T intermediate_der478;
  real_T intermediate_der480;
  real_T intermediate_der481;
  real_T intermediate_der482;
  real_T intermediate_der483;
  real_T intermediate_der487;
  real_T intermediate_der488;
  real_T intermediate_der491;
  real_T intermediate_der506;
  real_T intermediate_der509;
  real_T intermediate_der510;
  real_T intermediate_der513;
  real_T intermediate_der514;
  real_T intermediate_der515;
  real_T intermediate_der516;
  real_T intermediate_der517;
  real_T intermediate_der519;
  real_T intermediate_der525;
  real_T intermediate_der537;
  real_T intermediate_der538;
  real_T intermediate_der539;
  real_T intermediate_der541;
  real_T intermediate_der544;
  real_T intermediate_der555;
  real_T intermediate_der560;
  real_T intermediate_der563;
  real_T intermediate_der574;
  real_T intermediate_der580;
  real_T intermediate_der584;
  real_T intermediate_der590;
  real_T intermediate_der591;
  real_T intermediate_der592;
  real_T intermediate_der594;
  real_T intermediate_der597;
  real_T intermediate_der602;
  real_T intermediate_der605;
  real_T intermediate_der610;
  real_T intermediate_der612;
  real_T intermediate_der617;
  real_T intermediate_der621;
  real_T intrm_sf_mf_11;
  real_T intrm_sf_mf_5;
  real_T intrm_sf_mf_6;
  real_T intrm_sf_mf_7;
  real_T intrm_sf_mf_9;
  real_T t1004;
  real_T t1005;
  real_T t1008;
  real_T t1012;
  real_T t1013;
  real_T t1020;
  real_T t1023;
  real_T t1026;
  real_T t1027;
  real_T t1028;
  real_T t1029;
  real_T t1030;
  real_T t1031;
  real_T t1033;
  real_T t1034;
  real_T t1041;
  real_T t1047;
  real_T t1051;
  real_T t1053;
  real_T t1056;
  real_T t1057;
  real_T t1059;
  real_T t1067;
  real_T t1071;
  real_T t1076;
  real_T t1079;
  real_T t1080;
  real_T t1081;
  real_T t1086;
  real_T t1088;
  real_T t1089;
  real_T t1090;
  real_T t1096;
  real_T t1097;
  real_T t1098;
  real_T t1100;
  real_T t1104;
  real_T t1106;
  real_T t1108;
  real_T t1111;
  real_T t1113;
  real_T t1114;
  real_T t1116;
  real_T t1117;
  real_T t1120;
  real_T t1126;
  real_T t1133;
  real_T t1137;
  real_T t1143;
  real_T t1147;
  real_T t1153;
  real_T t1160;
  real_T t1163;
  real_T t1168;
  real_T t1169;
  real_T t1173;
  real_T t1174;
  real_T t1178;
  real_T t1179;
  real_T t1183;
  real_T t1184;
  real_T t1188;
  real_T t1189;
  real_T t1193;
  real_T t1194;
  real_T t1198;
  real_T t1199;
  real_T t1203;
  real_T t1204;
  real_T t1208;
  real_T t1209;
  real_T t1213;
  real_T t1214;
  real_T t1218;
  real_T t1219;
  real_T t1223;
  real_T t1224;
  real_T t1230;
  real_T t1235;
  real_T t1237;
  real_T t1240;
  real_T t1246;
  real_T t1248;
  real_T t1250;
  real_T t1252;
  real_T t1285;
  real_T t1359;
  real_T t40;
  real_T t41;
  real_T t46;
  real_T t989;
  real_T t990;
  real_T t992;
  real_T t998;
  real_T zc_int0;
  real_T zc_int20;
  real_T zc_int24;
  real_T zc_int25;
  real_T zc_int26;
  real_T zc_int27;
  real_T zc_int28;
  real_T zc_int29;
  real_T zc_int30;
  real_T zc_int31;
  real_T zc_int32;
  real_T zc_int33;
  real_T zc_int34;
  real_T zc_int35;
  real_T zc_int6;
  real_T zc_int8;
  size_t t83[1];
  size_t t84[1];
  size_t t86[1];
  size_t t905;
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
  t1056 = (((t1360->mX.mX[108ULL] * 0.02564102564102564 + t1360->mX.mX[109ULL] *
             0.02564102564102564) + t1360->mX.mX[97ULL] * -0.02564102564102564)
           + t1360->mU.mX[0ULL]) + t1360->mU.mX[1ULL];
  t96[0ULL] = t1360->mX.mX[147ULL];
  t83[0] = 11ULL;
  t84[0] = 1ULL;
  tlu2_linear_nearest_prelookup(&t5.mField0[0ULL], &t5.mField1[0ULL],
    &t5.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t96[0ULL],
    &t83[0ULL], &t84[0ULL]);
  t96[0ULL] = t1360->mX.mX[0ULL];
  t86[0] = 5ULL;
  tlu2_linear_nearest_prelookup(&t9.mField0[0ULL], &t9.mField1[0ULL],
    &t9.mField2[0ULL], &nonscalar2[0ULL], &t96[0ULL], &t86[0ULL], &t84[0ULL]);
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t5.mField0[0ULL], &t5.mField2[0ULL],
    &t9.mField0[0ULL], &t9.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der446 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t5.mField0[0ULL], &t5.mField2[0ULL],
    &t9.mField0[0ULL], &t9.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  t1057 = t634[0ULL];
  tlu2_1d_linear_nearest_value(&t634[0ULL], &t9.mField0[0ULL], &t9.mField2[0ULL],
    &nonscalar4[0ULL], &t86[0ULL], &t84[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xqnom =
    t634[0ULL];
  t1067 = ((((t1360->mX.mX[96ULL] * -0.02564102564102564 + t1360->mX.mX[100ULL] *
              0.02564102564102564) + t1360->mX.mX[111ULL] * 0.02564102564102564)
            + t1360->mX.mX[112ULL] * 0.02564102564102564) + t1360->mU.mX[0ULL])
    + t1360->mU.mX[1ULL];
  t96[0ULL] = t1360->mX.mX[153ULL];
  tlu2_linear_nearest_prelookup(&t16.mField0[0ULL], &t16.mField1[0ULL],
    &t16.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t96[0ULL],
    &t83[0ULL], &t84[0ULL]);
  t96[0ULL] = t1360->mX.mX[8ULL];
  tlu2_linear_nearest_prelookup(&t4.mField0[0ULL], &t4.mField1[0ULL],
    &t4.mField2[0ULL], &nonscalar2[0ULL], &t96[0ULL], &t86[0ULL], &t84[0ULL]);
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t16.mField0[0ULL], &t16.mField2
    [0ULL], &t4.mField0[0ULL], &t4.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der506 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t16.mField0[0ULL], &t16.mField2
    [0ULL], &t4.mField0[0ULL], &t4.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der481 = t634[0ULL];
  tlu2_1d_linear_nearest_value(&t634[0ULL], &t4.mField0[0ULL], &t4.mField2[0ULL],
    &nonscalar4[0ULL], &t86[0ULL], &t84[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xqnom =
    t634[0ULL];
  t1076 = ((((t1360->mX.mX[98ULL] * -0.02564102564102564 + t1360->mX.mX[99ULL] *
              0.02564102564102564) + t1360->mX.mX[114ULL] * 0.02564102564102564)
            + t1360->mX.mX[115ULL] * 0.02564102564102564) + t1360->mU.mX[0ULL])
    + t1360->mU.mX[1ULL];
  t96[0ULL] = t1360->mX.mX[158ULL];
  tlu2_linear_nearest_prelookup(&t13.mField0[0ULL], &t13.mField1[0ULL],
    &t13.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t96[0ULL],
    &t83[0ULL], &t84[0ULL]);
  t96[0ULL] = t1360->mX.mX[17ULL];
  tlu2_linear_nearest_prelookup(&t8.mField0[0ULL], &t8.mField1[0ULL],
    &t8.mField2[0ULL], &nonscalar2[0ULL], &t96[0ULL], &t86[0ULL], &t84[0ULL]);
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t13.mField0[0ULL], &t13.mField2
    [0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der539 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t13.mField0[0ULL], &t13.mField2
    [0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der537 = t634[0ULL];
  tlu2_1d_linear_nearest_value(&t634[0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL],
    &nonscalar5[0ULL], &t86[0ULL], &t84[0ULL]);
  t1080 = t634[0ULL];
  t1086 = (((t1360->mX.mX[99ULL] * -0.02564102564102564 + t1360->mX.mX[117ULL] *
             0.02564102564102564) + t1360->mX.mX[118ULL] * 0.02564102564102564)
           + t1360->mU.mX[0ULL]) + t1360->mU.mX[1ULL];
  t96[0ULL] = t1360->mX.mX[163ULL];
  tlu2_linear_nearest_prelookup(&t32.mField0[0ULL], &t32.mField1[0ULL],
    &t32.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t96[0ULL],
    &t83[0ULL], &t84[0ULL]);
  t96[0ULL] = t1360->mX.mX[25ULL];
  tlu2_linear_nearest_prelookup(&t15.mField0[0ULL], &t15.mField1[0ULL],
    &t15.mField2[0ULL], &nonscalar2[0ULL], &t96[0ULL], &t86[0ULL], &t84[0ULL]);
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t32.mField0[0ULL], &t32.mField2
    [0ULL], &t15.mField0[0ULL], &t15.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField0, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xVint =
    t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t32.mField0[0ULL], &t32.mField2
    [0ULL], &t15.mField0[0ULL], &t15.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField2, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  t998 = t634[0ULL];
  tlu2_1d_linear_nearest_value(&t634[0ULL], &t15.mField0[0ULL], &t15.mField2
    [0ULL], &nonscalar6[0ULL], &t86[0ULL], &t84[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xqnom =
    t634[0ULL];
  t1097 = ((((t1360->mX.mX[100ULL] * -0.02564102564102564 + t1360->mX.mX[101ULL]
              * 0.02564102564102564) + t1360->mX.mX[120ULL] *
             0.02564102564102564) + t1360->mX.mX[121ULL] * 0.02564102564102564)
           + t1360->mU.mX[0ULL]) + t1360->mU.mX[1ULL];
  t96[0ULL] = t1360->mX.mX[168ULL];
  tlu2_linear_nearest_prelookup(&t27.mField0[0ULL], &t27.mField1[0ULL],
    &t27.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t96[0ULL],
    &t83[0ULL], &t84[0ULL]);
  t96[0ULL] = t1360->mX.mX[16ULL];
  tlu2_linear_nearest_prelookup(&t35.mField0[0ULL], &t35.mField1[0ULL],
    &t35.mField2[0ULL], &nonscalar2[0ULL], &t96[0ULL], &t86[0ULL], &t84[0ULL]);
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t27.mField0[0ULL], &t27.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField0, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  t1096 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t27.mField0[0ULL], &t27.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField2, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der563 = t634[0ULL];
  tlu2_1d_linear_nearest_value(&t634[0ULL], &t35.mField0[0ULL], &t35.mField2
    [0ULL], &nonscalar4[0ULL], &t86[0ULL], &t84[0ULL]);
  t1100 = t634[0ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i =
    ((((t1360->mX.mX[101ULL] * -0.02564102564102564 + t1360->mX.mX[102ULL] *
        0.02564102564102564) + t1360->mX.mX[123ULL] * 0.02564102564102564) +
      t1360->mX.mX[124ULL] * 0.02564102564102564) + t1360->mU.mX[0ULL]) +
    t1360->mU.mX[1ULL];
  t96[0ULL] = t1360->mX.mX[173ULL];
  tlu2_linear_nearest_prelookup(&t12.mField0[0ULL], &t12.mField1[0ULL],
    &t12.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t96[0ULL],
    &t83[0ULL], &t84[0ULL]);
  t96[0ULL] = t1360->mX.mX[41ULL];
  tlu2_linear_nearest_prelookup(&t25.mField0[0ULL], &t25.mField1[0ULL],
    &t25.mField2[0ULL], &nonscalar2[0ULL], &t96[0ULL], &t86[0ULL], &t84[0ULL]);
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], &t25.mField0[0ULL], &t25.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField0, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  t1106 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], &t25.mField0[0ULL], &t25.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField2, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intrm_sf_mf_5 = t634[0ULL];
  tlu2_1d_linear_nearest_value(&t634[0ULL], &t25.mField0[0ULL], &t25.mField2
    [0ULL], &nonscalar4[0ULL], &t86[0ULL], &t84[0ULL]);
  t1004 = t634[0ULL];
  t1116 = ((((t1360->mX.mX[102ULL] * -0.02564102564102564 + t1360->mX.mX[103ULL]
              * 0.02564102564102564) + t1360->mX.mX[126ULL] *
             0.02564102564102564) + t1360->mX.mX[127ULL] * 0.02564102564102564)
           + t1360->mU.mX[0ULL]) + t1360->mU.mX[1ULL];
  t96[0ULL] = t1360->mX.mX[178ULL];
  tlu2_linear_nearest_prelookup(&t2.mField0[0ULL], &t2.mField1[0ULL],
    &t2.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t96[0ULL],
    &t83[0ULL], &t84[0ULL]);
  t96[0ULL] = t1360->mX.mX[49ULL];
  tlu2_linear_nearest_prelookup(&t29.mField0[0ULL], &t29.mField1[0ULL],
    &t29.mField2[0ULL], &nonscalar2[0ULL], &t96[0ULL], &t86[0ULL], &t84[0ULL]);
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL],
    &t29.mField0[0ULL], &t29.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der460 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL],
    &t29.mField0[0ULL], &t29.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intrm_sf_mf_6 = t634[0ULL];
  tlu2_1d_linear_nearest_value(&t634[0ULL], &t29.mField0[0ULL], &t29.mField2
    [0ULL], &nonscalar4[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der509 = t634[0ULL];
  t1126 = ((((t1360->mX.mX[103ULL] * -0.02564102564102564 + t1360->mX.mX[104ULL]
              * 0.02564102564102564) + t1360->mX.mX[129ULL] *
             0.02564102564102564) + t1360->mX.mX[130ULL] * 0.02564102564102564)
           + t1360->mU.mX[0ULL]) + t1360->mU.mX[1ULL];
  t96[0ULL] = t1360->mX.mX[183ULL];
  tlu2_linear_nearest_prelookup(&t7.mField0[0ULL], &t7.mField1[0ULL],
    &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t96[0ULL],
    &t83[0ULL], &t84[0ULL]);
  t96[0ULL] = t1360->mX.mX[57ULL];
  tlu2_linear_nearest_prelookup(&t18.mField0[0ULL], &t18.mField1[0ULL],
    &t18.mField2[0ULL], &nonscalar2[0ULL], &t96[0ULL], &t86[0ULL], &t84[0ULL]);
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    &t18.mField0[0ULL], &t18.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  t1012 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    &t18.mField0[0ULL], &t18.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intrm_sf_mf_7 = t634[0ULL];
  tlu2_1d_linear_nearest_value(&t634[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], &nonscalar4[0ULL], &t86[0ULL], &t84[0ULL]);
  t1013 = t634[0ULL];
  t1137 = ((((t1360->mX.mX[104ULL] * -0.02564102564102564 + t1360->mX.mX[105ULL]
              * 0.02564102564102564) + t1360->mX.mX[132ULL] *
             0.02564102564102564) + t1360->mX.mX[133ULL] * 0.02564102564102564)
           + t1360->mU.mX[0ULL]) + t1360->mU.mX[1ULL];
  t96[0ULL] = t1360->mX.mX[188ULL];
  tlu2_linear_nearest_prelookup(&t6.mField0[0ULL], &t6.mField1[0ULL],
    &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t96[0ULL],
    &t83[0ULL], &t84[0ULL]);
  t96[0ULL] = t1360->mX.mX[65ULL];
  tlu2_linear_nearest_prelookup(&t31.mField0[0ULL], &t31.mField1[0ULL],
    &t31.mField2[0ULL], &nonscalar2[0ULL], &t96[0ULL], &t86[0ULL], &t84[0ULL]);
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    &t31.mField0[0ULL], &t31.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based6_cell_temperature = t634
    [0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    &t31.mField0[0ULL], &t31.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der468 = t634[0ULL];
  tlu2_1d_linear_nearest_value(&t634[0ULL], &t31.mField0[0ULL], &t31.mField2
    [0ULL], &nonscalar4[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der514 = t634[0ULL];
  t1147 = ((((t1360->mX.mX[105ULL] * -0.02564102564102564 + t1360->mX.mX[106ULL]
              * 0.02564102564102564) + t1360->mX.mX[135ULL] *
             0.02564102564102564) + t1360->mX.mX[136ULL] * 0.02564102564102564)
           + t1360->mU.mX[0ULL]) + t1360->mU.mX[1ULL];
  t96[0ULL] = t1360->mX.mX[193ULL];
  tlu2_linear_nearest_prelookup(&t3.mField0[0ULL], &t3.mField1[0ULL],
    &t3.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t96[0ULL],
    &t83[0ULL], &t84[0ULL]);
  t96[0ULL] = t1360->mX.mX[73ULL];
  tlu2_linear_nearest_prelookup(&t22.mField0[0ULL], &t22.mField1[0ULL],
    &t22.mField2[0ULL], &nonscalar2[0ULL], &t96[0ULL], &t86[0ULL], &t84[0ULL]);
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t3.mField0[0ULL], &t3.mField2[0ULL],
    &t22.mField0[0ULL], &t22.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der477 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t3.mField0[0ULL], &t3.mField2[0ULL],
    &t22.mField0[0ULL], &t22.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intrm_sf_mf_9 = t634[0ULL];
  tlu2_1d_linear_nearest_value(&t634[0ULL], &t22.mField0[0ULL], &t22.mField2
    [0ULL], &nonscalar4[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der516 = t634[0ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_i =
    ((((t1360->mX.mX[106ULL] * -0.02564102564102564 + t1360->mX.mX[107ULL] *
        0.02564102564102564) + t1360->mX.mX[138ULL] * 0.02564102564102564) +
      t1360->mX.mX[139ULL] * 0.02564102564102564) + t1360->mU.mX[0ULL]) +
    t1360->mU.mX[1ULL];
  t96[0ULL] = t1360->mX.mX[198ULL];
  tlu2_linear_nearest_prelookup(&t14.mField0[0ULL], &t14.mField1[0ULL],
    &t14.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t96[0ULL],
    &t83[0ULL], &t84[0ULL]);
  t96[0ULL] = t1360->mX.mX[81ULL];
  tlu2_linear_nearest_prelookup(&t24.mField0[0ULL], &t24.mField1[0ULL],
    &t24.mField2[0ULL], &nonscalar2[0ULL], &t96[0ULL], &t86[0ULL], &t84[0ULL]);
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t14.mField0[0ULL], &t14.mField2
    [0ULL], &t24.mField0[0ULL], &t24.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField0, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based8_cell_temperature = t634
    [0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t14.mField0[0ULL], &t14.mField2
    [0ULL], &t24.mField0[0ULL], &t24.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField2, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der483 = t634[0ULL];
  tlu2_1d_linear_nearest_value(&t634[0ULL], &t24.mField0[0ULL], &t24.mField2
    [0ULL], &nonscalar4[0ULL], &t86[0ULL], &t84[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_xqnom =
    t634[0ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_i =
    ((((t1360->mX.mX[98ULL] * 0.02564102564102564 + t1360->mX.mX[107ULL] *
        -0.02564102564102564) + t1360->mX.mX[141ULL] * 0.02564102564102564) +
      t1360->mX.mX[142ULL] * 0.02564102564102564) + t1360->mU.mX[0ULL]) +
    t1360->mU.mX[1ULL];
  t96[0ULL] = t1360->mX.mX[203ULL];
  tlu2_linear_nearest_prelookup(&t0.mField0[0ULL], &t0.mField1[0ULL],
    &t0.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t96[0ULL],
    &t83[0ULL], &t84[0ULL]);
  t96[0ULL] = t1360->mX.mX[26ULL];
  tlu2_linear_nearest_prelookup(&t11.mField0[0ULL], &t11.mField1[0ULL],
    &t11.mField2[0ULL], &nonscalar2[0ULL], &t96[0ULL], &t86[0ULL], &t84[0ULL]);
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL],
    &t11.mField0[0ULL], &t11.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  t989 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL],
    &t11.mField0[0ULL], &t11.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intrm_sf_mf_11 = t634[0ULL];
  tlu2_1d_linear_nearest_value(&t634[0ULL], &t11.mField0[0ULL], &t11.mField2
    [0ULL], &nonscalar4[0ULL], &t86[0ULL], &t84[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_xqnom =
    t634[0ULL];
  if (t1360->mM.mX[1ULL] != 0) {
    zc_int0 = 8.200000000000002E-8;
  } else {
    zc_int0 = t1360->mX.mX[145ULL] * t1057;
  }

  if (t1360->mM.mX[40ULL] != 0) {
    t1026 = 8.200000000000002E-8;
  } else {
    t1026 = t1360->mX.mX[171ULL] * intrm_sf_mf_5;
  }

  if (t1360->mM.mX[43ULL] != 0) {
    t1027 = 8.200000000000002E-8;
  } else {
    t1027 = t1360->mX.mX[176ULL] * intrm_sf_mf_6;
  }

  if (t1360->mM.mX[47ULL] != 0) {
    t1028 = 8.200000000000002E-8;
  } else {
    t1028 = t1360->mX.mX[181ULL] * intrm_sf_mf_7;
  }

  if (t1360->mM.mX[50ULL] != 0) {
    t1029 = 8.200000000000002E-8;
  } else {
    t1029 = t1360->mX.mX[186ULL] * intermediate_der468;
  }

  if (t1360->mM.mX[53ULL] != 0) {
    t1030 = 8.200000000000002E-8;
  } else {
    t1030 = t1360->mX.mX[191ULL] * intrm_sf_mf_9;
  }

  if (t1360->mM.mX[66ULL] != 0) {
    t1031 = 8.200000000000002E-8;
  } else {
    t1031 = t1360->mX.mX[151ULL] * intermediate_der481;
  }

  if (t1360->mM.mX[57ULL] != 0) {
    zc_int20 = 8.200000000000002E-8;
  } else {
    zc_int20 = t1360->mX.mX[196ULL] * intermediate_der483;
  }

  if (t1360->mM.mX[60ULL] != 0) {
    t1033 = 8.200000000000002E-8;
  } else {
    t1033 = t1360->mX.mX[201ULL] * intrm_sf_mf_11;
  }

  if (t1360->mM.mX[44ULL] != 0) {
    zc_int24 = 0.02808;
  } else {
    zc_int24 = t1360->mX.mX[144ULL] *
      Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xqnom;
  }

  if (t1360->mM.mX[77ULL] != 0) {
    zc_int25 = 0.02808;
  } else {
    zc_int25 = t1360->mX.mX[150ULL] *
      Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xqnom;
  }

  if (t1360->mM.mX[110ULL] != 0) {
    zc_int26 = 0.033696000000000004;
  } else {
    zc_int26 = t1360->mX.mX[155ULL] * t1080;
  }

  if (t1360->mM.mX[13ULL] != 0) {
    zc_int27 = 0.041184;
  } else {
    zc_int27 = t1360->mX.mX[160ULL] *
      Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xqnom;
  }

  if (t1360->mM.mX[38ULL] != 0) {
    zc_int28 = 0.02808;
  } else {
    zc_int28 = t1360->mX.mX[165ULL] * t1100;
  }

  if (t1360->mM.mX[41ULL] != 0) {
    zc_int29 = 0.02808;
  } else {
    zc_int29 = t1360->mX.mX[170ULL] * t1004;
  }

  if (t1360->mM.mX[45ULL] != 0) {
    zc_int30 = 0.02808;
  } else {
    zc_int30 = t1360->mX.mX[175ULL] * intermediate_der509;
  }

  if (t1360->mM.mX[48ULL] != 0) {
    zc_int31 = 0.02808;
  } else {
    zc_int31 = t1360->mX.mX[180ULL] * t1013;
  }

  if (t1360->mM.mX[51ULL] != 0) {
    zc_int32 = 0.02808;
  } else {
    zc_int32 = t1360->mX.mX[185ULL] * intermediate_der514;
  }

  if (t1360->mM.mX[54ULL] != 0) {
    zc_int33 = 0.02808;
  } else {
    zc_int33 = t1360->mX.mX[190ULL] * intermediate_der516;
  }

  if (t1360->mM.mX[58ULL] != 0) {
    zc_int34 = 0.02808;
  } else {
    zc_int34 = t1360->mX.mX[195ULL] *
      Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_xqnom;
  }

  if (t1360->mM.mX[61ULL] != 0) {
    zc_int35 = 0.02808;
  } else {
    zc_int35 = t634[0ULL] * t1360->mX.mX[200ULL];
  }

  if (t1360->mM.mX[99ULL] != 0) {
    t1034 = 8.200000000000002E-8;
  } else {
    t1034 = t1360->mX.mX[156ULL] * intermediate_der537;
  }

  if (t1360->mM.mX[2ULL] != 0) {
    zc_int6 = 8.200000000000002E-8;
  } else {
    zc_int6 = t1360->mX.mX[161ULL] * t998;
  }

  if (t1360->mM.mX[35ULL] != 0) {
    zc_int8 = 8.200000000000002E-8;
  } else {
    zc_int8 = t1360->mX.mX[166ULL] * intermediate_der563;
  }

  tlu2_2d_linear_nearest_value(&t634[0ULL], &t5.mField0[0ULL], &t5.mField2[0ULL],
    &t9.mField1[0ULL], &t9.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der447 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t5.mField1[0ULL], &t5.mField2[0ULL],
    &t9.mField0[0ULL], &t9.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  t1108 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t5.mField0[0ULL], &t5.mField2[0ULL],
    &t9.mField1[0ULL], &t9.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der443 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t5.mField1[0ULL], &t5.mField2[0ULL],
    &t9.mField0[0ULL], &t9.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  t1053 = t634[0ULL];
  nonscalar2[0] = _cg_const_8[0];
  nonscalar2[1] = _cg_const_8[1];
  nonscalar2[2] = _cg_const_8[2];
  nonscalar2[3] = _cg_const_8[3];
  nonscalar2[4] = _cg_const_8[4];
  t568[0] = _cg_const_9[0];
  t568[1] = _cg_const_9[1];
  t568[2] = _cg_const_9[2];
  t568[3] = _cg_const_9[3];
  t568[4] = _cg_const_9[4];
  t569[0] = _cg_const_10[0];
  t569[1] = _cg_const_10[1];
  t569[2] = _cg_const_10[2];
  t569[3] = _cg_const_10[3];
  t569[4] = _cg_const_10[4];
  t570[0] = _cg_const_11[0];
  t570[1] = _cg_const_11[1];
  t570[2] = _cg_const_11[2];
  t570[3] = _cg_const_11[3];
  t570[4] = _cg_const_11[4];
  t571[0] = _cg_const_12[0];
  t571[1] = _cg_const_12[1];
  t571[2] = _cg_const_12[2];
  t571[3] = _cg_const_12[3];
  t571[4] = _cg_const_12[4];
  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    intermediate_der185[t905] = ((((0.0 * t1360->mX.mX[3ULL] * nonscalar2[t905]
      + 0.0 * t1360->mX.mX[4ULL] * t568[t905]) + 0.0 * t1360->mX.mX[5ULL] *
      t569[t905]) + 0.0 * t1360->mX.mX[6ULL] * t570[t905]) + 0.0 * t1360->mX.mX
      [7ULL] * t571[t905]) * 0.001;
  }

  tlu2_1d_linear_nearest_value(&t634[0ULL], &t9.mField1[0ULL], &t9.mField2[0ULL],
    &nonscalar4[0ULL], &t86[0ULL], &t84[0ULL]);
  t1051 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t16.mField1[0ULL], &t16.mField2
    [0ULL], &t4.mField0[0ULL], &t4.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  t992 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t16.mField0[0ULL], &t16.mField2
    [0ULL], &t4.mField1[0ULL], &t4.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der194 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t16.mField1[0ULL], &t16.mField2
    [0ULL], &t4.mField0[0ULL], &t4.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der198 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t16.mField0[0ULL], &t16.mField2
    [0ULL], &t4.mField1[0ULL], &t4.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der480 = t634[0ULL];
  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    intermediate_der207[t905] = ((((0.0 * t1360->mX.mX[11ULL] * nonscalar2[t905]
      + 0.0 * t1360->mX.mX[12ULL] * t568[t905]) + 0.0 * t1360->mX.mX[13ULL] *
      t569[t905]) + 0.0 * t1360->mX.mX[14ULL] * t570[t905]) + 0.0 * t1360->
      mX.mX[15ULL] * t571[t905]) * 0.001;
  }

  tlu2_1d_linear_nearest_value(&t634[0ULL], &t4.mField1[0ULL], &t4.mField2[0ULL],
    &nonscalar4[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der212 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t13.mField1[0ULL], &t13.mField2
    [0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der538 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t13.mField0[0ULL], &t13.mField2
    [0ULL], &t8.mField1[0ULL], &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der541 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t13.mField1[0ULL], &t13.mField2
    [0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der222 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t13.mField0[0ULL], &t13.mField2
    [0ULL], &t8.mField1[0ULL], &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der223 = t634[0ULL];
  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    intermediate_der229[t905] = ((((0.0 * t1360->mX.mX[20ULL] * nonscalar2[t905]
      + 0.0 * t1360->mX.mX[21ULL] * t568[t905]) + 0.0 * t1360->mX.mX[22ULL] *
      t569[t905]) + 0.0 * t1360->mX.mX[23ULL] * t570[t905]) + 0.0 * t1360->
      mX.mX[24ULL] * t571[t905]) * 0.001;
  }

  tlu2_1d_linear_nearest_value(&t634[0ULL], &t8.mField1[0ULL], &t8.mField2[0ULL],
    &nonscalar5[0ULL], &t86[0ULL], &t84[0ULL]);
  t1071 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t32.mField1[0ULL], &t32.mField2
    [0ULL], &t15.mField0[0ULL], &t15.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField0, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der555 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t32.mField0[0ULL], &t32.mField2
    [0ULL], &t15.mField1[0ULL], &t15.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField0, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der239 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t32.mField1[0ULL], &t32.mField2
    [0ULL], &t15.mField0[0ULL], &t15.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField2, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der243 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t32.mField0[0ULL], &t32.mField2
    [0ULL], &t15.mField1[0ULL], &t15.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField2, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  t1088 = t634[0ULL];
  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    intermediate_der248[t905] = ((((0.0 * t1360->mX.mX[29ULL] * nonscalar2[t905]
      + 0.0 * t1360->mX.mX[30ULL] * t568[t905]) + 0.0 * t1360->mX.mX[31ULL] *
      t569[t905]) + 0.0 * t1360->mX.mX[32ULL] * t570[t905]) + 0.0 * t1360->
      mX.mX[33ULL] * t571[t905]) * 0.001;
  }

  tlu2_1d_linear_nearest_value(&t634[0ULL], &t15.mField1[0ULL], &t15.mField2
    [0ULL], &nonscalar6[0ULL], &t86[0ULL], &t84[0ULL]);
  t1005 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t27.mField0[0ULL], &t27.mField2
    [0ULL], &t35.mField1[0ULL], &t35.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField0, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der260 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t27.mField1[0ULL], &t27.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField0, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  t1008 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t27.mField0[0ULL], &t27.mField2
    [0ULL], &t35.mField1[0ULL], &t35.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField2, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  t1098 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t27.mField1[0ULL], &t27.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField2, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  t1090 = t634[0ULL];
  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    intermediate_der274[t905] = ((((0.0 * t1360->mX.mX[36ULL] * nonscalar2[t905]
      + 0.0 * t1360->mX.mX[37ULL] * t568[t905]) + 0.0 * t1360->mX.mX[38ULL] *
      t569[t905]) + 0.0 * t1360->mX.mX[39ULL] * t570[t905]) + 0.0 * t1360->
      mX.mX[40ULL] * t571[t905]) * 0.001;
  }

  tlu2_1d_linear_nearest_value(&t634[0ULL], &t35.mField1[0ULL], &t35.mField2
    [0ULL], &nonscalar4[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der278 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t12.mField1[0ULL], &t12.mField2
    [0ULL], &t25.mField0[0ULL], &t25.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField0, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der453 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], &t25.mField1[0ULL], &t25.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField0, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der282 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t12.mField1[0ULL], &t12.mField2
    [0ULL], &t25.mField0[0ULL], &t25.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField2, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der286 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], &t25.mField1[0ULL], &t25.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField2, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der451 = t634[0ULL];
  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    intermediate_der291[t905] = ((((0.0 * t1360->mX.mX[44ULL] * nonscalar2[t905]
      + 0.0 * t1360->mX.mX[45ULL] * t568[t905]) + 0.0 * t1360->mX.mX[46ULL] *
      t569[t905]) + 0.0 * t1360->mX.mX[47ULL] * t570[t905]) + 0.0 * t1360->
      mX.mX[48ULL] * t571[t905]) * 0.001;
  }

  tlu2_1d_linear_nearest_value(&t634[0ULL], &t25.mField1[0ULL], &t25.mField2
    [0ULL], &nonscalar4[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der299 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t2.mField1[0ULL], &t2.mField2[0ULL],
    &t29.mField0[0ULL], &t29.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  t1113 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL],
    &t29.mField1[0ULL], &t29.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  t1117 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t2.mField1[0ULL], &t2.mField2[0ULL],
    &t29.mField0[0ULL], &t29.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  t1111 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL],
    &t29.mField1[0ULL], &t29.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der455 = t634[0ULL];
  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    intermediate_der317[t905] = ((((0.0 * t1360->mX.mX[52ULL] * nonscalar2[t905]
      + 0.0 * t1360->mX.mX[53ULL] * t568[t905]) + 0.0 * t1360->mX.mX[54ULL] *
      t569[t905]) + 0.0 * t1360->mX.mX[55ULL] * t570[t905]) + 0.0 * t1360->
      mX.mX[56ULL] * t571[t905]) * 0.001;
  }

  tlu2_1d_linear_nearest_value(&t634[0ULL], &t29.mField1[0ULL], &t29.mField2
    [0ULL], &nonscalar4[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der510 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    &t18.mField1[0ULL], &t18.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der464 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t7.mField1[0ULL], &t7.mField2[0ULL],
    &t18.mField0[0ULL], &t18.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der465 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    &t18.mField1[0ULL], &t18.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der328 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t7.mField1[0ULL], &t7.mField2[0ULL],
    &t18.mField0[0ULL], &t18.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  t1120 = t634[0ULL];
  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    intermediate_der339[t905] = ((((0.0 * t1360->mX.mX[60ULL] * nonscalar2[t905]
      + 0.0 * t1360->mX.mX[61ULL] * t568[t905]) + 0.0 * t1360->mX.mX[62ULL] *
      t569[t905]) + 0.0 * t1360->mX.mX[63ULL] * t570[t905]) + 0.0 * t1360->
      mX.mX[64ULL] * t571[t905]) * 0.001;
  }

  tlu2_1d_linear_nearest_value(&t634[0ULL], &t18.mField1[0ULL], &t18.mField2
    [0ULL], &nonscalar4[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der341 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    &t31.mField1[0ULL], &t31.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  t1133 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t6.mField1[0ULL], &t6.mField2[0ULL],
    &t31.mField0[0ULL], &t31.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der345 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL],
    &t31.mField1[0ULL], &t31.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der467 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t6.mField1[0ULL], &t6.mField2[0ULL],
    &t31.mField0[0ULL], &t31.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  t1020 = t634[0ULL];
  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    intermediate_der361[t905] = ((((0.0 * t1360->mX.mX[68ULL] * nonscalar2[t905]
      + 0.0 * t1360->mX.mX[69ULL] * t568[t905]) + 0.0 * t1360->mX.mX[70ULL] *
      t569[t905]) + 0.0 * t1360->mX.mX[71ULL] * t570[t905]) + 0.0 * t1360->
      mX.mX[72ULL] * t571[t905]) * 0.001;
  }

  tlu2_1d_linear_nearest_value(&t634[0ULL], &t31.mField1[0ULL], &t31.mField2
    [0ULL], &nonscalar4[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der513 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t3.mField0[0ULL], &t3.mField2[0ULL],
    &t22.mField1[0ULL], &t22.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  t1143 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t3.mField1[0ULL], &t3.mField2[0ULL],
    &t22.mField0[0ULL], &t22.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der478 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t3.mField0[0ULL], &t3.mField2[0ULL],
    &t22.mField1[0ULL], &t22.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der370 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t3.mField1[0ULL], &t3.mField2[0ULL],
    &t22.mField0[0ULL], &t22.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der371 = t634[0ULL];
  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    intermediate_der376[t905] = ((((0.0 * t1360->mX.mX[76ULL] * nonscalar2[t905]
      + 0.0 * t1360->mX.mX[77ULL] * t568[t905]) + 0.0 * t1360->mX.mX[78ULL] *
      t569[t905]) + 0.0 * t1360->mX.mX[79ULL] * t570[t905]) + 0.0 * t1360->
      mX.mX[80ULL] * t571[t905]) * 0.001;
  }

  tlu2_1d_linear_nearest_value(&t634[0ULL], &t22.mField1[0ULL], &t22.mField2
    [0ULL], &nonscalar4[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der515 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t14.mField0[0ULL], &t14.mField2
    [0ULL], &t24.mField1[0ULL], &t24.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField0, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  t1153 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t14.mField1[0ULL], &t14.mField2
    [0ULL], &t24.mField0[0ULL], &t24.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField0, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der487 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t14.mField0[0ULL], &t14.mField2
    [0ULL], &t24.mField1[0ULL], &t24.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField2, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der482 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t14.mField1[0ULL], &t14.mField2
    [0ULL], &t24.mField0[0ULL], &t24.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField2, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  t1023 = t634[0ULL];
  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    intermediate_der396[t905] = ((((0.0 * t1360->mX.mX[84ULL] * nonscalar2[t905]
      + 0.0 * t1360->mX.mX[85ULL] * t568[t905]) + 0.0 * t1360->mX.mX[86ULL] *
      t569[t905]) + 0.0 * t1360->mX.mX[87ULL] * t570[t905]) + 0.0 * t1360->
      mX.mX[88ULL] * t571[t905]) * 0.001;
  }

  tlu2_1d_linear_nearest_value(&t634[0ULL], &t24.mField1[0ULL], &t24.mField2
    [0ULL], &nonscalar4[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der517 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL],
    &t11.mField1[0ULL], &t11.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der491 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t0.mField1[0ULL], &t0.mField2[0ULL],
    &t11.mField0[0ULL], &t11.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  t1163 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL],
    &t11.mField1[0ULL], &t11.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  intermediate_der488 = t634[0ULL];
  tlu2_2d_linear_nearest_value(&t634[0ULL], &t0.mField1[0ULL], &t0.mField2[0ULL],
    &t11.mField0[0ULL], &t11.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t83[0ULL], &t86[0ULL], &t84[0ULL]);
  t1160 = t634[0ULL];
  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    intermediate_der420[t905] = ((((0.0 * t1360->mX.mX[91ULL] * nonscalar2[t905]
      + 0.0 * t1360->mX.mX[92ULL] * t568[t905]) + 0.0 * t1360->mX.mX[93ULL] *
      t569[t905]) + 0.0 * t1360->mX.mX[94ULL] * t570[t905]) + 0.0 * t1360->
      mX.mX[95ULL] * t571[t905]) * 0.001;
  }

  tlu2_1d_linear_nearest_value(&t634[0ULL], &t11.mField1[0ULL], &t11.mField2
    [0ULL], &nonscalar4[0ULL], &t86[0ULL], &t84[0ULL]);
  if (t1360->mM.mX[1ULL] != 0) {
    t990 = 0.0;
  } else {
    t990 = t1360->mX.mX[145ULL] * intermediate_der443;
  }

  intermediate_der443 = t1360->mM.mX[1ULL] != 0 ? 0.0 : t1057;
  if (t1360->mM.mX[1ULL] != 0) {
    t1057 = 0.0;
  } else {
    t1057 = t1360->mX.mX[145ULL] * t1053;
  }

  t1053 = t1360->mM.mX[0ULL] != 0 ? 0.0 : intermediate_der446;
  if (t1360->mM.mX[0ULL] != 0) {
    intermediate_der446 = 0.0;
  } else {
    intermediate_der446 = t1360->mX.mX[146ULL] * intermediate_der447;
  }

  if (t1360->mM.mX[0ULL] != 0) {
    intermediate_der447 = 0.0;
  } else {
    intermediate_der447 = t1360->mX.mX[146ULL] * t1108;
  }

  if (t1360->mM.mX[40ULL] != 0) {
    t1108 = 0.0;
  } else {
    t1108 = t1360->mX.mX[171ULL] * intermediate_der286;
  }

  intermediate_der286 = t1360->mM.mX[40ULL] != 0 ? 0.0 : intrm_sf_mf_5;
  if (t1360->mM.mX[40ULL] != 0) {
    intrm_sf_mf_5 = 0.0;
  } else {
    intrm_sf_mf_5 = t1360->mX.mX[171ULL] * intermediate_der451;
  }

  intermediate_der451 = t1360->mM.mX[39ULL] != 0 ? 0.0 : t1106;
  if (t1360->mM.mX[39ULL] != 0) {
    t1106 = 0.0;
  } else {
    t1106 = t1360->mX.mX[172ULL] * intermediate_der453;
  }

  if (t1360->mM.mX[39ULL] != 0) {
    intermediate_der453 = 0.0;
  } else {
    intermediate_der453 = t1360->mX.mX[172ULL] * intermediate_der282;
  }

  if (t1360->mM.mX[43ULL] != 0) {
    intermediate_der282 = 0.0;
  } else {
    intermediate_der282 = t1360->mX.mX[176ULL] * intermediate_der455;
  }

  if (t1360->mM.mX[43ULL] != 0) {
    intermediate_der455 = 0.0;
  } else {
    intermediate_der455 = t1360->mX.mX[176ULL] * t1111;
  }

  t1111 = t1360->mM.mX[43ULL] != 0 ? 0.0 : intrm_sf_mf_6;
  if (t1360->mM.mX[42ULL] != 0) {
    intrm_sf_mf_6 = 0.0;
  } else {
    intrm_sf_mf_6 = t1360->mX.mX[177ULL] * t1117;
  }

  if (t1360->mM.mX[42ULL] != 0) {
    t1117 = 0.0;
  } else {
    t1117 = t1360->mX.mX[177ULL] * t1113;
  }

  t1113 = t1360->mM.mX[42ULL] != 0 ? 0.0 : intermediate_der460;
  if (t1360->mM.mX[47ULL] != 0) {
    intermediate_der460 = 0.0;
  } else {
    intermediate_der460 = t1360->mX.mX[181ULL] * intermediate_der328;
  }

  if (t1360->mM.mX[47ULL] != 0) {
    intermediate_der328 = 0.0;
  } else {
    intermediate_der328 = t1360->mX.mX[181ULL] * t1120;
  }

  t1120 = t1360->mM.mX[47ULL] != 0 ? 0.0 : intrm_sf_mf_7;
  if (t1360->mM.mX[46ULL] != 0) {
    intrm_sf_mf_7 = 0.0;
  } else {
    intrm_sf_mf_7 = t1360->mX.mX[182ULL] * intermediate_der464;
  }

  if (t1360->mM.mX[46ULL] != 0) {
    intermediate_der464 = 0.0;
  } else {
    intermediate_der464 = t1360->mX.mX[182ULL] * intermediate_der465;
  }

  intermediate_der465 = t1360->mM.mX[46ULL] != 0 ? 0.0 : t1012;
  if (t1360->mM.mX[50ULL] != 0) {
    t1012 = 0.0;
  } else {
    t1012 = t1360->mX.mX[186ULL] * intermediate_der467;
  }

  intermediate_der467 = t1360->mM.mX[50ULL] != 0 ? 0.0 : intermediate_der468;
  if (t1360->mM.mX[50ULL] != 0) {
    intermediate_der468 = 0.0;
  } else {
    intermediate_der468 = t1360->mX.mX[186ULL] * t1020;
  }

  if (t1360->mM.mX[49ULL] != 0) {
    t1020 = 0.0;
  } else {
    t1020 = t1360->mX.mX[187ULL] * t1133;
  }

  t1133 = t1360->mM.mX[49ULL] != 0 ? 0.0 :
    Plant_Subsystem_Series_Module_Battery_Table_Based6_cell_temperature;
  if (t1360->mM.mX[49ULL] != 0) {
    Plant_Subsystem_Series_Module_Battery_Table_Based6_cell_temperature = 0.0;
  } else {
    Plant_Subsystem_Series_Module_Battery_Table_Based6_cell_temperature =
      t1360->mX.mX[187ULL] * intermediate_der345;
  }

  if (t1360->mM.mX[53ULL] != 0) {
    intermediate_der345 = 0.0;
  } else {
    intermediate_der345 = t1360->mX.mX[191ULL] * intermediate_der370;
  }

  intermediate_der370 = t1360->mM.mX[53ULL] != 0 ? 0.0 : intrm_sf_mf_9;
  if (t1360->mM.mX[53ULL] != 0) {
    intrm_sf_mf_9 = 0.0;
  } else {
    intrm_sf_mf_9 = t1360->mX.mX[191ULL] * intermediate_der371;
  }

  if (t1360->mM.mX[52ULL] != 0) {
    intermediate_der371 = 0.0;
  } else {
    intermediate_der371 = t1360->mX.mX[192ULL] * t1143;
  }

  t1143 = t1360->mM.mX[52ULL] != 0 ? 0.0 : intermediate_der477;
  if (t1360->mM.mX[52ULL] != 0) {
    intermediate_der477 = 0.0;
  } else {
    intermediate_der477 = t1360->mX.mX[192ULL] * intermediate_der478;
  }

  if (t1360->mM.mX[66ULL] != 0) {
    intermediate_der478 = 0.0;
  } else {
    intermediate_der478 = t1360->mX.mX[151ULL] * intermediate_der198;
  }

  if (t1360->mM.mX[66ULL] != 0) {
    intermediate_der198 = 0.0;
  } else {
    intermediate_der198 = t1360->mX.mX[151ULL] * intermediate_der480;
  }

  intermediate_der480 = t1360->mM.mX[66ULL] != 0 ? 0.0 : intermediate_der481;
  if (t1360->mM.mX[57ULL] != 0) {
    intermediate_der481 = 0.0;
  } else {
    intermediate_der481 = t1360->mX.mX[196ULL] * intermediate_der482;
  }

  intermediate_der482 = t1360->mM.mX[57ULL] != 0 ? 0.0 : intermediate_der483;
  if (t1360->mM.mX[57ULL] != 0) {
    intermediate_der483 = 0.0;
  } else {
    intermediate_der483 = t1360->mX.mX[196ULL] * t1023;
  }

  if (t1360->mM.mX[56ULL] != 0) {
    t1023 = 0.0;
  } else {
    t1023 = t1360->mX.mX[197ULL] * t1153;
  }

  t1153 = t1360->mM.mX[56ULL] != 0 ? 0.0 :
    Plant_Subsystem_Series_Module_Battery_Table_Based8_cell_temperature;
  if (t1360->mM.mX[56ULL] != 0) {
    Plant_Subsystem_Series_Module_Battery_Table_Based8_cell_temperature = 0.0;
  } else {
    Plant_Subsystem_Series_Module_Battery_Table_Based8_cell_temperature =
      t1360->mX.mX[197ULL] * intermediate_der487;
  }

  if (t1360->mM.mX[60ULL] != 0) {
    intermediate_der487 = 0.0;
  } else {
    intermediate_der487 = t1360->mX.mX[201ULL] * intermediate_der488;
  }

  if (t1360->mM.mX[60ULL] != 0) {
    intermediate_der488 = 0.0;
  } else {
    intermediate_der488 = t1360->mX.mX[201ULL] * t1160;
  }

  t1160 = t1360->mM.mX[60ULL] != 0 ? 0.0 : intrm_sf_mf_11;
  if (t1360->mM.mX[59ULL] != 0) {
    intrm_sf_mf_11 = 0.0;
  } else {
    intrm_sf_mf_11 = t1360->mX.mX[202ULL] * intermediate_der491;
  }

  if (t1360->mM.mX[59ULL] != 0) {
    intermediate_der491 = 0.0;
  } else {
    intermediate_der491 = t1360->mX.mX[202ULL] * t1163;
  }

  t1163 = t1360->mM.mX[59ULL] != 0 ? 0.0 : t989;
  if (t1360->mM.mX[44ULL] != 0) {
    t989 = 0.0;
  } else {
    t989 = t1360->mX.mX[144ULL] * t1051;
  }

  t1051 = t1360->mM.mX[44ULL] != 0 ? 0.0 :
    Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xqnom;
  Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xqnom =
    t1360->mM.mX[77ULL] != 0 ? 0.0 :
    Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xqnom;
  if (t1360->mM.mX[77ULL] != 0) {
    Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xqnom =
      0.0;
  } else {
    Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xqnom =
      t1360->mX.mX[150ULL] * intermediate_der212;
  }

  if (t1360->mM.mX[110ULL] != 0) {
    intermediate_der212 = 0.0;
  } else {
    intermediate_der212 = t1360->mX.mX[155ULL] * t1071;
  }

  t1071 = t1360->mM.mX[110ULL] != 0 ? 0.0 : t1080;
  t1080 = t1360->mM.mX[13ULL] != 0 ? 0.0 :
    Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xqnom;
  if (t1360->mM.mX[13ULL] != 0) {
    Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xqnom =
      0.0;
  } else {
    Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xqnom =
      t1360->mX.mX[160ULL] * t1005;
  }

  if (t1360->mM.mX[38ULL] != 0) {
    t1005 = 0.0;
  } else {
    t1005 = t1360->mX.mX[165ULL] * intermediate_der278;
  }

  intermediate_der278 = t1360->mM.mX[38ULL] != 0 ? 0.0 : t1100;
  t1100 = t1360->mM.mX[41ULL] != 0 ? 0.0 : t1004;
  if (t1360->mM.mX[41ULL] != 0) {
    t1004 = 0.0;
  } else {
    t1004 = t1360->mX.mX[170ULL] * intermediate_der299;
  }

  intermediate_der299 = t1360->mM.mX[55ULL] != 0 ? 0.0 : intermediate_der506;
  if (t1360->mM.mX[55ULL] != 0) {
    intermediate_der506 = 0.0;
  } else {
    intermediate_der506 = t1360->mX.mX[152ULL] * t992;
  }

  if (t1360->mM.mX[55ULL] != 0) {
    t992 = 0.0;
  } else {
    t992 = t1360->mX.mX[152ULL] * intermediate_der194;
  }

  intermediate_der194 = t1360->mM.mX[45ULL] != 0 ? 0.0 : intermediate_der509;
  if (t1360->mM.mX[45ULL] != 0) {
    intermediate_der509 = 0.0;
  } else {
    intermediate_der509 = t1360->mX.mX[175ULL] * intermediate_der510;
  }

  if (t1360->mM.mX[48ULL] != 0) {
    intermediate_der510 = 0.0;
  } else {
    intermediate_der510 = t1360->mX.mX[180ULL] * intermediate_der341;
  }

  intermediate_der341 = t1360->mM.mX[48ULL] != 0 ? 0.0 : t1013;
  if (t1360->mM.mX[51ULL] != 0) {
    t1013 = 0.0;
  } else {
    t1013 = t1360->mX.mX[185ULL] * intermediate_der513;
  }

  intermediate_der513 = t1360->mM.mX[51ULL] != 0 ? 0.0 : intermediate_der514;
  if (t1360->mM.mX[54ULL] != 0) {
    intermediate_der514 = 0.0;
  } else {
    intermediate_der514 = t1360->mX.mX[190ULL] * intermediate_der515;
  }

  intermediate_der515 = t1360->mM.mX[54ULL] != 0 ? 0.0 : intermediate_der516;
  if (t1360->mM.mX[58ULL] != 0) {
    intermediate_der516 = 0.0;
  } else {
    intermediate_der516 = t1360->mX.mX[195ULL] * intermediate_der517;
  }

  intermediate_der517 = t1360->mM.mX[58ULL] != 0 ? 0.0 :
    Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_xqnom;
  if (t1360->mM.mX[61ULL] != 0) {
    Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_xqnom =
      0.0;
  } else {
    Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_xqnom =
      t634[0ULL] * t1360->mX.mX[200ULL];
  }

  intermediate_der519 = t1360->mM.mX[61ULL] != 0 ? 0.0 :
    Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_xqnom;
  Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_xqnom =
    t1056 * 0.02564102564102564 * zc_int0 * 0.002;
  intermediate_der525 = t1056 * t1056 * intermediate_der443 * 0.001;
  t1059 = t1056 * t1056 * t1057 * 0.001;
  t1041 = t1067 * 0.02564102564102564 * t1031 * 0.002;
  if (t1360->mM.mX[99ULL] != 0) {
    t1079 = 0.0;
  } else {
    t1079 = t1360->mX.mX[156ULL] * intermediate_der222;
  }

  if (t1360->mM.mX[99ULL] != 0) {
    intermediate_der222 = 0.0;
  } else {
    intermediate_der222 = t1360->mX.mX[156ULL] * intermediate_der223;
  }

  intermediate_der223 = t1360->mM.mX[99ULL] != 0 ? 0.0 : intermediate_der537;
  if (t1360->mM.mX[88ULL] != 0) {
    intermediate_der537 = 0.0;
  } else {
    intermediate_der537 = t1360->mX.mX[157ULL] * intermediate_der538;
  }

  intermediate_der538 = t1360->mM.mX[88ULL] != 0 ? 0.0 : intermediate_der539;
  if (t1360->mM.mX[88ULL] != 0) {
    intermediate_der539 = 0.0;
  } else {
    intermediate_der539 = t1360->mX.mX[157ULL] * intermediate_der541;
  }

  intermediate_der541 = t1076 * t1076 * t1079 * 0.001;
  intermediate_der544 = t1076 * t1076 * intermediate_der223 * 0.001;
  t1047 = t1076 * 0.02564102564102564 * t1034 * 0.002;
  t1081 = t1360->mM.mX[2ULL] != 0 ? 0.0 : t998;
  if (t1360->mM.mX[2ULL] != 0) {
    t998 = 0.0;
  } else {
    t998 = t1360->mX.mX[161ULL] * t1088;
  }

  if (t1360->mM.mX[2ULL] != 0) {
    t1088 = 0.0;
  } else {
    t1088 = t1360->mX.mX[161ULL] * intermediate_der243;
  }

  intermediate_der243 = t1360->mM.mX[121ULL] != 0 ? 0.0 :
    Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xVint;
  if (t1360->mM.mX[121ULL] != 0) {
    Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xVint =
      0.0;
  } else {
    Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xVint =
      t1360->mX.mX[162ULL] * intermediate_der239;
  }

  if (t1360->mM.mX[121ULL] != 0) {
    intermediate_der239 = 0.0;
  } else {
    intermediate_der239 = t1360->mX.mX[162ULL] * intermediate_der555;
  }

  intermediate_der555 = t1086 * 0.02564102564102564 * zc_int6 * 0.002;
  t1089 = t1086 * t1086 * t1088 * 0.001;
  if (t1360->mM.mX[35ULL] != 0) {
    intermediate_der560 = 0.0;
  } else {
    intermediate_der560 = t1360->mX.mX[166ULL] * t1098;
  }

  if (t1360->mM.mX[35ULL] != 0) {
    t1098 = 0.0;
  } else {
    t1098 = t1360->mX.mX[166ULL] * t1090;
  }

  t1090 = t1360->mM.mX[35ULL] != 0 ? 0.0 : intermediate_der563;
  if (t1360->mM.mX[24ULL] != 0) {
    intermediate_der563 = 0.0;
  } else {
    intermediate_der563 = t1360->mX.mX[167ULL] * intermediate_der260;
  }

  intermediate_der260 = t1360->mM.mX[24ULL] != 0 ? 0.0 : t1096;
  if (t1360->mM.mX[24ULL] != 0) {
    t1096 = 0.0;
  } else {
    t1096 = t1360->mX.mX[167ULL] * t1008;
  }

  t1104 = t1097 * 0.02564102564102564 * zc_int8 * 0.002;
  t1114 = t1097 * t1097 * t1090 * 0.001;
  intermediate_der574 =
    Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i *
    0.02564102564102564 * t1026 * 0.002;
  intermediate_der580 = t1116 * 0.02564102564102564 * t1027 * 0.002;
  intermediate_der584 = t1116 * t1116 * intermediate_der455 * 0.001;
  t1359 = t1126 * 0.02564102564102564 * t1028 * 0.002;
  intermediate_der591 = t1126 * t1126 * intermediate_der328 * 0.001;
  intermediate_der592 = t1126 * t1126 * t1120 * 0.001;
  intermediate_der594 = t1137 * 0.02564102564102564 * t1029 * 0.002;
  intermediate_der597 = t1137 * t1137 * intermediate_der467 * 0.001;
  intermediate_der602 = t1147 * 0.02564102564102564 * t1030 * 0.002;
  intermediate_der605 = t1147 * t1147 * intermediate_der370 * 0.001;
  intermediate_der610 =
    Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_i *
    Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_i *
    intermediate_der482 * 0.001;
  intermediate_der612 =
    Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_i *
    0.02564102564102564 * zc_int20 * 0.002;
  intermediate_der617 =
    Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_i *
    0.02564102564102564 * t1033 * 0.002;
  intermediate_der621 =
    Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_i *
    Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_i * t1160
    * 0.001;
  t96[0ULL] = t1360->mX.mX[2ULL] + 1.0E-6;
  t83[0] = 100ULL;
  tlu2_linear_nearest_prelookup(&t35.mField0[0ULL], &t35.mField1[0ULL],
    &t35.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField6, &t96[0ULL],
    &t83[0ULL], &t84[0ULL]);
  t96[0ULL] = t1360->mX.mX[10ULL] + 1.0E-6;
  tlu2_linear_nearest_prelookup(&t4.mField0[0ULL], &t4.mField1[0ULL],
    &t4.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField6, &t96[0ULL],
    &t83[0ULL], &t84[0ULL]);
  t96[0ULL] = t1360->mX.mX[19ULL] + 1.0E-6;
  tlu2_linear_nearest_prelookup(&t24.mField0[0ULL], &t24.mField1[0ULL],
    &t24.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField6, &t96[0ULL],
    &t83[0ULL], &t84[0ULL]);
  t96[0ULL] = t1360->mX.mX[28ULL] + 1.0E-6;
  tlu2_linear_nearest_prelookup(&t31.mField0[0ULL], &t31.mField1[0ULL],
    &t31.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField6, &t96[0ULL],
    &t83[0ULL], &t84[0ULL]);
  t96[0ULL] = t1360->mX.mX[35ULL] + 1.0E-6;
  tlu2_linear_nearest_prelookup(&t12.mField0[0ULL], &t12.mField1[0ULL],
    &t12.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField6, &t96[0ULL],
    &t83[0ULL], &t84[0ULL]);
  t96[0ULL] = t1360->mX.mX[43ULL] + 1.0E-6;
  tlu2_linear_nearest_prelookup(&t8.mField0[0ULL], &t8.mField1[0ULL],
    &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField6, &t96[0ULL],
    &t83[0ULL], &t84[0ULL]);
  t96[0ULL] = t1360->mX.mX[51ULL] + 1.0E-6;
  tlu2_linear_nearest_prelookup(&t25.mField0[0ULL], &t25.mField1[0ULL],
    &t25.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField6, &t96[0ULL],
    &t83[0ULL], &t84[0ULL]);
  t96[0ULL] = t1360->mX.mX[59ULL] + 1.0E-6;
  tlu2_linear_nearest_prelookup(&t3.mField0[0ULL], &t3.mField1[0ULL],
    &t3.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField6, &t96[0ULL],
    &t83[0ULL], &t84[0ULL]);
  t96[0ULL] = t1360->mX.mX[67ULL] + 1.0E-6;
  tlu2_linear_nearest_prelookup(&t32.mField0[0ULL], &t32.mField1[0ULL],
    &t32.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField6, &t96[0ULL],
    &t83[0ULL], &t84[0ULL]);
  t96[0ULL] = t1360->mX.mX[75ULL] + 1.0E-6;
  tlu2_linear_nearest_prelookup(&t18.mField0[0ULL], &t18.mField1[0ULL],
    &t18.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField6, &t96[0ULL],
    &t83[0ULL], &t84[0ULL]);
  t96[0ULL] = t1360->mX.mX[83ULL] + 1.0E-6;
  tlu2_linear_nearest_prelookup(&t14.mField0[0ULL], &t14.mField1[0ULL],
    &t14.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField6, &t96[0ULL],
    &t83[0ULL], &t84[0ULL]);
  t96[0ULL] = t1360->mX.mX[90ULL] + 1.0E-6;
  tlu2_linear_nearest_prelookup(&t6.mField0[0ULL], &t6.mField1[0ULL],
    &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField6, &t96[0ULL],
    &t83[0ULL], &t84[0ULL]);
  if (t1360->mM.mX[76ULL] != 0) {
    t743[2ULL] = -0.00025641025641025641;
  } else {
    t743[2ULL] = -0.02564102564102564;
  }

  if (t1360->mM.mX[75ULL] != 0) {
    t744[2ULL] = -0.00025641025641025641;
  } else {
    t744[2ULL] = -0.02564102564102564;
  }

  if (t1360->mM.mX[78ULL] != 0) {
    t745[4ULL] = -0.00025641025641025641;
  } else {
    t745[4ULL] = -0.02564102564102564;
  }

  if (t1360->mM.mX[87ULL] != 0) {
    t745[5ULL] = 0.00025641025641025641;
  } else {
    t745[5ULL] = 0.02564102564102564;
  }

  if (t1360->mM.mX[78ULL] != 0) {
    t746[4ULL] = 0.00025641025641025641;
  } else {
    t746[4ULL] = 0.02564102564102564;
  }

  if (t1360->mM.mX[79ULL] != 0) {
    t746[5ULL] = -0.00025641025641025641;
  } else {
    t746[5ULL] = -0.02564102564102564;
  }

  if (t1360->mM.mX[76ULL] != 0) {
    t747[4ULL] = 0.00025641025641025641;
  } else {
    t747[4ULL] = 0.02564102564102564;
  }

  if (t1360->mM.mX[80ULL] != 0) {
    t747[5ULL] = -0.00025641025641025641;
  } else {
    t747[5ULL] = -0.02564102564102564;
  }

  if (t1360->mM.mX[80ULL] != 0) {
    t748[4ULL] = 0.00025641025641025641;
  } else {
    t748[4ULL] = 0.02564102564102564;
  }

  if (t1360->mM.mX[81ULL] != 0) {
    t748[5ULL] = -0.00025641025641025641;
  } else {
    t748[5ULL] = -0.02564102564102564;
  }

  if (t1360->mM.mX[81ULL] != 0) {
    t749[4ULL] = 0.00025641025641025641;
  } else {
    t749[4ULL] = 0.02564102564102564;
  }

  if (t1360->mM.mX[82ULL] != 0) {
    t749[5ULL] = -0.00025641025641025641;
  } else {
    t749[5ULL] = -0.02564102564102564;
  }

  if (t1360->mM.mX[82ULL] != 0) {
    t750[4ULL] = 0.00025641025641025641;
  } else {
    t750[4ULL] = 0.02564102564102564;
  }

  if (t1360->mM.mX[83ULL] != 0) {
    t750[5ULL] = -0.00025641025641025641;
  } else {
    t750[5ULL] = -0.02564102564102564;
  }

  if (t1360->mM.mX[83ULL] != 0) {
    t751[4ULL] = 0.00025641025641025641;
  } else {
    t751[4ULL] = 0.02564102564102564;
  }

  if (t1360->mM.mX[84ULL] != 0) {
    t751[5ULL] = -0.00025641025641025641;
  } else {
    t751[5ULL] = -0.02564102564102564;
  }

  if (t1360->mM.mX[84ULL] != 0) {
    t752[4ULL] = 0.00025641025641025641;
  } else {
    t752[4ULL] = 0.02564102564102564;
  }

  if (t1360->mM.mX[85ULL] != 0) {
    t752[5ULL] = -0.00025641025641025641;
  } else {
    t752[5ULL] = -0.02564102564102564;
  }

  if (t1360->mM.mX[85ULL] != 0) {
    t753[4ULL] = 0.00025641025641025641;
  } else {
    t753[4ULL] = 0.02564102564102564;
  }

  if (t1360->mM.mX[86ULL] != 0) {
    t753[5ULL] = -0.00025641025641025641;
  } else {
    t753[5ULL] = -0.02564102564102564;
  }

  if (t1360->mM.mX[86ULL] != 0) {
    t754[4ULL] = 0.00025641025641025641;
  } else {
    t754[4ULL] = 0.02564102564102564;
  }

  if (t1360->mM.mX[87ULL] != 0) {
    t754[5ULL] = -0.00025641025641025641;
  } else {
    t754[5ULL] = -0.02564102564102564;
  }

  if (t1360->mM.mX[75ULL] != 0) {
    t755[3ULL] = 0.00025641025641025641;
  } else {
    t755[3ULL] = 0.02564102564102564;
  }

  if (t1360->mM.mX[75ULL] != 0) {
    t756[2ULL] = 1.0002564102564102;
  } else {
    t756[2ULL] = 0.025641035641025642;
  }

  if (t1360->mM.mX[76ULL] != 0) {
    t758[3ULL] = 0.00025641025641025641;
  } else {
    t758[3ULL] = 0.02564102564102564;
  }

  if (t1360->mM.mX[76ULL] != 0) {
    t759[2ULL] = 1.0002564102564102;
  } else {
    t759[2ULL] = 0.025641035641025642;
  }

  if (t1360->mM.mX[78ULL] != 0) {
    t761[3ULL] = 0.00025641025641025641;
  } else {
    t761[3ULL] = 0.02564102564102564;
  }

  if (t1360->mM.mX[78ULL] != 0) {
    t762[2ULL] = 1.0002564102564102;
  } else {
    t762[2ULL] = 0.025641035641025642;
  }

  if (t1360->mM.mX[79ULL] != 0) {
    t764[3ULL] = 0.00025641025641025641;
  } else {
    t764[3ULL] = 0.02564102564102564;
  }

  if (t1360->mM.mX[79ULL] != 0) {
    t765[2ULL] = 1.0002564102564102;
  } else {
    t765[2ULL] = 0.025641035641025642;
  }

  if (t1360->mM.mX[80ULL] != 0) {
    t767[3ULL] = 0.00025641025641025641;
  } else {
    t767[3ULL] = 0.02564102564102564;
  }

  if (t1360->mM.mX[80ULL] != 0) {
    t768[2ULL] = 1.0002564102564102;
  } else {
    t768[2ULL] = 0.025641035641025642;
  }

  if (t1360->mM.mX[81ULL] != 0) {
    t770[3ULL] = 0.00025641025641025641;
  } else {
    t770[3ULL] = 0.02564102564102564;
  }

  if (t1360->mM.mX[81ULL] != 0) {
    t771[2ULL] = 1.0002564102564102;
  } else {
    t771[2ULL] = 0.025641035641025642;
  }

  if (t1360->mM.mX[82ULL] != 0) {
    t773[3ULL] = 0.00025641025641025641;
  } else {
    t773[3ULL] = 0.02564102564102564;
  }

  if (t1360->mM.mX[82ULL] != 0) {
    t774[2ULL] = 1.0002564102564102;
  } else {
    t774[2ULL] = 0.025641035641025642;
  }

  if (t1360->mM.mX[83ULL] != 0) {
    t776[3ULL] = 0.00025641025641025641;
  } else {
    t776[3ULL] = 0.02564102564102564;
  }

  if (t1360->mM.mX[83ULL] != 0) {
    t777[2ULL] = 1.0002564102564102;
  } else {
    t777[2ULL] = 0.025641035641025642;
  }

  if (t1360->mM.mX[84ULL] != 0) {
    t779[3ULL] = 0.00025641025641025641;
  } else {
    t779[3ULL] = 0.02564102564102564;
  }

  if (t1360->mM.mX[84ULL] != 0) {
    t780[2ULL] = 1.0002564102564102;
  } else {
    t780[2ULL] = 0.025641035641025642;
  }

  if (t1360->mM.mX[85ULL] != 0) {
    t782[3ULL] = 0.00025641025641025641;
  } else {
    t782[3ULL] = 0.02564102564102564;
  }

  if (t1360->mM.mX[85ULL] != 0) {
    t783[2ULL] = 1.0002564102564102;
  } else {
    t783[2ULL] = 0.025641035641025642;
  }

  if (t1360->mM.mX[86ULL] != 0) {
    t785[3ULL] = 0.00025641025641025641;
  } else {
    t785[3ULL] = 0.02564102564102564;
  }

  if (t1360->mM.mX[86ULL] != 0) {
    t786[2ULL] = 1.0002564102564102;
  } else {
    t786[2ULL] = 0.025641035641025642;
  }

  if (t1360->mM.mX[87ULL] != 0) {
    t788[3ULL] = 0.00025641025641025641;
  } else {
    t788[3ULL] = 0.02564102564102564;
  }

  if (t1360->mM.mX[87ULL] != 0) {
    t789[2ULL] = 1.0002564102564102;
  } else {
    t789[2ULL] = 0.025641035641025642;
  }

  t683[0ULL] = -0.0;
  t1168 = -(-t1056 * (real_T)(t1056 < 0.0));
  t1169 = zc_int24 * zc_int24;
  t683[1ULL] = t1168 / (t1169 == 0.0 ? 1.0E-16 : t1169) * t989;
  t683[2ULL] = -(t1056 * t990 + intermediate_der446) / 5.0;
  t683[3ULL] = -(-t1360->mX.mX[1ULL] / (t1169 == 0.0 ? 1.0E-16 : t1169) * t989);
  t683[4ULL] = -(t1056 * t1056 * t990 * 0.001);
  tlu2_1d_linear_nearest_value(&t96[0ULL], &t35.mField1[0ULL], &t35.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField5, &t83[0ULL], &t84[0ULL]);
  tlu2_1d_linear_nearest_value(&t634[0ULL], &t35.mField1[0ULL], &t35.mField2
    [0ULL], ((const _NeDynamicSystem*)(LC))->mField3, &t83[0ULL], &t84[0ULL]);
  tlu2_1d_linear_nearest_value(&t707[0ULL], &t35.mField1[0ULL], &t35.mField2
    [0ULL], ((const _NeDynamicSystem*)(LC))->mField4, &t83[0ULL], &t84[0ULL]);
  intermediate_der446 = -t96[0ULL];
  t989 = -t634[0ULL];
  t990 = -t707[0ULL];
  t688[0ULL] = -0.0;
  t1173 = -(-t1067 * (real_T)(t1067 < 0.0));
  t1174 = zc_int25 * zc_int25;
  t688[1ULL] = t1173 / (t1174 == 0.0 ? 1.0E-16 : t1174) *
    Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xqnom;
  t688[2ULL] = -(t1067 * intermediate_der198 + t992) / 5.0;
  t688[3ULL] = -(-t1360->mX.mX[9ULL] / (t1174 == 0.0 ? 1.0E-16 : t1174) *
                 Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xqnom);
  t688[4ULL] = -(t1067 * t1067 * intermediate_der198 * 0.001);
  tlu2_1d_linear_nearest_value(&t96[0ULL], &t4.mField1[0ULL], &t4.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField5, &t83[0ULL], &t84[0ULL]);
  tlu2_1d_linear_nearest_value(&t634[0ULL], &t4.mField1[0ULL], &t4.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField3, &t83[0ULL], &t84[0ULL]);
  tlu2_1d_linear_nearest_value(&t707[0ULL], &t4.mField1[0ULL], &t4.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField4, &t83[0ULL], &t84[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xqnom =
    -t96[0ULL];
  t992 = -t634[0ULL];
  intermediate_der198 = -t707[0ULL];
  t693[0ULL] = -0.0;
  t1178 = -(-t1097 * (real_T)(t1097 < 0.0));
  t1179 = zc_int28 * zc_int28;
  t693[1ULL] = t1178 / (t1179 == 0.0 ? 1.0E-16 : t1179) * t1005;
  t693[2ULL] = -(t1097 * intermediate_der560 + intermediate_der563) / 5.0;
  t693[3ULL] = -(-t1360->mX.mX[34ULL] / (t1179 == 0.0 ? 1.0E-16 : t1179) * t1005);
  t693[4ULL] = -(t1097 * t1097 * intermediate_der560 * 0.001);
  t694[0ULL] = -0.0;
  t1183 = -(-t1076 * (real_T)(t1076 < 0.0));
  t1184 = zc_int26 * zc_int26;
  t694[1ULL] = t1183 / (t1184 == 0.0 ? 1.0E-16 : t1184) * intermediate_der212;
  t694[2ULL] = -(t1076 * intermediate_der222 + intermediate_der539) / 5.0;
  t694[3ULL] = -(-t1360->mX.mX[18ULL] / (t1184 == 0.0 ? 1.0E-16 : t1184) *
                 intermediate_der212);
  t694[4ULL] = -(t1076 * t1076 * intermediate_der222 * 0.001);
  tlu2_1d_linear_nearest_value(&t96[0ULL], &t24.mField1[0ULL], &t24.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField5, &t83[0ULL], &t84[0ULL]);
  tlu2_1d_linear_nearest_value(&t634[0ULL], &t24.mField1[0ULL], &t24.mField2
    [0ULL], ((const _NeDynamicSystem*)(LC))->mField3, &t83[0ULL], &t84[0ULL]);
  tlu2_1d_linear_nearest_value(&t707[0ULL], &t24.mField1[0ULL], &t24.mField2
    [0ULL], ((const _NeDynamicSystem*)(LC))->mField4, &t83[0ULL], &t84[0ULL]);
  intermediate_der539 = -t96[0ULL];
  intermediate_der563 = -t634[0ULL];
  intermediate_der212 = -t707[0ULL];
  t699[0ULL] = -0.0;
  t1188 = -(-t1086 * (real_T)(t1086 < 0.0));
  t1189 = zc_int27 * zc_int27;
  t699[1ULL] = t1188 / (t1189 == 0.0 ? 1.0E-16 : t1189) *
    Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xqnom;
  t699[2ULL] = -(t1086 * t998 +
                 Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xVint)
    / 5.0;
  t699[3ULL] = -(-t1360->mX.mX[27ULL] / (t1189 == 0.0 ? 1.0E-16 : t1189) *
                 Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xqnom);
  t699[4ULL] = -(t1086 * t1086 * t998 * 0.001);
  t700[0ULL] = -0.0;
  t1193 =
    -(-Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_i *
      (real_T)
      (Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_i <
       0.0));
  t1194 = zc_int35 * zc_int35;
  t700[1ULL] = t1193 / (t1194 == 0.0 ? 1.0E-16 : t1194) *
    Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_xqnom;
  t700[2ULL] =
    -(Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_i *
      intermediate_der487 + intrm_sf_mf_11) / 5.0;
  t700[3ULL] = -(-t1360->mX.mX[89ULL] / (t1194 == 0.0 ? 1.0E-16 : t1194) *
                 Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_xqnom);
  t700[4ULL] =
    -(Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_i *
      Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_i *
      intermediate_der487 * 0.001);
  tlu2_1d_linear_nearest_value(&t96[0ULL], &t31.mField1[0ULL], &t31.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField5, &t83[0ULL], &t84[0ULL]);
  tlu2_1d_linear_nearest_value(&t634[0ULL], &t31.mField1[0ULL], &t31.mField2
    [0ULL], ((const _NeDynamicSystem*)(LC))->mField3, &t83[0ULL], &t84[0ULL]);
  tlu2_1d_linear_nearest_value(&t707[0ULL], &t31.mField1[0ULL], &t31.mField2
    [0ULL], ((const _NeDynamicSystem*)(LC))->mField4, &t83[0ULL], &t84[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xVint =
    -t96[0ULL];
  t998 = -t634[0ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xqnom =
    -t707[0ULL];
  tlu2_1d_linear_nearest_value(&t96[0ULL], &t12.mField1[0ULL], &t12.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField5, &t83[0ULL], &t84[0ULL]);
  tlu2_1d_linear_nearest_value(&t634[0ULL], &t12.mField1[0ULL], &t12.mField2
    [0ULL], ((const _NeDynamicSystem*)(LC))->mField3, &t83[0ULL], &t84[0ULL]);
  tlu2_1d_linear_nearest_value(&t707[0ULL], &t12.mField1[0ULL], &t12.mField2
    [0ULL], ((const _NeDynamicSystem*)(LC))->mField4, &t83[0ULL], &t84[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_xqnom =
    -t96[0ULL];
  intrm_sf_mf_11 = -t634[0ULL];
  intermediate_der222 = -t707[0ULL];
  t709[0ULL] = -0.0;
  t1198 =
    -(-Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i *
      (real_T)
      (Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i <
       0.0));
  t1199 = zc_int29 * zc_int29;
  t709[1ULL] = t1198 / (t1199 == 0.0 ? 1.0E-16 : t1199) * t1004;
  t709[2ULL] =
    -(Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i *
      intrm_sf_mf_5 + intermediate_der453) / 5.0;
  t709[3ULL] = -(-t1360->mX.mX[42ULL] / (t1199 == 0.0 ? 1.0E-16 : t1199) * t1004);
  t709[4ULL] =
    -(Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i *
      Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i *
      intrm_sf_mf_5 * 0.001);
  tlu2_1d_linear_nearest_value(&t96[0ULL], &t8.mField1[0ULL], &t8.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField5, &t83[0ULL], &t84[0ULL]);
  tlu2_1d_linear_nearest_value(&t634[0ULL], &t8.mField1[0ULL], &t8.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField3, &t83[0ULL], &t84[0ULL]);
  tlu2_1d_linear_nearest_value(&t707[0ULL], &t8.mField1[0ULL], &t8.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField4, &t83[0ULL], &t84[0ULL]);
  intrm_sf_mf_5 = -t96[0ULL];
  t1004 = -t634[0ULL];
  t1005 = -t707[0ULL];
  t714[0ULL] = -0.0;
  t1203 = -(-t1116 * (real_T)(t1116 < 0.0));
  t1204 = zc_int30 * zc_int30;
  t714[1ULL] = t1203 / (t1204 == 0.0 ? 1.0E-16 : t1204) * intermediate_der509;
  t714[2ULL] = -(t1116 * intermediate_der282 + intrm_sf_mf_6) / 5.0;
  t714[3ULL] = -(-t1360->mX.mX[50ULL] / (t1204 == 0.0 ? 1.0E-16 : t1204) *
                 intermediate_der509);
  t714[4ULL] = -(t1116 * t1116 * intermediate_der282 * 0.001);
  tlu2_1d_linear_nearest_value(&t96[0ULL], &t25.mField1[0ULL], &t25.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField5, &t83[0ULL], &t84[0ULL]);
  tlu2_1d_linear_nearest_value(&t634[0ULL], &t25.mField1[0ULL], &t25.mField2
    [0ULL], ((const _NeDynamicSystem*)(LC))->mField3, &t83[0ULL], &t84[0ULL]);
  tlu2_1d_linear_nearest_value(&t707[0ULL], &t25.mField1[0ULL], &t25.mField2
    [0ULL], ((const _NeDynamicSystem*)(LC))->mField4, &t83[0ULL], &t84[0ULL]);
  intrm_sf_mf_6 = -t96[0ULL];
  intermediate_der509 = -t634[0ULL];
  t1008 = -t707[0ULL];
  t719[0ULL] = -0.0;
  t1208 = -(-t1126 * (real_T)(t1126 < 0.0));
  t1209 = zc_int31 * zc_int31;
  t719[1ULL] = t1208 / (t1209 == 0.0 ? 1.0E-16 : t1209) * intermediate_der510;
  t719[2ULL] = -(t1126 * intermediate_der460 + intrm_sf_mf_7) / 5.0;
  t719[3ULL] = -(-t1360->mX.mX[58ULL] / (t1209 == 0.0 ? 1.0E-16 : t1209) *
                 intermediate_der510);
  t719[4ULL] = -(t1126 * t1126 * intermediate_der460 * 0.001);
  tlu2_1d_linear_nearest_value(&t96[0ULL], &t3.mField1[0ULL], &t3.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField5, &t83[0ULL], &t84[0ULL]);
  tlu2_1d_linear_nearest_value(&t634[0ULL], &t3.mField1[0ULL], &t3.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField3, &t83[0ULL], &t84[0ULL]);
  tlu2_1d_linear_nearest_value(&t707[0ULL], &t3.mField1[0ULL], &t3.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField4, &t83[0ULL], &t84[0ULL]);
  intermediate_der460 = -t96[0ULL];
  intrm_sf_mf_7 = -t634[0ULL];
  intermediate_der453 = -t707[0ULL];
  t724[0ULL] = -0.0;
  t1213 = -(-t1137 * (real_T)(t1137 < 0.0));
  t1214 = zc_int32 * zc_int32;
  t724[1ULL] = t1213 / (t1214 == 0.0 ? 1.0E-16 : t1214) * t1013;
  t724[2ULL] = -(t1137 * t1012 + t1020) / 5.0;
  t724[3ULL] = -(-t1360->mX.mX[66ULL] / (t1214 == 0.0 ? 1.0E-16 : t1214) * t1013);
  t724[4ULL] = -(t1137 * t1137 * t1012 * 0.001);
  tlu2_1d_linear_nearest_value(&t96[0ULL], &t32.mField1[0ULL], &t32.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField5, &t83[0ULL], &t84[0ULL]);
  tlu2_1d_linear_nearest_value(&t634[0ULL], &t32.mField1[0ULL], &t32.mField2
    [0ULL], ((const _NeDynamicSystem*)(LC))->mField3, &t83[0ULL], &t84[0ULL]);
  tlu2_1d_linear_nearest_value(&t707[0ULL], &t32.mField1[0ULL], &t32.mField2
    [0ULL], ((const _NeDynamicSystem*)(LC))->mField4, &t83[0ULL], &t84[0ULL]);
  t1012 = -t96[0ULL];
  t1013 = -t634[0ULL];
  intermediate_der282 = -t707[0ULL];
  t729[0ULL] = -0.0;
  t1218 = -(-t1147 * (real_T)(t1147 < 0.0));
  t1219 = zc_int33 * zc_int33;
  t729[1ULL] = t1218 / (t1219 == 0.0 ? 1.0E-16 : t1219) * intermediate_der514;
  t729[2ULL] = -(t1147 * intermediate_der345 + intermediate_der371) / 5.0;
  t729[3ULL] = -(-t1360->mX.mX[74ULL] / (t1219 == 0.0 ? 1.0E-16 : t1219) *
                 intermediate_der514);
  t729[4ULL] = -(t1147 * t1147 * intermediate_der345 * 0.001);
  tlu2_1d_linear_nearest_value(&t96[0ULL], &t18.mField1[0ULL], &t18.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField5, &t83[0ULL], &t84[0ULL]);
  tlu2_1d_linear_nearest_value(&t634[0ULL], &t18.mField1[0ULL], &t18.mField2
    [0ULL], ((const _NeDynamicSystem*)(LC))->mField3, &t83[0ULL], &t84[0ULL]);
  tlu2_1d_linear_nearest_value(&t707[0ULL], &t18.mField1[0ULL], &t18.mField2
    [0ULL], ((const _NeDynamicSystem*)(LC))->mField4, &t83[0ULL], &t84[0ULL]);
  intermediate_der514 = -t96[0ULL];
  intermediate_der510 = -t634[0ULL];
  intermediate_der345 = -t707[0ULL];
  t734[0ULL] = -0.0;
  t1223 =
    -(-Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_i *
      (real_T)
      (Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_i <
       0.0));
  t1224 = zc_int34 * zc_int34;
  t734[1ULL] = t1223 / (t1224 == 0.0 ? 1.0E-16 : t1224) * intermediate_der516;
  t734[2ULL] =
    -(Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_i *
      intermediate_der481 + t1023) / 5.0;
  t734[3ULL] = -(-t1360->mX.mX[82ULL] / (t1224 == 0.0 ? 1.0E-16 : t1224) *
                 intermediate_der516);
  t734[4ULL] =
    -(Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_i *
      Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_i *
      intermediate_der481 * 0.001);
  tlu2_1d_linear_nearest_value(&t96[0ULL], &t14.mField1[0ULL], &t14.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField5, &t83[0ULL], &t84[0ULL]);
  tlu2_1d_linear_nearest_value(&t634[0ULL], &t14.mField1[0ULL], &t14.mField2
    [0ULL], ((const _NeDynamicSystem*)(LC))->mField3, &t83[0ULL], &t84[0ULL]);
  tlu2_1d_linear_nearest_value(&t707[0ULL], &t14.mField1[0ULL], &t14.mField2
    [0ULL], ((const _NeDynamicSystem*)(LC))->mField4, &t83[0ULL], &t84[0ULL]);
  intermediate_der481 = -t96[0ULL];
  intermediate_der516 = -t634[0ULL];
  t1020 = -t707[0ULL];
  tlu2_1d_linear_nearest_value(&t96[0ULL], &t6.mField1[0ULL], &t6.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField5, &t83[0ULL], &t84[0ULL]);
  tlu2_1d_linear_nearest_value(&t634[0ULL], &t6.mField1[0ULL], &t6.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField3, &t83[0ULL], &t84[0ULL]);
  tlu2_1d_linear_nearest_value(&t707[0ULL], &t6.mField1[0ULL], &t6.mField2[0ULL],
    ((const _NeDynamicSystem*)(LC))->mField4, &t83[0ULL], &t84[0ULL]);
  t743[0ULL] = 0.02564102564102564 * (real_T)(t1067 < 0.0) / (zc_int25 == 0.0 ?
    1.0E-16 : zc_int25);
  t743[1ULL] = 0.02564102564102564;
  t743[3ULL] = -(-0.02564102564102564 * t1031) / 5.0;
  t743[4ULL] = -(t1067 * -0.02564102564102564 * t1031 * 0.002);
  t744[0ULL] = 0.02564102564102564 * (real_T)(t1056 < 0.0) / (zc_int24 == 0.0 ?
    1.0E-16 : zc_int24);
  t744[1ULL] = 0.02564102564102564;
  t744[3ULL] = -(-0.02564102564102564 * zc_int0) / 5.0;
  t744[4ULL] = -(t1056 * -0.02564102564102564 * zc_int0 * 0.002);
  t745[0ULL] = 0.02564102564102564 * (real_T)(t1076 < 0.0) / (zc_int26 == 0.0 ?
    1.0E-16 : zc_int26);
  t1230 = -0.02564102564102564 * (real_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_i < 0.0);
  t745[1ULL] = t1230 / (zc_int35 == 0.0 ? 1.0E-16 : zc_int35);
  t745[2ULL] = 0.02564102564102564;
  t745[3ULL] = -0.02564102564102564;
  t745[6ULL] = -(-0.02564102564102564 * t1034) / 5.0;
  t745[7ULL] = -(t1076 * -0.02564102564102564 * t1034 * 0.002);
  t1235 = -(0.02564102564102564 * t1033);
  t745[8ULL] = t1235 / 5.0;
  t745[9ULL] = -intermediate_der617;
  t1285 = -0.02564102564102564 * (real_T)(t1076 < 0.0);
  t746[0ULL] = t1285 / (zc_int26 == 0.0 ? 1.0E-16 : zc_int26);
  t746[1ULL] = 0.02564102564102564 * (real_T)(t1086 < 0.0) / (zc_int27 == 0.0 ?
    1.0E-16 : zc_int27);
  t746[2ULL] = -0.02564102564102564;
  t746[3ULL] = 0.02564102564102564;
  t1237 = -(0.02564102564102564 * t1034);
  t746[6ULL] = t1237 / 5.0;
  t746[7ULL] = -t1047;
  t746[8ULL] = -(-0.02564102564102564 * zc_int6) / 5.0;
  t746[9ULL] = -(t1086 * -0.02564102564102564 * zc_int6 * 0.002);
  t1240 = -0.02564102564102564 * (real_T)(t1067 < 0.0);
  t747[0ULL] = t1240 / (zc_int25 == 0.0 ? 1.0E-16 : zc_int25);
  t747[1ULL] = 0.02564102564102564 * (real_T)(t1097 < 0.0) / (zc_int28 == 0.0 ?
    1.0E-16 : zc_int28);
  t747[2ULL] = -0.02564102564102564;
  t747[3ULL] = 0.02564102564102564;
  t40 = -(0.02564102564102564 * t1031);
  t747[6ULL] = t40 / 5.0;
  t747[7ULL] = -t1041;
  t747[8ULL] = -(-0.02564102564102564 * zc_int8) / 5.0;
  t747[9ULL] = -(t1097 * -0.02564102564102564 * zc_int8 * 0.002);
  t41 = -0.02564102564102564 * (real_T)(t1097 < 0.0);
  t748[0ULL] = t41 / (zc_int28 == 0.0 ? 1.0E-16 : zc_int28);
  t748[1ULL] = 0.02564102564102564 * (real_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i < 0.0)
    / (zc_int29 == 0.0 ? 1.0E-16 : zc_int29);
  t748[2ULL] = -0.02564102564102564;
  t748[3ULL] = 0.02564102564102564;
  t1246 = -(0.02564102564102564 * zc_int8);
  t748[6ULL] = t1246 / 5.0;
  t748[7ULL] = -t1104;
  t748[8ULL] = -(-0.02564102564102564 * t1026) / 5.0;
  t748[9ULL] =
    -(Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i *
      -0.02564102564102564 * t1026 * 0.002);
  t1248 = -0.02564102564102564 * (real_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i < 0.0);
  t749[0ULL] = t1248 / (zc_int29 == 0.0 ? 1.0E-16 : zc_int29);
  t749[1ULL] = 0.02564102564102564 * (real_T)(t1116 < 0.0) / (zc_int30 == 0.0 ?
    1.0E-16 : zc_int30);
  t749[2ULL] = -0.02564102564102564;
  t749[3ULL] = 0.02564102564102564;
  t1250 = -(0.02564102564102564 * t1026);
  t749[6ULL] = t1250 / 5.0;
  t749[7ULL] = -intermediate_der574;
  t749[8ULL] = -(-0.02564102564102564 * t1027) / 5.0;
  t749[9ULL] = -(t1116 * -0.02564102564102564 * t1027 * 0.002);
  t1252 = -0.02564102564102564 * (real_T)(t1116 < 0.0);
  t750[0ULL] = t1252 / (zc_int30 == 0.0 ? 1.0E-16 : zc_int30);
  t750[1ULL] = 0.02564102564102564 * (real_T)(t1126 < 0.0) / (zc_int31 == 0.0 ?
    1.0E-16 : zc_int31);
  t750[2ULL] = -0.02564102564102564;
  t750[3ULL] = 0.02564102564102564;
  t46 = -(0.02564102564102564 * t1027);
  t750[6ULL] = t46 / 5.0;
  t750[7ULL] = -intermediate_der580;
  t750[8ULL] = -(-0.02564102564102564 * t1028) / 5.0;
  t750[9ULL] = -(t1126 * -0.02564102564102564 * t1028 * 0.002);
  intermediate_der590 = -0.02564102564102564 * (real_T)(t1126 < 0.0);
  t751[0ULL] = intermediate_der590 / (zc_int31 == 0.0 ? 1.0E-16 : zc_int31);
  t751[1ULL] = 0.02564102564102564 * (real_T)(t1137 < 0.0) / (zc_int32 == 0.0 ?
    1.0E-16 : zc_int32);
  t751[2ULL] = -0.02564102564102564;
  t751[3ULL] = 0.02564102564102564;
  t1026 = -(0.02564102564102564 * t1028);
  t751[6ULL] = t1026 / 5.0;
  t751[7ULL] = -t1359;
  t751[8ULL] = -(-0.02564102564102564 * t1029) / 5.0;
  t751[9ULL] = -(t1137 * -0.02564102564102564 * t1029 * 0.002);
  t1027 = -0.02564102564102564 * (real_T)(t1137 < 0.0);
  t752[0ULL] = t1027 / (zc_int32 == 0.0 ? 1.0E-16 : zc_int32);
  t752[1ULL] = 0.02564102564102564 * (real_T)(t1147 < 0.0) / (zc_int33 == 0.0 ?
    1.0E-16 : zc_int33);
  t752[2ULL] = -0.02564102564102564;
  t752[3ULL] = 0.02564102564102564;
  t1031 = -(0.02564102564102564 * t1029);
  t752[6ULL] = t1031 / 5.0;
  t752[7ULL] = -intermediate_der594;
  t752[8ULL] = -(-0.02564102564102564 * t1030) / 5.0;
  t752[9ULL] = -(t1147 * -0.02564102564102564 * t1030 * 0.002);
  zc_int8 = -0.02564102564102564 * (real_T)(t1147 < 0.0);
  t753[0ULL] = zc_int8 / (zc_int33 == 0.0 ? 1.0E-16 : zc_int33);
  t753[1ULL] = 0.02564102564102564 * (real_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_i < 0.0)
    / (zc_int34 == 0.0 ? 1.0E-16 : zc_int34);
  t753[2ULL] = -0.02564102564102564;
  t753[3ULL] = 0.02564102564102564;
  t1023 = -(0.02564102564102564 * t1030);
  t753[6ULL] = t1023 / 5.0;
  t753[7ULL] = -intermediate_der602;
  t753[8ULL] = -(-0.02564102564102564 * zc_int20) / 5.0;
  t753[9ULL] =
    -(Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_i *
      -0.02564102564102564 * zc_int20 * 0.002);
  t1034 = -0.02564102564102564 * (real_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_i < 0.0);
  t754[0ULL] = t1034 / (zc_int34 == 0.0 ? 1.0E-16 : zc_int34);
  t754[1ULL] = 0.02564102564102564 * (real_T)
    (Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_i < 0.0)
    / (zc_int35 == 0.0 ? 1.0E-16 : zc_int35);
  t754[2ULL] = -0.02564102564102564;
  t754[3ULL] = 0.02564102564102564;
  intermediate_der371 = -(0.02564102564102564 * zc_int20);
  t754[6ULL] = intermediate_der371 / 5.0;
  t754[7ULL] = -intermediate_der612;
  t754[8ULL] = -(-0.02564102564102564 * t1033) / 5.0;
  t754[9ULL] =
    -(Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_i *
      -0.02564102564102564 * t1033 * 0.002);
  intermediate_der487 = -0.02564102564102564 * (real_T)(t1056 < 0.0);
  t755[0ULL] = intermediate_der487 / (zc_int24 == 0.0 ? 1.0E-16 : zc_int24);
  t755[1ULL] = 1.0;
  t755[2ULL] = -0.02564102564102564;
  intermediate_der560 = -(0.02564102564102564 * zc_int0);
  t755[4ULL] = intermediate_der560 / 5.0;
  t755[5ULL] =
    -Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_xqnom;
  t756[0ULL] = intermediate_der487 / (zc_int24 == 0.0 ? 1.0E-16 : zc_int24);
  t756[1ULL] = -0.02564102564102564;
  t756[3ULL] = intermediate_der560 / 5.0;
  t756[4ULL] =
    -Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_xqnom;
  t758[0ULL] = t1240 / (zc_int25 == 0.0 ? 1.0E-16 : zc_int25);
  t758[1ULL] = 1.0;
  t758[2ULL] = -0.02564102564102564;
  t758[4ULL] = t40 / 5.0;
  t758[5ULL] = -t1041;
  t759[0ULL] = t1240 / (zc_int25 == 0.0 ? 1.0E-16 : zc_int25);
  t759[1ULL] = -0.02564102564102564;
  t759[3ULL] = t40 / 5.0;
  t759[4ULL] = -t1041;
  t761[0ULL] = t1285 / (zc_int26 == 0.0 ? 1.0E-16 : zc_int26);
  t761[1ULL] = 1.0;
  t761[2ULL] = -0.02564102564102564;
  t761[4ULL] = t1237 / 5.0;
  t761[5ULL] = -t1047;
  t762[0ULL] = t1285 / (zc_int26 == 0.0 ? 1.0E-16 : zc_int26);
  t762[1ULL] = -0.02564102564102564;
  t762[3ULL] = t1237 / 5.0;
  t762[4ULL] = -t1047;
  intermediate_der487 = -0.02564102564102564 * (real_T)(t1086 < 0.0);
  t764[0ULL] = intermediate_der487 / (zc_int27 == 0.0 ? 1.0E-16 : zc_int27);
  t764[1ULL] = 1.0;
  t764[2ULL] = -0.02564102564102564;
  t1285 = -(0.02564102564102564 * zc_int6);
  t764[4ULL] = t1285 / 5.0;
  t764[5ULL] = -intermediate_der555;
  t765[0ULL] = intermediate_der487 / (zc_int27 == 0.0 ? 1.0E-16 : zc_int27);
  t765[1ULL] = -0.02564102564102564;
  t765[3ULL] = t1285 / 5.0;
  t765[4ULL] = -intermediate_der555;
  t767[0ULL] = t41 / (zc_int28 == 0.0 ? 1.0E-16 : zc_int28);
  t767[1ULL] = 1.0;
  t767[2ULL] = -0.02564102564102564;
  t767[4ULL] = t1246 / 5.0;
  t767[5ULL] = -t1104;
  t768[0ULL] = t41 / (zc_int28 == 0.0 ? 1.0E-16 : zc_int28);
  t768[1ULL] = -0.02564102564102564;
  t768[3ULL] = t1246 / 5.0;
  t768[4ULL] = -t1104;
  t770[0ULL] = t1248 / (zc_int29 == 0.0 ? 1.0E-16 : zc_int29);
  t770[1ULL] = 1.0;
  t770[2ULL] = -0.02564102564102564;
  t770[4ULL] = t1250 / 5.0;
  t770[5ULL] = -intermediate_der574;
  t771[0ULL] = t1248 / (zc_int29 == 0.0 ? 1.0E-16 : zc_int29);
  t771[1ULL] = -0.02564102564102564;
  t771[3ULL] = t1250 / 5.0;
  t771[4ULL] = -intermediate_der574;
  t773[0ULL] = t1252 / (zc_int30 == 0.0 ? 1.0E-16 : zc_int30);
  t773[1ULL] = 1.0;
  t773[2ULL] = -0.02564102564102564;
  t773[4ULL] = t46 / 5.0;
  t773[5ULL] = -intermediate_der580;
  t774[0ULL] = t1252 / (zc_int30 == 0.0 ? 1.0E-16 : zc_int30);
  t774[1ULL] = -0.02564102564102564;
  t774[3ULL] = t46 / 5.0;
  t774[4ULL] = -intermediate_der580;
  t776[0ULL] = intermediate_der590 / (zc_int31 == 0.0 ? 1.0E-16 : zc_int31);
  t776[1ULL] = 1.0;
  t776[2ULL] = -0.02564102564102564;
  t776[4ULL] = t1026 / 5.0;
  t776[5ULL] = -t1359;
  t777[0ULL] = intermediate_der590 / (zc_int31 == 0.0 ? 1.0E-16 : zc_int31);
  t777[1ULL] = -0.02564102564102564;
  t777[3ULL] = t1026 / 5.0;
  t777[4ULL] = -t1359;
  t779[0ULL] = t1027 / (zc_int32 == 0.0 ? 1.0E-16 : zc_int32);
  t779[1ULL] = 1.0;
  t779[2ULL] = -0.02564102564102564;
  t779[4ULL] = t1031 / 5.0;
  t779[5ULL] = -intermediate_der594;
  t780[0ULL] = t1027 / (zc_int32 == 0.0 ? 1.0E-16 : zc_int32);
  t780[1ULL] = -0.02564102564102564;
  t780[3ULL] = t1031 / 5.0;
  t780[4ULL] = -intermediate_der594;
  t782[0ULL] = zc_int8 / (zc_int33 == 0.0 ? 1.0E-16 : zc_int33);
  t782[1ULL] = 1.0;
  t782[2ULL] = -0.02564102564102564;
  t782[4ULL] = t1023 / 5.0;
  t782[5ULL] = -intermediate_der602;
  t783[0ULL] = zc_int8 / (zc_int33 == 0.0 ? 1.0E-16 : zc_int33);
  t783[1ULL] = -0.02564102564102564;
  t783[3ULL] = t1023 / 5.0;
  t783[4ULL] = -intermediate_der602;
  t785[0ULL] = t1034 / (zc_int34 == 0.0 ? 1.0E-16 : zc_int34);
  t785[1ULL] = 1.0;
  t785[2ULL] = -0.02564102564102564;
  t785[4ULL] = intermediate_der371 / 5.0;
  t785[5ULL] = -intermediate_der612;
  t786[0ULL] = t1034 / (zc_int34 == 0.0 ? 1.0E-16 : zc_int34);
  t786[1ULL] = -0.02564102564102564;
  t786[3ULL] = intermediate_der371 / 5.0;
  t786[4ULL] = -intermediate_der612;
  t788[0ULL] = t1230 / (zc_int35 == 0.0 ? 1.0E-16 : zc_int35);
  t788[1ULL] = 1.0;
  t788[2ULL] = -0.02564102564102564;
  t788[4ULL] = t1235 / 5.0;
  t788[5ULL] = -intermediate_der617;
  t789[0ULL] = t1230 / (zc_int35 == 0.0 ? 1.0E-16 : zc_int35);
  t789[1ULL] = -0.02564102564102564;
  t789[3ULL] = t1235 / 5.0;
  t789[4ULL] = -intermediate_der617;
  intermediate_der443 = -(t1056 * intermediate_der443) / 5.0;
  t1053 = -t1053 / 5.0;
  t1056 = -(t1056 * t1057 + intermediate_der447) / 5.0;
  t1057 = -t1059;
  intermediate_der447 = t1173 / (t1174 == 0.0 ? 1.0E-16 : t1174) *
    Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xqnom;
  t1059 = -(-t1360->mX.mX[9ULL] / (t1174 == 0.0 ? 1.0E-16 : t1174) *
            Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xqnom);
  Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xqnom =
    -(t1067 * intermediate_der480) / 5.0;
  intermediate_der480 = -(t1067 * t1067 * intermediate_der480 * 0.001);
  intermediate_der299 = -intermediate_der299 / 5.0;
  intermediate_der506 = -(t1067 * intermediate_der478 + intermediate_der506) /
    5.0;
  t1067 = -(t1067 * t1067 * intermediate_der478 * 0.001);
  intermediate_der223 = -(t1076 * intermediate_der223) / 5.0;
  intermediate_der538 = -intermediate_der538 / 5.0;
  t1076 = -(t1076 * t1079 + intermediate_der537) / 5.0;
  intermediate_der537 = -intermediate_der541;
  intermediate_der541 = t1188 / (t1189 == 0.0 ? 1.0E-16 : t1189) * t1080;
  t1079 = -(-t1360->mX.mX[27ULL] / (t1189 == 0.0 ? 1.0E-16 : t1189) * t1080);
  t1080 = -(t1086 * t1081) / 5.0;
  t1081 = -(t1086 * t1086 * t1081 * 0.001);
  intermediate_der243 = -intermediate_der243 / 5.0;
  t1086 = -(t1086 * t1088 + intermediate_der239) / 5.0;
  t1090 = -(t1097 * t1090) / 5.0;
  intermediate_der260 = -intermediate_der260 / 5.0;
  t1096 = -(t1097 * t1098 + t1096) / 5.0;
  t1097 = -(t1097 * t1097 * t1098 * 0.001);
  t1098 = t1198 / (t1199 == 0.0 ? 1.0E-16 : t1199) * t1100;
  intermediate_der487 = -(-t1360->mX.mX[42ULL] / (t1199 == 0.0 ? 1.0E-16 : t1199)
    * t1100);
  t1100 = -(Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i
            * intermediate_der286) / 5.0;
  intermediate_der286 =
    -(Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i *
      Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i *
      intermediate_der286 * 0.001);
  intermediate_der451 = -intermediate_der451 / 5.0;
  t1106 = -(Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i
            * t1108 + t1106) / 5.0;
  Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i =
    -(Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i *
      Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i *
      t1108 * 0.001);
  t1108 = t1203 / (t1204 == 0.0 ? 1.0E-16 : t1204) * intermediate_der194;
  intermediate_der560 = -(-t1360->mX.mX[50ULL] / (t1204 == 0.0 ? 1.0E-16 : t1204)
    * intermediate_der194);
  intermediate_der194 = -(t1116 * t1111) / 5.0;
  t1111 = -(t1116 * t1116 * t1111 * 0.001);
  t1113 = -t1113 / 5.0;
  t1116 = -(t1116 * intermediate_der455 + t1117) / 5.0;
  t1120 = -(t1126 * t1120) / 5.0;
  intermediate_der465 = -intermediate_der465 / 5.0;
  t1126 = -(t1126 * intermediate_der328 + intermediate_der464) / 5.0;
  intermediate_der467 = -(t1137 * intermediate_der467) / 5.0;
  t1133 = -t1133 / 5.0;
  Plant_Subsystem_Series_Module_Battery_Table_Based6_cell_temperature = -(t1137 *
    intermediate_der468 +
    Plant_Subsystem_Series_Module_Battery_Table_Based6_cell_temperature) / 5.0;
  intermediate_der370 = -(t1147 * intermediate_der370) / 5.0;
  t1143 = -t1143 / 5.0;
  intermediate_der477 = -(t1147 * intrm_sf_mf_9 + intermediate_der477) / 5.0;
  intermediate_der482 =
    -(Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_i *
      intermediate_der482) / 5.0;
  t1153 = -t1153 / 5.0;
  Plant_Subsystem_Series_Module_Battery_Table_Based8_cell_temperature =
    -(Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_i *
      intermediate_der483 +
      Plant_Subsystem_Series_Module_Battery_Table_Based8_cell_temperature) / 5.0;
  t1160 = -(Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_i
            * t1160) / 5.0;
  t1163 = -t1163 / 5.0;
  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    out->mDXF.mX[t905] = t683[t905];
  }

  out->mDXF.mX[5ULL] = -(1.0 / (zc_int24 == 0.0 ? 1.0E-16 : zc_int24));
  out->mDXF.mX[6ULL] = intermediate_der446;
  out->mDXF.mX[7ULL] = t989;
  out->mDXF.mX[8ULL] = t990;
  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    out->mDXF.mX[t905 + 9ULL] = -intermediate_der185[t905];
  }

  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    out->mDXF.mX[t905 + 14ULL] = t688[t905];
  }

  out->mDXF.mX[19ULL] = -(1.0 / (zc_int25 == 0.0 ? 1.0E-16 : zc_int25));
  out->mDXF.mX[20ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_xqnom;
  out->mDXF.mX[21ULL] = t992;
  out->mDXF.mX[22ULL] = intermediate_der198;
  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    out->mDXF.mX[t905 + 23ULL] = -intermediate_der207[t905];
  }

  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    out->mDXF.mX[t905 + 28ULL] = t693[t905];
  }

  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    out->mDXF.mX[t905 + 33ULL] = t694[t905];
  }

  out->mDXF.mX[38ULL] = -(1.0 / (zc_int26 == 0.0 ? 1.0E-16 : zc_int26));
  out->mDXF.mX[39ULL] = intermediate_der539;
  out->mDXF.mX[40ULL] = intermediate_der563;
  out->mDXF.mX[41ULL] = intermediate_der212;
  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    out->mDXF.mX[t905 + 42ULL] = -intermediate_der229[t905];
  }

  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    out->mDXF.mX[t905 + 47ULL] = t699[t905];
  }

  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    out->mDXF.mX[t905 + 52ULL] = t700[t905];
  }

  out->mDXF.mX[57ULL] = -(1.0 / (zc_int27 == 0.0 ? 1.0E-16 : zc_int27));
  out->mDXF.mX[58ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xVint;
  out->mDXF.mX[59ULL] = t998;
  out->mDXF.mX[60ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_xqnom;
  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    out->mDXF.mX[t905 + 61ULL] = -intermediate_der248[t905];
  }

  out->mDXF.mX[66ULL] = -(1.0 / (zc_int28 == 0.0 ? 1.0E-16 : zc_int28));
  out->mDXF.mX[67ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_xqnom;
  out->mDXF.mX[68ULL] = intrm_sf_mf_11;
  out->mDXF.mX[69ULL] = intermediate_der222;
  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    out->mDXF.mX[t905 + 70ULL] = -intermediate_der274[t905];
  }

  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    out->mDXF.mX[t905 + 75ULL] = t709[t905];
  }

  out->mDXF.mX[80ULL] = -(1.0 / (zc_int29 == 0.0 ? 1.0E-16 : zc_int29));
  out->mDXF.mX[81ULL] = intrm_sf_mf_5;
  out->mDXF.mX[82ULL] = t1004;
  out->mDXF.mX[83ULL] = t1005;
  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    out->mDXF.mX[t905 + 84ULL] = -intermediate_der291[t905];
  }

  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    out->mDXF.mX[t905 + 89ULL] = t714[t905];
  }

  out->mDXF.mX[94ULL] = -(1.0 / (zc_int30 == 0.0 ? 1.0E-16 : zc_int30));
  out->mDXF.mX[95ULL] = intrm_sf_mf_6;
  out->mDXF.mX[96ULL] = intermediate_der509;
  out->mDXF.mX[97ULL] = t1008;
  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    out->mDXF.mX[t905 + 98ULL] = -intermediate_der317[t905];
  }

  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    out->mDXF.mX[t905 + 103ULL] = t719[t905];
  }

  out->mDXF.mX[108ULL] = -(1.0 / (zc_int31 == 0.0 ? 1.0E-16 : zc_int31));
  out->mDXF.mX[109ULL] = intermediate_der460;
  out->mDXF.mX[110ULL] = intrm_sf_mf_7;
  out->mDXF.mX[111ULL] = intermediate_der453;
  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    out->mDXF.mX[t905 + 112ULL] = -intermediate_der339[t905];
  }

  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    out->mDXF.mX[t905 + 117ULL] = t724[t905];
  }

  out->mDXF.mX[122ULL] = -(1.0 / (zc_int32 == 0.0 ? 1.0E-16 : zc_int32));
  out->mDXF.mX[123ULL] = t1012;
  out->mDXF.mX[124ULL] = t1013;
  out->mDXF.mX[125ULL] = intermediate_der282;
  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    out->mDXF.mX[t905 + 126ULL] = -intermediate_der361[t905];
  }

  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    out->mDXF.mX[t905 + 131ULL] = t729[t905];
  }

  out->mDXF.mX[136ULL] = -(1.0 / (zc_int33 == 0.0 ? 1.0E-16 : zc_int33));
  out->mDXF.mX[137ULL] = intermediate_der514;
  out->mDXF.mX[138ULL] = intermediate_der510;
  out->mDXF.mX[139ULL] = intermediate_der345;
  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    out->mDXF.mX[t905 + 140ULL] = -intermediate_der376[t905];
  }

  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    out->mDXF.mX[t905 + 145ULL] = t734[t905];
  }

  out->mDXF.mX[150ULL] = -(1.0 / (zc_int34 == 0.0 ? 1.0E-16 : zc_int34));
  out->mDXF.mX[151ULL] = intermediate_der481;
  out->mDXF.mX[152ULL] = intermediate_der516;
  out->mDXF.mX[153ULL] = t1020;
  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    out->mDXF.mX[t905 + 154ULL] = -intermediate_der396[t905];
  }

  out->mDXF.mX[159ULL] = -(1.0 / (zc_int35 == 0.0 ? 1.0E-16 : zc_int35));
  out->mDXF.mX[160ULL] = -t96[0ULL];
  out->mDXF.mX[161ULL] = -t634[0ULL];
  out->mDXF.mX[162ULL] = -t707[0ULL];
  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    out->mDXF.mX[t905 + 163ULL] = -intermediate_der420[t905];
  }

  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    out->mDXF.mX[t905 + 168ULL] = t743[t905];
  }

  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    out->mDXF.mX[t905 + 173ULL] = t744[t905];
  }

  for (t905 = 0ULL; t905 < 10ULL; t905++) {
    out->mDXF.mX[t905 + 178ULL] = t745[t905];
  }

  for (t905 = 0ULL; t905 < 10ULL; t905++) {
    out->mDXF.mX[t905 + 188ULL] = t746[t905];
  }

  for (t905 = 0ULL; t905 < 10ULL; t905++) {
    out->mDXF.mX[t905 + 198ULL] = t747[t905];
  }

  for (t905 = 0ULL; t905 < 10ULL; t905++) {
    out->mDXF.mX[t905 + 208ULL] = t748[t905];
  }

  for (t905 = 0ULL; t905 < 10ULL; t905++) {
    out->mDXF.mX[t905 + 218ULL] = t749[t905];
  }

  for (t905 = 0ULL; t905 < 10ULL; t905++) {
    out->mDXF.mX[t905 + 228ULL] = t750[t905];
  }

  for (t905 = 0ULL; t905 < 10ULL; t905++) {
    out->mDXF.mX[t905 + 238ULL] = t751[t905];
  }

  for (t905 = 0ULL; t905 < 10ULL; t905++) {
    out->mDXF.mX[t905 + 248ULL] = t752[t905];
  }

  for (t905 = 0ULL; t905 < 10ULL; t905++) {
    out->mDXF.mX[t905 + 258ULL] = t753[t905];
  }

  for (t905 = 0ULL; t905 < 10ULL; t905++) {
    out->mDXF.mX[t905 + 268ULL] = t754[t905];
  }

  for (t905 = 0ULL; t905 < 6ULL; t905++) {
    out->mDXF.mX[t905 + 278ULL] = t755[t905];
  }

  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    out->mDXF.mX[t905 + 284ULL] = t756[t905];
  }

  out->mDXF.mX[289ULL] = t1360->mM.mX[62ULL] != 0 ? -1.0 : -0.3;
  out->mDXF.mX[290ULL] = t1360->mM.mX[62ULL] != 0 ? -1.0E-8 : -1.0;
  for (t905 = 0ULL; t905 < 6ULL; t905++) {
    out->mDXF.mX[t905 + 291ULL] = t758[t905];
  }

  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    out->mDXF.mX[t905 + 297ULL] = t759[t905];
  }

  out->mDXF.mX[302ULL] = t1360->mM.mX[63ULL] != 0 ? -1.0 : -0.3;
  out->mDXF.mX[303ULL] = t1360->mM.mX[63ULL] != 0 ? -1.0E-8 : -1.0;
  for (t905 = 0ULL; t905 < 6ULL; t905++) {
    out->mDXF.mX[t905 + 304ULL] = t761[t905];
  }

  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    out->mDXF.mX[t905 + 310ULL] = t762[t905];
  }

  out->mDXF.mX[315ULL] = t1360->mM.mX[64ULL] != 0 ? -1.0 : -0.3;
  out->mDXF.mX[316ULL] = t1360->mM.mX[64ULL] != 0 ? -1.0E-8 : -1.0;
  for (t905 = 0ULL; t905 < 6ULL; t905++) {
    out->mDXF.mX[t905 + 317ULL] = t764[t905];
  }

  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    out->mDXF.mX[t905 + 323ULL] = t765[t905];
  }

  out->mDXF.mX[328ULL] = t1360->mM.mX[65ULL] != 0 ? -1.0 : -0.3;
  out->mDXF.mX[329ULL] = t1360->mM.mX[65ULL] != 0 ? -1.0E-8 : -1.0;
  for (t905 = 0ULL; t905 < 6ULL; t905++) {
    out->mDXF.mX[t905 + 330ULL] = t767[t905];
  }

  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    out->mDXF.mX[t905 + 336ULL] = t768[t905];
  }

  out->mDXF.mX[341ULL] = t1360->mM.mX[67ULL] != 0 ? -1.0 : -0.3;
  out->mDXF.mX[342ULL] = t1360->mM.mX[67ULL] != 0 ? -1.0E-8 : -1.0;
  for (t905 = 0ULL; t905 < 6ULL; t905++) {
    out->mDXF.mX[t905 + 343ULL] = t770[t905];
  }

  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    out->mDXF.mX[t905 + 349ULL] = t771[t905];
  }

  out->mDXF.mX[354ULL] = t1360->mM.mX[68ULL] != 0 ? -1.0 : -0.3;
  out->mDXF.mX[355ULL] = t1360->mM.mX[68ULL] != 0 ? -1.0E-8 : -1.0;
  for (t905 = 0ULL; t905 < 6ULL; t905++) {
    out->mDXF.mX[t905 + 356ULL] = t773[t905];
  }

  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    out->mDXF.mX[t905 + 362ULL] = t774[t905];
  }

  out->mDXF.mX[367ULL] = t1360->mM.mX[69ULL] != 0 ? -1.0 : -0.3;
  out->mDXF.mX[368ULL] = t1360->mM.mX[69ULL] != 0 ? -1.0E-8 : -1.0;
  for (t905 = 0ULL; t905 < 6ULL; t905++) {
    out->mDXF.mX[t905 + 369ULL] = t776[t905];
  }

  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    out->mDXF.mX[t905 + 375ULL] = t777[t905];
  }

  out->mDXF.mX[380ULL] = t1360->mM.mX[70ULL] != 0 ? -1.0 : -0.3;
  out->mDXF.mX[381ULL] = t1360->mM.mX[70ULL] != 0 ? -1.0E-8 : -1.0;
  for (t905 = 0ULL; t905 < 6ULL; t905++) {
    out->mDXF.mX[t905 + 382ULL] = t779[t905];
  }

  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    out->mDXF.mX[t905 + 388ULL] = t780[t905];
  }

  out->mDXF.mX[393ULL] = t1360->mM.mX[71ULL] != 0 ? -1.0 : -0.3;
  out->mDXF.mX[394ULL] = t1360->mM.mX[71ULL] != 0 ? -1.0E-8 : -1.0;
  for (t905 = 0ULL; t905 < 6ULL; t905++) {
    out->mDXF.mX[t905 + 395ULL] = t782[t905];
  }

  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    out->mDXF.mX[t905 + 401ULL] = t783[t905];
  }

  out->mDXF.mX[406ULL] = t1360->mM.mX[72ULL] != 0 ? -1.0 : -0.3;
  out->mDXF.mX[407ULL] = t1360->mM.mX[72ULL] != 0 ? -1.0E-8 : -1.0;
  for (t905 = 0ULL; t905 < 6ULL; t905++) {
    out->mDXF.mX[t905 + 408ULL] = t785[t905];
  }

  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    out->mDXF.mX[t905 + 414ULL] = t786[t905];
  }

  out->mDXF.mX[419ULL] = t1360->mM.mX[73ULL] != 0 ? -1.0 : -0.3;
  out->mDXF.mX[420ULL] = t1360->mM.mX[73ULL] != 0 ? -1.0E-8 : -1.0;
  for (t905 = 0ULL; t905 < 6ULL; t905++) {
    out->mDXF.mX[t905 + 421ULL] = t788[t905];
  }

  for (t905 = 0ULL; t905 < 5ULL; t905++) {
    out->mDXF.mX[t905 + 427ULL] = t789[t905];
  }

  out->mDXF.mX[432ULL] = t1360->mM.mX[74ULL] != 0 ? -1.0 : -0.3;
  out->mDXF.mX[433ULL] = t1360->mM.mX[74ULL] != 0 ? -1.0E-8 : -1.0;
  out->mDXF.mX[434ULL] = t1168 / (t1169 == 0.0 ? 1.0E-16 : t1169) * t1051;
  out->mDXF.mX[435ULL] = -(-t1360->mX.mX[1ULL] / (t1169 == 0.0 ? 1.0E-16 : t1169)
    * t1051);
  out->mDXF.mX[436ULL] = intermediate_der443;
  out->mDXF.mX[437ULL] = -intermediate_der525;
  out->mDXF.mX[438ULL] = 0.0;
  out->mDXF.mX[439ULL] = t1053;
  out->mDXF.mX[440ULL] = -0.0;
  out->mDXF.mX[441ULL] = 0.0;
  out->mDXF.mX[442ULL] = t1056;
  out->mDXF.mX[443ULL] = t1057;
  out->mDXF.mX[444ULL] = intermediate_der447;
  out->mDXF.mX[445ULL] = t1059;
  out->mDXF.mX[446ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xqnom;
  out->mDXF.mX[447ULL] = intermediate_der480;
  out->mDXF.mX[448ULL] = 0.0;
  out->mDXF.mX[449ULL] = intermediate_der299;
  out->mDXF.mX[450ULL] = -0.0;
  out->mDXF.mX[451ULL] = 0.0;
  out->mDXF.mX[452ULL] = intermediate_der506;
  out->mDXF.mX[453ULL] = t1067;
  out->mDXF.mX[454ULL] = t1183 / (t1184 == 0.0 ? 1.0E-16 : t1184) * t1071;
  out->mDXF.mX[455ULL] = -(-t1360->mX.mX[18ULL] / (t1184 == 0.0 ? 1.0E-16 :
    t1184) * t1071);
  out->mDXF.mX[456ULL] = intermediate_der223;
  out->mDXF.mX[457ULL] = -intermediate_der544;
  out->mDXF.mX[458ULL] = 0.0;
  out->mDXF.mX[459ULL] = intermediate_der538;
  out->mDXF.mX[460ULL] = -0.0;
  out->mDXF.mX[461ULL] = 0.0;
  out->mDXF.mX[462ULL] = t1076;
  out->mDXF.mX[463ULL] = intermediate_der537;
  out->mDXF.mX[464ULL] = intermediate_der541;
  out->mDXF.mX[465ULL] = t1079;
  out->mDXF.mX[466ULL] = t1080;
  out->mDXF.mX[467ULL] = t1081;
  out->mDXF.mX[468ULL] = 0.0;
  out->mDXF.mX[469ULL] = intermediate_der243;
  out->mDXF.mX[470ULL] = -0.0;
  out->mDXF.mX[471ULL] = 0.0;
  out->mDXF.mX[472ULL] = t1086;
  out->mDXF.mX[473ULL] = -t1089;
  out->mDXF.mX[474ULL] = t1178 / (t1179 == 0.0 ? 1.0E-16 : t1179) *
    intermediate_der278;
  out->mDXF.mX[475ULL] = -(-t1360->mX.mX[34ULL] / (t1179 == 0.0 ? 1.0E-16 :
    t1179) * intermediate_der278);
  out->mDXF.mX[476ULL] = t1090;
  out->mDXF.mX[477ULL] = -t1114;
  out->mDXF.mX[478ULL] = 0.0;
  out->mDXF.mX[479ULL] = intermediate_der260;
  out->mDXF.mX[480ULL] = -0.0;
  out->mDXF.mX[481ULL] = 0.0;
  out->mDXF.mX[482ULL] = t1096;
  out->mDXF.mX[483ULL] = t1097;
  out->mDXF.mX[484ULL] = t1098;
  out->mDXF.mX[485ULL] = intermediate_der487;
  out->mDXF.mX[486ULL] = t1100;
  out->mDXF.mX[487ULL] = intermediate_der286;
  out->mDXF.mX[488ULL] = 0.0;
  out->mDXF.mX[489ULL] = intermediate_der451;
  out->mDXF.mX[490ULL] = -0.0;
  out->mDXF.mX[491ULL] = 0.0;
  out->mDXF.mX[492ULL] = t1106;
  out->mDXF.mX[493ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i;
  out->mDXF.mX[494ULL] = t1108;
  out->mDXF.mX[495ULL] = intermediate_der560;
  out->mDXF.mX[496ULL] = intermediate_der194;
  out->mDXF.mX[497ULL] = t1111;
  out->mDXF.mX[498ULL] = 0.0;
  out->mDXF.mX[499ULL] = t1113;
  out->mDXF.mX[500ULL] = -0.0;
  out->mDXF.mX[501ULL] = 0.0;
  out->mDXF.mX[502ULL] = t1116;
  out->mDXF.mX[503ULL] = -intermediate_der584;
  out->mDXF.mX[504ULL] = t1208 / (t1209 == 0.0 ? 1.0E-16 : t1209) *
    intermediate_der341;
  out->mDXF.mX[505ULL] = -(-t1360->mX.mX[58ULL] / (t1209 == 0.0 ? 1.0E-16 :
    t1209) * intermediate_der341);
  out->mDXF.mX[506ULL] = t1120;
  out->mDXF.mX[507ULL] = -intermediate_der592;
  out->mDXF.mX[508ULL] = 0.0;
  out->mDXF.mX[509ULL] = intermediate_der465;
  out->mDXF.mX[510ULL] = -0.0;
  out->mDXF.mX[511ULL] = 0.0;
  out->mDXF.mX[512ULL] = t1126;
  out->mDXF.mX[513ULL] = -intermediate_der591;
  out->mDXF.mX[514ULL] = t1213 / (t1214 == 0.0 ? 1.0E-16 : t1214) *
    intermediate_der513;
  out->mDXF.mX[515ULL] = -(-t1360->mX.mX[66ULL] / (t1214 == 0.0 ? 1.0E-16 :
    t1214) * intermediate_der513);
  out->mDXF.mX[516ULL] = intermediate_der467;
  out->mDXF.mX[517ULL] = -intermediate_der597;
  out->mDXF.mX[518ULL] = 0.0;
  out->mDXF.mX[519ULL] = t1133;
  out->mDXF.mX[520ULL] = -0.0;
  out->mDXF.mX[521ULL] = 0.0;
  out->mDXF.mX[522ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based6_cell_temperature;
  out->mDXF.mX[523ULL] = -(t1137 * t1137 * intermediate_der468 * 0.001);
  out->mDXF.mX[524ULL] = t1218 / (t1219 == 0.0 ? 1.0E-16 : t1219) *
    intermediate_der515;
  out->mDXF.mX[525ULL] = -(-t1360->mX.mX[74ULL] / (t1219 == 0.0 ? 1.0E-16 :
    t1219) * intermediate_der515);
  out->mDXF.mX[526ULL] = intermediate_der370;
  out->mDXF.mX[527ULL] = -intermediate_der605;
  out->mDXF.mX[528ULL] = 0.0;
  out->mDXF.mX[529ULL] = t1143;
  out->mDXF.mX[530ULL] = -0.0;
  out->mDXF.mX[531ULL] = 0.0;
  out->mDXF.mX[532ULL] = intermediate_der477;
  out->mDXF.mX[533ULL] = -(t1147 * t1147 * intrm_sf_mf_9 * 0.001);
  out->mDXF.mX[534ULL] = t1223 / (t1224 == 0.0 ? 1.0E-16 : t1224) *
    intermediate_der517;
  out->mDXF.mX[535ULL] = -(-t1360->mX.mX[82ULL] / (t1224 == 0.0 ? 1.0E-16 :
    t1224) * intermediate_der517);
  out->mDXF.mX[536ULL] = intermediate_der482;
  out->mDXF.mX[537ULL] = -intermediate_der610;
  out->mDXF.mX[538ULL] = 0.0;
  out->mDXF.mX[539ULL] = t1153;
  out->mDXF.mX[540ULL] = -0.0;
  out->mDXF.mX[541ULL] = 0.0;
  out->mDXF.mX[542ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based8_cell_temperature;
  out->mDXF.mX[543ULL] =
    -(Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_i *
      Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_i *
      intermediate_der483 * 0.001);
  out->mDXF.mX[544ULL] = t1193 / (t1194 == 0.0 ? 1.0E-16 : t1194) *
    intermediate_der519;
  out->mDXF.mX[545ULL] = -(-t1360->mX.mX[89ULL] / (t1194 == 0.0 ? 1.0E-16 :
    t1194) * intermediate_der519);
  out->mDXF.mX[546ULL] = t1160;
  out->mDXF.mX[547ULL] = -intermediate_der621;
  out->mDXF.mX[548ULL] = 0.0;
  out->mDXF.mX[549ULL] = t1163;
  out->mDXF.mX[550ULL] = -0.0;
  out->mDXF.mX[551ULL] = 0.0;
  out->mDXF.mX[552ULL] =
    -(Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_i *
      intermediate_der488 + intermediate_der491) / 5.0;
  out->mDXF.mX[553ULL] =
    -(Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_i *
      Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_i *
      intermediate_der488 * 0.001);
  (void)LC;
  (void)out;
  return 0;
}
