/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'BMS_PIL_Wrapper/Plant/Solver Configuration'.
 */

#include "ne_ds.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_sys_struct.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_log.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_externals.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T BMS_PIL_Wrapper_6c5e8dbc_49_ds_log(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t356, NeDsMethodOutput *out)
{
  static real_T _cg_const_1[5] = { 263.15, 273.15, 298.15, 313.15, 328.15 };

  ETTSf3049b48 t11;
  ETTSf3049b48 t12;
  ETTSf3049b48 t6;
  ETTSf3049b48 t7;
  ETTSf3049b48 t8;
  real_T nonscalar2[5];
  real_T t198[1];
  real_T t204[1];
  real_T Plant_Charger_Load_Batt0_v;
  real_T Plant_Current_Sensor_I;
  real_T Plant_Subsystem_Monitoring_Diode10_i;
  real_T Plant_Subsystem_Monitoring_Diode10_n_v;
  real_T Plant_Subsystem_Monitoring_Diode10_p_v;
  real_T Plant_Subsystem_Monitoring_Diode10_v_diode;
  real_T Plant_Subsystem_Monitoring_Diode11_i;
  real_T Plant_Subsystem_Monitoring_Diode11_p_v;
  real_T Plant_Subsystem_Monitoring_Diode11_v_diode;
  real_T Plant_Subsystem_Monitoring_Diode1_i;
  real_T Plant_Subsystem_Monitoring_Diode1_n_v;
  real_T Plant_Subsystem_Monitoring_Diode1_p_v;
  real_T Plant_Subsystem_Monitoring_Diode1_v_diode;
  real_T Plant_Subsystem_Monitoring_Diode2_i;
  real_T Plant_Subsystem_Monitoring_Diode2_n_v;
  real_T Plant_Subsystem_Monitoring_Diode2_p_v;
  real_T Plant_Subsystem_Monitoring_Diode2_v_diode;
  real_T Plant_Subsystem_Monitoring_Diode3_i;
  real_T Plant_Subsystem_Monitoring_Diode3_n_v;
  real_T Plant_Subsystem_Monitoring_Diode3_p_v;
  real_T Plant_Subsystem_Monitoring_Diode3_v_diode;
  real_T Plant_Subsystem_Monitoring_Diode4_i;
  real_T Plant_Subsystem_Monitoring_Diode4_n_v;
  real_T Plant_Subsystem_Monitoring_Diode4_p_v;
  real_T Plant_Subsystem_Monitoring_Diode4_v_diode;
  real_T Plant_Subsystem_Monitoring_Diode5_i;
  real_T Plant_Subsystem_Monitoring_Diode5_n_v;
  real_T Plant_Subsystem_Monitoring_Diode5_p_v;
  real_T Plant_Subsystem_Monitoring_Diode5_v_diode;
  real_T Plant_Subsystem_Monitoring_Diode6_i;
  real_T Plant_Subsystem_Monitoring_Diode6_n_v;
  real_T Plant_Subsystem_Monitoring_Diode6_p_v;
  real_T Plant_Subsystem_Monitoring_Diode6_v_diode;
  real_T Plant_Subsystem_Monitoring_Diode7_i;
  real_T Plant_Subsystem_Monitoring_Diode7_n_v;
  real_T Plant_Subsystem_Monitoring_Diode7_p_v;
  real_T Plant_Subsystem_Monitoring_Diode7_v_diode;
  real_T Plant_Subsystem_Monitoring_Diode8_i;
  real_T Plant_Subsystem_Monitoring_Diode8_n_v;
  real_T Plant_Subsystem_Monitoring_Diode8_p_v;
  real_T Plant_Subsystem_Monitoring_Diode8_v_diode;
  real_T Plant_Subsystem_Monitoring_Diode9_i;
  real_T Plant_Subsystem_Monitoring_Diode9_n_v;
  real_T Plant_Subsystem_Monitoring_Diode9_p_v;
  real_T Plant_Subsystem_Monitoring_Diode9_v_diode;
  real_T Plant_Subsystem_Monitoring_Diode_i;
  real_T Plant_Subsystem_Monitoring_Diode_n_v;
  real_T Plant_Subsystem_Monitoring_Diode_p_v;
  real_T Plant_Subsystem_Monitoring_Diode_v_diode;
  real_T Plant_Subsystem_Monitoring_Voltage_Sensor10_V;
  real_T Plant_Subsystem_Monitoring_Voltage_Sensor4_V;
  real_T Plant_Subsystem_Monitoring_Voltage_Sensor6_V;
  real_T Plant_Subsystem_Monitoring_Voltage_Sensor7_V;
  real_T Plant_Subsystem_Monitoring_Voltage_Sensor8_V;
  real_T Plant_Subsystem_Monitoring_Voltage_Sensor9_V;
  real_T Plant_Subsystem_Monitoring_Voltage_Sensor_V;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_i;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_ocv;
  real_T
    Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_xxR0;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based11_cell_temperature;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_i;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_ocv;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_i;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_ocv;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i;
  real_T
    Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_xVint;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_xxR0;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_i;
  real_T
    Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_xVint;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based5_cell_temperature;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_i;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_ocv;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_xxR0;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based6_cell_temperature;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_i;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_ocv;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_xxR0;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based7_cell_temperature;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based7_electricalModel_i;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based7_electricalModel_ocv;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based8_cell_temperature;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_i;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_v;
  real_T
    Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_xVint;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based9_cell_temperature;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_i;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_ocv;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_i;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_ocv;
  real_T Plant_Subsystem_Series_Module_Convective_Heat_Transfer1_Q;
  real_T Plant_Subsystem_Series_Module_Convective_Heat_Transfer2_Q;
  real_T Plant_Subsystem_Series_Module_Convective_Heat_Transfer3_Q;
  real_T Plant_Subsystem_Series_Module_Convective_Heat_Transfer4_Q;
  real_T Plant_Subsystem_Series_Module_Convective_Heat_Transfer5_Q;
  real_T Plant_Subsystem_Series_Module_Convective_Heat_Transfer6_Q;
  real_T Plant_Subsystem_Series_Module_Convective_Heat_Transfer7_Q;
  real_T Plant_Subsystem_Series_Module_Convective_Heat_Transfer8_Q;
  real_T Plant_Subsystem_Series_Module_Convective_Heat_Transfer9_Q;
  real_T Plant_Subsystem_Series_Module_Convective_Heat_Transfer_Q;
  real_T intrm_sf_mf_11;
  real_T intrm_sf_mf_4;
  real_T t242;
  real_T t243;
  real_T t244;
  real_T t245;
  real_T t246;
  real_T t250;
  real_T t259;
  real_T t260;
  real_T t265;
  real_T t270;
  real_T t271;
  real_T t286;
  real_T t331;
  real_T t334;
  real_T t335;
  real_T t337;
  size_t t25[1];
  size_t t26[1];
  size_t t28[1];
  size_t t220;
  size_t t236;
  nonscalar2[0] = _cg_const_1[0];
  nonscalar2[1] = _cg_const_1[1];
  nonscalar2[2] = _cg_const_1[2];
  nonscalar2[3] = _cg_const_1[3];
  nonscalar2[4] = _cg_const_1[4];
  Plant_Charger_Load_Batt0_v = t356->mX.mX[96ULL] + t356->mX.mX[97ULL];
  Plant_Current_Sensor_I = t356->mU.mX[0ULL] + t356->mU.mX[1ULL];
  Plant_Subsystem_Monitoring_Diode_i = (t356->mX.mX[108ULL] *
    -0.02564102564102564 + t356->mX.mX[109ULL] * -0.02564102564102564) +
    t356->mX.mX[97ULL] * 0.02564102564102564;
  Plant_Subsystem_Monitoring_Diode_n_v = t356->mX.mX[96ULL] + t356->mX.mX[109ULL];
  Plant_Subsystem_Monitoring_Diode_p_v = (t356->mX.mX[96ULL] + t356->mX.mX
    [108ULL]) + t356->mX.mX[109ULL];
  Plant_Subsystem_Monitoring_Diode_v_diode =
    Plant_Subsystem_Monitoring_Diode_p_v - Plant_Subsystem_Monitoring_Diode_n_v;
  out->mLOG.mX[43ULL] = Plant_Subsystem_Monitoring_Diode_i * 0.3 +
    0.59999999819999994;
  Plant_Subsystem_Monitoring_Diode1_i = ((t356->mX.mX[96ULL] *
    0.02564102564102564 + t356->mX.mX[100ULL] * -0.02564102564102564) +
    t356->mX.mX[111ULL] * -0.02564102564102564) + t356->mX.mX[112ULL] *
    -0.02564102564102564;
  Plant_Subsystem_Monitoring_Diode1_n_v = t356->mX.mX[100ULL] + t356->mX.mX
    [112ULL];
  Plant_Subsystem_Monitoring_Diode1_p_v = (t356->mX.mX[100ULL] + t356->mX.mX
    [111ULL]) + t356->mX.mX[112ULL];
  Plant_Subsystem_Monitoring_Diode1_v_diode =
    Plant_Subsystem_Monitoring_Diode1_p_v -
    Plant_Subsystem_Monitoring_Diode1_n_v;
  out->mLOG.mX[58ULL] = Plant_Subsystem_Monitoring_Diode1_i * 0.3 +
    0.59999999819999994;
  Plant_Subsystem_Monitoring_Diode10_i = ((t356->mX.mX[98ULL] *
    0.02564102564102564 + t356->mX.mX[99ULL] * -0.02564102564102564) +
    t356->mX.mX[114ULL] * -0.02564102564102564) + t356->mX.mX[115ULL] *
    -0.02564102564102564;
  Plant_Subsystem_Monitoring_Diode10_n_v = t356->mX.mX[99ULL] + t356->mX.mX
    [115ULL];
  Plant_Subsystem_Monitoring_Diode10_p_v = (t356->mX.mX[99ULL] + t356->mX.mX
    [114ULL]) + t356->mX.mX[115ULL];
  Plant_Subsystem_Monitoring_Diode10_v_diode =
    Plant_Subsystem_Monitoring_Diode10_p_v -
    Plant_Subsystem_Monitoring_Diode10_n_v;
  out->mLOG.mX[73ULL] = Plant_Subsystem_Monitoring_Diode10_i * 0.3 +
    0.59999999819999994;
  Plant_Subsystem_Monitoring_Diode11_i = (t356->mX.mX[99ULL] *
    0.02564102564102564 + t356->mX.mX[117ULL] * -0.02564102564102564) +
    t356->mX.mX[118ULL] * -0.02564102564102564;
  Plant_Subsystem_Monitoring_Diode11_p_v = t356->mX.mX[117ULL] + t356->mX.mX
    [118ULL];
  Plant_Subsystem_Monitoring_Diode11_v_diode =
    Plant_Subsystem_Monitoring_Diode11_p_v - t356->mX.mX[118ULL];
  out->mLOG.mX[88ULL] = Plant_Subsystem_Monitoring_Diode11_i * 0.3 +
    0.59999999819999994;
  Plant_Subsystem_Monitoring_Diode2_i = ((t356->mX.mX[100ULL] *
    0.02564102564102564 + t356->mX.mX[101ULL] * -0.02564102564102564) +
    t356->mX.mX[120ULL] * -0.02564102564102564) + t356->mX.mX[121ULL] *
    -0.02564102564102564;
  Plant_Subsystem_Monitoring_Diode2_n_v = t356->mX.mX[101ULL] + t356->mX.mX
    [121ULL];
  Plant_Subsystem_Monitoring_Diode2_p_v = (t356->mX.mX[101ULL] + t356->mX.mX
    [120ULL]) + t356->mX.mX[121ULL];
  Plant_Subsystem_Monitoring_Diode2_v_diode =
    Plant_Subsystem_Monitoring_Diode2_p_v -
    Plant_Subsystem_Monitoring_Diode2_n_v;
  out->mLOG.mX[103ULL] = Plant_Subsystem_Monitoring_Diode2_i * 0.3 +
    0.59999999819999994;
  Plant_Subsystem_Monitoring_Diode3_i = ((t356->mX.mX[101ULL] *
    0.02564102564102564 + t356->mX.mX[102ULL] * -0.02564102564102564) +
    t356->mX.mX[123ULL] * -0.02564102564102564) + t356->mX.mX[124ULL] *
    -0.02564102564102564;
  Plant_Subsystem_Monitoring_Diode3_n_v = t356->mX.mX[102ULL] + t356->mX.mX
    [124ULL];
  Plant_Subsystem_Monitoring_Diode3_p_v = (t356->mX.mX[102ULL] + t356->mX.mX
    [123ULL]) + t356->mX.mX[124ULL];
  Plant_Subsystem_Monitoring_Diode3_v_diode =
    Plant_Subsystem_Monitoring_Diode3_p_v -
    Plant_Subsystem_Monitoring_Diode3_n_v;
  out->mLOG.mX[118ULL] = Plant_Subsystem_Monitoring_Diode3_i * 0.3 +
    0.59999999819999994;
  Plant_Subsystem_Monitoring_Diode4_i = ((t356->mX.mX[102ULL] *
    0.02564102564102564 + t356->mX.mX[103ULL] * -0.02564102564102564) +
    t356->mX.mX[126ULL] * -0.02564102564102564) + t356->mX.mX[127ULL] *
    -0.02564102564102564;
  Plant_Subsystem_Monitoring_Diode4_n_v = t356->mX.mX[103ULL] + t356->mX.mX
    [127ULL];
  Plant_Subsystem_Monitoring_Diode4_p_v = (t356->mX.mX[103ULL] + t356->mX.mX
    [126ULL]) + t356->mX.mX[127ULL];
  Plant_Subsystem_Monitoring_Diode4_v_diode =
    Plant_Subsystem_Monitoring_Diode4_p_v -
    Plant_Subsystem_Monitoring_Diode4_n_v;
  out->mLOG.mX[133ULL] = Plant_Subsystem_Monitoring_Diode4_i * 0.3 +
    0.59999999819999994;
  Plant_Subsystem_Monitoring_Diode5_i = ((t356->mX.mX[103ULL] *
    0.02564102564102564 + t356->mX.mX[104ULL] * -0.02564102564102564) +
    t356->mX.mX[129ULL] * -0.02564102564102564) + t356->mX.mX[130ULL] *
    -0.02564102564102564;
  Plant_Subsystem_Monitoring_Diode5_n_v = t356->mX.mX[104ULL] + t356->mX.mX
    [130ULL];
  Plant_Subsystem_Monitoring_Diode5_p_v = (t356->mX.mX[104ULL] + t356->mX.mX
    [129ULL]) + t356->mX.mX[130ULL];
  Plant_Subsystem_Monitoring_Diode5_v_diode =
    Plant_Subsystem_Monitoring_Diode5_p_v -
    Plant_Subsystem_Monitoring_Diode5_n_v;
  out->mLOG.mX[148ULL] = Plant_Subsystem_Monitoring_Diode5_i * 0.3 +
    0.59999999819999994;
  Plant_Subsystem_Monitoring_Diode6_i = ((t356->mX.mX[104ULL] *
    0.02564102564102564 + t356->mX.mX[105ULL] * -0.02564102564102564) +
    t356->mX.mX[132ULL] * -0.02564102564102564) + t356->mX.mX[133ULL] *
    -0.02564102564102564;
  Plant_Subsystem_Monitoring_Diode6_n_v = t356->mX.mX[105ULL] + t356->mX.mX
    [133ULL];
  Plant_Subsystem_Monitoring_Diode6_p_v = (t356->mX.mX[105ULL] + t356->mX.mX
    [132ULL]) + t356->mX.mX[133ULL];
  Plant_Subsystem_Monitoring_Diode6_v_diode =
    Plant_Subsystem_Monitoring_Diode6_p_v -
    Plant_Subsystem_Monitoring_Diode6_n_v;
  out->mLOG.mX[163ULL] = Plant_Subsystem_Monitoring_Diode6_i * 0.3 +
    0.59999999819999994;
  Plant_Subsystem_Monitoring_Diode7_i = ((t356->mX.mX[105ULL] *
    0.02564102564102564 + t356->mX.mX[106ULL] * -0.02564102564102564) +
    t356->mX.mX[135ULL] * -0.02564102564102564) + t356->mX.mX[136ULL] *
    -0.02564102564102564;
  Plant_Subsystem_Monitoring_Diode7_n_v = t356->mX.mX[106ULL] + t356->mX.mX
    [136ULL];
  Plant_Subsystem_Monitoring_Diode7_p_v = (t356->mX.mX[106ULL] + t356->mX.mX
    [135ULL]) + t356->mX.mX[136ULL];
  Plant_Subsystem_Monitoring_Diode7_v_diode =
    Plant_Subsystem_Monitoring_Diode7_p_v -
    Plant_Subsystem_Monitoring_Diode7_n_v;
  out->mLOG.mX[178ULL] = Plant_Subsystem_Monitoring_Diode7_i * 0.3 +
    0.59999999819999994;
  Plant_Subsystem_Monitoring_Diode8_i = ((t356->mX.mX[106ULL] *
    0.02564102564102564 + t356->mX.mX[107ULL] * -0.02564102564102564) +
    t356->mX.mX[138ULL] * -0.02564102564102564) + t356->mX.mX[139ULL] *
    -0.02564102564102564;
  Plant_Subsystem_Monitoring_Diode8_n_v = t356->mX.mX[107ULL] + t356->mX.mX
    [139ULL];
  Plant_Subsystem_Monitoring_Diode8_p_v = (t356->mX.mX[107ULL] + t356->mX.mX
    [138ULL]) + t356->mX.mX[139ULL];
  Plant_Subsystem_Monitoring_Diode8_v_diode =
    Plant_Subsystem_Monitoring_Diode8_p_v -
    Plant_Subsystem_Monitoring_Diode8_n_v;
  out->mLOG.mX[193ULL] = Plant_Subsystem_Monitoring_Diode8_i * 0.3 +
    0.59999999819999994;
  Plant_Subsystem_Monitoring_Diode9_i = ((t356->mX.mX[98ULL] *
    -0.02564102564102564 + t356->mX.mX[107ULL] * 0.02564102564102564) +
    t356->mX.mX[141ULL] * -0.02564102564102564) + t356->mX.mX[142ULL] *
    -0.02564102564102564;
  Plant_Subsystem_Monitoring_Diode9_n_v = t356->mX.mX[98ULL] + t356->mX.mX
    [142ULL];
  Plant_Subsystem_Monitoring_Diode9_p_v = (t356->mX.mX[98ULL] + t356->mX.mX
    [141ULL]) + t356->mX.mX[142ULL];
  Plant_Subsystem_Monitoring_Diode9_v_diode =
    Plant_Subsystem_Monitoring_Diode9_p_v -
    Plant_Subsystem_Monitoring_Diode9_n_v;
  out->mLOG.mX[208ULL] = Plant_Subsystem_Monitoring_Diode9_i * 0.3 +
    0.59999999819999994;
  out->mLOG.mX[213ULL] = Plant_Subsystem_Monitoring_Diode_i *
    Plant_Subsystem_Monitoring_Diode_i * 39.0;
  out->mLOG.mX[218ULL] = Plant_Subsystem_Monitoring_Diode1_i *
    Plant_Subsystem_Monitoring_Diode1_i * 39.0;
  out->mLOG.mX[223ULL] = Plant_Subsystem_Monitoring_Diode10_i *
    Plant_Subsystem_Monitoring_Diode10_i * 39.0;
  out->mLOG.mX[228ULL] = Plant_Subsystem_Monitoring_Diode11_i *
    Plant_Subsystem_Monitoring_Diode11_i * 39.0;
  out->mLOG.mX[233ULL] = Plant_Subsystem_Monitoring_Diode2_i *
    Plant_Subsystem_Monitoring_Diode2_i * 39.0;
  out->mLOG.mX[238ULL] = Plant_Subsystem_Monitoring_Diode3_i *
    Plant_Subsystem_Monitoring_Diode3_i * 39.0;
  out->mLOG.mX[243ULL] = Plant_Subsystem_Monitoring_Diode4_i *
    Plant_Subsystem_Monitoring_Diode4_i * 39.0;
  out->mLOG.mX[248ULL] = Plant_Subsystem_Monitoring_Diode5_i *
    Plant_Subsystem_Monitoring_Diode5_i * 39.0;
  out->mLOG.mX[253ULL] = Plant_Subsystem_Monitoring_Diode6_i *
    Plant_Subsystem_Monitoring_Diode6_i * 39.0;
  out->mLOG.mX[258ULL] = Plant_Subsystem_Monitoring_Diode7_i *
    Plant_Subsystem_Monitoring_Diode7_i * 39.0;
  out->mLOG.mX[263ULL] = Plant_Subsystem_Monitoring_Diode8_i *
    Plant_Subsystem_Monitoring_Diode8_i * 39.0;
  out->mLOG.mX[268ULL] = Plant_Subsystem_Monitoring_Diode9_i *
    Plant_Subsystem_Monitoring_Diode9_i * 39.0;
  out->mLOG.mX[285ULL] = Plant_Subsystem_Monitoring_Diode_i * t356->mX.mX[109ULL];
  out->mLOG.mX[291ULL] = Plant_Subsystem_Monitoring_Diode1_i * t356->mX.mX
    [112ULL];
  out->mLOG.mX[297ULL] = Plant_Subsystem_Monitoring_Diode10_i * t356->mX.mX
    [115ULL];
  out->mLOG.mX[302ULL] = Plant_Subsystem_Monitoring_Diode11_i * t356->mX.mX
    [118ULL];
  out->mLOG.mX[308ULL] = Plant_Subsystem_Monitoring_Diode2_i * t356->mX.mX
    [121ULL];
  out->mLOG.mX[314ULL] = Plant_Subsystem_Monitoring_Diode3_i * t356->mX.mX
    [124ULL];
  out->mLOG.mX[320ULL] = Plant_Subsystem_Monitoring_Diode4_i * t356->mX.mX
    [127ULL];
  out->mLOG.mX[326ULL] = Plant_Subsystem_Monitoring_Diode5_i * t356->mX.mX
    [130ULL];
  out->mLOG.mX[332ULL] = Plant_Subsystem_Monitoring_Diode6_i * t356->mX.mX
    [133ULL];
  out->mLOG.mX[338ULL] = Plant_Subsystem_Monitoring_Diode7_i * t356->mX.mX
    [136ULL];
  out->mLOG.mX[344ULL] = Plant_Subsystem_Monitoring_Diode8_i * t356->mX.mX
    [139ULL];
  out->mLOG.mX[350ULL] = Plant_Subsystem_Monitoring_Diode9_i * t356->mX.mX
    [142ULL];
  Plant_Subsystem_Monitoring_Voltage_Sensor_V = Plant_Charger_Load_Batt0_v -
    t356->mX.mX[96ULL];
  t331 = t356->mX.mX[96ULL] - t356->mX.mX[100ULL];
  Plant_Subsystem_Monitoring_Voltage_Sensor10_V = t356->mX.mX[98ULL] -
    t356->mX.mX[99ULL];
  t334 = t356->mX.mX[100ULL] - t356->mX.mX[101ULL];
  t335 = t356->mX.mX[101ULL] - t356->mX.mX[102ULL];
  Plant_Subsystem_Monitoring_Voltage_Sensor4_V = t356->mX.mX[102ULL] -
    t356->mX.mX[103ULL];
  t337 = t356->mX.mX[103ULL] - t356->mX.mX[104ULL];
  Plant_Subsystem_Monitoring_Voltage_Sensor6_V = t356->mX.mX[104ULL] -
    t356->mX.mX[105ULL];
  Plant_Subsystem_Monitoring_Voltage_Sensor7_V = t356->mX.mX[105ULL] -
    t356->mX.mX[106ULL];
  Plant_Subsystem_Monitoring_Voltage_Sensor8_V = t356->mX.mX[106ULL] -
    t356->mX.mX[107ULL];
  Plant_Subsystem_Monitoring_Voltage_Sensor9_V = t356->mX.mX[107ULL] -
    t356->mX.mX[98ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_i =
    (((t356->mX.mX[108ULL] * 0.02564102564102564 + t356->mX.mX[109ULL] *
       0.02564102564102564) + t356->mX.mX[97ULL] * -0.02564102564102564) +
     t356->mU.mX[0ULL]) + t356->mU.mX[1ULL];
  t204[0ULL] = t356->mX.mX[147ULL];
  t25[0] = 11ULL;
  t26[0] = 1ULL;
  tlu2_linear_nearest_prelookup(&t11.mField0[0ULL], &t11.mField1[0ULL],
    &t11.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t204[0ULL],
    &t25[0ULL], &t26[0ULL]);
  t204[0ULL] = t356->mX.mX[0ULL];
  t28[0] = 5ULL;
  tlu2_linear_nearest_prelookup(&t12.mField0[0ULL], &t12.mField1[0ULL],
    &t12.mField2[0ULL], &nonscalar2[0ULL], &t204[0ULL], &t28[0ULL], &t26[0ULL]);
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t11.mField0[0ULL], &t11.mField2
    [0ULL], &t12.mField0[0ULL], &t12.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField0, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_ocv = t198
    [0ULL];
  t198[0ULL] = pmf_get_inf();
  for (t236 = 0ULL; t236 < 55ULL; t236++) {
    t220 = t236 / 55ULL;
    t243 = t198[t220 > 0ULL ? 0ULL : t220];
    t242 = ((const _NeDynamicSystem*)(LC))->mField0[t236] * 1.0E-5;
    t198[t220 > 0ULL ? 0ULL : t220] = t243 > t242 ? t242 : t243;
  }

  t243 = t356->mX.mX[146ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_ocv;
  Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_ocv = t243 >
    t198[0ULL] ? t243 : t198[0ULL];
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t11.mField0[0ULL], &t11.mField2
    [0ULL], &t12.mField0[0ULL], &t12.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField2, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  t245 = t198[0ULL] * t356->mX.mX[145ULL];
  t242 = Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_i *
    Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_i * (t245 >
    8.200000000000002E-8 ? t245 : 8.200000000000002E-8) * 0.001 +
    ((((t356->mX.mX[3ULL] * t356->mX.mX[3ULL] * 0.0 + t356->mX.mX[4ULL] *
        t356->mX.mX[4ULL] * 0.0) + t356->mX.mX[5ULL] * t356->mX.mX[5ULL] * 0.0)
      + t356->mX.mX[6ULL] * t356->mX.mX[6ULL] * 0.0) + t356->mX.mX[7ULL] *
     t356->mX.mX[7ULL] * 0.0) * 0.001;
  t244 = ((((t356->mX.mX[96ULL] * -0.02564102564102564 + t356->mX.mX[100ULL] *
             0.02564102564102564) + t356->mX.mX[111ULL] * 0.02564102564102564) +
           t356->mX.mX[112ULL] * 0.02564102564102564) + t356->mU.mX[0ULL]) +
    t356->mU.mX[1ULL];
  t204[0ULL] = t356->mX.mX[153ULL];
  tlu2_linear_nearest_prelookup(&t12.mField0[0ULL], &t12.mField1[0ULL],
    &t12.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t204[0ULL],
    &t25[0ULL], &t26[0ULL]);
  t204[0ULL] = t356->mX.mX[8ULL];
  tlu2_linear_nearest_prelookup(&t11.mField0[0ULL], &t11.mField1[0ULL],
    &t11.mField2[0ULL], &nonscalar2[0ULL], &t204[0ULL], &t28[0ULL], &t26[0ULL]);
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], &t11.mField0[0ULL], &t11.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField0, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  t245 = t198[0ULL];
  t198[0ULL] = pmf_get_inf();
  for (t236 = 0ULL; t236 < 55ULL; t236++) {
    t220 = t236 / 55ULL;
    t246 = t198[t220 > 0ULL ? 0ULL : t220];
    t243 = ((const _NeDynamicSystem*)(LC))->mField0[t236] * 1.0E-5;
    t198[t220 > 0ULL ? 0ULL : t220] = t246 > t243 ? t243 : t246;
  }

  t243 = t356->mX.mX[152ULL] * t245;
  t245 = t243 > t198[0ULL] ? t243 : t198[0ULL];
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], &t11.mField0[0ULL], &t11.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField2, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  t250 = t198[0ULL] * t356->mX.mX[151ULL];
  t246 = -t356->mX.mX[100ULL] + t356->mX.mX[96ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_i =
    ((((t356->mX.mX[98ULL] * -0.02564102564102564 + t356->mX.mX[99ULL] *
        0.02564102564102564) + t356->mX.mX[114ULL] * 0.02564102564102564) +
      t356->mX.mX[115ULL] * 0.02564102564102564) + t356->mU.mX[0ULL]) +
    t356->mU.mX[1ULL];
  t204[0ULL] = t356->mX.mX[158ULL];
  tlu2_linear_nearest_prelookup(&t7.mField0[0ULL], &t7.mField1[0ULL],
    &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t204[0ULL],
    &t25[0ULL], &t26[0ULL]);
  t204[0ULL] = t356->mX.mX[17ULL];
  tlu2_linear_nearest_prelookup(&t11.mField0[0ULL], &t11.mField1[0ULL],
    &t11.mField2[0ULL], &nonscalar2[0ULL], &t204[0ULL], &t28[0ULL], &t26[0ULL]);
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    &t11.mField0[0ULL], &t11.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_ocv =
    t198[0ULL];
  t198[0ULL] = pmf_get_inf();
  for (t236 = 0ULL; t236 < 55ULL; t236++) {
    t220 = t236 / 55ULL;
    Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_xxR0 =
      t198[t220 > 0ULL ? 0ULL : t220];
    t243 = ((const _NeDynamicSystem*)(LC))->mField0[t236] * 1.0E-5;
    t198[t220 > 0ULL ? 0ULL : t220] =
      Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_xxR0 >
      t243 ? t243 :
      Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_xxR0;
  }

  t243 = t356->mX.mX[157ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_ocv;
  Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_ocv = t243
    > t198[0ULL] ? t243 : t198[0ULL];
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    &t11.mField0[0ULL], &t11.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based11_cell_temperature = t198
    [0ULL] * t356->mX.mX[156ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_xxR0 =
    -t356->mX.mX[99ULL] + t356->mX.mX[98ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_i =
    (((t356->mX.mX[99ULL] * -0.02564102564102564 + t356->mX.mX[117ULL] *
       0.02564102564102564) + t356->mX.mX[118ULL] * 0.02564102564102564) +
     t356->mU.mX[0ULL]) + t356->mU.mX[1ULL];
  t204[0ULL] = t356->mX.mX[163ULL];
  tlu2_linear_nearest_prelookup(&t11.mField0[0ULL], &t11.mField1[0ULL],
    &t11.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t204[0ULL],
    &t25[0ULL], &t26[0ULL]);
  t204[0ULL] = t356->mX.mX[25ULL];
  tlu2_linear_nearest_prelookup(&t6.mField0[0ULL], &t6.mField1[0ULL],
    &t6.mField2[0ULL], &nonscalar2[0ULL], &t204[0ULL], &t28[0ULL], &t26[0ULL]);
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t11.mField0[0ULL], &t11.mField2
    [0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_ocv =
    t198[0ULL];
  t198[0ULL] = pmf_get_inf();
  for (t236 = 0ULL; t236 < 55ULL; t236++) {
    t220 = t236 / 55ULL;
    t243 = t198[t220 > 0ULL ? 0ULL : t220];
    Plant_Subsystem_Series_Module_Convective_Heat_Transfer_Q = ((const
      _NeDynamicSystem*)(LC))->mField0[t236] * 1.0E-5;
    t198[t220 > 0ULL ? 0ULL : t220] = t243 >
      Plant_Subsystem_Series_Module_Convective_Heat_Transfer_Q ?
      Plant_Subsystem_Series_Module_Convective_Heat_Transfer_Q : t243;
  }

  t243 = t356->mX.mX[162ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_ocv;
  Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_ocv = t243
    > t198[0ULL] ? t243 : t198[0ULL];
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t11.mField0[0ULL], &t11.mField2
    [0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  t260 = t198[0ULL] * t356->mX.mX[161ULL];
  t259 = t356->mX.mX[17ULL] * 2.0E-6 + t356->mX.mX[25ULL] * -2.0E-6;
  Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_i =
    ((((t356->mX.mX[100ULL] * -0.02564102564102564 + t356->mX.mX[101ULL] *
        0.02564102564102564) + t356->mX.mX[120ULL] * 0.02564102564102564) +
      t356->mX.mX[121ULL] * 0.02564102564102564) + t356->mU.mX[0ULL]) +
    t356->mU.mX[1ULL];
  t204[0ULL] = t356->mX.mX[168ULL];
  tlu2_linear_nearest_prelookup(&t12.mField0[0ULL], &t12.mField1[0ULL],
    &t12.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t204[0ULL],
    &t25[0ULL], &t26[0ULL]);
  t204[0ULL] = t356->mX.mX[16ULL];
  tlu2_linear_nearest_prelookup(&t6.mField0[0ULL], &t6.mField1[0ULL],
    &t6.mField2[0ULL], &nonscalar2[0ULL], &t204[0ULL], &t28[0ULL], &t26[0ULL]);
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_ocv = t198
    [0ULL];
  t198[0ULL] = pmf_get_inf();
  for (t236 = 0ULL; t236 < 55ULL; t236++) {
    t220 = t236 / 55ULL;
    intrm_sf_mf_4 = t198[t220 > 0ULL ? 0ULL : t220];
    t243 = ((const _NeDynamicSystem*)(LC))->mField0[t236] * 1.0E-5;
    t198[t220 > 0ULL ? 0ULL : t220] = intrm_sf_mf_4 > t243 ? t243 :
      intrm_sf_mf_4;
  }

  t243 = t356->mX.mX[167ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_ocv;
  Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_ocv = t243 >
    t198[0ULL] ? t243 : t198[0ULL];
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  t265 = t198[0ULL] * t356->mX.mX[166ULL];
  intrm_sf_mf_4 = -t356->mX.mX[101ULL] + t356->mX.mX[100ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i =
    ((((t356->mX.mX[101ULL] * -0.02564102564102564 + t356->mX.mX[102ULL] *
        0.02564102564102564) + t356->mX.mX[123ULL] * 0.02564102564102564) +
      t356->mX.mX[124ULL] * 0.02564102564102564) + t356->mU.mX[0ULL]) +
    t356->mU.mX[1ULL];
  t204[0ULL] = t356->mX.mX[173ULL];
  tlu2_linear_nearest_prelookup(&t12.mField0[0ULL], &t12.mField1[0ULL],
    &t12.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t204[0ULL],
    &t25[0ULL], &t26[0ULL]);
  t204[0ULL] = t356->mX.mX[41ULL];
  tlu2_linear_nearest_prelookup(&t11.mField0[0ULL], &t11.mField1[0ULL],
    &t11.mField2[0ULL], &nonscalar2[0ULL], &t204[0ULL], &t28[0ULL], &t26[0ULL]);
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], &t11.mField0[0ULL], &t11.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField0, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_xVint =
    t198[0ULL];
  t198[0ULL] = pmf_get_inf();
  for (t236 = 0ULL; t236 < 55ULL; t236++) {
    t220 = t236 / 55ULL;
    Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_xxR0 =
      t198[t220 > 0ULL ? 0ULL : t220];
    t243 = ((const _NeDynamicSystem*)(LC))->mField0[t236] * 1.0E-5;
    t198[t220 > 0ULL ? 0ULL : t220] =
      Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_xxR0 >
      t243 ? t243 :
      Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_xxR0;
  }

  t243 = t356->mX.mX[172ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_xVint;
  Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_xVint =
    t243 > t198[0ULL] ? t243 : t198[0ULL];
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], &t11.mField0[0ULL], &t11.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField2, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  t270 = t198[0ULL] * t356->mX.mX[171ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_xxR0 =
    -t356->mX.mX[102ULL] + t356->mX.mX[101ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_i =
    ((((t356->mX.mX[102ULL] * -0.02564102564102564 + t356->mX.mX[103ULL] *
        0.02564102564102564) + t356->mX.mX[126ULL] * 0.02564102564102564) +
      t356->mX.mX[127ULL] * 0.02564102564102564) + t356->mU.mX[0ULL]) +
    t356->mU.mX[1ULL];
  t204[0ULL] = t356->mX.mX[178ULL];
  tlu2_linear_nearest_prelookup(&t11.mField0[0ULL], &t11.mField1[0ULL],
    &t11.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t204[0ULL],
    &t25[0ULL], &t26[0ULL]);
  t204[0ULL] = t356->mX.mX[49ULL];
  tlu2_linear_nearest_prelookup(&t7.mField0[0ULL], &t7.mField1[0ULL],
    &t7.mField2[0ULL], &nonscalar2[0ULL], &t204[0ULL], &t28[0ULL], &t26[0ULL]);
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t11.mField0[0ULL], &t11.mField2
    [0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_xVint =
    t198[0ULL];
  t198[0ULL] = pmf_get_inf();
  for (t236 = 0ULL; t236 < 55ULL; t236++) {
    t220 = t236 / 55ULL;
    t271 = t198[t220 > 0ULL ? 0ULL : t220];
    t243 = ((const _NeDynamicSystem*)(LC))->mField0[t236] * 1.0E-5;
    t198[t220 > 0ULL ? 0ULL : t220] = t271 > t243 ? t243 : t271;
  }

  t243 = t356->mX.mX[177ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_xVint;
  Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_xVint =
    t243 > t198[0ULL] ? t243 : t198[0ULL];
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t11.mField0[0ULL], &t11.mField2
    [0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based5_cell_temperature = t198
    [0ULL] * t356->mX.mX[176ULL];
  t271 = -t356->mX.mX[103ULL] + t356->mX.mX[102ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_i =
    ((((t356->mX.mX[103ULL] * -0.02564102564102564 + t356->mX.mX[104ULL] *
        0.02564102564102564) + t356->mX.mX[129ULL] * 0.02564102564102564) +
      t356->mX.mX[130ULL] * 0.02564102564102564) + t356->mU.mX[0ULL]) +
    t356->mU.mX[1ULL];
  t204[0ULL] = t356->mX.mX[183ULL];
  tlu2_linear_nearest_prelookup(&t8.mField0[0ULL], &t8.mField1[0ULL],
    &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t204[0ULL],
    &t25[0ULL], &t26[0ULL]);
  t204[0ULL] = t356->mX.mX[57ULL];
  tlu2_linear_nearest_prelookup(&t12.mField0[0ULL], &t12.mField1[0ULL],
    &t12.mField2[0ULL], &nonscalar2[0ULL], &t204[0ULL], &t28[0ULL], &t26[0ULL]);
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL],
    &t12.mField0[0ULL], &t12.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_ocv = t198
    [0ULL];
  t198[0ULL] = pmf_get_inf();
  for (t236 = 0ULL; t236 < 55ULL; t236++) {
    t220 = t236 / 55ULL;
    Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_xxR0 =
      t198[t220 > 0ULL ? 0ULL : t220];
    t243 = ((const _NeDynamicSystem*)(LC))->mField0[t236] * 1.0E-5;
    t198[t220 > 0ULL ? 0ULL : t220] =
      Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_xxR0 >
      t243 ? t243 :
      Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_xxR0;
  }

  t243 = t356->mX.mX[182ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_ocv;
  Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_ocv = t243 >
    t198[0ULL] ? t243 : t198[0ULL];
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL],
    &t12.mField0[0ULL], &t12.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based6_cell_temperature = t198
    [0ULL] * t356->mX.mX[181ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_xxR0 =
    -t356->mX.mX[104ULL] + t356->mX.mX[103ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_i =
    ((((t356->mX.mX[104ULL] * -0.02564102564102564 + t356->mX.mX[105ULL] *
        0.02564102564102564) + t356->mX.mX[132ULL] * 0.02564102564102564) +
      t356->mX.mX[133ULL] * 0.02564102564102564) + t356->mU.mX[0ULL]) +
    t356->mU.mX[1ULL];
  t204[0ULL] = t356->mX.mX[188ULL];
  tlu2_linear_nearest_prelookup(&t8.mField0[0ULL], &t8.mField1[0ULL],
    &t8.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t204[0ULL],
    &t25[0ULL], &t26[0ULL]);
  t204[0ULL] = t356->mX.mX[65ULL];
  tlu2_linear_nearest_prelookup(&t7.mField0[0ULL], &t7.mField1[0ULL],
    &t7.mField2[0ULL], &nonscalar2[0ULL], &t204[0ULL], &t28[0ULL], &t26[0ULL]);
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL],
    &t7.mField0[0ULL], &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_ocv = t198
    [0ULL];
  t198[0ULL] = pmf_get_inf();
  for (t236 = 0ULL; t236 < 55ULL; t236++) {
    t220 = t236 / 55ULL;
    Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_xxR0 =
      t198[t220 > 0ULL ? 0ULL : t220];
    t243 = ((const _NeDynamicSystem*)(LC))->mField0[t236] * 1.0E-5;
    t198[t220 > 0ULL ? 0ULL : t220] =
      Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_xxR0 >
      t243 ? t243 :
      Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_xxR0;
  }

  t243 = t356->mX.mX[187ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_ocv;
  Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_ocv = t243 >
    t198[0ULL] ? t243 : t198[0ULL];
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL],
    &t7.mField0[0ULL], &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based7_cell_temperature = t198
    [0ULL] * t356->mX.mX[186ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_xxR0 =
    -t356->mX.mX[105ULL] + t356->mX.mX[104ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based7_electricalModel_i =
    ((((t356->mX.mX[105ULL] * -0.02564102564102564 + t356->mX.mX[106ULL] *
        0.02564102564102564) + t356->mX.mX[135ULL] * 0.02564102564102564) +
      t356->mX.mX[136ULL] * 0.02564102564102564) + t356->mU.mX[0ULL]) +
    t356->mU.mX[1ULL];
  t204[0ULL] = t356->mX.mX[193ULL];
  tlu2_linear_nearest_prelookup(&t7.mField0[0ULL], &t7.mField1[0ULL],
    &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t204[0ULL],
    &t25[0ULL], &t26[0ULL]);
  t204[0ULL] = t356->mX.mX[73ULL];
  tlu2_linear_nearest_prelookup(&t6.mField0[0ULL], &t6.mField1[0ULL],
    &t6.mField2[0ULL], &nonscalar2[0ULL], &t204[0ULL], &t28[0ULL], &t26[0ULL]);
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    &t6.mField0[0ULL], &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based7_electricalModel_ocv = t198
    [0ULL];
  t198[0ULL] = pmf_get_inf();
  for (t236 = 0ULL; t236 < 55ULL; t236++) {
    t220 = t236 / 55ULL;
    t286 = t198[t220 > 0ULL ? 0ULL : t220];
    t243 = ((const _NeDynamicSystem*)(LC))->mField0[t236] * 1.0E-5;
    t198[t220 > 0ULL ? 0ULL : t220] = t286 > t243 ? t243 : t286;
  }

  t243 = t356->mX.mX[192ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based7_electricalModel_ocv;
  Plant_Subsystem_Series_Module_Battery_Table_Based7_electricalModel_ocv = t243 >
    t198[0ULL] ? t243 : t198[0ULL];
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL],
    &t6.mField0[0ULL], &t6.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based8_cell_temperature = t198
    [0ULL] * t356->mX.mX[191ULL];
  t286 = -t356->mX.mX[106ULL] + t356->mX.mX[105ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_i =
    ((((t356->mX.mX[106ULL] * -0.02564102564102564 + t356->mX.mX[107ULL] *
        0.02564102564102564) + t356->mX.mX[138ULL] * 0.02564102564102564) +
      t356->mX.mX[139ULL] * 0.02564102564102564) + t356->mU.mX[0ULL]) +
    t356->mU.mX[1ULL];
  t204[0ULL] = t356->mX.mX[198ULL];
  tlu2_linear_nearest_prelookup(&t11.mField0[0ULL], &t11.mField1[0ULL],
    &t11.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t204[0ULL],
    &t25[0ULL], &t26[0ULL]);
  t204[0ULL] = t356->mX.mX[81ULL];
  tlu2_linear_nearest_prelookup(&t7.mField0[0ULL], &t7.mField1[0ULL],
    &t7.mField2[0ULL], &nonscalar2[0ULL], &t204[0ULL], &t28[0ULL], &t26[0ULL]);
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t11.mField0[0ULL], &t11.mField2
    [0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField0, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_xVint =
    t198[0ULL];
  t198[0ULL] = pmf_get_inf();
  for (t236 = 0ULL; t236 < 55ULL; t236++) {
    t220 = t236 / 55ULL;
    Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_v =
      t198[t220 > 0ULL ? 0ULL : t220];
    t243 = ((const _NeDynamicSystem*)(LC))->mField0[t236] * 1.0E-5;
    t198[t220 > 0ULL ? 0ULL : t220] =
      Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_v >
      t243 ? t243 :
      Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_v;
  }

  t243 = t356->mX.mX[197ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_xVint;
  Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_xVint =
    t243 > t198[0ULL] ? t243 : t198[0ULL];
  tlu2_2d_linear_nearest_value(&t198[0ULL], &t11.mField0[0ULL], &t11.mField2
    [0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL], ((const _NeDynamicSystem*)(LC))
    ->mField2, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based9_cell_temperature = t198
    [0ULL] * t356->mX.mX[196ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_v =
    -t356->mX.mX[107ULL] + t356->mX.mX[106ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_i =
    ((((t356->mX.mX[98ULL] * 0.02564102564102564 + t356->mX.mX[107ULL] *
        -0.02564102564102564) + t356->mX.mX[141ULL] * 0.02564102564102564) +
      t356->mX.mX[142ULL] * 0.02564102564102564) + t356->mU.mX[0ULL]) +
    t356->mU.mX[1ULL];
  t204[0ULL] = t356->mX.mX[203ULL];
  tlu2_linear_nearest_prelookup(&t12.mField0[0ULL], &t12.mField1[0ULL],
    &t12.mField2[0ULL], ((const _NeDynamicSystem*)(LC))->mField1, &t204[0ULL],
    &t25[0ULL], &t26[0ULL]);
  t204[0ULL] = t356->mX.mX[26ULL];
  tlu2_linear_nearest_prelookup(&t11.mField0[0ULL], &t11.mField1[0ULL],
    &t11.mField2[0ULL], &nonscalar2[0ULL], &t204[0ULL], &t28[0ULL], &t26[0ULL]);
  tlu2_2d_linear_nearest_value(&t204[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], &t11.mField0[0ULL], &t11.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField0, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_ocv = t204
    [0ULL];
  t204[0ULL] = pmf_get_inf();
  for (t236 = 0ULL; t236 < 55ULL; t236++) {
    t220 = t236 / 55ULL;
    intrm_sf_mf_11 = t204[t220 > 0ULL ? 0ULL : t220];
    t243 = ((const _NeDynamicSystem*)(LC))->mField0[t236] * 1.0E-5;
    t204[t220 > 0ULL ? 0ULL : t220] = intrm_sf_mf_11 > t243 ? t243 :
      intrm_sf_mf_11;
  }

  t243 = t356->mX.mX[202ULL] *
    Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_ocv;
  Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_ocv = t243 >
    t204[0ULL] ? t243 : t204[0ULL];
  tlu2_2d_linear_nearest_value(&t204[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], &t11.mField0[0ULL], &t11.mField2[0ULL], ((const _NeDynamicSystem*)
    (LC))->mField2, &t25[0ULL], &t28[0ULL], &t26[0ULL]);
  t243 = t204[0ULL] * t356->mX.mX[201ULL];
  intrm_sf_mf_11 = -t356->mX.mX[98ULL] + t356->mX.mX[107ULL];
  Plant_Subsystem_Series_Module_Convective_Heat_Transfer_Q = t356->mX.mX[0ULL] *
    2.0E-6 + t356->mX.mX[8ULL] * -2.0E-6;
  Plant_Subsystem_Series_Module_Convective_Heat_Transfer1_Q = t356->mX.mX[8ULL] *
    2.0E-6 + t356->mX.mX[16ULL] * -2.0E-6;
  Plant_Subsystem_Series_Module_Convective_Heat_Transfer2_Q = t356->mX.mX[16ULL]
    * 2.0E-6 + t356->mX.mX[41ULL] * -2.0E-6;
  Plant_Subsystem_Series_Module_Convective_Heat_Transfer3_Q = t356->mX.mX[41ULL]
    * 2.0E-6 + t356->mX.mX[49ULL] * -2.0E-6;
  Plant_Subsystem_Series_Module_Convective_Heat_Transfer4_Q = t356->mX.mX[49ULL]
    * 2.0E-6 + t356->mX.mX[57ULL] * -2.0E-6;
  Plant_Subsystem_Series_Module_Convective_Heat_Transfer5_Q = t356->mX.mX[57ULL]
    * 2.0E-6 + t356->mX.mX[65ULL] * -2.0E-6;
  Plant_Subsystem_Series_Module_Convective_Heat_Transfer6_Q = t356->mX.mX[65ULL]
    * 2.0E-6 + t356->mX.mX[73ULL] * -2.0E-6;
  Plant_Subsystem_Series_Module_Convective_Heat_Transfer7_Q = t356->mX.mX[73ULL]
    * 2.0E-6 + t356->mX.mX[81ULL] * -2.0E-6;
  Plant_Subsystem_Series_Module_Convective_Heat_Transfer8_Q = t356->mX.mX[81ULL]
    * 2.0E-6 + t356->mX.mX[26ULL] * -2.0E-6;
  Plant_Subsystem_Series_Module_Convective_Heat_Transfer9_Q = t356->mX.mX[17ULL]
    * -2.0E-6 + t356->mX.mX[26ULL] * 2.0E-6;
  out->mLOG.mX[0ULL] = Plant_Charger_Load_Batt0_v;
  out->mLOG.mX[1ULL] = Plant_Charger_Load_Batt0_v;
  out->mLOG.mX[2ULL] = t356->mU.mX[1ULL];
  out->mLOG.mX[3ULL] = t356->mU.mX[1ULL];
  out->mLOG.mX[4ULL] = -Plant_Charger_Load_Batt0_v;
  out->mLOG.mX[5ULL] = Plant_Charger_Load_Batt0_v;
  out->mLOG.mX[6ULL] = t356->mU.mX[0ULL];
  out->mLOG.mX[7ULL] = t356->mU.mX[0ULL];
  out->mLOG.mX[8ULL] = -Plant_Charger_Load_Batt0_v;
  out->mLOG.mX[9ULL] = t356->mU.mX[0ULL];
  out->mLOG.mX[10ULL] = t356->mU.mX[1ULL];
  out->mLOG.mX[11ULL] = Plant_Current_Sensor_I;
  out->mLOG.mX[12ULL] = Plant_Current_Sensor_I;
  out->mLOG.mX[13ULL] = Plant_Charger_Load_Batt0_v;
  out->mLOG.mX[14ULL] = Plant_Charger_Load_Batt0_v;
  out->mLOG.mX[15ULL] = Plant_Current_Sensor_I;
  out->mLOG.mX[16ULL] = Plant_Charger_Load_Batt0_v;
  out->mLOG.mX[17ULL] = Plant_Charger_Load_Batt0_v;
  out->mLOG.mX[18ULL] = t356->mX.mX[96ULL];
  out->mLOG.mX[19ULL] = t356->mX.mX[98ULL];
  out->mLOG.mX[20ULL] = t356->mX.mX[99ULL];
  out->mLOG.mX[21ULL] = t356->mX.mX[100ULL];
  out->mLOG.mX[22ULL] = t356->mX.mX[101ULL];
  out->mLOG.mX[23ULL] = t356->mX.mX[102ULL];
  out->mLOG.mX[24ULL] = t356->mX.mX[103ULL];
  out->mLOG.mX[25ULL] = t356->mX.mX[104ULL];
  out->mLOG.mX[26ULL] = t356->mX.mX[105ULL];
  out->mLOG.mX[27ULL] = t356->mX.mX[106ULL];
  out->mLOG.mX[28ULL] = t356->mX.mX[107ULL];
  out->mLOG.mX[29ULL] = Plant_Subsystem_Monitoring_Diode_i;
  out->mLOG.mX[30ULL] = Plant_Subsystem_Monitoring_Diode_n_v;
  out->mLOG.mX[31ULL] = Plant_Subsystem_Monitoring_Diode_p_v;
  out->mLOG.mX[32ULL] = t356->mX.mX[110ULL];
  out->mLOG.mX[33ULL] = t356->mX.mX[108ULL];
  out->mLOG.mX[34ULL] = Plant_Subsystem_Monitoring_Diode_n_v;
  out->mLOG.mX[35ULL] = Plant_Subsystem_Monitoring_Diode_i;
  out->mLOG.mX[36ULL] = Plant_Subsystem_Monitoring_Diode_i;
  out->mLOG.mX[37ULL] = Plant_Subsystem_Monitoring_Diode_i;
  out->mLOG.mX[38ULL] = Plant_Subsystem_Monitoring_Diode_n_v;
  out->mLOG.mX[39ULL] = Plant_Subsystem_Monitoring_Diode_p_v;
  out->mLOG.mX[40ULL] = Plant_Subsystem_Monitoring_Diode_i *
    Plant_Subsystem_Monitoring_Diode_v_diode * 0.001 * 1000.0;
  out->mLOG.mX[41ULL] = Plant_Subsystem_Monitoring_Diode_v_diode;
  out->mLOG.mX[42ULL] = Plant_Subsystem_Monitoring_Diode_v_diode;
  out->mLOG.mX[44ULL] = Plant_Subsystem_Monitoring_Diode1_i;
  out->mLOG.mX[45ULL] = Plant_Subsystem_Monitoring_Diode1_n_v;
  out->mLOG.mX[46ULL] = Plant_Subsystem_Monitoring_Diode1_p_v;
  out->mLOG.mX[47ULL] = t356->mX.mX[113ULL];
  out->mLOG.mX[48ULL] = t356->mX.mX[111ULL];
  out->mLOG.mX[49ULL] = Plant_Subsystem_Monitoring_Diode1_n_v;
  out->mLOG.mX[50ULL] = Plant_Subsystem_Monitoring_Diode1_i;
  out->mLOG.mX[51ULL] = Plant_Subsystem_Monitoring_Diode1_i;
  out->mLOG.mX[52ULL] = Plant_Subsystem_Monitoring_Diode1_i;
  out->mLOG.mX[53ULL] = Plant_Subsystem_Monitoring_Diode1_n_v;
  out->mLOG.mX[54ULL] = Plant_Subsystem_Monitoring_Diode1_p_v;
  out->mLOG.mX[55ULL] = Plant_Subsystem_Monitoring_Diode1_i *
    Plant_Subsystem_Monitoring_Diode1_v_diode * 0.001 * 1000.0;
  out->mLOG.mX[56ULL] = Plant_Subsystem_Monitoring_Diode1_v_diode;
  out->mLOG.mX[57ULL] = Plant_Subsystem_Monitoring_Diode1_v_diode;
  out->mLOG.mX[59ULL] = Plant_Subsystem_Monitoring_Diode10_i;
  out->mLOG.mX[60ULL] = Plant_Subsystem_Monitoring_Diode10_n_v;
  out->mLOG.mX[61ULL] = Plant_Subsystem_Monitoring_Diode10_p_v;
  out->mLOG.mX[62ULL] = t356->mX.mX[116ULL];
  out->mLOG.mX[63ULL] = t356->mX.mX[114ULL];
  out->mLOG.mX[64ULL] = Plant_Subsystem_Monitoring_Diode10_n_v;
  out->mLOG.mX[65ULL] = Plant_Subsystem_Monitoring_Diode10_i;
  out->mLOG.mX[66ULL] = Plant_Subsystem_Monitoring_Diode10_i;
  out->mLOG.mX[67ULL] = Plant_Subsystem_Monitoring_Diode10_i;
  out->mLOG.mX[68ULL] = Plant_Subsystem_Monitoring_Diode10_n_v;
  out->mLOG.mX[69ULL] = Plant_Subsystem_Monitoring_Diode10_p_v;
  out->mLOG.mX[70ULL] = Plant_Subsystem_Monitoring_Diode10_i *
    Plant_Subsystem_Monitoring_Diode10_v_diode * 0.001 * 1000.0;
  out->mLOG.mX[71ULL] = Plant_Subsystem_Monitoring_Diode10_v_diode;
  out->mLOG.mX[72ULL] = Plant_Subsystem_Monitoring_Diode10_v_diode;
  out->mLOG.mX[74ULL] = Plant_Subsystem_Monitoring_Diode11_i;
  out->mLOG.mX[75ULL] = t356->mX.mX[118ULL];
  out->mLOG.mX[76ULL] = Plant_Subsystem_Monitoring_Diode11_p_v;
  out->mLOG.mX[77ULL] = t356->mX.mX[119ULL];
  out->mLOG.mX[78ULL] = t356->mX.mX[117ULL];
  out->mLOG.mX[79ULL] = t356->mX.mX[118ULL];
  out->mLOG.mX[80ULL] = Plant_Subsystem_Monitoring_Diode11_i;
  out->mLOG.mX[81ULL] = Plant_Subsystem_Monitoring_Diode11_i;
  out->mLOG.mX[82ULL] = Plant_Subsystem_Monitoring_Diode11_i;
  out->mLOG.mX[83ULL] = t356->mX.mX[118ULL];
  out->mLOG.mX[84ULL] = Plant_Subsystem_Monitoring_Diode11_p_v;
  out->mLOG.mX[85ULL] = Plant_Subsystem_Monitoring_Diode11_i *
    Plant_Subsystem_Monitoring_Diode11_v_diode * 0.001 * 1000.0;
  out->mLOG.mX[86ULL] = Plant_Subsystem_Monitoring_Diode11_v_diode;
  out->mLOG.mX[87ULL] = Plant_Subsystem_Monitoring_Diode11_v_diode;
  out->mLOG.mX[89ULL] = Plant_Subsystem_Monitoring_Diode2_i;
  out->mLOG.mX[90ULL] = Plant_Subsystem_Monitoring_Diode2_n_v;
  out->mLOG.mX[91ULL] = Plant_Subsystem_Monitoring_Diode2_p_v;
  out->mLOG.mX[92ULL] = t356->mX.mX[122ULL];
  out->mLOG.mX[93ULL] = t356->mX.mX[120ULL];
  out->mLOG.mX[94ULL] = Plant_Subsystem_Monitoring_Diode2_n_v;
  out->mLOG.mX[95ULL] = Plant_Subsystem_Monitoring_Diode2_i;
  out->mLOG.mX[96ULL] = Plant_Subsystem_Monitoring_Diode2_i;
  out->mLOG.mX[97ULL] = Plant_Subsystem_Monitoring_Diode2_i;
  out->mLOG.mX[98ULL] = Plant_Subsystem_Monitoring_Diode2_n_v;
  out->mLOG.mX[99ULL] = Plant_Subsystem_Monitoring_Diode2_p_v;
  out->mLOG.mX[100ULL] = Plant_Subsystem_Monitoring_Diode2_i *
    Plant_Subsystem_Monitoring_Diode2_v_diode * 0.001 * 1000.0;
  out->mLOG.mX[101ULL] = Plant_Subsystem_Monitoring_Diode2_v_diode;
  out->mLOG.mX[102ULL] = Plant_Subsystem_Monitoring_Diode2_v_diode;
  out->mLOG.mX[104ULL] = Plant_Subsystem_Monitoring_Diode3_i;
  out->mLOG.mX[105ULL] = Plant_Subsystem_Monitoring_Diode3_n_v;
  out->mLOG.mX[106ULL] = Plant_Subsystem_Monitoring_Diode3_p_v;
  out->mLOG.mX[107ULL] = t356->mX.mX[125ULL];
  out->mLOG.mX[108ULL] = t356->mX.mX[123ULL];
  out->mLOG.mX[109ULL] = Plant_Subsystem_Monitoring_Diode3_n_v;
  out->mLOG.mX[110ULL] = Plant_Subsystem_Monitoring_Diode3_i;
  out->mLOG.mX[111ULL] = Plant_Subsystem_Monitoring_Diode3_i;
  out->mLOG.mX[112ULL] = Plant_Subsystem_Monitoring_Diode3_i;
  out->mLOG.mX[113ULL] = Plant_Subsystem_Monitoring_Diode3_n_v;
  out->mLOG.mX[114ULL] = Plant_Subsystem_Monitoring_Diode3_p_v;
  out->mLOG.mX[115ULL] = Plant_Subsystem_Monitoring_Diode3_i *
    Plant_Subsystem_Monitoring_Diode3_v_diode * 0.001 * 1000.0;
  out->mLOG.mX[116ULL] = Plant_Subsystem_Monitoring_Diode3_v_diode;
  out->mLOG.mX[117ULL] = Plant_Subsystem_Monitoring_Diode3_v_diode;
  out->mLOG.mX[119ULL] = Plant_Subsystem_Monitoring_Diode4_i;
  out->mLOG.mX[120ULL] = Plant_Subsystem_Monitoring_Diode4_n_v;
  out->mLOG.mX[121ULL] = Plant_Subsystem_Monitoring_Diode4_p_v;
  out->mLOG.mX[122ULL] = t356->mX.mX[128ULL];
  out->mLOG.mX[123ULL] = t356->mX.mX[126ULL];
  out->mLOG.mX[124ULL] = Plant_Subsystem_Monitoring_Diode4_n_v;
  out->mLOG.mX[125ULL] = Plant_Subsystem_Monitoring_Diode4_i;
  out->mLOG.mX[126ULL] = Plant_Subsystem_Monitoring_Diode4_i;
  out->mLOG.mX[127ULL] = Plant_Subsystem_Monitoring_Diode4_i;
  out->mLOG.mX[128ULL] = Plant_Subsystem_Monitoring_Diode4_n_v;
  out->mLOG.mX[129ULL] = Plant_Subsystem_Monitoring_Diode4_p_v;
  out->mLOG.mX[130ULL] = Plant_Subsystem_Monitoring_Diode4_i *
    Plant_Subsystem_Monitoring_Diode4_v_diode * 0.001 * 1000.0;
  out->mLOG.mX[131ULL] = Plant_Subsystem_Monitoring_Diode4_v_diode;
  out->mLOG.mX[132ULL] = Plant_Subsystem_Monitoring_Diode4_v_diode;
  out->mLOG.mX[134ULL] = Plant_Subsystem_Monitoring_Diode5_i;
  out->mLOG.mX[135ULL] = Plant_Subsystem_Monitoring_Diode5_n_v;
  out->mLOG.mX[136ULL] = Plant_Subsystem_Monitoring_Diode5_p_v;
  out->mLOG.mX[137ULL] = t356->mX.mX[131ULL];
  out->mLOG.mX[138ULL] = t356->mX.mX[129ULL];
  out->mLOG.mX[139ULL] = Plant_Subsystem_Monitoring_Diode5_n_v;
  out->mLOG.mX[140ULL] = Plant_Subsystem_Monitoring_Diode5_i;
  out->mLOG.mX[141ULL] = Plant_Subsystem_Monitoring_Diode5_i;
  out->mLOG.mX[142ULL] = Plant_Subsystem_Monitoring_Diode5_i;
  out->mLOG.mX[143ULL] = Plant_Subsystem_Monitoring_Diode5_n_v;
  out->mLOG.mX[144ULL] = Plant_Subsystem_Monitoring_Diode5_p_v;
  out->mLOG.mX[145ULL] = Plant_Subsystem_Monitoring_Diode5_i *
    Plant_Subsystem_Monitoring_Diode5_v_diode * 0.001 * 1000.0;
  out->mLOG.mX[146ULL] = Plant_Subsystem_Monitoring_Diode5_v_diode;
  out->mLOG.mX[147ULL] = Plant_Subsystem_Monitoring_Diode5_v_diode;
  out->mLOG.mX[149ULL] = Plant_Subsystem_Monitoring_Diode6_i;
  out->mLOG.mX[150ULL] = Plant_Subsystem_Monitoring_Diode6_n_v;
  out->mLOG.mX[151ULL] = Plant_Subsystem_Monitoring_Diode6_p_v;
  out->mLOG.mX[152ULL] = t356->mX.mX[134ULL];
  out->mLOG.mX[153ULL] = t356->mX.mX[132ULL];
  out->mLOG.mX[154ULL] = Plant_Subsystem_Monitoring_Diode6_n_v;
  out->mLOG.mX[155ULL] = Plant_Subsystem_Monitoring_Diode6_i;
  out->mLOG.mX[156ULL] = Plant_Subsystem_Monitoring_Diode6_i;
  out->mLOG.mX[157ULL] = Plant_Subsystem_Monitoring_Diode6_i;
  out->mLOG.mX[158ULL] = Plant_Subsystem_Monitoring_Diode6_n_v;
  out->mLOG.mX[159ULL] = Plant_Subsystem_Monitoring_Diode6_p_v;
  out->mLOG.mX[160ULL] = Plant_Subsystem_Monitoring_Diode6_i *
    Plant_Subsystem_Monitoring_Diode6_v_diode * 0.001 * 1000.0;
  out->mLOG.mX[161ULL] = Plant_Subsystem_Monitoring_Diode6_v_diode;
  out->mLOG.mX[162ULL] = Plant_Subsystem_Monitoring_Diode6_v_diode;
  out->mLOG.mX[164ULL] = Plant_Subsystem_Monitoring_Diode7_i;
  out->mLOG.mX[165ULL] = Plant_Subsystem_Monitoring_Diode7_n_v;
  out->mLOG.mX[166ULL] = Plant_Subsystem_Monitoring_Diode7_p_v;
  out->mLOG.mX[167ULL] = t356->mX.mX[137ULL];
  out->mLOG.mX[168ULL] = t356->mX.mX[135ULL];
  out->mLOG.mX[169ULL] = Plant_Subsystem_Monitoring_Diode7_n_v;
  out->mLOG.mX[170ULL] = Plant_Subsystem_Monitoring_Diode7_i;
  out->mLOG.mX[171ULL] = Plant_Subsystem_Monitoring_Diode7_i;
  out->mLOG.mX[172ULL] = Plant_Subsystem_Monitoring_Diode7_i;
  out->mLOG.mX[173ULL] = Plant_Subsystem_Monitoring_Diode7_n_v;
  out->mLOG.mX[174ULL] = Plant_Subsystem_Monitoring_Diode7_p_v;
  out->mLOG.mX[175ULL] = Plant_Subsystem_Monitoring_Diode7_i *
    Plant_Subsystem_Monitoring_Diode7_v_diode * 0.001 * 1000.0;
  out->mLOG.mX[176ULL] = Plant_Subsystem_Monitoring_Diode7_v_diode;
  out->mLOG.mX[177ULL] = Plant_Subsystem_Monitoring_Diode7_v_diode;
  out->mLOG.mX[179ULL] = Plant_Subsystem_Monitoring_Diode8_i;
  out->mLOG.mX[180ULL] = Plant_Subsystem_Monitoring_Diode8_n_v;
  out->mLOG.mX[181ULL] = Plant_Subsystem_Monitoring_Diode8_p_v;
  out->mLOG.mX[182ULL] = t356->mX.mX[140ULL];
  out->mLOG.mX[183ULL] = t356->mX.mX[138ULL];
  out->mLOG.mX[184ULL] = Plant_Subsystem_Monitoring_Diode8_n_v;
  out->mLOG.mX[185ULL] = Plant_Subsystem_Monitoring_Diode8_i;
  out->mLOG.mX[186ULL] = Plant_Subsystem_Monitoring_Diode8_i;
  out->mLOG.mX[187ULL] = Plant_Subsystem_Monitoring_Diode8_i;
  out->mLOG.mX[188ULL] = Plant_Subsystem_Monitoring_Diode8_n_v;
  out->mLOG.mX[189ULL] = Plant_Subsystem_Monitoring_Diode8_p_v;
  out->mLOG.mX[190ULL] = Plant_Subsystem_Monitoring_Diode8_i *
    Plant_Subsystem_Monitoring_Diode8_v_diode * 0.001 * 1000.0;
  out->mLOG.mX[191ULL] = Plant_Subsystem_Monitoring_Diode8_v_diode;
  out->mLOG.mX[192ULL] = Plant_Subsystem_Monitoring_Diode8_v_diode;
  out->mLOG.mX[194ULL] = Plant_Subsystem_Monitoring_Diode9_i;
  out->mLOG.mX[195ULL] = Plant_Subsystem_Monitoring_Diode9_n_v;
  out->mLOG.mX[196ULL] = Plant_Subsystem_Monitoring_Diode9_p_v;
  out->mLOG.mX[197ULL] = t356->mX.mX[143ULL];
  out->mLOG.mX[198ULL] = t356->mX.mX[141ULL];
  out->mLOG.mX[199ULL] = Plant_Subsystem_Monitoring_Diode9_n_v;
  out->mLOG.mX[200ULL] = Plant_Subsystem_Monitoring_Diode9_i;
  out->mLOG.mX[201ULL] = Plant_Subsystem_Monitoring_Diode9_i;
  out->mLOG.mX[202ULL] = Plant_Subsystem_Monitoring_Diode9_i;
  out->mLOG.mX[203ULL] = Plant_Subsystem_Monitoring_Diode9_n_v;
  out->mLOG.mX[204ULL] = Plant_Subsystem_Monitoring_Diode9_p_v;
  out->mLOG.mX[205ULL] = Plant_Subsystem_Monitoring_Diode9_i *
    Plant_Subsystem_Monitoring_Diode9_v_diode * 0.001 * 1000.0;
  out->mLOG.mX[206ULL] = Plant_Subsystem_Monitoring_Diode9_v_diode;
  out->mLOG.mX[207ULL] = Plant_Subsystem_Monitoring_Diode9_v_diode;
  out->mLOG.mX[209ULL] = Plant_Subsystem_Monitoring_Diode_i;
  out->mLOG.mX[210ULL] = Plant_Subsystem_Monitoring_Diode_p_v;
  out->mLOG.mX[211ULL] = Plant_Charger_Load_Batt0_v;
  out->mLOG.mX[212ULL] = Plant_Subsystem_Monitoring_Diode_i * 39.0;
  out->mLOG.mX[214ULL] = Plant_Subsystem_Monitoring_Diode1_i;
  out->mLOG.mX[215ULL] = Plant_Subsystem_Monitoring_Diode1_p_v;
  out->mLOG.mX[216ULL] = t356->mX.mX[96ULL];
  out->mLOG.mX[217ULL] = Plant_Subsystem_Monitoring_Diode1_i * 39.0;
  out->mLOG.mX[219ULL] = Plant_Subsystem_Monitoring_Diode10_i;
  out->mLOG.mX[220ULL] = Plant_Subsystem_Monitoring_Diode10_p_v;
  out->mLOG.mX[221ULL] = t356->mX.mX[98ULL];
  out->mLOG.mX[222ULL] = Plant_Subsystem_Monitoring_Diode10_i * 39.0;
  out->mLOG.mX[224ULL] = Plant_Subsystem_Monitoring_Diode11_i;
  out->mLOG.mX[225ULL] = Plant_Subsystem_Monitoring_Diode11_p_v;
  out->mLOG.mX[226ULL] = t356->mX.mX[99ULL];
  out->mLOG.mX[227ULL] = Plant_Subsystem_Monitoring_Diode11_i * 39.0;
  out->mLOG.mX[229ULL] = Plant_Subsystem_Monitoring_Diode2_i;
  out->mLOG.mX[230ULL] = Plant_Subsystem_Monitoring_Diode2_p_v;
  out->mLOG.mX[231ULL] = t356->mX.mX[100ULL];
  out->mLOG.mX[232ULL] = Plant_Subsystem_Monitoring_Diode2_i * 39.0;
  out->mLOG.mX[234ULL] = Plant_Subsystem_Monitoring_Diode3_i;
  out->mLOG.mX[235ULL] = Plant_Subsystem_Monitoring_Diode3_p_v;
  out->mLOG.mX[236ULL] = t356->mX.mX[101ULL];
  out->mLOG.mX[237ULL] = Plant_Subsystem_Monitoring_Diode3_i * 39.0;
  out->mLOG.mX[239ULL] = Plant_Subsystem_Monitoring_Diode4_i;
  out->mLOG.mX[240ULL] = Plant_Subsystem_Monitoring_Diode4_p_v;
  out->mLOG.mX[241ULL] = t356->mX.mX[102ULL];
  out->mLOG.mX[242ULL] = Plant_Subsystem_Monitoring_Diode4_i * 39.0;
  out->mLOG.mX[244ULL] = Plant_Subsystem_Monitoring_Diode5_i;
  out->mLOG.mX[245ULL] = Plant_Subsystem_Monitoring_Diode5_p_v;
  out->mLOG.mX[246ULL] = t356->mX.mX[103ULL];
  out->mLOG.mX[247ULL] = Plant_Subsystem_Monitoring_Diode5_i * 39.0;
  out->mLOG.mX[249ULL] = Plant_Subsystem_Monitoring_Diode6_i;
  out->mLOG.mX[250ULL] = Plant_Subsystem_Monitoring_Diode6_p_v;
  out->mLOG.mX[251ULL] = t356->mX.mX[104ULL];
  out->mLOG.mX[252ULL] = Plant_Subsystem_Monitoring_Diode6_i * 39.0;
  out->mLOG.mX[254ULL] = Plant_Subsystem_Monitoring_Diode7_i;
  out->mLOG.mX[255ULL] = Plant_Subsystem_Monitoring_Diode7_p_v;
  out->mLOG.mX[256ULL] = t356->mX.mX[105ULL];
  out->mLOG.mX[257ULL] = Plant_Subsystem_Monitoring_Diode7_i * 39.0;
  out->mLOG.mX[259ULL] = Plant_Subsystem_Monitoring_Diode8_i;
  out->mLOG.mX[260ULL] = Plant_Subsystem_Monitoring_Diode8_p_v;
  out->mLOG.mX[261ULL] = t356->mX.mX[106ULL];
  out->mLOG.mX[262ULL] = Plant_Subsystem_Monitoring_Diode8_i * 39.0;
  out->mLOG.mX[264ULL] = Plant_Subsystem_Monitoring_Diode9_i;
  out->mLOG.mX[265ULL] = Plant_Subsystem_Monitoring_Diode9_p_v;
  out->mLOG.mX[266ULL] = t356->mX.mX[107ULL];
  out->mLOG.mX[267ULL] = Plant_Subsystem_Monitoring_Diode9_i * 39.0;
  out->mLOG.mX[269ULL] = t356->mU.mX[2ULL];
  out->mLOG.mX[270ULL] = t356->mU.mX[3ULL];
  out->mLOG.mX[271ULL] = t356->mU.mX[4ULL];
  out->mLOG.mX[272ULL] = t356->mU.mX[5ULL];
  out->mLOG.mX[273ULL] = t356->mU.mX[6ULL];
  out->mLOG.mX[274ULL] = t356->mU.mX[7ULL];
  out->mLOG.mX[275ULL] = t356->mU.mX[8ULL];
  out->mLOG.mX[276ULL] = t356->mU.mX[9ULL];
  out->mLOG.mX[277ULL] = t356->mU.mX[10ULL];
  out->mLOG.mX[278ULL] = t356->mU.mX[11ULL];
  out->mLOG.mX[279ULL] = t356->mU.mX[12ULL];
  out->mLOG.mX[280ULL] = t356->mU.mX[13ULL];
  out->mLOG.mX[281ULL] = Plant_Subsystem_Monitoring_Diode_i;
  out->mLOG.mX[282ULL] = t356->mX.mX[96ULL];
  out->mLOG.mX[283ULL] = Plant_Subsystem_Monitoring_Diode_n_v;
  out->mLOG.mX[284ULL] = t356->mX.mX[109ULL];
  out->mLOG.mX[286ULL] = t356->mU.mX[13ULL];
  out->mLOG.mX[287ULL] = Plant_Subsystem_Monitoring_Diode1_i;
  out->mLOG.mX[288ULL] = t356->mX.mX[100ULL];
  out->mLOG.mX[289ULL] = Plant_Subsystem_Monitoring_Diode1_n_v;
  out->mLOG.mX[290ULL] = t356->mX.mX[112ULL];
  out->mLOG.mX[292ULL] = t356->mU.mX[4ULL];
  out->mLOG.mX[293ULL] = Plant_Subsystem_Monitoring_Diode10_i;
  out->mLOG.mX[294ULL] = t356->mX.mX[99ULL];
  out->mLOG.mX[295ULL] = Plant_Subsystem_Monitoring_Diode10_n_v;
  out->mLOG.mX[296ULL] = t356->mX.mX[115ULL];
  out->mLOG.mX[298ULL] = t356->mU.mX[2ULL];
  out->mLOG.mX[299ULL] = Plant_Subsystem_Monitoring_Diode11_i;
  out->mLOG.mX[300ULL] = t356->mX.mX[118ULL];
  out->mLOG.mX[301ULL] = t356->mX.mX[118ULL];
  out->mLOG.mX[303ULL] = t356->mU.mX[3ULL];
  out->mLOG.mX[304ULL] = Plant_Subsystem_Monitoring_Diode2_i;
  out->mLOG.mX[305ULL] = t356->mX.mX[101ULL];
  out->mLOG.mX[306ULL] = Plant_Subsystem_Monitoring_Diode2_n_v;
  out->mLOG.mX[307ULL] = t356->mX.mX[121ULL];
  out->mLOG.mX[309ULL] = t356->mU.mX[5ULL];
  out->mLOG.mX[310ULL] = Plant_Subsystem_Monitoring_Diode3_i;
  out->mLOG.mX[311ULL] = t356->mX.mX[102ULL];
  out->mLOG.mX[312ULL] = Plant_Subsystem_Monitoring_Diode3_n_v;
  out->mLOG.mX[313ULL] = t356->mX.mX[124ULL];
  out->mLOG.mX[315ULL] = t356->mU.mX[6ULL];
  out->mLOG.mX[316ULL] = Plant_Subsystem_Monitoring_Diode4_i;
  out->mLOG.mX[317ULL] = t356->mX.mX[103ULL];
  out->mLOG.mX[318ULL] = Plant_Subsystem_Monitoring_Diode4_n_v;
  out->mLOG.mX[319ULL] = t356->mX.mX[127ULL];
  out->mLOG.mX[321ULL] = t356->mU.mX[7ULL];
  out->mLOG.mX[322ULL] = Plant_Subsystem_Monitoring_Diode5_i;
  out->mLOG.mX[323ULL] = t356->mX.mX[104ULL];
  out->mLOG.mX[324ULL] = Plant_Subsystem_Monitoring_Diode5_n_v;
  out->mLOG.mX[325ULL] = t356->mX.mX[130ULL];
  out->mLOG.mX[327ULL] = t356->mU.mX[8ULL];
  out->mLOG.mX[328ULL] = Plant_Subsystem_Monitoring_Diode6_i;
  out->mLOG.mX[329ULL] = t356->mX.mX[105ULL];
  out->mLOG.mX[330ULL] = Plant_Subsystem_Monitoring_Diode6_n_v;
  out->mLOG.mX[331ULL] = t356->mX.mX[133ULL];
  out->mLOG.mX[333ULL] = t356->mU.mX[9ULL];
  out->mLOG.mX[334ULL] = Plant_Subsystem_Monitoring_Diode7_i;
  out->mLOG.mX[335ULL] = t356->mX.mX[106ULL];
  out->mLOG.mX[336ULL] = Plant_Subsystem_Monitoring_Diode7_n_v;
  out->mLOG.mX[337ULL] = t356->mX.mX[136ULL];
  out->mLOG.mX[339ULL] = t356->mU.mX[10ULL];
  out->mLOG.mX[340ULL] = Plant_Subsystem_Monitoring_Diode8_i;
  out->mLOG.mX[341ULL] = t356->mX.mX[107ULL];
  out->mLOG.mX[342ULL] = Plant_Subsystem_Monitoring_Diode8_n_v;
  out->mLOG.mX[343ULL] = t356->mX.mX[139ULL];
  out->mLOG.mX[345ULL] = t356->mU.mX[11ULL];
  out->mLOG.mX[346ULL] = Plant_Subsystem_Monitoring_Diode9_i;
  out->mLOG.mX[347ULL] = t356->mX.mX[98ULL];
  out->mLOG.mX[348ULL] = Plant_Subsystem_Monitoring_Diode9_n_v;
  out->mLOG.mX[349ULL] = t356->mX.mX[142ULL];
  out->mLOG.mX[351ULL] = t356->mU.mX[12ULL];
  out->mLOG.mX[352ULL] = Plant_Subsystem_Monitoring_Voltage_Sensor_V;
  out->mLOG.mX[353ULL] = t356->mX.mX[96ULL];
  out->mLOG.mX[354ULL] = Plant_Charger_Load_Batt0_v;
  out->mLOG.mX[355ULL] = t331;
  out->mLOG.mX[356ULL] = t356->mX.mX[100ULL];
  out->mLOG.mX[357ULL] = t356->mX.mX[96ULL];
  out->mLOG.mX[358ULL] = Plant_Subsystem_Monitoring_Voltage_Sensor10_V;
  out->mLOG.mX[359ULL] = t356->mX.mX[99ULL];
  out->mLOG.mX[360ULL] = t356->mX.mX[98ULL];
  out->mLOG.mX[361ULL] = Plant_Subsystem_Monitoring_Voltage_Sensor10_V;
  out->mLOG.mX[362ULL] = t356->mX.mX[99ULL];
  out->mLOG.mX[363ULL] = t356->mX.mX[99ULL];
  out->mLOG.mX[364ULL] = t356->mX.mX[99ULL];
  out->mLOG.mX[365ULL] = t331;
  out->mLOG.mX[366ULL] = t334;
  out->mLOG.mX[367ULL] = t356->mX.mX[101ULL];
  out->mLOG.mX[368ULL] = t356->mX.mX[100ULL];
  out->mLOG.mX[369ULL] = t334;
  out->mLOG.mX[370ULL] = t335;
  out->mLOG.mX[371ULL] = t356->mX.mX[102ULL];
  out->mLOG.mX[372ULL] = t356->mX.mX[101ULL];
  out->mLOG.mX[373ULL] = t335;
  out->mLOG.mX[374ULL] = Plant_Subsystem_Monitoring_Voltage_Sensor4_V;
  out->mLOG.mX[375ULL] = t356->mX.mX[103ULL];
  out->mLOG.mX[376ULL] = t356->mX.mX[102ULL];
  out->mLOG.mX[377ULL] = Plant_Subsystem_Monitoring_Voltage_Sensor4_V;
  out->mLOG.mX[378ULL] = t337;
  out->mLOG.mX[379ULL] = t356->mX.mX[104ULL];
  out->mLOG.mX[380ULL] = t356->mX.mX[103ULL];
  out->mLOG.mX[381ULL] = t337;
  out->mLOG.mX[382ULL] = Plant_Subsystem_Monitoring_Voltage_Sensor6_V;
  out->mLOG.mX[383ULL] = t356->mX.mX[105ULL];
  out->mLOG.mX[384ULL] = t356->mX.mX[104ULL];
  out->mLOG.mX[385ULL] = Plant_Subsystem_Monitoring_Voltage_Sensor6_V;
  out->mLOG.mX[386ULL] = Plant_Subsystem_Monitoring_Voltage_Sensor7_V;
  out->mLOG.mX[387ULL] = t356->mX.mX[106ULL];
  out->mLOG.mX[388ULL] = t356->mX.mX[105ULL];
  out->mLOG.mX[389ULL] = Plant_Subsystem_Monitoring_Voltage_Sensor7_V;
  out->mLOG.mX[390ULL] = Plant_Subsystem_Monitoring_Voltage_Sensor8_V;
  out->mLOG.mX[391ULL] = t356->mX.mX[107ULL];
  out->mLOG.mX[392ULL] = t356->mX.mX[106ULL];
  out->mLOG.mX[393ULL] = Plant_Subsystem_Monitoring_Voltage_Sensor8_V;
  out->mLOG.mX[394ULL] = Plant_Subsystem_Monitoring_Voltage_Sensor9_V;
  out->mLOG.mX[395ULL] = t356->mX.mX[98ULL];
  out->mLOG.mX[396ULL] = t356->mX.mX[107ULL];
  out->mLOG.mX[397ULL] = Plant_Subsystem_Monitoring_Voltage_Sensor9_V;
  out->mLOG.mX[398ULL] = Plant_Subsystem_Monitoring_Voltage_Sensor_V;
  out->mLOG.mX[399ULL] = t356->mX.mX[0ULL];
  out->mLOG.mX[400ULL] = t356->mX.mX[0ULL];
  out->mLOG.mX[401ULL] = t356->mX.mX[0ULL];
  out->mLOG.mX[402ULL] = t356->mX.mX[0ULL];
  out->mLOG.mX[403ULL] = t356->mX.mX[1ULL] * 0.00027777777777777778;
  out->mLOG.mX[404ULL] = t356->mX.mX[0ULL];
  out->mLOG.mX[405ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_i;
  out->mLOG.mX[406ULL] = t356->mX.mX[96ULL];
  out->mLOG.mX[407ULL] = t356->mX.mX[2ULL];
  out->mLOG.mX[408ULL] = t356->mX.mX[2ULL];
  out->mLOG.mX[409ULL] = t356->mX.mX[147ULL];
  out->mLOG.mX[410ULL] = t356->mX.mX[146ULL];
  out->mLOG.mX[411ULL] = Plant_Charger_Load_Batt0_v;
  for (t236 = 3ULL; t236 - 3ULL < 5ULL; t236++) {
    out->mLOG.mX[t236 + 409ULL] = t356->mX.mX[t236];
  }

  out->mLOG.mX[417ULL] = t356->mX.mX[145ULL];
  out->mLOG.mX[418ULL] = t356->mX.mX[148ULL] * 1000.0;
  out->mLOG.mX[419ULL] = t356->mX.mX[147ULL];
  out->mLOG.mX[420ULL] = t356->mX.mX[97ULL];
  out->mLOG.mX[421ULL] = t356->mX.mX[144ULL];
  out->mLOG.mX[422ULL] = t356->mX.mX[1ULL];
  out->mLOG.mX[423ULL] = t356->mX.mX[0ULL];
  out->mLOG.mX[424ULL] = t356->mX.mX[2ULL];
  out->mLOG.mX[425ULL] = t356->mX.mX[144ULL];
  out->mLOG.mX[426ULL] = t356->mX.mX[145ULL];
  out->mLOG.mX[427ULL] = t356->mX.mX[146ULL];
  out->mLOG.mX[428ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_i;
  out->mLOG.mX[429ULL] = t356->mX.mX[96ULL];
  out->mLOG.mX[430ULL] = t356->mX.mX[2ULL];
  out->mLOG.mX[431ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_ocv;
  out->mLOG.mX[432ULL] = Plant_Charger_Load_Batt0_v;
  out->mLOG.mX[433ULL] = t242;
  out->mLOG.mX[434ULL] = t356->mX.mX[147ULL];
  out->mLOG.mX[435ULL] = t356->mX.mX[147ULL];
  out->mLOG.mX[436ULL] = t356->mX.mX[0ULL];
  out->mLOG.mX[437ULL] = t356->mX.mX[149ULL] * 1000.0;
  out->mLOG.mX[438ULL] = t356->mX.mX[0ULL];
  out->mLOG.mX[439ULL] = t356->mX.mX[0ULL];
  out->mLOG.mX[440ULL] = t356->mX.mX[148ULL] * 1000.0;
  out->mLOG.mX[441ULL] = t356->mX.mX[97ULL];
  out->mLOG.mX[442ULL] = t356->mX.mX[8ULL];
  out->mLOG.mX[443ULL] = t356->mX.mX[8ULL];
  out->mLOG.mX[444ULL] = t356->mX.mX[8ULL];
  out->mLOG.mX[445ULL] = t356->mX.mX[8ULL];
  out->mLOG.mX[446ULL] = t356->mX.mX[9ULL] * 0.00027777777777777778;
  out->mLOG.mX[447ULL] = t356->mX.mX[8ULL];
  out->mLOG.mX[448ULL] = t244;
  out->mLOG.mX[449ULL] = t356->mX.mX[100ULL];
  out->mLOG.mX[450ULL] = t356->mX.mX[10ULL];
  out->mLOG.mX[451ULL] = t356->mX.mX[10ULL];
  out->mLOG.mX[452ULL] = t356->mX.mX[153ULL];
  out->mLOG.mX[453ULL] = t356->mX.mX[152ULL];
  out->mLOG.mX[454ULL] = t356->mX.mX[96ULL];
  for (t236 = 11ULL; t236 - 11ULL < 5ULL; t236++) {
    out->mLOG.mX[t236 + 444ULL] = t356->mX.mX[t236];
  }

  out->mLOG.mX[460ULL] = t356->mX.mX[151ULL];
  out->mLOG.mX[461ULL] = t356->mX.mX[154ULL] * 1000.0;
  out->mLOG.mX[462ULL] = t356->mX.mX[153ULL];
  out->mLOG.mX[463ULL] = t246;
  out->mLOG.mX[464ULL] = t356->mX.mX[150ULL];
  out->mLOG.mX[465ULL] = t356->mX.mX[9ULL];
  out->mLOG.mX[466ULL] = t356->mX.mX[8ULL];
  out->mLOG.mX[467ULL] = t356->mX.mX[10ULL];
  out->mLOG.mX[468ULL] = t356->mX.mX[150ULL];
  out->mLOG.mX[469ULL] = t356->mX.mX[151ULL];
  out->mLOG.mX[470ULL] = t356->mX.mX[152ULL];
  out->mLOG.mX[471ULL] = t244;
  out->mLOG.mX[472ULL] = t356->mX.mX[100ULL];
  out->mLOG.mX[473ULL] = t356->mX.mX[10ULL];
  out->mLOG.mX[474ULL] = t245;
  out->mLOG.mX[475ULL] = t356->mX.mX[96ULL];
  out->mLOG.mX[476ULL] = t244 * t244 * (t250 > 8.200000000000002E-8 ? t250 :
    8.200000000000002E-8) * 0.001 + ((((t356->mX.mX[11ULL] * t356->mX.mX[11ULL] *
    0.0 + t356->mX.mX[12ULL] * t356->mX.mX[12ULL] * 0.0) + t356->mX.mX[13ULL] *
    t356->mX.mX[13ULL] * 0.0) + t356->mX.mX[14ULL] * t356->mX.mX[14ULL] * 0.0) +
    t356->mX.mX[15ULL] * t356->mX.mX[15ULL] * 0.0) * 0.001;
  out->mLOG.mX[477ULL] = t356->mX.mX[153ULL];
  out->mLOG.mX[478ULL] = t356->mX.mX[153ULL];
  out->mLOG.mX[479ULL] = t356->mX.mX[8ULL];
  out->mLOG.mX[480ULL] = ((t356->mX.mX[0ULL] * 2.0E-6 + t356->mX.mX[8ULL] *
    -4.0E-6) + t356->mX.mX[16ULL] * 2.0E-6) * 1000.0;
  out->mLOG.mX[481ULL] = t356->mX.mX[8ULL];
  out->mLOG.mX[482ULL] = t356->mX.mX[8ULL];
  out->mLOG.mX[483ULL] = t356->mX.mX[154ULL] * 1000.0;
  out->mLOG.mX[484ULL] = t246;
  out->mLOG.mX[485ULL] = t356->mX.mX[17ULL];
  out->mLOG.mX[486ULL] = t356->mX.mX[17ULL];
  out->mLOG.mX[487ULL] = t356->mX.mX[17ULL];
  out->mLOG.mX[488ULL] = t356->mX.mX[17ULL];
  out->mLOG.mX[489ULL] = t356->mX.mX[18ULL] * 0.00027777777777777778;
  out->mLOG.mX[490ULL] = t356->mX.mX[17ULL];
  out->mLOG.mX[491ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_i;
  out->mLOG.mX[492ULL] = t356->mX.mX[99ULL];
  out->mLOG.mX[493ULL] = t356->mX.mX[19ULL];
  out->mLOG.mX[494ULL] = t356->mX.mX[19ULL];
  out->mLOG.mX[495ULL] = t356->mX.mX[158ULL];
  out->mLOG.mX[496ULL] = t356->mX.mX[157ULL];
  out->mLOG.mX[497ULL] = t356->mX.mX[98ULL];
  for (t236 = 20ULL; t236 - 20ULL < 5ULL; t236++) {
    out->mLOG.mX[t236 + 478ULL] = t356->mX.mX[t236];
  }

  out->mLOG.mX[503ULL] = t356->mX.mX[156ULL];
  out->mLOG.mX[504ULL] = t356->mX.mX[159ULL] * 1000.0;
  out->mLOG.mX[505ULL] = t356->mX.mX[158ULL];
  out->mLOG.mX[506ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_xxR0;
  out->mLOG.mX[507ULL] = t356->mX.mX[155ULL];
  out->mLOG.mX[508ULL] = t356->mX.mX[18ULL];
  out->mLOG.mX[509ULL] = t356->mX.mX[17ULL];
  out->mLOG.mX[510ULL] = t356->mX.mX[19ULL];
  out->mLOG.mX[511ULL] = t356->mX.mX[155ULL];
  out->mLOG.mX[512ULL] = t356->mX.mX[156ULL];
  out->mLOG.mX[513ULL] = t356->mX.mX[157ULL];
  out->mLOG.mX[514ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_i;
  out->mLOG.mX[515ULL] = t356->mX.mX[99ULL];
  out->mLOG.mX[516ULL] = t356->mX.mX[19ULL];
  out->mLOG.mX[517ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_ocv;
  out->mLOG.mX[518ULL] = t356->mX.mX[98ULL];
  out->mLOG.mX[519ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_i *
    Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_i *
    (Plant_Subsystem_Series_Module_Battery_Table_Based11_cell_temperature >
     8.200000000000002E-8 ?
     Plant_Subsystem_Series_Module_Battery_Table_Based11_cell_temperature :
     8.200000000000002E-8) * 0.001 + ((((t356->mX.mX[20ULL] * t356->mX.mX[20ULL]
    * 0.0 + t356->mX.mX[21ULL] * t356->mX.mX[21ULL] * 0.0) + t356->mX.mX[22ULL] *
    t356->mX.mX[22ULL] * 0.0) + t356->mX.mX[23ULL] * t356->mX.mX[23ULL] * 0.0) +
    t356->mX.mX[24ULL] * t356->mX.mX[24ULL] * 0.0) * 0.001;
  out->mLOG.mX[520ULL] = t356->mX.mX[158ULL];
  out->mLOG.mX[521ULL] = t356->mX.mX[158ULL];
  out->mLOG.mX[522ULL] = t356->mX.mX[17ULL];
  out->mLOG.mX[523ULL] = ((t356->mX.mX[17ULL] * -4.0E-6 + t356->mX.mX[25ULL] *
    2.0E-6) + t356->mX.mX[26ULL] * 2.0E-6) * 1000.0;
  out->mLOG.mX[524ULL] = t356->mX.mX[17ULL];
  out->mLOG.mX[525ULL] = t356->mX.mX[17ULL];
  out->mLOG.mX[526ULL] = t356->mX.mX[159ULL] * 1000.0;
  out->mLOG.mX[527ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_xxR0;
  out->mLOG.mX[528ULL] = t356->mX.mX[158ULL];
  out->mLOG.mX[529ULL] = t356->mX.mX[25ULL];
  out->mLOG.mX[530ULL] = t356->mX.mX[25ULL];
  out->mLOG.mX[531ULL] = t356->mX.mX[25ULL];
  out->mLOG.mX[532ULL] = t356->mX.mX[25ULL];
  out->mLOG.mX[533ULL] = t356->mX.mX[27ULL] * 0.00027777777777777778;
  out->mLOG.mX[534ULL] = t356->mX.mX[25ULL];
  out->mLOG.mX[535ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_i;
  out->mLOG.mX[536ULL] = t356->mX.mX[28ULL];
  out->mLOG.mX[537ULL] = t356->mX.mX[28ULL];
  out->mLOG.mX[538ULL] = t356->mX.mX[163ULL];
  out->mLOG.mX[539ULL] = t356->mX.mX[162ULL];
  out->mLOG.mX[540ULL] = t356->mX.mX[99ULL];
  for (t236 = 29ULL; t236 - 29ULL < 5ULL; t236++) {
    out->mLOG.mX[t236 + 512ULL] = t356->mX.mX[t236];
  }

  out->mLOG.mX[546ULL] = t356->mX.mX[161ULL];
  out->mLOG.mX[547ULL] = t356->mX.mX[164ULL] * 1000.0;
  out->mLOG.mX[548ULL] = t356->mX.mX[163ULL];
  out->mLOG.mX[549ULL] = t356->mX.mX[99ULL];
  out->mLOG.mX[550ULL] = t356->mX.mX[160ULL];
  out->mLOG.mX[551ULL] = t356->mX.mX[27ULL];
  out->mLOG.mX[552ULL] = t356->mX.mX[25ULL];
  out->mLOG.mX[553ULL] = t356->mX.mX[28ULL];
  out->mLOG.mX[554ULL] = t356->mX.mX[160ULL];
  out->mLOG.mX[555ULL] = t356->mX.mX[161ULL];
  out->mLOG.mX[556ULL] = t356->mX.mX[162ULL];
  out->mLOG.mX[557ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_i;
  out->mLOG.mX[558ULL] = t356->mX.mX[28ULL];
  out->mLOG.mX[559ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_ocv;
  out->mLOG.mX[560ULL] = t356->mX.mX[99ULL];
  out->mLOG.mX[561ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_i *
    Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_i *
    (t260 > 8.200000000000002E-8 ? t260 : 8.200000000000002E-8) * 0.001 +
    ((((t356->mX.mX[29ULL] * t356->mX.mX[29ULL] * 0.0 + t356->mX.mX[30ULL] *
        t356->mX.mX[30ULL] * 0.0) + t356->mX.mX[31ULL] * t356->mX.mX[31ULL] *
       0.0) + t356->mX.mX[32ULL] * t356->mX.mX[32ULL] * 0.0) + t356->mX.mX[33ULL]
     * t356->mX.mX[33ULL] * 0.0) * 0.001;
  out->mLOG.mX[562ULL] = t356->mX.mX[163ULL];
  out->mLOG.mX[563ULL] = t356->mX.mX[163ULL];
  out->mLOG.mX[564ULL] = t356->mX.mX[25ULL];
  out->mLOG.mX[565ULL] = t259 * 1000.0;
  out->mLOG.mX[566ULL] = t356->mX.mX[25ULL];
  out->mLOG.mX[567ULL] = t356->mX.mX[25ULL];
  out->mLOG.mX[568ULL] = t356->mX.mX[164ULL] * 1000.0;
  out->mLOG.mX[569ULL] = t356->mX.mX[99ULL];
  out->mLOG.mX[570ULL] = t356->mX.mX[163ULL];
  out->mLOG.mX[571ULL] = t356->mX.mX[153ULL];
  out->mLOG.mX[572ULL] = t356->mX.mX[16ULL];
  out->mLOG.mX[573ULL] = t356->mX.mX[16ULL];
  out->mLOG.mX[574ULL] = t356->mX.mX[16ULL];
  out->mLOG.mX[575ULL] = t356->mX.mX[16ULL];
  out->mLOG.mX[576ULL] = t356->mX.mX[34ULL] * 0.00027777777777777778;
  out->mLOG.mX[577ULL] = t356->mX.mX[16ULL];
  out->mLOG.mX[578ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_i;
  out->mLOG.mX[579ULL] = t356->mX.mX[101ULL];
  out->mLOG.mX[580ULL] = t356->mX.mX[35ULL];
  out->mLOG.mX[581ULL] = t356->mX.mX[35ULL];
  out->mLOG.mX[582ULL] = t356->mX.mX[168ULL];
  out->mLOG.mX[583ULL] = t356->mX.mX[167ULL];
  out->mLOG.mX[584ULL] = t356->mX.mX[100ULL];
  for (t236 = 36ULL; t236 - 36ULL < 5ULL; t236++) {
    out->mLOG.mX[t236 + 549ULL] = t356->mX.mX[t236];
  }

  out->mLOG.mX[590ULL] = t356->mX.mX[166ULL];
  out->mLOG.mX[591ULL] = t356->mX.mX[169ULL] * 1000.0;
  out->mLOG.mX[592ULL] = t356->mX.mX[168ULL];
  out->mLOG.mX[593ULL] = intrm_sf_mf_4;
  out->mLOG.mX[594ULL] = t356->mX.mX[165ULL];
  out->mLOG.mX[595ULL] = t356->mX.mX[34ULL];
  out->mLOG.mX[596ULL] = t356->mX.mX[16ULL];
  out->mLOG.mX[597ULL] = t356->mX.mX[35ULL];
  out->mLOG.mX[598ULL] = t356->mX.mX[165ULL];
  out->mLOG.mX[599ULL] = t356->mX.mX[166ULL];
  out->mLOG.mX[600ULL] = t356->mX.mX[167ULL];
  out->mLOG.mX[601ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_i;
  out->mLOG.mX[602ULL] = t356->mX.mX[101ULL];
  out->mLOG.mX[603ULL] = t356->mX.mX[35ULL];
  out->mLOG.mX[604ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_ocv;
  out->mLOG.mX[605ULL] = t356->mX.mX[100ULL];
  out->mLOG.mX[606ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_i *
    Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_i * (t265
    > 8.200000000000002E-8 ? t265 : 8.200000000000002E-8) * 0.001 +
    ((((t356->mX.mX[36ULL] * t356->mX.mX[36ULL] * 0.0 + t356->mX.mX[37ULL] *
        t356->mX.mX[37ULL] * 0.0) + t356->mX.mX[38ULL] * t356->mX.mX[38ULL] *
       0.0) + t356->mX.mX[39ULL] * t356->mX.mX[39ULL] * 0.0) + t356->mX.mX[40ULL]
     * t356->mX.mX[40ULL] * 0.0) * 0.001;
  out->mLOG.mX[607ULL] = t356->mX.mX[168ULL];
  out->mLOG.mX[608ULL] = t356->mX.mX[168ULL];
  out->mLOG.mX[609ULL] = t356->mX.mX[16ULL];
  out->mLOG.mX[610ULL] = ((t356->mX.mX[8ULL] * 2.0E-6 + t356->mX.mX[16ULL] *
    -4.0E-6) + t356->mX.mX[41ULL] * 2.0E-6) * 1000.0;
  out->mLOG.mX[611ULL] = t356->mX.mX[16ULL];
  out->mLOG.mX[612ULL] = t356->mX.mX[16ULL];
  out->mLOG.mX[613ULL] = t356->mX.mX[169ULL] * 1000.0;
  out->mLOG.mX[614ULL] = intrm_sf_mf_4;
  out->mLOG.mX[615ULL] = t356->mX.mX[168ULL];
  out->mLOG.mX[616ULL] = t356->mX.mX[41ULL];
  out->mLOG.mX[617ULL] = t356->mX.mX[41ULL];
  out->mLOG.mX[618ULL] = t356->mX.mX[41ULL];
  out->mLOG.mX[619ULL] = t356->mX.mX[41ULL];
  out->mLOG.mX[620ULL] = t356->mX.mX[42ULL] * 0.00027777777777777778;
  out->mLOG.mX[621ULL] = t356->mX.mX[41ULL];
  out->mLOG.mX[622ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i;
  out->mLOG.mX[623ULL] = t356->mX.mX[102ULL];
  out->mLOG.mX[624ULL] = t356->mX.mX[43ULL];
  out->mLOG.mX[625ULL] = t356->mX.mX[43ULL];
  out->mLOG.mX[626ULL] = t356->mX.mX[173ULL];
  out->mLOG.mX[627ULL] = t356->mX.mX[172ULL];
  out->mLOG.mX[628ULL] = t356->mX.mX[101ULL];
  for (t236 = 44ULL; t236 - 44ULL < 5ULL; t236++) {
    out->mLOG.mX[t236 + 585ULL] = t356->mX.mX[t236];
  }

  out->mLOG.mX[634ULL] = t356->mX.mX[171ULL];
  out->mLOG.mX[635ULL] = t356->mX.mX[174ULL] * 1000.0;
  out->mLOG.mX[636ULL] = t356->mX.mX[173ULL];
  out->mLOG.mX[637ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_xxR0;
  out->mLOG.mX[638ULL] = t356->mX.mX[170ULL];
  out->mLOG.mX[639ULL] = t356->mX.mX[42ULL];
  out->mLOG.mX[640ULL] = t356->mX.mX[41ULL];
  out->mLOG.mX[641ULL] = t356->mX.mX[43ULL];
  out->mLOG.mX[642ULL] = t356->mX.mX[170ULL];
  out->mLOG.mX[643ULL] = t356->mX.mX[171ULL];
  out->mLOG.mX[644ULL] = t356->mX.mX[172ULL];
  out->mLOG.mX[645ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i;
  out->mLOG.mX[646ULL] = t356->mX.mX[102ULL];
  out->mLOG.mX[647ULL] = t356->mX.mX[43ULL];
  out->mLOG.mX[648ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_xVint;
  out->mLOG.mX[649ULL] = t356->mX.mX[101ULL];
  out->mLOG.mX[650ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i *
    Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i * (t270
    > 8.200000000000002E-8 ? t270 : 8.200000000000002E-8) * 0.001 +
    ((((t356->mX.mX[44ULL] * t356->mX.mX[44ULL] * 0.0 + t356->mX.mX[45ULL] *
        t356->mX.mX[45ULL] * 0.0) + t356->mX.mX[46ULL] * t356->mX.mX[46ULL] *
       0.0) + t356->mX.mX[47ULL] * t356->mX.mX[47ULL] * 0.0) + t356->mX.mX[48ULL]
     * t356->mX.mX[48ULL] * 0.0) * 0.001;
  out->mLOG.mX[651ULL] = t356->mX.mX[173ULL];
  out->mLOG.mX[652ULL] = t356->mX.mX[173ULL];
  out->mLOG.mX[653ULL] = t356->mX.mX[41ULL];
  out->mLOG.mX[654ULL] = ((t356->mX.mX[16ULL] * 2.0E-6 + t356->mX.mX[41ULL] *
    -4.0E-6) + t356->mX.mX[49ULL] * 2.0E-6) * 1000.0;
  out->mLOG.mX[655ULL] = t356->mX.mX[41ULL];
  out->mLOG.mX[656ULL] = t356->mX.mX[41ULL];
  out->mLOG.mX[657ULL] = t356->mX.mX[174ULL] * 1000.0;
  out->mLOG.mX[658ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_xxR0;
  out->mLOG.mX[659ULL] = t356->mX.mX[173ULL];
  out->mLOG.mX[660ULL] = t356->mX.mX[49ULL];
  out->mLOG.mX[661ULL] = t356->mX.mX[49ULL];
  out->mLOG.mX[662ULL] = t356->mX.mX[49ULL];
  out->mLOG.mX[663ULL] = t356->mX.mX[49ULL];
  out->mLOG.mX[664ULL] = t356->mX.mX[50ULL] * 0.00027777777777777778;
  out->mLOG.mX[665ULL] = t356->mX.mX[49ULL];
  out->mLOG.mX[666ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_i;
  out->mLOG.mX[667ULL] = t356->mX.mX[103ULL];
  out->mLOG.mX[668ULL] = t356->mX.mX[51ULL];
  out->mLOG.mX[669ULL] = t356->mX.mX[51ULL];
  out->mLOG.mX[670ULL] = t356->mX.mX[178ULL];
  out->mLOG.mX[671ULL] = t356->mX.mX[177ULL];
  out->mLOG.mX[672ULL] = t356->mX.mX[102ULL];
  for (t236 = 52ULL; t236 - 52ULL < 5ULL; t236++) {
    out->mLOG.mX[t236 + 621ULL] = t356->mX.mX[t236];
  }

  out->mLOG.mX[678ULL] = t356->mX.mX[176ULL];
  out->mLOG.mX[679ULL] = t356->mX.mX[179ULL] * 1000.0;
  out->mLOG.mX[680ULL] = t356->mX.mX[178ULL];
  out->mLOG.mX[681ULL] = t271;
  out->mLOG.mX[682ULL] = t356->mX.mX[175ULL];
  out->mLOG.mX[683ULL] = t356->mX.mX[50ULL];
  out->mLOG.mX[684ULL] = t356->mX.mX[49ULL];
  out->mLOG.mX[685ULL] = t356->mX.mX[51ULL];
  out->mLOG.mX[686ULL] = t356->mX.mX[175ULL];
  out->mLOG.mX[687ULL] = t356->mX.mX[176ULL];
  out->mLOG.mX[688ULL] = t356->mX.mX[177ULL];
  out->mLOG.mX[689ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_i;
  out->mLOG.mX[690ULL] = t356->mX.mX[103ULL];
  out->mLOG.mX[691ULL] = t356->mX.mX[51ULL];
  out->mLOG.mX[692ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_xVint;
  out->mLOG.mX[693ULL] = t356->mX.mX[102ULL];
  out->mLOG.mX[694ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_i *
    Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_i *
    (Plant_Subsystem_Series_Module_Battery_Table_Based5_cell_temperature >
     8.200000000000002E-8 ?
     Plant_Subsystem_Series_Module_Battery_Table_Based5_cell_temperature :
     8.200000000000002E-8) * 0.001 + ((((t356->mX.mX[52ULL] * t356->mX.mX[52ULL]
    * 0.0 + t356->mX.mX[53ULL] * t356->mX.mX[53ULL] * 0.0) + t356->mX.mX[54ULL] *
    t356->mX.mX[54ULL] * 0.0) + t356->mX.mX[55ULL] * t356->mX.mX[55ULL] * 0.0) +
    t356->mX.mX[56ULL] * t356->mX.mX[56ULL] * 0.0) * 0.001;
  out->mLOG.mX[695ULL] = t356->mX.mX[178ULL];
  out->mLOG.mX[696ULL] = t356->mX.mX[178ULL];
  out->mLOG.mX[697ULL] = t356->mX.mX[49ULL];
  out->mLOG.mX[698ULL] = ((t356->mX.mX[41ULL] * 2.0E-6 + t356->mX.mX[49ULL] *
    -4.0E-6) + t356->mX.mX[57ULL] * 2.0E-6) * 1000.0;
  out->mLOG.mX[699ULL] = t356->mX.mX[49ULL];
  out->mLOG.mX[700ULL] = t356->mX.mX[49ULL];
  out->mLOG.mX[701ULL] = t356->mX.mX[179ULL] * 1000.0;
  out->mLOG.mX[702ULL] = t271;
  out->mLOG.mX[703ULL] = t356->mX.mX[178ULL];
  out->mLOG.mX[704ULL] = t356->mX.mX[57ULL];
  out->mLOG.mX[705ULL] = t356->mX.mX[57ULL];
  out->mLOG.mX[706ULL] = t356->mX.mX[57ULL];
  out->mLOG.mX[707ULL] = t356->mX.mX[57ULL];
  out->mLOG.mX[708ULL] = t356->mX.mX[58ULL] * 0.00027777777777777778;
  out->mLOG.mX[709ULL] = t356->mX.mX[57ULL];
  out->mLOG.mX[710ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_i;
  out->mLOG.mX[711ULL] = t356->mX.mX[104ULL];
  out->mLOG.mX[712ULL] = t356->mX.mX[59ULL];
  out->mLOG.mX[713ULL] = t356->mX.mX[59ULL];
  out->mLOG.mX[714ULL] = t356->mX.mX[183ULL];
  out->mLOG.mX[715ULL] = t356->mX.mX[182ULL];
  out->mLOG.mX[716ULL] = t356->mX.mX[103ULL];
  for (t236 = 60ULL; t236 - 60ULL < 5ULL; t236++) {
    out->mLOG.mX[t236 + 657ULL] = t356->mX.mX[t236];
  }

  out->mLOG.mX[722ULL] = t356->mX.mX[181ULL];
  out->mLOG.mX[723ULL] = t356->mX.mX[184ULL] * 1000.0;
  out->mLOG.mX[724ULL] = t356->mX.mX[183ULL];
  out->mLOG.mX[725ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_xxR0;
  out->mLOG.mX[726ULL] = t356->mX.mX[180ULL];
  out->mLOG.mX[727ULL] = t356->mX.mX[58ULL];
  out->mLOG.mX[728ULL] = t356->mX.mX[57ULL];
  out->mLOG.mX[729ULL] = t356->mX.mX[59ULL];
  out->mLOG.mX[730ULL] = t356->mX.mX[180ULL];
  out->mLOG.mX[731ULL] = t356->mX.mX[181ULL];
  out->mLOG.mX[732ULL] = t356->mX.mX[182ULL];
  out->mLOG.mX[733ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_i;
  out->mLOG.mX[734ULL] = t356->mX.mX[104ULL];
  out->mLOG.mX[735ULL] = t356->mX.mX[59ULL];
  out->mLOG.mX[736ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_ocv;
  out->mLOG.mX[737ULL] = t356->mX.mX[103ULL];
  out->mLOG.mX[738ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_i *
    Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_i *
    (Plant_Subsystem_Series_Module_Battery_Table_Based6_cell_temperature >
     8.200000000000002E-8 ?
     Plant_Subsystem_Series_Module_Battery_Table_Based6_cell_temperature :
     8.200000000000002E-8) * 0.001 + ((((t356->mX.mX[60ULL] * t356->mX.mX[60ULL]
    * 0.0 + t356->mX.mX[61ULL] * t356->mX.mX[61ULL] * 0.0) + t356->mX.mX[62ULL] *
    t356->mX.mX[62ULL] * 0.0) + t356->mX.mX[63ULL] * t356->mX.mX[63ULL] * 0.0) +
    t356->mX.mX[64ULL] * t356->mX.mX[64ULL] * 0.0) * 0.001;
  out->mLOG.mX[739ULL] = t356->mX.mX[183ULL];
  out->mLOG.mX[740ULL] = t356->mX.mX[183ULL];
  out->mLOG.mX[741ULL] = t356->mX.mX[57ULL];
  out->mLOG.mX[742ULL] = ((t356->mX.mX[49ULL] * 2.0E-6 + t356->mX.mX[57ULL] *
    -4.0E-6) + t356->mX.mX[65ULL] * 2.0E-6) * 1000.0;
  out->mLOG.mX[743ULL] = t356->mX.mX[57ULL];
  out->mLOG.mX[744ULL] = t356->mX.mX[57ULL];
  out->mLOG.mX[745ULL] = t356->mX.mX[184ULL] * 1000.0;
  out->mLOG.mX[746ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_xxR0;
  out->mLOG.mX[747ULL] = t356->mX.mX[183ULL];
  out->mLOG.mX[748ULL] = t356->mX.mX[65ULL];
  out->mLOG.mX[749ULL] = t356->mX.mX[65ULL];
  out->mLOG.mX[750ULL] = t356->mX.mX[65ULL];
  out->mLOG.mX[751ULL] = t356->mX.mX[65ULL];
  out->mLOG.mX[752ULL] = t356->mX.mX[66ULL] * 0.00027777777777777778;
  out->mLOG.mX[753ULL] = t356->mX.mX[65ULL];
  out->mLOG.mX[754ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_i;
  out->mLOG.mX[755ULL] = t356->mX.mX[105ULL];
  out->mLOG.mX[756ULL] = t356->mX.mX[67ULL];
  out->mLOG.mX[757ULL] = t356->mX.mX[67ULL];
  out->mLOG.mX[758ULL] = t356->mX.mX[188ULL];
  out->mLOG.mX[759ULL] = t356->mX.mX[187ULL];
  out->mLOG.mX[760ULL] = t356->mX.mX[104ULL];
  for (t236 = 68ULL; t236 - 68ULL < 5ULL; t236++) {
    out->mLOG.mX[t236 + 693ULL] = t356->mX.mX[t236];
  }

  out->mLOG.mX[766ULL] = t356->mX.mX[186ULL];
  out->mLOG.mX[767ULL] = t356->mX.mX[189ULL] * 1000.0;
  out->mLOG.mX[768ULL] = t356->mX.mX[188ULL];
  out->mLOG.mX[769ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_xxR0;
  out->mLOG.mX[770ULL] = t356->mX.mX[185ULL];
  out->mLOG.mX[771ULL] = t356->mX.mX[66ULL];
  out->mLOG.mX[772ULL] = t356->mX.mX[65ULL];
  out->mLOG.mX[773ULL] = t356->mX.mX[67ULL];
  out->mLOG.mX[774ULL] = t356->mX.mX[185ULL];
  out->mLOG.mX[775ULL] = t356->mX.mX[186ULL];
  out->mLOG.mX[776ULL] = t356->mX.mX[187ULL];
  out->mLOG.mX[777ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_i;
  out->mLOG.mX[778ULL] = t356->mX.mX[105ULL];
  out->mLOG.mX[779ULL] = t356->mX.mX[67ULL];
  out->mLOG.mX[780ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_ocv;
  out->mLOG.mX[781ULL] = t356->mX.mX[104ULL];
  out->mLOG.mX[782ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_i *
    Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_i *
    (Plant_Subsystem_Series_Module_Battery_Table_Based7_cell_temperature >
     8.200000000000002E-8 ?
     Plant_Subsystem_Series_Module_Battery_Table_Based7_cell_temperature :
     8.200000000000002E-8) * 0.001 + ((((t356->mX.mX[68ULL] * t356->mX.mX[68ULL]
    * 0.0 + t356->mX.mX[69ULL] * t356->mX.mX[69ULL] * 0.0) + t356->mX.mX[70ULL] *
    t356->mX.mX[70ULL] * 0.0) + t356->mX.mX[71ULL] * t356->mX.mX[71ULL] * 0.0) +
    t356->mX.mX[72ULL] * t356->mX.mX[72ULL] * 0.0) * 0.001;
  out->mLOG.mX[783ULL] = t356->mX.mX[188ULL];
  out->mLOG.mX[784ULL] = t356->mX.mX[188ULL];
  out->mLOG.mX[785ULL] = t356->mX.mX[65ULL];
  out->mLOG.mX[786ULL] = ((t356->mX.mX[57ULL] * 2.0E-6 + t356->mX.mX[65ULL] *
    -4.0E-6) + t356->mX.mX[73ULL] * 2.0E-6) * 1000.0;
  out->mLOG.mX[787ULL] = t356->mX.mX[65ULL];
  out->mLOG.mX[788ULL] = t356->mX.mX[65ULL];
  out->mLOG.mX[789ULL] = t356->mX.mX[189ULL] * 1000.0;
  out->mLOG.mX[790ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_xxR0;
  out->mLOG.mX[791ULL] = t356->mX.mX[188ULL];
  out->mLOG.mX[792ULL] = t356->mX.mX[73ULL];
  out->mLOG.mX[793ULL] = t356->mX.mX[73ULL];
  out->mLOG.mX[794ULL] = t356->mX.mX[73ULL];
  out->mLOG.mX[795ULL] = t356->mX.mX[73ULL];
  out->mLOG.mX[796ULL] = t356->mX.mX[74ULL] * 0.00027777777777777778;
  out->mLOG.mX[797ULL] = t356->mX.mX[73ULL];
  out->mLOG.mX[798ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based7_electricalModel_i;
  out->mLOG.mX[799ULL] = t356->mX.mX[106ULL];
  out->mLOG.mX[800ULL] = t356->mX.mX[75ULL];
  out->mLOG.mX[801ULL] = t356->mX.mX[75ULL];
  out->mLOG.mX[802ULL] = t356->mX.mX[193ULL];
  out->mLOG.mX[803ULL] = t356->mX.mX[192ULL];
  out->mLOG.mX[804ULL] = t356->mX.mX[105ULL];
  for (t236 = 76ULL; t236 - 76ULL < 5ULL; t236++) {
    out->mLOG.mX[t236 + 729ULL] = t356->mX.mX[t236];
  }

  out->mLOG.mX[810ULL] = t356->mX.mX[191ULL];
  out->mLOG.mX[811ULL] = t356->mX.mX[194ULL] * 1000.0;
  out->mLOG.mX[812ULL] = t356->mX.mX[193ULL];
  out->mLOG.mX[813ULL] = t286;
  out->mLOG.mX[814ULL] = t356->mX.mX[190ULL];
  out->mLOG.mX[815ULL] = t356->mX.mX[74ULL];
  out->mLOG.mX[816ULL] = t356->mX.mX[73ULL];
  out->mLOG.mX[817ULL] = t356->mX.mX[75ULL];
  out->mLOG.mX[818ULL] = t356->mX.mX[190ULL];
  out->mLOG.mX[819ULL] = t356->mX.mX[191ULL];
  out->mLOG.mX[820ULL] = t356->mX.mX[192ULL];
  out->mLOG.mX[821ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based7_electricalModel_i;
  out->mLOG.mX[822ULL] = t356->mX.mX[106ULL];
  out->mLOG.mX[823ULL] = t356->mX.mX[75ULL];
  out->mLOG.mX[824ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based7_electricalModel_ocv;
  out->mLOG.mX[825ULL] = t356->mX.mX[105ULL];
  out->mLOG.mX[826ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based7_electricalModel_i *
    Plant_Subsystem_Series_Module_Battery_Table_Based7_electricalModel_i *
    (Plant_Subsystem_Series_Module_Battery_Table_Based8_cell_temperature >
     8.200000000000002E-8 ?
     Plant_Subsystem_Series_Module_Battery_Table_Based8_cell_temperature :
     8.200000000000002E-8) * 0.001 + ((((t356->mX.mX[76ULL] * t356->mX.mX[76ULL]
    * 0.0 + t356->mX.mX[77ULL] * t356->mX.mX[77ULL] * 0.0) + t356->mX.mX[78ULL] *
    t356->mX.mX[78ULL] * 0.0) + t356->mX.mX[79ULL] * t356->mX.mX[79ULL] * 0.0) +
    t356->mX.mX[80ULL] * t356->mX.mX[80ULL] * 0.0) * 0.001;
  out->mLOG.mX[827ULL] = t356->mX.mX[193ULL];
  out->mLOG.mX[828ULL] = t356->mX.mX[193ULL];
  out->mLOG.mX[829ULL] = t356->mX.mX[73ULL];
  out->mLOG.mX[830ULL] = ((t356->mX.mX[65ULL] * 2.0E-6 + t356->mX.mX[73ULL] *
    -4.0E-6) + t356->mX.mX[81ULL] * 2.0E-6) * 1000.0;
  out->mLOG.mX[831ULL] = t356->mX.mX[73ULL];
  out->mLOG.mX[832ULL] = t356->mX.mX[73ULL];
  out->mLOG.mX[833ULL] = t356->mX.mX[194ULL] * 1000.0;
  out->mLOG.mX[834ULL] = t286;
  out->mLOG.mX[835ULL] = t356->mX.mX[193ULL];
  out->mLOG.mX[836ULL] = t356->mX.mX[81ULL];
  out->mLOG.mX[837ULL] = t356->mX.mX[81ULL];
  out->mLOG.mX[838ULL] = t356->mX.mX[81ULL];
  out->mLOG.mX[839ULL] = t356->mX.mX[81ULL];
  out->mLOG.mX[840ULL] = t356->mX.mX[82ULL] * 0.00027777777777777778;
  out->mLOG.mX[841ULL] = t356->mX.mX[81ULL];
  out->mLOG.mX[842ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_i;
  out->mLOG.mX[843ULL] = t356->mX.mX[107ULL];
  out->mLOG.mX[844ULL] = t356->mX.mX[83ULL];
  out->mLOG.mX[845ULL] = t356->mX.mX[83ULL];
  out->mLOG.mX[846ULL] = t356->mX.mX[198ULL];
  out->mLOG.mX[847ULL] = t356->mX.mX[197ULL];
  out->mLOG.mX[848ULL] = t356->mX.mX[106ULL];
  for (t236 = 84ULL; t236 - 84ULL < 5ULL; t236++) {
    out->mLOG.mX[t236 + 765ULL] = t356->mX.mX[t236];
  }

  out->mLOG.mX[854ULL] = t356->mX.mX[196ULL];
  out->mLOG.mX[855ULL] = t356->mX.mX[199ULL] * 1000.0;
  out->mLOG.mX[856ULL] = t356->mX.mX[198ULL];
  out->mLOG.mX[857ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_v;
  out->mLOG.mX[858ULL] = t356->mX.mX[195ULL];
  out->mLOG.mX[859ULL] = t356->mX.mX[82ULL];
  out->mLOG.mX[860ULL] = t356->mX.mX[81ULL];
  out->mLOG.mX[861ULL] = t356->mX.mX[83ULL];
  out->mLOG.mX[862ULL] = t356->mX.mX[195ULL];
  out->mLOG.mX[863ULL] = t356->mX.mX[196ULL];
  out->mLOG.mX[864ULL] = t356->mX.mX[197ULL];
  out->mLOG.mX[865ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_i;
  out->mLOG.mX[866ULL] = t356->mX.mX[107ULL];
  out->mLOG.mX[867ULL] = t356->mX.mX[83ULL];
  out->mLOG.mX[868ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_xVint;
  out->mLOG.mX[869ULL] = t356->mX.mX[106ULL];
  out->mLOG.mX[870ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_i *
    Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_i *
    (Plant_Subsystem_Series_Module_Battery_Table_Based9_cell_temperature >
     8.200000000000002E-8 ?
     Plant_Subsystem_Series_Module_Battery_Table_Based9_cell_temperature :
     8.200000000000002E-8) * 0.001 + ((((t356->mX.mX[84ULL] * t356->mX.mX[84ULL]
    * 0.0 + t356->mX.mX[85ULL] * t356->mX.mX[85ULL] * 0.0) + t356->mX.mX[86ULL] *
    t356->mX.mX[86ULL] * 0.0) + t356->mX.mX[87ULL] * t356->mX.mX[87ULL] * 0.0) +
    t356->mX.mX[88ULL] * t356->mX.mX[88ULL] * 0.0) * 0.001;
  out->mLOG.mX[871ULL] = t356->mX.mX[198ULL];
  out->mLOG.mX[872ULL] = t356->mX.mX[198ULL];
  out->mLOG.mX[873ULL] = t356->mX.mX[81ULL];
  out->mLOG.mX[874ULL] = ((t356->mX.mX[73ULL] * 2.0E-6 + t356->mX.mX[81ULL] *
    -4.0E-6) + t356->mX.mX[26ULL] * 2.0E-6) * 1000.0;
  out->mLOG.mX[875ULL] = t356->mX.mX[81ULL];
  out->mLOG.mX[876ULL] = t356->mX.mX[81ULL];
  out->mLOG.mX[877ULL] = t356->mX.mX[199ULL] * 1000.0;
  out->mLOG.mX[878ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_v;
  out->mLOG.mX[879ULL] = t356->mX.mX[198ULL];
  out->mLOG.mX[880ULL] = t356->mX.mX[26ULL];
  out->mLOG.mX[881ULL] = t356->mX.mX[26ULL];
  out->mLOG.mX[882ULL] = t356->mX.mX[26ULL];
  out->mLOG.mX[883ULL] = t356->mX.mX[26ULL];
  out->mLOG.mX[884ULL] = t356->mX.mX[89ULL] * 0.00027777777777777778;
  out->mLOG.mX[885ULL] = t356->mX.mX[26ULL];
  out->mLOG.mX[886ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_i;
  out->mLOG.mX[887ULL] = t356->mX.mX[98ULL];
  out->mLOG.mX[888ULL] = t356->mX.mX[90ULL];
  out->mLOG.mX[889ULL] = t356->mX.mX[90ULL];
  out->mLOG.mX[890ULL] = t356->mX.mX[203ULL];
  out->mLOG.mX[891ULL] = t356->mX.mX[202ULL];
  out->mLOG.mX[892ULL] = t356->mX.mX[107ULL];
  for (t236 = 91ULL; t236 - 91ULL < 5ULL; t236++) {
    out->mLOG.mX[t236 + 802ULL] = t356->mX.mX[t236];
  }

  out->mLOG.mX[898ULL] = t356->mX.mX[201ULL];
  out->mLOG.mX[899ULL] = t356->mX.mX[204ULL] * 1000.0;
  out->mLOG.mX[900ULL] = t356->mX.mX[203ULL];
  out->mLOG.mX[901ULL] = intrm_sf_mf_11;
  out->mLOG.mX[902ULL] = t356->mX.mX[200ULL];
  out->mLOG.mX[903ULL] = t356->mX.mX[89ULL];
  out->mLOG.mX[904ULL] = t356->mX.mX[26ULL];
  out->mLOG.mX[905ULL] = t356->mX.mX[90ULL];
  out->mLOG.mX[906ULL] = t356->mX.mX[200ULL];
  out->mLOG.mX[907ULL] = t356->mX.mX[201ULL];
  out->mLOG.mX[908ULL] = t356->mX.mX[202ULL];
  out->mLOG.mX[909ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_i;
  out->mLOG.mX[910ULL] = t356->mX.mX[98ULL];
  out->mLOG.mX[911ULL] = t356->mX.mX[90ULL];
  out->mLOG.mX[912ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_ocv;
  out->mLOG.mX[913ULL] = t356->mX.mX[107ULL];
  out->mLOG.mX[914ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_i *
    Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_i * (t243
    > 8.200000000000002E-8 ? t243 : 8.200000000000002E-8) * 0.001 +
    ((((t356->mX.mX[91ULL] * t356->mX.mX[91ULL] * 0.0 + t356->mX.mX[92ULL] *
        t356->mX.mX[92ULL] * 0.0) + t356->mX.mX[93ULL] * t356->mX.mX[93ULL] *
       0.0) + t356->mX.mX[94ULL] * t356->mX.mX[94ULL] * 0.0) + t356->mX.mX[95ULL]
     * t356->mX.mX[95ULL] * 0.0) * 0.001;
  out->mLOG.mX[915ULL] = t356->mX.mX[203ULL];
  out->mLOG.mX[916ULL] = t356->mX.mX[203ULL];
  out->mLOG.mX[917ULL] = t356->mX.mX[26ULL];
  out->mLOG.mX[918ULL] = ((t356->mX.mX[17ULL] * 2.0E-6 + t356->mX.mX[81ULL] *
    2.0E-6) + t356->mX.mX[26ULL] * -4.0E-6) * 1000.0;
  out->mLOG.mX[919ULL] = t356->mX.mX[26ULL];
  out->mLOG.mX[920ULL] = t356->mX.mX[26ULL];
  out->mLOG.mX[921ULL] = t356->mX.mX[204ULL] * 1000.0;
  out->mLOG.mX[922ULL] = intrm_sf_mf_11;
  out->mLOG.mX[923ULL] = t356->mX.mX[203ULL];
  out->mLOG.mX[924ULL] = t356->mX.mX[147ULL];
  out->mLOG.mX[925ULL] = Plant_Charger_Load_Batt0_v;
  out->mLOG.mX[926ULL] = t356->mX.mX[96ULL];
  out->mLOG.mX[927ULL] = t356->mX.mX[98ULL];
  out->mLOG.mX[928ULL] = t356->mX.mX[99ULL];
  out->mLOG.mX[929ULL] = t356->mX.mX[100ULL];
  out->mLOG.mX[930ULL] = t356->mX.mX[101ULL];
  out->mLOG.mX[931ULL] = t356->mX.mX[102ULL];
  out->mLOG.mX[932ULL] = t356->mX.mX[103ULL];
  out->mLOG.mX[933ULL] = t356->mX.mX[104ULL];
  out->mLOG.mX[934ULL] = t356->mX.mX[105ULL];
  out->mLOG.mX[935ULL] = t356->mX.mX[106ULL];
  out->mLOG.mX[936ULL] = t356->mX.mX[107ULL];
  out->mLOG.mX[937ULL] = t356->mX.mX[0ULL];
  out->mLOG.mX[938ULL] = ((t356->mX.mX[0ULL] * -2.0E-6 + t356->mX.mX[8ULL] *
    2.0E-6) - t356->mX.mX[149ULL]) * 1000.0;
  out->mLOG.mX[939ULL] = t356->mU.mX[14ULL];
  out->mLOG.mX[940ULL] = t356->mX.mX[0ULL];
  out->mLOG.mX[941ULL] = t356->mX.mX[0ULL];
  out->mLOG.mX[942ULL] = t356->mX.mX[8ULL];
  out->mLOG.mX[943ULL] =
    Plant_Subsystem_Series_Module_Convective_Heat_Transfer_Q * 1000.0;
  out->mLOG.mX[944ULL] =
    Plant_Subsystem_Series_Module_Convective_Heat_Transfer_Q * 500000.0;
  out->mLOG.mX[945ULL] = t356->mX.mX[8ULL];
  out->mLOG.mX[946ULL] = t356->mX.mX[16ULL];
  out->mLOG.mX[947ULL] =
    Plant_Subsystem_Series_Module_Convective_Heat_Transfer1_Q * 1000.0;
  out->mLOG.mX[948ULL] =
    Plant_Subsystem_Series_Module_Convective_Heat_Transfer1_Q * 500000.0;
  out->mLOG.mX[949ULL] = t356->mX.mX[17ULL];
  out->mLOG.mX[950ULL] = t356->mX.mX[25ULL];
  out->mLOG.mX[951ULL] = t259 * 1000.0;
  out->mLOG.mX[952ULL] = t259 * 500000.0;
  out->mLOG.mX[953ULL] = t356->mX.mX[16ULL];
  out->mLOG.mX[954ULL] = t356->mX.mX[41ULL];
  out->mLOG.mX[955ULL] =
    Plant_Subsystem_Series_Module_Convective_Heat_Transfer2_Q * 1000.0;
  out->mLOG.mX[956ULL] =
    Plant_Subsystem_Series_Module_Convective_Heat_Transfer2_Q * 500000.0;
  out->mLOG.mX[957ULL] = t356->mX.mX[41ULL];
  out->mLOG.mX[958ULL] = t356->mX.mX[49ULL];
  out->mLOG.mX[959ULL] =
    Plant_Subsystem_Series_Module_Convective_Heat_Transfer3_Q * 1000.0;
  out->mLOG.mX[960ULL] =
    Plant_Subsystem_Series_Module_Convective_Heat_Transfer3_Q * 500000.0;
  out->mLOG.mX[961ULL] = t356->mX.mX[49ULL];
  out->mLOG.mX[962ULL] = t356->mX.mX[57ULL];
  out->mLOG.mX[963ULL] =
    Plant_Subsystem_Series_Module_Convective_Heat_Transfer4_Q * 1000.0;
  out->mLOG.mX[964ULL] =
    Plant_Subsystem_Series_Module_Convective_Heat_Transfer4_Q * 500000.0;
  out->mLOG.mX[965ULL] = t356->mX.mX[57ULL];
  out->mLOG.mX[966ULL] = t356->mX.mX[65ULL];
  out->mLOG.mX[967ULL] =
    Plant_Subsystem_Series_Module_Convective_Heat_Transfer5_Q * 1000.0;
  out->mLOG.mX[968ULL] =
    Plant_Subsystem_Series_Module_Convective_Heat_Transfer5_Q * 500000.0;
  out->mLOG.mX[969ULL] = t356->mX.mX[65ULL];
  out->mLOG.mX[970ULL] = t356->mX.mX[73ULL];
  out->mLOG.mX[971ULL] =
    Plant_Subsystem_Series_Module_Convective_Heat_Transfer6_Q * 1000.0;
  out->mLOG.mX[972ULL] =
    Plant_Subsystem_Series_Module_Convective_Heat_Transfer6_Q * 500000.0;
  out->mLOG.mX[973ULL] = t356->mX.mX[73ULL];
  out->mLOG.mX[974ULL] = t356->mX.mX[81ULL];
  out->mLOG.mX[975ULL] =
    Plant_Subsystem_Series_Module_Convective_Heat_Transfer7_Q * 1000.0;
  out->mLOG.mX[976ULL] =
    Plant_Subsystem_Series_Module_Convective_Heat_Transfer7_Q * 500000.0;
  out->mLOG.mX[977ULL] = t356->mX.mX[81ULL];
  out->mLOG.mX[978ULL] = t356->mX.mX[26ULL];
  out->mLOG.mX[979ULL] =
    Plant_Subsystem_Series_Module_Convective_Heat_Transfer8_Q * 1000.0;
  out->mLOG.mX[980ULL] =
    Plant_Subsystem_Series_Module_Convective_Heat_Transfer8_Q * 500000.0;
  out->mLOG.mX[981ULL] = t356->mX.mX[26ULL];
  out->mLOG.mX[982ULL] = t356->mX.mX[17ULL];
  out->mLOG.mX[983ULL] =
    Plant_Subsystem_Series_Module_Convective_Heat_Transfer9_Q * 1000.0;
  out->mLOG.mX[984ULL] =
    Plant_Subsystem_Series_Module_Convective_Heat_Transfer9_Q * 500000.0;
  out->mLOG.mX[985ULL] = t356->mX.mX[25ULL];
  out->mLOG.mX[986ULL] = t356->mX.mX[25ULL];
  out->mLOG.mX[987ULL] = t356->mU.mX[14ULL];
  out->mLOG.mX[988ULL] = t356->mX.mX[0ULL];
  out->mLOG.mX[989ULL] = t356->mX.mX[0ULL];
  out->mLOG.mX[990ULL] = t356->mX.mX[8ULL];
  out->mLOG.mX[991ULL] = t356->mX.mX[8ULL];
  out->mLOG.mX[992ULL] = t356->mX.mX[17ULL];
  out->mLOG.mX[993ULL] = t356->mX.mX[17ULL];
  out->mLOG.mX[994ULL] = t356->mX.mX[17ULL];
  out->mLOG.mX[995ULL] = t356->mX.mX[25ULL];
  out->mLOG.mX[996ULL] = t356->mX.mX[25ULL];
  out->mLOG.mX[997ULL] = t356->mX.mX[25ULL];
  out->mLOG.mX[998ULL] = t356->mX.mX[8ULL];
  out->mLOG.mX[999ULL] = t356->mX.mX[16ULL];
  out->mLOG.mX[1000ULL] = t356->mX.mX[16ULL];
  out->mLOG.mX[1001ULL] = t356->mX.mX[16ULL];
  out->mLOG.mX[1002ULL] = t356->mX.mX[41ULL];
  out->mLOG.mX[1003ULL] = t356->mX.mX[41ULL];
  out->mLOG.mX[1004ULL] = t356->mX.mX[41ULL];
  out->mLOG.mX[1005ULL] = t356->mX.mX[49ULL];
  out->mLOG.mX[1006ULL] = t356->mX.mX[49ULL];
  out->mLOG.mX[1007ULL] = t356->mX.mX[49ULL];
  out->mLOG.mX[1008ULL] = t356->mX.mX[57ULL];
  out->mLOG.mX[1009ULL] = t356->mX.mX[57ULL];
  out->mLOG.mX[1010ULL] = t356->mX.mX[57ULL];
  out->mLOG.mX[1011ULL] = t356->mX.mX[65ULL];
  out->mLOG.mX[1012ULL] = t356->mX.mX[65ULL];
  out->mLOG.mX[1013ULL] = t356->mX.mX[65ULL];
  out->mLOG.mX[1014ULL] = t356->mX.mX[73ULL];
  out->mLOG.mX[1015ULL] = t356->mX.mX[73ULL];
  out->mLOG.mX[1016ULL] = t356->mX.mX[73ULL];
  out->mLOG.mX[1017ULL] = t356->mX.mX[81ULL];
  out->mLOG.mX[1018ULL] = t356->mX.mX[81ULL];
  out->mLOG.mX[1019ULL] = t356->mX.mX[81ULL];
  out->mLOG.mX[1020ULL] = t356->mX.mX[26ULL];
  out->mLOG.mX[1021ULL] = t356->mX.mX[26ULL];
  out->mLOG.mX[1022ULL] = t356->mX.mX[26ULL];
  out->mLOG.mX[1023ULL] = t356->mX.mX[0ULL];
  out->mLOG.mX[1024ULL] = Plant_Charger_Load_Batt0_v;
  out->mLOG.mX[1025ULL] = Plant_Charger_Load_Batt0_v;
  out->mLOG.mX[1026ULL] = Plant_Charger_Load_Batt0_v;
  (void)LC;
  (void)out;
  return 0;
}
