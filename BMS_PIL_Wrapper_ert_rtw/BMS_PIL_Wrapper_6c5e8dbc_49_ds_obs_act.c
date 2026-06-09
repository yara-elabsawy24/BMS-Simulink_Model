/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'BMS_PIL_Wrapper/Plant/Solver Configuration'.
 */

#include "ne_ds.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_sys_struct.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_obs_act.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_externals.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T BMS_PIL_Wrapper_6c5e8dbc_49_ds_obs_act(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t75, NeDsMethodOutput *out)
{
  real_T
    Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xGdynamic
    [5];
  real_T Plant_Charger_Load_Batt0_v;
  real_T Plant_Current_Sensor_I;
  real_T Plant_Subsystem_Monitoring_Diode10_n_v;
  real_T Plant_Subsystem_Monitoring_Diode10_p_v;
  real_T Plant_Subsystem_Monitoring_Diode10_v_diode;
  real_T Plant_Subsystem_Monitoring_Diode11_i;
  real_T Plant_Subsystem_Monitoring_Diode11_p_v;
  real_T Plant_Subsystem_Monitoring_Diode11_v_diode;
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
  real_T Plant_Subsystem_Monitoring_Diode9_n_v;
  real_T Plant_Subsystem_Monitoring_Diode9_p_v;
  real_T Plant_Subsystem_Monitoring_Diode9_v_diode;
  real_T Plant_Subsystem_Monitoring_Diode_i;
  real_T Plant_Subsystem_Monitoring_Diode_n_v;
  real_T Plant_Subsystem_Monitoring_Diode_p_v;
  real_T Plant_Subsystem_Monitoring_Diode_v_diode;
  real_T Plant_Subsystem_Monitoring_Voltage_Sensor10_V;
  real_T Plant_Subsystem_Monitoring_Voltage_Sensor1_V;
  real_T Plant_Subsystem_Monitoring_Voltage_Sensor6_V;
  real_T Plant_Subsystem_Monitoring_Voltage_Sensor8_V;
  real_T Plant_Subsystem_Monitoring_Voltage_Sensor9_V;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_i;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_v;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_i;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based11_thermalModel_Q;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_i;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_v;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_i;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_v;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_v;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_i;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_v;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_i;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_v;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_i;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_v;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based7_electricalModel_i;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based7_electricalModel_v;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_i;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_v;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_i;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_v;
  real_T Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_i;
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
  real_T t27;
  real_T t29;
  real_T t41;
  real_T t47;
  real_T t49;
  real_T t53;
  real_T t54;
  real_T t55;
  real_T t56;
  real_T t58;
  size_t t18;
  (void)LC;
  Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xGdynamic[0]
    = 0.0;
  Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xGdynamic[1]
    = 0.0;
  Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xGdynamic[2]
    = 0.0;
  Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xGdynamic[3]
    = 0.0;
  Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xGdynamic[4]
    = 0.0;
  Plant_Charger_Load_Batt0_v = t75->mX.mX[96ULL] + t75->mX.mX[97ULL];
  Plant_Current_Sensor_I = t75->mU.mX[0ULL] + t75->mU.mX[1ULL];
  Plant_Subsystem_Monitoring_Diode_i = (t75->mX.mX[108ULL] *
    -0.02564102564102564 + t75->mX.mX[109ULL] * -0.02564102564102564) +
    t75->mX.mX[97ULL] * 0.02564102564102564;
  Plant_Subsystem_Monitoring_Diode_n_v = t75->mX.mX[96ULL] + t75->mX.mX[109ULL];
  Plant_Subsystem_Monitoring_Diode_p_v = (t75->mX.mX[96ULL] + t75->mX.mX[108ULL])
    + t75->mX.mX[109ULL];
  Plant_Subsystem_Monitoring_Diode_v_diode =
    Plant_Subsystem_Monitoring_Diode_p_v - Plant_Subsystem_Monitoring_Diode_n_v;
  t27 = ((t75->mX.mX[96ULL] * 0.02564102564102564 + t75->mX.mX[100ULL] *
          -0.02564102564102564) + t75->mX.mX[111ULL] * -0.02564102564102564) +
    t75->mX.mX[112ULL] * -0.02564102564102564;
  Plant_Subsystem_Monitoring_Diode1_n_v = t75->mX.mX[100ULL] + t75->mX.mX[112ULL];
  Plant_Subsystem_Monitoring_Diode1_p_v = (t75->mX.mX[100ULL] + t75->mX.mX
    [111ULL]) + t75->mX.mX[112ULL];
  Plant_Subsystem_Monitoring_Diode1_v_diode =
    Plant_Subsystem_Monitoring_Diode1_p_v -
    Plant_Subsystem_Monitoring_Diode1_n_v;
  t29 = ((t75->mX.mX[98ULL] * 0.02564102564102564 + t75->mX.mX[99ULL] *
          -0.02564102564102564) + t75->mX.mX[114ULL] * -0.02564102564102564) +
    t75->mX.mX[115ULL] * -0.02564102564102564;
  Plant_Subsystem_Monitoring_Diode10_n_v = t75->mX.mX[99ULL] + t75->mX.mX[115ULL];
  Plant_Subsystem_Monitoring_Diode10_p_v = (t75->mX.mX[99ULL] + t75->mX.mX
    [114ULL]) + t75->mX.mX[115ULL];
  Plant_Subsystem_Monitoring_Diode10_v_diode =
    Plant_Subsystem_Monitoring_Diode10_p_v -
    Plant_Subsystem_Monitoring_Diode10_n_v;
  Plant_Subsystem_Monitoring_Diode11_i = (t75->mX.mX[99ULL] *
    0.02564102564102564 + t75->mX.mX[117ULL] * -0.02564102564102564) +
    t75->mX.mX[118ULL] * -0.02564102564102564;
  Plant_Subsystem_Monitoring_Diode11_p_v = t75->mX.mX[117ULL] + t75->mX.mX
    [118ULL];
  Plant_Subsystem_Monitoring_Diode11_v_diode =
    Plant_Subsystem_Monitoring_Diode11_p_v - t75->mX.mX[118ULL];
  Plant_Subsystem_Monitoring_Diode2_i = ((t75->mX.mX[100ULL] *
    0.02564102564102564 + t75->mX.mX[101ULL] * -0.02564102564102564) +
    t75->mX.mX[120ULL] * -0.02564102564102564) + t75->mX.mX[121ULL] *
    -0.02564102564102564;
  Plant_Subsystem_Monitoring_Diode2_n_v = t75->mX.mX[101ULL] + t75->mX.mX[121ULL];
  Plant_Subsystem_Monitoring_Diode2_p_v = (t75->mX.mX[101ULL] + t75->mX.mX
    [120ULL]) + t75->mX.mX[121ULL];
  Plant_Subsystem_Monitoring_Diode2_v_diode =
    Plant_Subsystem_Monitoring_Diode2_p_v -
    Plant_Subsystem_Monitoring_Diode2_n_v;
  Plant_Subsystem_Monitoring_Diode3_i = ((t75->mX.mX[101ULL] *
    0.02564102564102564 + t75->mX.mX[102ULL] * -0.02564102564102564) +
    t75->mX.mX[123ULL] * -0.02564102564102564) + t75->mX.mX[124ULL] *
    -0.02564102564102564;
  Plant_Subsystem_Monitoring_Diode3_n_v = t75->mX.mX[102ULL] + t75->mX.mX[124ULL];
  Plant_Subsystem_Monitoring_Diode3_p_v = (t75->mX.mX[102ULL] + t75->mX.mX
    [123ULL]) + t75->mX.mX[124ULL];
  Plant_Subsystem_Monitoring_Diode3_v_diode =
    Plant_Subsystem_Monitoring_Diode3_p_v -
    Plant_Subsystem_Monitoring_Diode3_n_v;
  Plant_Subsystem_Monitoring_Diode4_i = ((t75->mX.mX[102ULL] *
    0.02564102564102564 + t75->mX.mX[103ULL] * -0.02564102564102564) +
    t75->mX.mX[126ULL] * -0.02564102564102564) + t75->mX.mX[127ULL] *
    -0.02564102564102564;
  Plant_Subsystem_Monitoring_Diode4_n_v = t75->mX.mX[103ULL] + t75->mX.mX[127ULL];
  Plant_Subsystem_Monitoring_Diode4_p_v = (t75->mX.mX[103ULL] + t75->mX.mX
    [126ULL]) + t75->mX.mX[127ULL];
  Plant_Subsystem_Monitoring_Diode4_v_diode =
    Plant_Subsystem_Monitoring_Diode4_p_v -
    Plant_Subsystem_Monitoring_Diode4_n_v;
  Plant_Subsystem_Monitoring_Diode5_i = ((t75->mX.mX[103ULL] *
    0.02564102564102564 + t75->mX.mX[104ULL] * -0.02564102564102564) +
    t75->mX.mX[129ULL] * -0.02564102564102564) + t75->mX.mX[130ULL] *
    -0.02564102564102564;
  Plant_Subsystem_Monitoring_Diode5_n_v = t75->mX.mX[104ULL] + t75->mX.mX[130ULL];
  Plant_Subsystem_Monitoring_Diode5_p_v = (t75->mX.mX[104ULL] + t75->mX.mX
    [129ULL]) + t75->mX.mX[130ULL];
  Plant_Subsystem_Monitoring_Diode5_v_diode =
    Plant_Subsystem_Monitoring_Diode5_p_v -
    Plant_Subsystem_Monitoring_Diode5_n_v;
  t41 = ((t75->mX.mX[104ULL] * 0.02564102564102564 + t75->mX.mX[105ULL] *
          -0.02564102564102564) + t75->mX.mX[132ULL] * -0.02564102564102564) +
    t75->mX.mX[133ULL] * -0.02564102564102564;
  Plant_Subsystem_Monitoring_Diode6_n_v = t75->mX.mX[105ULL] + t75->mX.mX[133ULL];
  Plant_Subsystem_Monitoring_Diode6_p_v = (t75->mX.mX[105ULL] + t75->mX.mX
    [132ULL]) + t75->mX.mX[133ULL];
  Plant_Subsystem_Monitoring_Diode6_v_diode =
    Plant_Subsystem_Monitoring_Diode6_p_v -
    Plant_Subsystem_Monitoring_Diode6_n_v;
  Plant_Subsystem_Monitoring_Diode7_i = ((t75->mX.mX[105ULL] *
    0.02564102564102564 + t75->mX.mX[106ULL] * -0.02564102564102564) +
    t75->mX.mX[135ULL] * -0.02564102564102564) + t75->mX.mX[136ULL] *
    -0.02564102564102564;
  Plant_Subsystem_Monitoring_Diode7_n_v = t75->mX.mX[106ULL] + t75->mX.mX[136ULL];
  Plant_Subsystem_Monitoring_Diode7_p_v = (t75->mX.mX[106ULL] + t75->mX.mX
    [135ULL]) + t75->mX.mX[136ULL];
  Plant_Subsystem_Monitoring_Diode7_v_diode =
    Plant_Subsystem_Monitoring_Diode7_p_v -
    Plant_Subsystem_Monitoring_Diode7_n_v;
  Plant_Subsystem_Monitoring_Diode8_i = ((t75->mX.mX[106ULL] *
    0.02564102564102564 + t75->mX.mX[107ULL] * -0.02564102564102564) +
    t75->mX.mX[138ULL] * -0.02564102564102564) + t75->mX.mX[139ULL] *
    -0.02564102564102564;
  Plant_Subsystem_Monitoring_Diode8_n_v = t75->mX.mX[107ULL] + t75->mX.mX[139ULL];
  Plant_Subsystem_Monitoring_Diode8_p_v = (t75->mX.mX[107ULL] + t75->mX.mX
    [138ULL]) + t75->mX.mX[139ULL];
  Plant_Subsystem_Monitoring_Diode8_v_diode =
    Plant_Subsystem_Monitoring_Diode8_p_v -
    Plant_Subsystem_Monitoring_Diode8_n_v;
  t47 = ((t75->mX.mX[98ULL] * -0.02564102564102564 + t75->mX.mX[107ULL] *
          0.02564102564102564) + t75->mX.mX[141ULL] * -0.02564102564102564) +
    t75->mX.mX[142ULL] * -0.02564102564102564;
  Plant_Subsystem_Monitoring_Diode9_n_v = t75->mX.mX[98ULL] + t75->mX.mX[142ULL];
  Plant_Subsystem_Monitoring_Diode9_p_v = (t75->mX.mX[98ULL] + t75->mX.mX[141ULL])
    + t75->mX.mX[142ULL];
  Plant_Subsystem_Monitoring_Diode9_v_diode =
    Plant_Subsystem_Monitoring_Diode9_p_v -
    Plant_Subsystem_Monitoring_Diode9_n_v;
  t49 = Plant_Charger_Load_Batt0_v - t75->mX.mX[96ULL];
  Plant_Subsystem_Monitoring_Voltage_Sensor1_V = t75->mX.mX[96ULL] - t75->mX.mX
    [100ULL];
  Plant_Subsystem_Monitoring_Voltage_Sensor10_V = t75->mX.mX[98ULL] - t75->
    mX.mX[99ULL];
  t53 = t75->mX.mX[100ULL] - t75->mX.mX[101ULL];
  t54 = t75->mX.mX[101ULL] - t75->mX.mX[102ULL];
  t55 = t75->mX.mX[102ULL] - t75->mX.mX[103ULL];
  t56 = t75->mX.mX[103ULL] - t75->mX.mX[104ULL];
  Plant_Subsystem_Monitoring_Voltage_Sensor6_V = t75->mX.mX[104ULL] - t75->
    mX.mX[105ULL];
  t58 = t75->mX.mX[105ULL] - t75->mX.mX[106ULL];
  Plant_Subsystem_Monitoring_Voltage_Sensor8_V = t75->mX.mX[106ULL] - t75->
    mX.mX[107ULL];
  Plant_Subsystem_Monitoring_Voltage_Sensor9_V = t75->mX.mX[107ULL] - t75->
    mX.mX[98ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_i =
    (((t75->mX.mX[108ULL] * 0.02564102564102564 + t75->mX.mX[109ULL] *
       0.02564102564102564) + t75->mX.mX[97ULL] * -0.02564102564102564) +
     t75->mU.mX[0ULL]) + t75->mU.mX[1ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_i =
    ((((t75->mX.mX[96ULL] * -0.02564102564102564 + t75->mX.mX[100ULL] *
        0.02564102564102564) + t75->mX.mX[111ULL] * 0.02564102564102564) +
      t75->mX.mX[112ULL] * 0.02564102564102564) + t75->mU.mX[0ULL]) + t75->
    mU.mX[1ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_v =
    -t75->mX.mX[100ULL] + t75->mX.mX[96ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_i =
    ((((t75->mX.mX[98ULL] * -0.02564102564102564 + t75->mX.mX[99ULL] *
        0.02564102564102564) + t75->mX.mX[114ULL] * 0.02564102564102564) +
      t75->mX.mX[115ULL] * 0.02564102564102564) + t75->mU.mX[0ULL]) + t75->
    mU.mX[1ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_v =
    -t75->mX.mX[99ULL] + t75->mX.mX[98ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_i =
    (((t75->mX.mX[99ULL] * -0.02564102564102564 + t75->mX.mX[117ULL] *
       0.02564102564102564) + t75->mX.mX[118ULL] * 0.02564102564102564) +
     t75->mU.mX[0ULL]) + t75->mU.mX[1ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based11_thermalModel_Q =
    t75->mX.mX[17ULL] * 2.0E-6 + t75->mX.mX[25ULL] * -2.0E-6;
  Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_i =
    ((((t75->mX.mX[100ULL] * -0.02564102564102564 + t75->mX.mX[101ULL] *
        0.02564102564102564) + t75->mX.mX[120ULL] * 0.02564102564102564) +
      t75->mX.mX[121ULL] * 0.02564102564102564) + t75->mU.mX[0ULL]) + t75->
    mU.mX[1ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_v =
    -t75->mX.mX[101ULL] + t75->mX.mX[100ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i =
    ((((t75->mX.mX[101ULL] * -0.02564102564102564 + t75->mX.mX[102ULL] *
        0.02564102564102564) + t75->mX.mX[123ULL] * 0.02564102564102564) +
      t75->mX.mX[124ULL] * 0.02564102564102564) + t75->mU.mX[0ULL]) + t75->
    mU.mX[1ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_v =
    -t75->mX.mX[102ULL] + t75->mX.mX[101ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_i =
    ((((t75->mX.mX[102ULL] * -0.02564102564102564 + t75->mX.mX[103ULL] *
        0.02564102564102564) + t75->mX.mX[126ULL] * 0.02564102564102564) +
      t75->mX.mX[127ULL] * 0.02564102564102564) + t75->mU.mX[0ULL]) + t75->
    mU.mX[1ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_v =
    -t75->mX.mX[103ULL] + t75->mX.mX[102ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_i =
    ((((t75->mX.mX[103ULL] * -0.02564102564102564 + t75->mX.mX[104ULL] *
        0.02564102564102564) + t75->mX.mX[129ULL] * 0.02564102564102564) +
      t75->mX.mX[130ULL] * 0.02564102564102564) + t75->mU.mX[0ULL]) + t75->
    mU.mX[1ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_v =
    -t75->mX.mX[104ULL] + t75->mX.mX[103ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_i =
    ((((t75->mX.mX[104ULL] * -0.02564102564102564 + t75->mX.mX[105ULL] *
        0.02564102564102564) + t75->mX.mX[132ULL] * 0.02564102564102564) +
      t75->mX.mX[133ULL] * 0.02564102564102564) + t75->mU.mX[0ULL]) + t75->
    mU.mX[1ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_v =
    -t75->mX.mX[105ULL] + t75->mX.mX[104ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based7_electricalModel_i =
    ((((t75->mX.mX[105ULL] * -0.02564102564102564 + t75->mX.mX[106ULL] *
        0.02564102564102564) + t75->mX.mX[135ULL] * 0.02564102564102564) +
      t75->mX.mX[136ULL] * 0.02564102564102564) + t75->mU.mX[0ULL]) + t75->
    mU.mX[1ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based7_electricalModel_v =
    -t75->mX.mX[106ULL] + t75->mX.mX[105ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_i =
    ((((t75->mX.mX[106ULL] * -0.02564102564102564 + t75->mX.mX[107ULL] *
        0.02564102564102564) + t75->mX.mX[138ULL] * 0.02564102564102564) +
      t75->mX.mX[139ULL] * 0.02564102564102564) + t75->mU.mX[0ULL]) + t75->
    mU.mX[1ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_v =
    -t75->mX.mX[107ULL] + t75->mX.mX[106ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_i =
    ((((t75->mX.mX[98ULL] * 0.02564102564102564 + t75->mX.mX[107ULL] *
        -0.02564102564102564) + t75->mX.mX[141ULL] * 0.02564102564102564) +
      t75->mX.mX[142ULL] * 0.02564102564102564) + t75->mU.mX[0ULL]) + t75->
    mU.mX[1ULL];
  Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_v =
    -t75->mX.mX[98ULL] + t75->mX.mX[107ULL];
  Plant_Subsystem_Series_Module_Convective_Heat_Transfer_Q = t75->mX.mX[0ULL] *
    2.0E-6 + t75->mX.mX[8ULL] * -2.0E-6;
  Plant_Subsystem_Series_Module_Convective_Heat_Transfer1_Q = t75->mX.mX[8ULL] *
    2.0E-6 + t75->mX.mX[16ULL] * -2.0E-6;
  Plant_Subsystem_Series_Module_Convective_Heat_Transfer2_Q = t75->mX.mX[16ULL] *
    2.0E-6 + t75->mX.mX[41ULL] * -2.0E-6;
  Plant_Subsystem_Series_Module_Convective_Heat_Transfer3_Q = t75->mX.mX[41ULL] *
    2.0E-6 + t75->mX.mX[49ULL] * -2.0E-6;
  Plant_Subsystem_Series_Module_Convective_Heat_Transfer4_Q = t75->mX.mX[49ULL] *
    2.0E-6 + t75->mX.mX[57ULL] * -2.0E-6;
  Plant_Subsystem_Series_Module_Convective_Heat_Transfer5_Q = t75->mX.mX[57ULL] *
    2.0E-6 + t75->mX.mX[65ULL] * -2.0E-6;
  Plant_Subsystem_Series_Module_Convective_Heat_Transfer6_Q = t75->mX.mX[65ULL] *
    2.0E-6 + t75->mX.mX[73ULL] * -2.0E-6;
  Plant_Subsystem_Series_Module_Convective_Heat_Transfer7_Q = t75->mX.mX[73ULL] *
    2.0E-6 + t75->mX.mX[81ULL] * -2.0E-6;
  Plant_Subsystem_Series_Module_Convective_Heat_Transfer8_Q = t75->mX.mX[81ULL] *
    2.0E-6 + t75->mX.mX[26ULL] * -2.0E-6;
  Plant_Subsystem_Series_Module_Convective_Heat_Transfer9_Q = t75->mX.mX[17ULL] *
    -2.0E-6 + t75->mX.mX[26ULL] * 2.0E-6;
  out->mOBS_ACT.mX[0ULL] = Plant_Charger_Load_Batt0_v;
  out->mOBS_ACT.mX[1ULL] = 0.0;
  out->mOBS_ACT.mX[2ULL] = Plant_Charger_Load_Batt0_v;
  out->mOBS_ACT.mX[3ULL] = t75->mU.mX[1ULL];
  out->mOBS_ACT.mX[4ULL] = t75->mU.mX[1ULL];
  out->mOBS_ACT.mX[5ULL] = 0.0;
  out->mOBS_ACT.mX[6ULL] = -Plant_Charger_Load_Batt0_v;
  out->mOBS_ACT.mX[7ULL] = Plant_Charger_Load_Batt0_v;
  out->mOBS_ACT.mX[8ULL] = t75->mU.mX[0ULL];
  out->mOBS_ACT.mX[9ULL] = t75->mU.mX[0ULL];
  out->mOBS_ACT.mX[10ULL] = 0.0;
  out->mOBS_ACT.mX[11ULL] = -Plant_Charger_Load_Batt0_v;
  out->mOBS_ACT.mX[12ULL] = t75->mU.mX[0ULL];
  out->mOBS_ACT.mX[13ULL] = t75->mU.mX[1ULL];
  out->mOBS_ACT.mX[14ULL] = Plant_Current_Sensor_I;
  out->mOBS_ACT.mX[15ULL] = Plant_Current_Sensor_I;
  out->mOBS_ACT.mX[16ULL] = Plant_Charger_Load_Batt0_v;
  out->mOBS_ACT.mX[17ULL] = Plant_Charger_Load_Batt0_v;
  out->mOBS_ACT.mX[18ULL] = Plant_Current_Sensor_I;
  out->mOBS_ACT.mX[19ULL] = 0.0;
  out->mOBS_ACT.mX[20ULL] = Plant_Charger_Load_Batt0_v;
  out->mOBS_ACT.mX[21ULL] = 0.0;
  out->mOBS_ACT.mX[22ULL] = Plant_Charger_Load_Batt0_v;
  out->mOBS_ACT.mX[23ULL] = t75->mX.mX[96ULL];
  out->mOBS_ACT.mX[24ULL] = t75->mX.mX[98ULL];
  out->mOBS_ACT.mX[25ULL] = t75->mX.mX[99ULL];
  out->mOBS_ACT.mX[26ULL] = 0.0;
  out->mOBS_ACT.mX[27ULL] = t75->mX.mX[100ULL];
  out->mOBS_ACT.mX[28ULL] = t75->mX.mX[101ULL];
  out->mOBS_ACT.mX[29ULL] = t75->mX.mX[102ULL];
  out->mOBS_ACT.mX[30ULL] = t75->mX.mX[103ULL];
  out->mOBS_ACT.mX[31ULL] = t75->mX.mX[104ULL];
  out->mOBS_ACT.mX[32ULL] = t75->mX.mX[105ULL];
  out->mOBS_ACT.mX[33ULL] = t75->mX.mX[106ULL];
  out->mOBS_ACT.mX[34ULL] = t75->mX.mX[107ULL];
  out->mOBS_ACT.mX[35ULL] = -1.0;
  out->mOBS_ACT.mX[36ULL] = 1.0;
  out->mOBS_ACT.mX[37ULL] = 0.0;
  out->mOBS_ACT.mX[38ULL] = Plant_Subsystem_Monitoring_Diode_i;
  out->mOBS_ACT.mX[39ULL] = Plant_Subsystem_Monitoring_Diode_n_v;
  out->mOBS_ACT.mX[40ULL] = Plant_Subsystem_Monitoring_Diode_p_v;
  out->mOBS_ACT.mX[41ULL] = t75->mX.mX[110ULL];
  out->mOBS_ACT.mX[42ULL] = 0.0;
  out->mOBS_ACT.mX[43ULL] = t75->mX.mX[108ULL];
  out->mOBS_ACT.mX[44ULL] = Plant_Subsystem_Monitoring_Diode_n_v;
  out->mOBS_ACT.mX[45ULL] = 0.0;
  out->mOBS_ACT.mX[46ULL] = 298.15;
  out->mOBS_ACT.mX[47ULL] = 298.15;
  out->mOBS_ACT.mX[48ULL] = 0.0;
  out->mOBS_ACT.mX[49ULL] = 0.0;
  out->mOBS_ACT.mX[50ULL] = Plant_Subsystem_Monitoring_Diode_i;
  out->mOBS_ACT.mX[51ULL] = 0.0;
  out->mOBS_ACT.mX[52ULL] = Plant_Subsystem_Monitoring_Diode_i;
  out->mOBS_ACT.mX[53ULL] = Plant_Subsystem_Monitoring_Diode_i;
  out->mOBS_ACT.mX[54ULL] = Plant_Subsystem_Monitoring_Diode_n_v;
  out->mOBS_ACT.mX[55ULL] = Plant_Subsystem_Monitoring_Diode_p_v;
  out->mOBS_ACT.mX[56ULL] = Plant_Subsystem_Monitoring_Diode_i *
    Plant_Subsystem_Monitoring_Diode_v_diode * 0.001 * 1000.0;
  out->mOBS_ACT.mX[57ULL] = Plant_Subsystem_Monitoring_Diode_v_diode;
  out->mOBS_ACT.mX[58ULL] = 0.0;
  out->mOBS_ACT.mX[59ULL] = Plant_Subsystem_Monitoring_Diode_v_diode;
  out->mOBS_ACT.mX[60ULL] = -1.0;
  out->mOBS_ACT.mX[61ULL] = 1.0;
  out->mOBS_ACT.mX[62ULL] = 0.0;
  out->mOBS_ACT.mX[63ULL] = t27;
  out->mOBS_ACT.mX[64ULL] = Plant_Subsystem_Monitoring_Diode1_n_v;
  out->mOBS_ACT.mX[65ULL] = Plant_Subsystem_Monitoring_Diode1_p_v;
  out->mOBS_ACT.mX[66ULL] = t75->mX.mX[113ULL];
  out->mOBS_ACT.mX[67ULL] = 0.0;
  out->mOBS_ACT.mX[68ULL] = t75->mX.mX[111ULL];
  out->mOBS_ACT.mX[69ULL] = Plant_Subsystem_Monitoring_Diode1_n_v;
  out->mOBS_ACT.mX[70ULL] = 0.0;
  out->mOBS_ACT.mX[71ULL] = 298.15;
  out->mOBS_ACT.mX[72ULL] = 298.15;
  out->mOBS_ACT.mX[73ULL] = 0.0;
  out->mOBS_ACT.mX[74ULL] = 0.0;
  out->mOBS_ACT.mX[75ULL] = t27;
  out->mOBS_ACT.mX[76ULL] = 0.0;
  out->mOBS_ACT.mX[77ULL] = t27;
  out->mOBS_ACT.mX[78ULL] = t27;
  out->mOBS_ACT.mX[79ULL] = Plant_Subsystem_Monitoring_Diode1_n_v;
  out->mOBS_ACT.mX[80ULL] = Plant_Subsystem_Monitoring_Diode1_p_v;
  out->mOBS_ACT.mX[81ULL] = t27 * Plant_Subsystem_Monitoring_Diode1_v_diode *
    0.001 * 1000.0;
  out->mOBS_ACT.mX[82ULL] = Plant_Subsystem_Monitoring_Diode1_v_diode;
  out->mOBS_ACT.mX[83ULL] = 0.0;
  out->mOBS_ACT.mX[84ULL] = Plant_Subsystem_Monitoring_Diode1_v_diode;
  out->mOBS_ACT.mX[85ULL] = -1.0;
  out->mOBS_ACT.mX[86ULL] = 1.0;
  out->mOBS_ACT.mX[87ULL] = 0.0;
  out->mOBS_ACT.mX[88ULL] = t29;
  out->mOBS_ACT.mX[89ULL] = Plant_Subsystem_Monitoring_Diode10_n_v;
  out->mOBS_ACT.mX[90ULL] = Plant_Subsystem_Monitoring_Diode10_p_v;
  out->mOBS_ACT.mX[91ULL] = t75->mX.mX[116ULL];
  out->mOBS_ACT.mX[92ULL] = 0.0;
  out->mOBS_ACT.mX[93ULL] = t75->mX.mX[114ULL];
  out->mOBS_ACT.mX[94ULL] = Plant_Subsystem_Monitoring_Diode10_n_v;
  out->mOBS_ACT.mX[95ULL] = 0.0;
  out->mOBS_ACT.mX[96ULL] = 298.15;
  out->mOBS_ACT.mX[97ULL] = 298.15;
  out->mOBS_ACT.mX[98ULL] = 0.0;
  out->mOBS_ACT.mX[99ULL] = 0.0;
  out->mOBS_ACT.mX[100ULL] = t29;
  out->mOBS_ACT.mX[101ULL] = 0.0;
  out->mOBS_ACT.mX[102ULL] = t29;
  out->mOBS_ACT.mX[103ULL] = t29;
  out->mOBS_ACT.mX[104ULL] = Plant_Subsystem_Monitoring_Diode10_n_v;
  out->mOBS_ACT.mX[105ULL] = Plant_Subsystem_Monitoring_Diode10_p_v;
  out->mOBS_ACT.mX[106ULL] = t29 * Plant_Subsystem_Monitoring_Diode10_v_diode *
    0.001 * 1000.0;
  out->mOBS_ACT.mX[107ULL] = Plant_Subsystem_Monitoring_Diode10_v_diode;
  out->mOBS_ACT.mX[108ULL] = 0.0;
  out->mOBS_ACT.mX[109ULL] = Plant_Subsystem_Monitoring_Diode10_v_diode;
  out->mOBS_ACT.mX[110ULL] = -1.0;
  out->mOBS_ACT.mX[111ULL] = 1.0;
  out->mOBS_ACT.mX[112ULL] = 0.0;
  out->mOBS_ACT.mX[113ULL] = Plant_Subsystem_Monitoring_Diode11_i;
  out->mOBS_ACT.mX[114ULL] = t75->mX.mX[118ULL];
  out->mOBS_ACT.mX[115ULL] = Plant_Subsystem_Monitoring_Diode11_p_v;
  out->mOBS_ACT.mX[116ULL] = t75->mX.mX[119ULL];
  out->mOBS_ACT.mX[117ULL] = 0.0;
  out->mOBS_ACT.mX[118ULL] = t75->mX.mX[117ULL];
  out->mOBS_ACT.mX[119ULL] = t75->mX.mX[118ULL];
  out->mOBS_ACT.mX[120ULL] = 0.0;
  out->mOBS_ACT.mX[121ULL] = 298.15;
  out->mOBS_ACT.mX[122ULL] = 298.15;
  out->mOBS_ACT.mX[123ULL] = 0.0;
  out->mOBS_ACT.mX[124ULL] = 0.0;
  out->mOBS_ACT.mX[125ULL] = Plant_Subsystem_Monitoring_Diode11_i;
  out->mOBS_ACT.mX[126ULL] = 0.0;
  out->mOBS_ACT.mX[127ULL] = Plant_Subsystem_Monitoring_Diode11_i;
  out->mOBS_ACT.mX[128ULL] = Plant_Subsystem_Monitoring_Diode11_i;
  out->mOBS_ACT.mX[129ULL] = t75->mX.mX[118ULL];
  out->mOBS_ACT.mX[130ULL] = Plant_Subsystem_Monitoring_Diode11_p_v;
  out->mOBS_ACT.mX[131ULL] = Plant_Subsystem_Monitoring_Diode11_i *
    Plant_Subsystem_Monitoring_Diode11_v_diode * 0.001 * 1000.0;
  out->mOBS_ACT.mX[132ULL] = Plant_Subsystem_Monitoring_Diode11_v_diode;
  out->mOBS_ACT.mX[133ULL] = 0.0;
  out->mOBS_ACT.mX[134ULL] = Plant_Subsystem_Monitoring_Diode11_v_diode;
  out->mOBS_ACT.mX[135ULL] = -1.0;
  out->mOBS_ACT.mX[136ULL] = 1.0;
  out->mOBS_ACT.mX[137ULL] = 0.0;
  out->mOBS_ACT.mX[138ULL] = Plant_Subsystem_Monitoring_Diode2_i;
  out->mOBS_ACT.mX[139ULL] = Plant_Subsystem_Monitoring_Diode2_n_v;
  out->mOBS_ACT.mX[140ULL] = Plant_Subsystem_Monitoring_Diode2_p_v;
  out->mOBS_ACT.mX[141ULL] = t75->mX.mX[122ULL];
  out->mOBS_ACT.mX[142ULL] = 0.0;
  out->mOBS_ACT.mX[143ULL] = t75->mX.mX[120ULL];
  out->mOBS_ACT.mX[144ULL] = Plant_Subsystem_Monitoring_Diode2_n_v;
  out->mOBS_ACT.mX[145ULL] = 0.0;
  out->mOBS_ACT.mX[146ULL] = 298.15;
  out->mOBS_ACT.mX[147ULL] = 298.15;
  out->mOBS_ACT.mX[148ULL] = 0.0;
  out->mOBS_ACT.mX[149ULL] = 0.0;
  out->mOBS_ACT.mX[150ULL] = Plant_Subsystem_Monitoring_Diode2_i;
  out->mOBS_ACT.mX[151ULL] = 0.0;
  out->mOBS_ACT.mX[152ULL] = Plant_Subsystem_Monitoring_Diode2_i;
  out->mOBS_ACT.mX[153ULL] = Plant_Subsystem_Monitoring_Diode2_i;
  out->mOBS_ACT.mX[154ULL] = Plant_Subsystem_Monitoring_Diode2_n_v;
  out->mOBS_ACT.mX[155ULL] = Plant_Subsystem_Monitoring_Diode2_p_v;
  out->mOBS_ACT.mX[156ULL] = Plant_Subsystem_Monitoring_Diode2_i *
    Plant_Subsystem_Monitoring_Diode2_v_diode * 0.001 * 1000.0;
  out->mOBS_ACT.mX[157ULL] = Plant_Subsystem_Monitoring_Diode2_v_diode;
  out->mOBS_ACT.mX[158ULL] = 0.0;
  out->mOBS_ACT.mX[159ULL] = Plant_Subsystem_Monitoring_Diode2_v_diode;
  out->mOBS_ACT.mX[160ULL] = -1.0;
  out->mOBS_ACT.mX[161ULL] = 1.0;
  out->mOBS_ACT.mX[162ULL] = 0.0;
  out->mOBS_ACT.mX[163ULL] = Plant_Subsystem_Monitoring_Diode3_i;
  out->mOBS_ACT.mX[164ULL] = Plant_Subsystem_Monitoring_Diode3_n_v;
  out->mOBS_ACT.mX[165ULL] = Plant_Subsystem_Monitoring_Diode3_p_v;
  out->mOBS_ACT.mX[166ULL] = t75->mX.mX[125ULL];
  out->mOBS_ACT.mX[167ULL] = 0.0;
  out->mOBS_ACT.mX[168ULL] = t75->mX.mX[123ULL];
  out->mOBS_ACT.mX[169ULL] = Plant_Subsystem_Monitoring_Diode3_n_v;
  out->mOBS_ACT.mX[170ULL] = 0.0;
  out->mOBS_ACT.mX[171ULL] = 298.15;
  out->mOBS_ACT.mX[172ULL] = 298.15;
  out->mOBS_ACT.mX[173ULL] = 0.0;
  out->mOBS_ACT.mX[174ULL] = 0.0;
  out->mOBS_ACT.mX[175ULL] = Plant_Subsystem_Monitoring_Diode3_i;
  out->mOBS_ACT.mX[176ULL] = 0.0;
  out->mOBS_ACT.mX[177ULL] = Plant_Subsystem_Monitoring_Diode3_i;
  out->mOBS_ACT.mX[178ULL] = Plant_Subsystem_Monitoring_Diode3_i;
  out->mOBS_ACT.mX[179ULL] = Plant_Subsystem_Monitoring_Diode3_n_v;
  out->mOBS_ACT.mX[180ULL] = Plant_Subsystem_Monitoring_Diode3_p_v;
  out->mOBS_ACT.mX[181ULL] = Plant_Subsystem_Monitoring_Diode3_i *
    Plant_Subsystem_Monitoring_Diode3_v_diode * 0.001 * 1000.0;
  out->mOBS_ACT.mX[182ULL] = Plant_Subsystem_Monitoring_Diode3_v_diode;
  out->mOBS_ACT.mX[183ULL] = 0.0;
  out->mOBS_ACT.mX[184ULL] = Plant_Subsystem_Monitoring_Diode3_v_diode;
  out->mOBS_ACT.mX[185ULL] = -1.0;
  out->mOBS_ACT.mX[186ULL] = 1.0;
  out->mOBS_ACT.mX[187ULL] = 0.0;
  out->mOBS_ACT.mX[188ULL] = Plant_Subsystem_Monitoring_Diode4_i;
  out->mOBS_ACT.mX[189ULL] = Plant_Subsystem_Monitoring_Diode4_n_v;
  out->mOBS_ACT.mX[190ULL] = Plant_Subsystem_Monitoring_Diode4_p_v;
  out->mOBS_ACT.mX[191ULL] = t75->mX.mX[128ULL];
  out->mOBS_ACT.mX[192ULL] = 0.0;
  out->mOBS_ACT.mX[193ULL] = t75->mX.mX[126ULL];
  out->mOBS_ACT.mX[194ULL] = Plant_Subsystem_Monitoring_Diode4_n_v;
  out->mOBS_ACT.mX[195ULL] = 0.0;
  out->mOBS_ACT.mX[196ULL] = 298.15;
  out->mOBS_ACT.mX[197ULL] = 298.15;
  out->mOBS_ACT.mX[198ULL] = 0.0;
  out->mOBS_ACT.mX[199ULL] = 0.0;
  out->mOBS_ACT.mX[200ULL] = Plant_Subsystem_Monitoring_Diode4_i;
  out->mOBS_ACT.mX[201ULL] = 0.0;
  out->mOBS_ACT.mX[202ULL] = Plant_Subsystem_Monitoring_Diode4_i;
  out->mOBS_ACT.mX[203ULL] = Plant_Subsystem_Monitoring_Diode4_i;
  out->mOBS_ACT.mX[204ULL] = Plant_Subsystem_Monitoring_Diode4_n_v;
  out->mOBS_ACT.mX[205ULL] = Plant_Subsystem_Monitoring_Diode4_p_v;
  out->mOBS_ACT.mX[206ULL] = Plant_Subsystem_Monitoring_Diode4_i *
    Plant_Subsystem_Monitoring_Diode4_v_diode * 0.001 * 1000.0;
  out->mOBS_ACT.mX[207ULL] = Plant_Subsystem_Monitoring_Diode4_v_diode;
  out->mOBS_ACT.mX[208ULL] = 0.0;
  out->mOBS_ACT.mX[209ULL] = Plant_Subsystem_Monitoring_Diode4_v_diode;
  out->mOBS_ACT.mX[210ULL] = -1.0;
  out->mOBS_ACT.mX[211ULL] = 1.0;
  out->mOBS_ACT.mX[212ULL] = 0.0;
  out->mOBS_ACT.mX[213ULL] = Plant_Subsystem_Monitoring_Diode5_i;
  out->mOBS_ACT.mX[214ULL] = Plant_Subsystem_Monitoring_Diode5_n_v;
  out->mOBS_ACT.mX[215ULL] = Plant_Subsystem_Monitoring_Diode5_p_v;
  out->mOBS_ACT.mX[216ULL] = t75->mX.mX[131ULL];
  out->mOBS_ACT.mX[217ULL] = 0.0;
  out->mOBS_ACT.mX[218ULL] = t75->mX.mX[129ULL];
  out->mOBS_ACT.mX[219ULL] = Plant_Subsystem_Monitoring_Diode5_n_v;
  out->mOBS_ACT.mX[220ULL] = 0.0;
  out->mOBS_ACT.mX[221ULL] = 298.15;
  out->mOBS_ACT.mX[222ULL] = 298.15;
  out->mOBS_ACT.mX[223ULL] = 0.0;
  out->mOBS_ACT.mX[224ULL] = 0.0;
  out->mOBS_ACT.mX[225ULL] = Plant_Subsystem_Monitoring_Diode5_i;
  out->mOBS_ACT.mX[226ULL] = 0.0;
  out->mOBS_ACT.mX[227ULL] = Plant_Subsystem_Monitoring_Diode5_i;
  out->mOBS_ACT.mX[228ULL] = Plant_Subsystem_Monitoring_Diode5_i;
  out->mOBS_ACT.mX[229ULL] = Plant_Subsystem_Monitoring_Diode5_n_v;
  out->mOBS_ACT.mX[230ULL] = Plant_Subsystem_Monitoring_Diode5_p_v;
  out->mOBS_ACT.mX[231ULL] = Plant_Subsystem_Monitoring_Diode5_i *
    Plant_Subsystem_Monitoring_Diode5_v_diode * 0.001 * 1000.0;
  out->mOBS_ACT.mX[232ULL] = Plant_Subsystem_Monitoring_Diode5_v_diode;
  out->mOBS_ACT.mX[233ULL] = 0.0;
  out->mOBS_ACT.mX[234ULL] = Plant_Subsystem_Monitoring_Diode5_v_diode;
  out->mOBS_ACT.mX[235ULL] = -1.0;
  out->mOBS_ACT.mX[236ULL] = 1.0;
  out->mOBS_ACT.mX[237ULL] = 0.0;
  out->mOBS_ACT.mX[238ULL] = t41;
  out->mOBS_ACT.mX[239ULL] = Plant_Subsystem_Monitoring_Diode6_n_v;
  out->mOBS_ACT.mX[240ULL] = Plant_Subsystem_Monitoring_Diode6_p_v;
  out->mOBS_ACT.mX[241ULL] = t75->mX.mX[134ULL];
  out->mOBS_ACT.mX[242ULL] = 0.0;
  out->mOBS_ACT.mX[243ULL] = t75->mX.mX[132ULL];
  out->mOBS_ACT.mX[244ULL] = Plant_Subsystem_Monitoring_Diode6_n_v;
  out->mOBS_ACT.mX[245ULL] = 0.0;
  out->mOBS_ACT.mX[246ULL] = 298.15;
  out->mOBS_ACT.mX[247ULL] = 298.15;
  out->mOBS_ACT.mX[248ULL] = 0.0;
  out->mOBS_ACT.mX[249ULL] = 0.0;
  out->mOBS_ACT.mX[250ULL] = t41;
  out->mOBS_ACT.mX[251ULL] = 0.0;
  out->mOBS_ACT.mX[252ULL] = t41;
  out->mOBS_ACT.mX[253ULL] = t41;
  out->mOBS_ACT.mX[254ULL] = Plant_Subsystem_Monitoring_Diode6_n_v;
  out->mOBS_ACT.mX[255ULL] = Plant_Subsystem_Monitoring_Diode6_p_v;
  out->mOBS_ACT.mX[256ULL] = t41 * Plant_Subsystem_Monitoring_Diode6_v_diode *
    0.001 * 1000.0;
  out->mOBS_ACT.mX[257ULL] = Plant_Subsystem_Monitoring_Diode6_v_diode;
  out->mOBS_ACT.mX[258ULL] = 0.0;
  out->mOBS_ACT.mX[259ULL] = Plant_Subsystem_Monitoring_Diode6_v_diode;
  out->mOBS_ACT.mX[260ULL] = -1.0;
  out->mOBS_ACT.mX[261ULL] = 1.0;
  out->mOBS_ACT.mX[262ULL] = 0.0;
  out->mOBS_ACT.mX[263ULL] = Plant_Subsystem_Monitoring_Diode7_i;
  out->mOBS_ACT.mX[264ULL] = Plant_Subsystem_Monitoring_Diode7_n_v;
  out->mOBS_ACT.mX[265ULL] = Plant_Subsystem_Monitoring_Diode7_p_v;
  out->mOBS_ACT.mX[266ULL] = t75->mX.mX[137ULL];
  out->mOBS_ACT.mX[267ULL] = 0.0;
  out->mOBS_ACT.mX[268ULL] = t75->mX.mX[135ULL];
  out->mOBS_ACT.mX[269ULL] = Plant_Subsystem_Monitoring_Diode7_n_v;
  out->mOBS_ACT.mX[270ULL] = 0.0;
  out->mOBS_ACT.mX[271ULL] = 298.15;
  out->mOBS_ACT.mX[272ULL] = 298.15;
  out->mOBS_ACT.mX[273ULL] = 0.0;
  out->mOBS_ACT.mX[274ULL] = 0.0;
  out->mOBS_ACT.mX[275ULL] = Plant_Subsystem_Monitoring_Diode7_i;
  out->mOBS_ACT.mX[276ULL] = 0.0;
  out->mOBS_ACT.mX[277ULL] = Plant_Subsystem_Monitoring_Diode7_i;
  out->mOBS_ACT.mX[278ULL] = Plant_Subsystem_Monitoring_Diode7_i;
  out->mOBS_ACT.mX[279ULL] = Plant_Subsystem_Monitoring_Diode7_n_v;
  out->mOBS_ACT.mX[280ULL] = Plant_Subsystem_Monitoring_Diode7_p_v;
  out->mOBS_ACT.mX[281ULL] = Plant_Subsystem_Monitoring_Diode7_i *
    Plant_Subsystem_Monitoring_Diode7_v_diode * 0.001 * 1000.0;
  out->mOBS_ACT.mX[282ULL] = Plant_Subsystem_Monitoring_Diode7_v_diode;
  out->mOBS_ACT.mX[283ULL] = 0.0;
  out->mOBS_ACT.mX[284ULL] = Plant_Subsystem_Monitoring_Diode7_v_diode;
  out->mOBS_ACT.mX[285ULL] = -1.0;
  out->mOBS_ACT.mX[286ULL] = 1.0;
  out->mOBS_ACT.mX[287ULL] = 0.0;
  out->mOBS_ACT.mX[288ULL] = Plant_Subsystem_Monitoring_Diode8_i;
  out->mOBS_ACT.mX[289ULL] = Plant_Subsystem_Monitoring_Diode8_n_v;
  out->mOBS_ACT.mX[290ULL] = Plant_Subsystem_Monitoring_Diode8_p_v;
  out->mOBS_ACT.mX[291ULL] = t75->mX.mX[140ULL];
  out->mOBS_ACT.mX[292ULL] = 0.0;
  out->mOBS_ACT.mX[293ULL] = t75->mX.mX[138ULL];
  out->mOBS_ACT.mX[294ULL] = Plant_Subsystem_Monitoring_Diode8_n_v;
  out->mOBS_ACT.mX[295ULL] = 0.0;
  out->mOBS_ACT.mX[296ULL] = 298.15;
  out->mOBS_ACT.mX[297ULL] = 298.15;
  out->mOBS_ACT.mX[298ULL] = 0.0;
  out->mOBS_ACT.mX[299ULL] = 0.0;
  out->mOBS_ACT.mX[300ULL] = Plant_Subsystem_Monitoring_Diode8_i;
  out->mOBS_ACT.mX[301ULL] = 0.0;
  out->mOBS_ACT.mX[302ULL] = Plant_Subsystem_Monitoring_Diode8_i;
  out->mOBS_ACT.mX[303ULL] = Plant_Subsystem_Monitoring_Diode8_i;
  out->mOBS_ACT.mX[304ULL] = Plant_Subsystem_Monitoring_Diode8_n_v;
  out->mOBS_ACT.mX[305ULL] = Plant_Subsystem_Monitoring_Diode8_p_v;
  out->mOBS_ACT.mX[306ULL] = Plant_Subsystem_Monitoring_Diode8_i *
    Plant_Subsystem_Monitoring_Diode8_v_diode * 0.001 * 1000.0;
  out->mOBS_ACT.mX[307ULL] = Plant_Subsystem_Monitoring_Diode8_v_diode;
  out->mOBS_ACT.mX[308ULL] = 0.0;
  out->mOBS_ACT.mX[309ULL] = Plant_Subsystem_Monitoring_Diode8_v_diode;
  out->mOBS_ACT.mX[310ULL] = -1.0;
  out->mOBS_ACT.mX[311ULL] = 1.0;
  out->mOBS_ACT.mX[312ULL] = 0.0;
  out->mOBS_ACT.mX[313ULL] = t47;
  out->mOBS_ACT.mX[314ULL] = Plant_Subsystem_Monitoring_Diode9_n_v;
  out->mOBS_ACT.mX[315ULL] = Plant_Subsystem_Monitoring_Diode9_p_v;
  out->mOBS_ACT.mX[316ULL] = t75->mX.mX[143ULL];
  out->mOBS_ACT.mX[317ULL] = 0.0;
  out->mOBS_ACT.mX[318ULL] = t75->mX.mX[141ULL];
  out->mOBS_ACT.mX[319ULL] = Plant_Subsystem_Monitoring_Diode9_n_v;
  out->mOBS_ACT.mX[320ULL] = 0.0;
  out->mOBS_ACT.mX[321ULL] = 298.15;
  out->mOBS_ACT.mX[322ULL] = 298.15;
  out->mOBS_ACT.mX[323ULL] = 0.0;
  out->mOBS_ACT.mX[324ULL] = 0.0;
  out->mOBS_ACT.mX[325ULL] = t47;
  out->mOBS_ACT.mX[326ULL] = 0.0;
  out->mOBS_ACT.mX[327ULL] = t47;
  out->mOBS_ACT.mX[328ULL] = t47;
  out->mOBS_ACT.mX[329ULL] = Plant_Subsystem_Monitoring_Diode9_n_v;
  out->mOBS_ACT.mX[330ULL] = Plant_Subsystem_Monitoring_Diode9_p_v;
  out->mOBS_ACT.mX[331ULL] = t47 * Plant_Subsystem_Monitoring_Diode9_v_diode *
    0.001 * 1000.0;
  out->mOBS_ACT.mX[332ULL] = Plant_Subsystem_Monitoring_Diode9_v_diode;
  out->mOBS_ACT.mX[333ULL] = 0.0;
  out->mOBS_ACT.mX[334ULL] = Plant_Subsystem_Monitoring_Diode9_v_diode;
  out->mOBS_ACT.mX[335ULL] = 0.0;
  out->mOBS_ACT.mX[336ULL] = Plant_Subsystem_Monitoring_Diode_i;
  out->mOBS_ACT.mX[337ULL] = Plant_Subsystem_Monitoring_Diode_p_v;
  out->mOBS_ACT.mX[338ULL] = Plant_Charger_Load_Batt0_v;
  out->mOBS_ACT.mX[339ULL] = Plant_Subsystem_Monitoring_Diode_i * 39.0;
  out->mOBS_ACT.mX[340ULL] = t27;
  out->mOBS_ACT.mX[341ULL] = Plant_Subsystem_Monitoring_Diode1_p_v;
  out->mOBS_ACT.mX[342ULL] = t75->mX.mX[96ULL];
  out->mOBS_ACT.mX[343ULL] = t27 * 39.0;
  out->mOBS_ACT.mX[344ULL] = t29;
  out->mOBS_ACT.mX[345ULL] = Plant_Subsystem_Monitoring_Diode10_p_v;
  out->mOBS_ACT.mX[346ULL] = t75->mX.mX[98ULL];
  out->mOBS_ACT.mX[347ULL] = t29 * 39.0;
  out->mOBS_ACT.mX[348ULL] = Plant_Subsystem_Monitoring_Diode11_i;
  out->mOBS_ACT.mX[349ULL] = Plant_Subsystem_Monitoring_Diode11_p_v;
  out->mOBS_ACT.mX[350ULL] = t75->mX.mX[99ULL];
  out->mOBS_ACT.mX[351ULL] = Plant_Subsystem_Monitoring_Diode11_i * 39.0;
  out->mOBS_ACT.mX[352ULL] = Plant_Subsystem_Monitoring_Diode2_i;
  out->mOBS_ACT.mX[353ULL] = Plant_Subsystem_Monitoring_Diode2_p_v;
  out->mOBS_ACT.mX[354ULL] = t75->mX.mX[100ULL];
  out->mOBS_ACT.mX[355ULL] = Plant_Subsystem_Monitoring_Diode2_i * 39.0;
  out->mOBS_ACT.mX[356ULL] = Plant_Subsystem_Monitoring_Diode3_i;
  out->mOBS_ACT.mX[357ULL] = Plant_Subsystem_Monitoring_Diode3_p_v;
  out->mOBS_ACT.mX[358ULL] = t75->mX.mX[101ULL];
  out->mOBS_ACT.mX[359ULL] = Plant_Subsystem_Monitoring_Diode3_i * 39.0;
  out->mOBS_ACT.mX[360ULL] = Plant_Subsystem_Monitoring_Diode4_i;
  out->mOBS_ACT.mX[361ULL] = Plant_Subsystem_Monitoring_Diode4_p_v;
  out->mOBS_ACT.mX[362ULL] = t75->mX.mX[102ULL];
  out->mOBS_ACT.mX[363ULL] = Plant_Subsystem_Monitoring_Diode4_i * 39.0;
  out->mOBS_ACT.mX[364ULL] = Plant_Subsystem_Monitoring_Diode5_i;
  out->mOBS_ACT.mX[365ULL] = Plant_Subsystem_Monitoring_Diode5_p_v;
  out->mOBS_ACT.mX[366ULL] = t75->mX.mX[103ULL];
  out->mOBS_ACT.mX[367ULL] = Plant_Subsystem_Monitoring_Diode5_i * 39.0;
  out->mOBS_ACT.mX[368ULL] = t41;
  out->mOBS_ACT.mX[369ULL] = Plant_Subsystem_Monitoring_Diode6_p_v;
  out->mOBS_ACT.mX[370ULL] = t75->mX.mX[104ULL];
  out->mOBS_ACT.mX[371ULL] = t41 * 39.0;
  out->mOBS_ACT.mX[372ULL] = Plant_Subsystem_Monitoring_Diode7_i;
  out->mOBS_ACT.mX[373ULL] = Plant_Subsystem_Monitoring_Diode7_p_v;
  out->mOBS_ACT.mX[374ULL] = t75->mX.mX[105ULL];
  out->mOBS_ACT.mX[375ULL] = Plant_Subsystem_Monitoring_Diode7_i * 39.0;
  out->mOBS_ACT.mX[376ULL] = Plant_Subsystem_Monitoring_Diode8_i;
  out->mOBS_ACT.mX[377ULL] = Plant_Subsystem_Monitoring_Diode8_p_v;
  out->mOBS_ACT.mX[378ULL] = t75->mX.mX[106ULL];
  out->mOBS_ACT.mX[379ULL] = Plant_Subsystem_Monitoring_Diode8_i * 39.0;
  out->mOBS_ACT.mX[380ULL] = t47;
  out->mOBS_ACT.mX[381ULL] = Plant_Subsystem_Monitoring_Diode9_p_v;
  out->mOBS_ACT.mX[382ULL] = t75->mX.mX[107ULL];
  out->mOBS_ACT.mX[383ULL] = t47 * 39.0;
  out->mOBS_ACT.mX[384ULL] = t75->mU.mX[2ULL];
  out->mOBS_ACT.mX[385ULL] = t75->mU.mX[3ULL];
  out->mOBS_ACT.mX[386ULL] = t75->mU.mX[4ULL];
  out->mOBS_ACT.mX[387ULL] = t75->mU.mX[5ULL];
  out->mOBS_ACT.mX[388ULL] = t75->mU.mX[6ULL];
  out->mOBS_ACT.mX[389ULL] = t75->mU.mX[7ULL];
  out->mOBS_ACT.mX[390ULL] = t75->mU.mX[8ULL];
  out->mOBS_ACT.mX[391ULL] = t75->mU.mX[9ULL];
  out->mOBS_ACT.mX[392ULL] = t75->mU.mX[10ULL];
  out->mOBS_ACT.mX[393ULL] = t75->mU.mX[11ULL];
  out->mOBS_ACT.mX[394ULL] = t75->mU.mX[12ULL];
  out->mOBS_ACT.mX[395ULL] = t75->mU.mX[13ULL];
  out->mOBS_ACT.mX[396ULL] = Plant_Subsystem_Monitoring_Diode_i;
  out->mOBS_ACT.mX[397ULL] = t75->mX.mX[96ULL];
  out->mOBS_ACT.mX[398ULL] = Plant_Subsystem_Monitoring_Diode_n_v;
  out->mOBS_ACT.mX[399ULL] = t75->mX.mX[109ULL];
  out->mOBS_ACT.mX[400ULL] = t75->mU.mX[13ULL];
  out->mOBS_ACT.mX[401ULL] = t27;
  out->mOBS_ACT.mX[402ULL] = t75->mX.mX[100ULL];
  out->mOBS_ACT.mX[403ULL] = Plant_Subsystem_Monitoring_Diode1_n_v;
  out->mOBS_ACT.mX[404ULL] = t75->mX.mX[112ULL];
  out->mOBS_ACT.mX[405ULL] = t75->mU.mX[4ULL];
  out->mOBS_ACT.mX[406ULL] = t29;
  out->mOBS_ACT.mX[407ULL] = t75->mX.mX[99ULL];
  out->mOBS_ACT.mX[408ULL] = Plant_Subsystem_Monitoring_Diode10_n_v;
  out->mOBS_ACT.mX[409ULL] = t75->mX.mX[115ULL];
  out->mOBS_ACT.mX[410ULL] = t75->mU.mX[2ULL];
  out->mOBS_ACT.mX[411ULL] = Plant_Subsystem_Monitoring_Diode11_i;
  out->mOBS_ACT.mX[412ULL] = 0.0;
  out->mOBS_ACT.mX[413ULL] = t75->mX.mX[118ULL];
  out->mOBS_ACT.mX[414ULL] = t75->mX.mX[118ULL];
  out->mOBS_ACT.mX[415ULL] = t75->mU.mX[3ULL];
  out->mOBS_ACT.mX[416ULL] = Plant_Subsystem_Monitoring_Diode2_i;
  out->mOBS_ACT.mX[417ULL] = t75->mX.mX[101ULL];
  out->mOBS_ACT.mX[418ULL] = Plant_Subsystem_Monitoring_Diode2_n_v;
  out->mOBS_ACT.mX[419ULL] = t75->mX.mX[121ULL];
  out->mOBS_ACT.mX[420ULL] = t75->mU.mX[5ULL];
  out->mOBS_ACT.mX[421ULL] = Plant_Subsystem_Monitoring_Diode3_i;
  out->mOBS_ACT.mX[422ULL] = t75->mX.mX[102ULL];
  out->mOBS_ACT.mX[423ULL] = Plant_Subsystem_Monitoring_Diode3_n_v;
  out->mOBS_ACT.mX[424ULL] = t75->mX.mX[124ULL];
  out->mOBS_ACT.mX[425ULL] = t75->mU.mX[6ULL];
  out->mOBS_ACT.mX[426ULL] = Plant_Subsystem_Monitoring_Diode4_i;
  out->mOBS_ACT.mX[427ULL] = t75->mX.mX[103ULL];
  out->mOBS_ACT.mX[428ULL] = Plant_Subsystem_Monitoring_Diode4_n_v;
  out->mOBS_ACT.mX[429ULL] = t75->mX.mX[127ULL];
  out->mOBS_ACT.mX[430ULL] = t75->mU.mX[7ULL];
  out->mOBS_ACT.mX[431ULL] = Plant_Subsystem_Monitoring_Diode5_i;
  out->mOBS_ACT.mX[432ULL] = t75->mX.mX[104ULL];
  out->mOBS_ACT.mX[433ULL] = Plant_Subsystem_Monitoring_Diode5_n_v;
  out->mOBS_ACT.mX[434ULL] = t75->mX.mX[130ULL];
  out->mOBS_ACT.mX[435ULL] = t75->mU.mX[8ULL];
  out->mOBS_ACT.mX[436ULL] = t41;
  out->mOBS_ACT.mX[437ULL] = t75->mX.mX[105ULL];
  out->mOBS_ACT.mX[438ULL] = Plant_Subsystem_Monitoring_Diode6_n_v;
  out->mOBS_ACT.mX[439ULL] = t75->mX.mX[133ULL];
  out->mOBS_ACT.mX[440ULL] = t75->mU.mX[9ULL];
  out->mOBS_ACT.mX[441ULL] = Plant_Subsystem_Monitoring_Diode7_i;
  out->mOBS_ACT.mX[442ULL] = t75->mX.mX[106ULL];
  out->mOBS_ACT.mX[443ULL] = Plant_Subsystem_Monitoring_Diode7_n_v;
  out->mOBS_ACT.mX[444ULL] = t75->mX.mX[136ULL];
  out->mOBS_ACT.mX[445ULL] = t75->mU.mX[10ULL];
  out->mOBS_ACT.mX[446ULL] = Plant_Subsystem_Monitoring_Diode8_i;
  out->mOBS_ACT.mX[447ULL] = t75->mX.mX[107ULL];
  out->mOBS_ACT.mX[448ULL] = Plant_Subsystem_Monitoring_Diode8_n_v;
  out->mOBS_ACT.mX[449ULL] = t75->mX.mX[139ULL];
  out->mOBS_ACT.mX[450ULL] = t75->mU.mX[11ULL];
  out->mOBS_ACT.mX[451ULL] = t47;
  out->mOBS_ACT.mX[452ULL] = t75->mX.mX[98ULL];
  out->mOBS_ACT.mX[453ULL] = Plant_Subsystem_Monitoring_Diode9_n_v;
  out->mOBS_ACT.mX[454ULL] = t75->mX.mX[142ULL];
  out->mOBS_ACT.mX[455ULL] = t75->mU.mX[12ULL];
  out->mOBS_ACT.mX[456ULL] = t49;
  out->mOBS_ACT.mX[457ULL] = t75->mX.mX[96ULL];
  out->mOBS_ACT.mX[458ULL] = Plant_Charger_Load_Batt0_v;
  out->mOBS_ACT.mX[459ULL] = Plant_Subsystem_Monitoring_Voltage_Sensor1_V;
  out->mOBS_ACT.mX[460ULL] = t75->mX.mX[100ULL];
  out->mOBS_ACT.mX[461ULL] = t75->mX.mX[96ULL];
  out->mOBS_ACT.mX[462ULL] = Plant_Subsystem_Monitoring_Voltage_Sensor10_V;
  out->mOBS_ACT.mX[463ULL] = t75->mX.mX[99ULL];
  out->mOBS_ACT.mX[464ULL] = t75->mX.mX[98ULL];
  out->mOBS_ACT.mX[465ULL] = Plant_Subsystem_Monitoring_Voltage_Sensor10_V;
  out->mOBS_ACT.mX[466ULL] = t75->mX.mX[99ULL];
  out->mOBS_ACT.mX[467ULL] = 0.0;
  out->mOBS_ACT.mX[468ULL] = t75->mX.mX[99ULL];
  out->mOBS_ACT.mX[469ULL] = t75->mX.mX[99ULL];
  out->mOBS_ACT.mX[470ULL] = Plant_Subsystem_Monitoring_Voltage_Sensor1_V;
  out->mOBS_ACT.mX[471ULL] = t53;
  out->mOBS_ACT.mX[472ULL] = t75->mX.mX[101ULL];
  out->mOBS_ACT.mX[473ULL] = t75->mX.mX[100ULL];
  out->mOBS_ACT.mX[474ULL] = t53;
  out->mOBS_ACT.mX[475ULL] = t54;
  out->mOBS_ACT.mX[476ULL] = t75->mX.mX[102ULL];
  out->mOBS_ACT.mX[477ULL] = t75->mX.mX[101ULL];
  out->mOBS_ACT.mX[478ULL] = t54;
  out->mOBS_ACT.mX[479ULL] = t55;
  out->mOBS_ACT.mX[480ULL] = t75->mX.mX[103ULL];
  out->mOBS_ACT.mX[481ULL] = t75->mX.mX[102ULL];
  out->mOBS_ACT.mX[482ULL] = t55;
  out->mOBS_ACT.mX[483ULL] = t56;
  out->mOBS_ACT.mX[484ULL] = t75->mX.mX[104ULL];
  out->mOBS_ACT.mX[485ULL] = t75->mX.mX[103ULL];
  out->mOBS_ACT.mX[486ULL] = t56;
  out->mOBS_ACT.mX[487ULL] = Plant_Subsystem_Monitoring_Voltage_Sensor6_V;
  out->mOBS_ACT.mX[488ULL] = t75->mX.mX[105ULL];
  out->mOBS_ACT.mX[489ULL] = t75->mX.mX[104ULL];
  out->mOBS_ACT.mX[490ULL] = Plant_Subsystem_Monitoring_Voltage_Sensor6_V;
  out->mOBS_ACT.mX[491ULL] = t58;
  out->mOBS_ACT.mX[492ULL] = t75->mX.mX[106ULL];
  out->mOBS_ACT.mX[493ULL] = t75->mX.mX[105ULL];
  out->mOBS_ACT.mX[494ULL] = t58;
  out->mOBS_ACT.mX[495ULL] = Plant_Subsystem_Monitoring_Voltage_Sensor8_V;
  out->mOBS_ACT.mX[496ULL] = t75->mX.mX[107ULL];
  out->mOBS_ACT.mX[497ULL] = t75->mX.mX[106ULL];
  out->mOBS_ACT.mX[498ULL] = Plant_Subsystem_Monitoring_Voltage_Sensor8_V;
  out->mOBS_ACT.mX[499ULL] = Plant_Subsystem_Monitoring_Voltage_Sensor9_V;
  out->mOBS_ACT.mX[500ULL] = t75->mX.mX[98ULL];
  out->mOBS_ACT.mX[501ULL] = t75->mX.mX[107ULL];
  out->mOBS_ACT.mX[502ULL] = Plant_Subsystem_Monitoring_Voltage_Sensor9_V;
  out->mOBS_ACT.mX[503ULL] = t49;
  out->mOBS_ACT.mX[504ULL] = t75->mX.mX[0ULL];
  out->mOBS_ACT.mX[505ULL] = t75->mX.mX[0ULL];
  out->mOBS_ACT.mX[506ULL] = t75->mX.mX[0ULL];
  out->mOBS_ACT.mX[507ULL] = t75->mX.mX[0ULL];
  out->mOBS_ACT.mX[508ULL] = t75->mX.mX[1ULL] * 0.00027777777777777778;
  out->mOBS_ACT.mX[509ULL] = t75->mX.mX[0ULL];
  out->mOBS_ACT.mX[510ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_i;
  out->mOBS_ACT.mX[511ULL] = t75->mX.mX[96ULL];
  out->mOBS_ACT.mX[512ULL] = t75->mX.mX[2ULL];
  out->mOBS_ACT.mX[513ULL] = t75->mX.mX[2ULL];
  out->mOBS_ACT.mX[514ULL] = t75->mX.mX[147ULL];
  out->mOBS_ACT.mX[515ULL] = t75->mX.mX[146ULL];
  out->mOBS_ACT.mX[516ULL] = Plant_Charger_Load_Batt0_v;
  for (t18 = 3ULL; t18 - 3ULL < 5ULL; t18++) {
    out->mOBS_ACT.mX[t18 + 514ULL] = t75->mX.mX[t18];
  }

  for (t18 = 0ULL; t18 < 5ULL; t18++) {
    out->mOBS_ACT.mX[t18 + 522ULL] =
      Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xGdynamic
      [t18];
  }

  out->mOBS_ACT.mX[527ULL] = 0.0;
  out->mOBS_ACT.mX[528ULL] = t75->mX.mX[145ULL];
  out->mOBS_ACT.mX[529ULL] = t75->mX.mX[148ULL] * 1000.0;
  out->mOBS_ACT.mX[530ULL] = t75->mX.mX[147ULL];
  out->mOBS_ACT.mX[531ULL] = t75->mX.mX[97ULL];
  out->mOBS_ACT.mX[532ULL] = 1.0;
  out->mOBS_ACT.mX[533ULL] = t75->mX.mX[144ULL];
  out->mOBS_ACT.mX[534ULL] = 1.0;
  out->mOBS_ACT.mX[535ULL] = t75->mX.mX[0ULL];
  out->mOBS_ACT.mX[536ULL] = t75->mX.mX[2ULL];
  out->mOBS_ACT.mX[537ULL] = 1.0;
  out->mOBS_ACT.mX[538ULL] = t75->mX.mX[144ULL];
  out->mOBS_ACT.mX[539ULL] = t75->mX.mX[145ULL];
  out->mOBS_ACT.mX[540ULL] = 1.0;
  out->mOBS_ACT.mX[541ULL] = t75->mX.mX[146ULL];
  out->mOBS_ACT.mX[542ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_i;
  out->mOBS_ACT.mX[543ULL] = t75->mX.mX[96ULL];
  out->mOBS_ACT.mX[544ULL] = t75->mX.mX[2ULL];
  out->mOBS_ACT.mX[545ULL] = Plant_Charger_Load_Batt0_v;
  out->mOBS_ACT.mX[546ULL] = t75->mX.mX[147ULL];
  out->mOBS_ACT.mX[547ULL] = t75->mX.mX[147ULL];
  out->mOBS_ACT.mX[548ULL] = t75->mX.mX[0ULL];
  out->mOBS_ACT.mX[549ULL] = t75->mX.mX[149ULL] * 1000.0;
  out->mOBS_ACT.mX[550ULL] = t75->mX.mX[0ULL];
  out->mOBS_ACT.mX[551ULL] = t75->mX.mX[0ULL];
  out->mOBS_ACT.mX[552ULL] = t75->mX.mX[148ULL] * 1000.0;
  out->mOBS_ACT.mX[553ULL] = t75->mX.mX[97ULL];
  out->mOBS_ACT.mX[554ULL] = t75->mX.mX[8ULL];
  out->mOBS_ACT.mX[555ULL] = t75->mX.mX[8ULL];
  out->mOBS_ACT.mX[556ULL] = t75->mX.mX[8ULL];
  out->mOBS_ACT.mX[557ULL] = t75->mX.mX[8ULL];
  out->mOBS_ACT.mX[558ULL] = t75->mX.mX[9ULL] * 0.00027777777777777778;
  out->mOBS_ACT.mX[559ULL] = t75->mX.mX[8ULL];
  out->mOBS_ACT.mX[560ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_i;
  out->mOBS_ACT.mX[561ULL] = t75->mX.mX[100ULL];
  out->mOBS_ACT.mX[562ULL] = t75->mX.mX[10ULL];
  out->mOBS_ACT.mX[563ULL] = t75->mX.mX[10ULL];
  out->mOBS_ACT.mX[564ULL] = t75->mX.mX[153ULL];
  out->mOBS_ACT.mX[565ULL] = t75->mX.mX[152ULL];
  out->mOBS_ACT.mX[566ULL] = t75->mX.mX[96ULL];
  for (t18 = 11ULL; t18 - 11ULL < 5ULL; t18++) {
    out->mOBS_ACT.mX[t18 + 556ULL] = t75->mX.mX[t18];
  }

  for (t18 = 0ULL; t18 < 5ULL; t18++) {
    out->mOBS_ACT.mX[t18 + 572ULL] =
      Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xGdynamic
      [t18];
  }

  out->mOBS_ACT.mX[577ULL] = 0.0;
  out->mOBS_ACT.mX[578ULL] = t75->mX.mX[151ULL];
  out->mOBS_ACT.mX[579ULL] = t75->mX.mX[154ULL] * 1000.0;
  out->mOBS_ACT.mX[580ULL] = t75->mX.mX[153ULL];
  out->mOBS_ACT.mX[581ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_v;
  out->mOBS_ACT.mX[582ULL] = 1.0;
  out->mOBS_ACT.mX[583ULL] = t75->mX.mX[150ULL];
  out->mOBS_ACT.mX[584ULL] = 1.0;
  out->mOBS_ACT.mX[585ULL] = t75->mX.mX[8ULL];
  out->mOBS_ACT.mX[586ULL] = t75->mX.mX[10ULL];
  out->mOBS_ACT.mX[587ULL] = 1.0;
  out->mOBS_ACT.mX[588ULL] = t75->mX.mX[150ULL];
  out->mOBS_ACT.mX[589ULL] = t75->mX.mX[151ULL];
  out->mOBS_ACT.mX[590ULL] = 1.0;
  out->mOBS_ACT.mX[591ULL] = t75->mX.mX[152ULL];
  out->mOBS_ACT.mX[592ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_i;
  out->mOBS_ACT.mX[593ULL] = t75->mX.mX[100ULL];
  out->mOBS_ACT.mX[594ULL] = t75->mX.mX[10ULL];
  out->mOBS_ACT.mX[595ULL] = t75->mX.mX[96ULL];
  out->mOBS_ACT.mX[596ULL] = t75->mX.mX[153ULL];
  out->mOBS_ACT.mX[597ULL] = t75->mX.mX[153ULL];
  out->mOBS_ACT.mX[598ULL] = t75->mX.mX[8ULL];
  out->mOBS_ACT.mX[599ULL] = ((t75->mX.mX[0ULL] * 2.0E-6 + t75->mX.mX[8ULL] *
    -4.0E-6) + t75->mX.mX[16ULL] * 2.0E-6) * 1000.0;
  out->mOBS_ACT.mX[600ULL] = t75->mX.mX[8ULL];
  out->mOBS_ACT.mX[601ULL] = t75->mX.mX[8ULL];
  out->mOBS_ACT.mX[602ULL] = t75->mX.mX[154ULL] * 1000.0;
  out->mOBS_ACT.mX[603ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based1_electricalModel_v;
  out->mOBS_ACT.mX[604ULL] = t75->mX.mX[17ULL];
  out->mOBS_ACT.mX[605ULL] = t75->mX.mX[17ULL];
  out->mOBS_ACT.mX[606ULL] = t75->mX.mX[17ULL];
  out->mOBS_ACT.mX[607ULL] = t75->mX.mX[17ULL];
  out->mOBS_ACT.mX[608ULL] = t75->mX.mX[18ULL] * 0.00027777777777777778;
  out->mOBS_ACT.mX[609ULL] = t75->mX.mX[17ULL];
  out->mOBS_ACT.mX[610ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_i;
  out->mOBS_ACT.mX[611ULL] = t75->mX.mX[99ULL];
  out->mOBS_ACT.mX[612ULL] = t75->mX.mX[19ULL];
  out->mOBS_ACT.mX[613ULL] = t75->mX.mX[19ULL];
  out->mOBS_ACT.mX[614ULL] = t75->mX.mX[158ULL];
  out->mOBS_ACT.mX[615ULL] = t75->mX.mX[157ULL];
  out->mOBS_ACT.mX[616ULL] = t75->mX.mX[98ULL];
  for (t18 = 20ULL; t18 - 20ULL < 5ULL; t18++) {
    out->mOBS_ACT.mX[t18 + 597ULL] = t75->mX.mX[t18];
  }

  for (t18 = 0ULL; t18 < 5ULL; t18++) {
    out->mOBS_ACT.mX[t18 + 622ULL] =
      Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xGdynamic
      [t18];
  }

  out->mOBS_ACT.mX[627ULL] = 0.0;
  out->mOBS_ACT.mX[628ULL] = t75->mX.mX[156ULL];
  out->mOBS_ACT.mX[629ULL] = t75->mX.mX[159ULL] * 1000.0;
  out->mOBS_ACT.mX[630ULL] = t75->mX.mX[158ULL];
  out->mOBS_ACT.mX[631ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_v;
  out->mOBS_ACT.mX[632ULL] = 1.0;
  out->mOBS_ACT.mX[633ULL] = t75->mX.mX[155ULL];
  out->mOBS_ACT.mX[634ULL] = 1.0;
  out->mOBS_ACT.mX[635ULL] = t75->mX.mX[17ULL];
  out->mOBS_ACT.mX[636ULL] = t75->mX.mX[19ULL];
  out->mOBS_ACT.mX[637ULL] = 1.0;
  out->mOBS_ACT.mX[638ULL] = t75->mX.mX[155ULL];
  out->mOBS_ACT.mX[639ULL] = t75->mX.mX[156ULL];
  out->mOBS_ACT.mX[640ULL] = 1.0;
  out->mOBS_ACT.mX[641ULL] = t75->mX.mX[157ULL];
  out->mOBS_ACT.mX[642ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_i;
  out->mOBS_ACT.mX[643ULL] = t75->mX.mX[99ULL];
  out->mOBS_ACT.mX[644ULL] = t75->mX.mX[19ULL];
  out->mOBS_ACT.mX[645ULL] = t75->mX.mX[98ULL];
  out->mOBS_ACT.mX[646ULL] = t75->mX.mX[158ULL];
  out->mOBS_ACT.mX[647ULL] = t75->mX.mX[158ULL];
  out->mOBS_ACT.mX[648ULL] = t75->mX.mX[17ULL];
  out->mOBS_ACT.mX[649ULL] = ((t75->mX.mX[17ULL] * -4.0E-6 + t75->mX.mX[25ULL] *
    2.0E-6) + t75->mX.mX[26ULL] * 2.0E-6) * 1000.0;
  out->mOBS_ACT.mX[650ULL] = t75->mX.mX[17ULL];
  out->mOBS_ACT.mX[651ULL] = t75->mX.mX[17ULL];
  out->mOBS_ACT.mX[652ULL] = t75->mX.mX[159ULL] * 1000.0;
  out->mOBS_ACT.mX[653ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based10_electricalModel_v;
  out->mOBS_ACT.mX[654ULL] = t75->mX.mX[158ULL];
  out->mOBS_ACT.mX[655ULL] = t75->mX.mX[25ULL];
  out->mOBS_ACT.mX[656ULL] = t75->mX.mX[25ULL];
  out->mOBS_ACT.mX[657ULL] = t75->mX.mX[25ULL];
  out->mOBS_ACT.mX[658ULL] = t75->mX.mX[25ULL];
  out->mOBS_ACT.mX[659ULL] = t75->mX.mX[27ULL] * 0.00027777777777777778;
  out->mOBS_ACT.mX[660ULL] = t75->mX.mX[25ULL];
  out->mOBS_ACT.mX[661ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_i;
  out->mOBS_ACT.mX[662ULL] = 0.0;
  out->mOBS_ACT.mX[663ULL] = t75->mX.mX[28ULL];
  out->mOBS_ACT.mX[664ULL] = t75->mX.mX[28ULL];
  out->mOBS_ACT.mX[665ULL] = t75->mX.mX[163ULL];
  out->mOBS_ACT.mX[666ULL] = t75->mX.mX[162ULL];
  out->mOBS_ACT.mX[667ULL] = t75->mX.mX[99ULL];
  for (t18 = 29ULL; t18 - 29ULL < 5ULL; t18++) {
    out->mOBS_ACT.mX[t18 + 639ULL] = t75->mX.mX[t18];
  }

  for (t18 = 0ULL; t18 < 5ULL; t18++) {
    out->mOBS_ACT.mX[t18 + 673ULL] =
      Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xGdynamic
      [t18];
  }

  out->mOBS_ACT.mX[678ULL] = 0.0;
  out->mOBS_ACT.mX[679ULL] = t75->mX.mX[161ULL];
  out->mOBS_ACT.mX[680ULL] = t75->mX.mX[164ULL] * 1000.0;
  out->mOBS_ACT.mX[681ULL] = t75->mX.mX[163ULL];
  out->mOBS_ACT.mX[682ULL] = t75->mX.mX[99ULL];
  out->mOBS_ACT.mX[683ULL] = 1.0;
  out->mOBS_ACT.mX[684ULL] = t75->mX.mX[160ULL];
  out->mOBS_ACT.mX[685ULL] = 1.0;
  out->mOBS_ACT.mX[686ULL] = t75->mX.mX[25ULL];
  out->mOBS_ACT.mX[687ULL] = t75->mX.mX[28ULL];
  out->mOBS_ACT.mX[688ULL] = 1.0;
  out->mOBS_ACT.mX[689ULL] = t75->mX.mX[160ULL];
  out->mOBS_ACT.mX[690ULL] = t75->mX.mX[161ULL];
  out->mOBS_ACT.mX[691ULL] = 1.0;
  out->mOBS_ACT.mX[692ULL] = t75->mX.mX[162ULL];
  out->mOBS_ACT.mX[693ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based11_electricalModel_i;
  out->mOBS_ACT.mX[694ULL] = 0.0;
  out->mOBS_ACT.mX[695ULL] = t75->mX.mX[28ULL];
  out->mOBS_ACT.mX[696ULL] = t75->mX.mX[99ULL];
  out->mOBS_ACT.mX[697ULL] = t75->mX.mX[163ULL];
  out->mOBS_ACT.mX[698ULL] = t75->mX.mX[163ULL];
  out->mOBS_ACT.mX[699ULL] = t75->mX.mX[25ULL];
  out->mOBS_ACT.mX[700ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based11_thermalModel_Q * 1000.0;
  out->mOBS_ACT.mX[701ULL] = t75->mX.mX[25ULL];
  out->mOBS_ACT.mX[702ULL] = t75->mX.mX[25ULL];
  out->mOBS_ACT.mX[703ULL] = t75->mX.mX[164ULL] * 1000.0;
  out->mOBS_ACT.mX[704ULL] = t75->mX.mX[99ULL];
  out->mOBS_ACT.mX[705ULL] = t75->mX.mX[163ULL];
  out->mOBS_ACT.mX[706ULL] = t75->mX.mX[153ULL];
  out->mOBS_ACT.mX[707ULL] = t75->mX.mX[16ULL];
  out->mOBS_ACT.mX[708ULL] = t75->mX.mX[16ULL];
  out->mOBS_ACT.mX[709ULL] = t75->mX.mX[16ULL];
  out->mOBS_ACT.mX[710ULL] = t75->mX.mX[16ULL];
  out->mOBS_ACT.mX[711ULL] = t75->mX.mX[34ULL] * 0.00027777777777777778;
  out->mOBS_ACT.mX[712ULL] = t75->mX.mX[16ULL];
  out->mOBS_ACT.mX[713ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_i;
  out->mOBS_ACT.mX[714ULL] = t75->mX.mX[101ULL];
  out->mOBS_ACT.mX[715ULL] = t75->mX.mX[35ULL];
  out->mOBS_ACT.mX[716ULL] = t75->mX.mX[35ULL];
  out->mOBS_ACT.mX[717ULL] = t75->mX.mX[168ULL];
  out->mOBS_ACT.mX[718ULL] = t75->mX.mX[167ULL];
  out->mOBS_ACT.mX[719ULL] = t75->mX.mX[100ULL];
  for (t18 = 36ULL; t18 - 36ULL < 5ULL; t18++) {
    out->mOBS_ACT.mX[t18 + 684ULL] = t75->mX.mX[t18];
  }

  for (t18 = 0ULL; t18 < 5ULL; t18++) {
    out->mOBS_ACT.mX[t18 + 725ULL] =
      Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xGdynamic
      [t18];
  }

  out->mOBS_ACT.mX[730ULL] = 0.0;
  out->mOBS_ACT.mX[731ULL] = t75->mX.mX[166ULL];
  out->mOBS_ACT.mX[732ULL] = t75->mX.mX[169ULL] * 1000.0;
  out->mOBS_ACT.mX[733ULL] = t75->mX.mX[168ULL];
  out->mOBS_ACT.mX[734ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_v;
  out->mOBS_ACT.mX[735ULL] = 1.0;
  out->mOBS_ACT.mX[736ULL] = t75->mX.mX[165ULL];
  out->mOBS_ACT.mX[737ULL] = 1.0;
  out->mOBS_ACT.mX[738ULL] = t75->mX.mX[16ULL];
  out->mOBS_ACT.mX[739ULL] = t75->mX.mX[35ULL];
  out->mOBS_ACT.mX[740ULL] = 1.0;
  out->mOBS_ACT.mX[741ULL] = t75->mX.mX[165ULL];
  out->mOBS_ACT.mX[742ULL] = t75->mX.mX[166ULL];
  out->mOBS_ACT.mX[743ULL] = 1.0;
  out->mOBS_ACT.mX[744ULL] = t75->mX.mX[167ULL];
  out->mOBS_ACT.mX[745ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_i;
  out->mOBS_ACT.mX[746ULL] = t75->mX.mX[101ULL];
  out->mOBS_ACT.mX[747ULL] = t75->mX.mX[35ULL];
  out->mOBS_ACT.mX[748ULL] = t75->mX.mX[100ULL];
  out->mOBS_ACT.mX[749ULL] = t75->mX.mX[168ULL];
  out->mOBS_ACT.mX[750ULL] = t75->mX.mX[168ULL];
  out->mOBS_ACT.mX[751ULL] = t75->mX.mX[16ULL];
  out->mOBS_ACT.mX[752ULL] = ((t75->mX.mX[8ULL] * 2.0E-6 + t75->mX.mX[16ULL] *
    -4.0E-6) + t75->mX.mX[41ULL] * 2.0E-6) * 1000.0;
  out->mOBS_ACT.mX[753ULL] = t75->mX.mX[16ULL];
  out->mOBS_ACT.mX[754ULL] = t75->mX.mX[16ULL];
  out->mOBS_ACT.mX[755ULL] = t75->mX.mX[169ULL] * 1000.0;
  out->mOBS_ACT.mX[756ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based2_electricalModel_v;
  out->mOBS_ACT.mX[757ULL] = t75->mX.mX[168ULL];
  out->mOBS_ACT.mX[758ULL] = t75->mX.mX[41ULL];
  out->mOBS_ACT.mX[759ULL] = t75->mX.mX[41ULL];
  out->mOBS_ACT.mX[760ULL] = t75->mX.mX[41ULL];
  out->mOBS_ACT.mX[761ULL] = t75->mX.mX[41ULL];
  out->mOBS_ACT.mX[762ULL] = t75->mX.mX[42ULL] * 0.00027777777777777778;
  out->mOBS_ACT.mX[763ULL] = t75->mX.mX[41ULL];
  out->mOBS_ACT.mX[764ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i;
  out->mOBS_ACT.mX[765ULL] = t75->mX.mX[102ULL];
  out->mOBS_ACT.mX[766ULL] = t75->mX.mX[43ULL];
  out->mOBS_ACT.mX[767ULL] = t75->mX.mX[43ULL];
  out->mOBS_ACT.mX[768ULL] = t75->mX.mX[173ULL];
  out->mOBS_ACT.mX[769ULL] = t75->mX.mX[172ULL];
  out->mOBS_ACT.mX[770ULL] = t75->mX.mX[101ULL];
  for (t18 = 44ULL; t18 - 44ULL < 5ULL; t18++) {
    out->mOBS_ACT.mX[t18 + 727ULL] = t75->mX.mX[t18];
  }

  for (t18 = 0ULL; t18 < 5ULL; t18++) {
    out->mOBS_ACT.mX[t18 + 776ULL] =
      Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xGdynamic
      [t18];
  }

  out->mOBS_ACT.mX[781ULL] = 0.0;
  out->mOBS_ACT.mX[782ULL] = t75->mX.mX[171ULL];
  out->mOBS_ACT.mX[783ULL] = t75->mX.mX[174ULL] * 1000.0;
  out->mOBS_ACT.mX[784ULL] = t75->mX.mX[173ULL];
  out->mOBS_ACT.mX[785ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_v;
  out->mOBS_ACT.mX[786ULL] = 1.0;
  out->mOBS_ACT.mX[787ULL] = t75->mX.mX[170ULL];
  out->mOBS_ACT.mX[788ULL] = 1.0;
  out->mOBS_ACT.mX[789ULL] = t75->mX.mX[41ULL];
  out->mOBS_ACT.mX[790ULL] = t75->mX.mX[43ULL];
  out->mOBS_ACT.mX[791ULL] = 1.0;
  out->mOBS_ACT.mX[792ULL] = t75->mX.mX[170ULL];
  out->mOBS_ACT.mX[793ULL] = t75->mX.mX[171ULL];
  out->mOBS_ACT.mX[794ULL] = 1.0;
  out->mOBS_ACT.mX[795ULL] = t75->mX.mX[172ULL];
  out->mOBS_ACT.mX[796ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_i;
  out->mOBS_ACT.mX[797ULL] = t75->mX.mX[102ULL];
  out->mOBS_ACT.mX[798ULL] = t75->mX.mX[43ULL];
  out->mOBS_ACT.mX[799ULL] = t75->mX.mX[101ULL];
  out->mOBS_ACT.mX[800ULL] = t75->mX.mX[173ULL];
  out->mOBS_ACT.mX[801ULL] = t75->mX.mX[173ULL];
  out->mOBS_ACT.mX[802ULL] = t75->mX.mX[41ULL];
  out->mOBS_ACT.mX[803ULL] = ((t75->mX.mX[16ULL] * 2.0E-6 + t75->mX.mX[41ULL] *
    -4.0E-6) + t75->mX.mX[49ULL] * 2.0E-6) * 1000.0;
  out->mOBS_ACT.mX[804ULL] = t75->mX.mX[41ULL];
  out->mOBS_ACT.mX[805ULL] = t75->mX.mX[41ULL];
  out->mOBS_ACT.mX[806ULL] = t75->mX.mX[174ULL] * 1000.0;
  out->mOBS_ACT.mX[807ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based3_electricalModel_v;
  out->mOBS_ACT.mX[808ULL] = t75->mX.mX[173ULL];
  out->mOBS_ACT.mX[809ULL] = t75->mX.mX[49ULL];
  out->mOBS_ACT.mX[810ULL] = t75->mX.mX[49ULL];
  out->mOBS_ACT.mX[811ULL] = t75->mX.mX[49ULL];
  out->mOBS_ACT.mX[812ULL] = t75->mX.mX[49ULL];
  out->mOBS_ACT.mX[813ULL] = t75->mX.mX[50ULL] * 0.00027777777777777778;
  out->mOBS_ACT.mX[814ULL] = t75->mX.mX[49ULL];
  out->mOBS_ACT.mX[815ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_i;
  out->mOBS_ACT.mX[816ULL] = t75->mX.mX[103ULL];
  out->mOBS_ACT.mX[817ULL] = t75->mX.mX[51ULL];
  out->mOBS_ACT.mX[818ULL] = t75->mX.mX[51ULL];
  out->mOBS_ACT.mX[819ULL] = t75->mX.mX[178ULL];
  out->mOBS_ACT.mX[820ULL] = t75->mX.mX[177ULL];
  out->mOBS_ACT.mX[821ULL] = t75->mX.mX[102ULL];
  for (t18 = 52ULL; t18 - 52ULL < 5ULL; t18++) {
    out->mOBS_ACT.mX[t18 + 770ULL] = t75->mX.mX[t18];
  }

  for (t18 = 0ULL; t18 < 5ULL; t18++) {
    out->mOBS_ACT.mX[t18 + 827ULL] =
      Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xGdynamic
      [t18];
  }

  out->mOBS_ACT.mX[832ULL] = 0.0;
  out->mOBS_ACT.mX[833ULL] = t75->mX.mX[176ULL];
  out->mOBS_ACT.mX[834ULL] = t75->mX.mX[179ULL] * 1000.0;
  out->mOBS_ACT.mX[835ULL] = t75->mX.mX[178ULL];
  out->mOBS_ACT.mX[836ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_v;
  out->mOBS_ACT.mX[837ULL] = 1.0;
  out->mOBS_ACT.mX[838ULL] = t75->mX.mX[175ULL];
  out->mOBS_ACT.mX[839ULL] = 1.0;
  out->mOBS_ACT.mX[840ULL] = t75->mX.mX[49ULL];
  out->mOBS_ACT.mX[841ULL] = t75->mX.mX[51ULL];
  out->mOBS_ACT.mX[842ULL] = 1.0;
  out->mOBS_ACT.mX[843ULL] = t75->mX.mX[175ULL];
  out->mOBS_ACT.mX[844ULL] = t75->mX.mX[176ULL];
  out->mOBS_ACT.mX[845ULL] = 1.0;
  out->mOBS_ACT.mX[846ULL] = t75->mX.mX[177ULL];
  out->mOBS_ACT.mX[847ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_i;
  out->mOBS_ACT.mX[848ULL] = t75->mX.mX[103ULL];
  out->mOBS_ACT.mX[849ULL] = t75->mX.mX[51ULL];
  out->mOBS_ACT.mX[850ULL] = t75->mX.mX[102ULL];
  out->mOBS_ACT.mX[851ULL] = t75->mX.mX[178ULL];
  out->mOBS_ACT.mX[852ULL] = t75->mX.mX[178ULL];
  out->mOBS_ACT.mX[853ULL] = t75->mX.mX[49ULL];
  out->mOBS_ACT.mX[854ULL] = ((t75->mX.mX[41ULL] * 2.0E-6 + t75->mX.mX[49ULL] *
    -4.0E-6) + t75->mX.mX[57ULL] * 2.0E-6) * 1000.0;
  out->mOBS_ACT.mX[855ULL] = t75->mX.mX[49ULL];
  out->mOBS_ACT.mX[856ULL] = t75->mX.mX[49ULL];
  out->mOBS_ACT.mX[857ULL] = t75->mX.mX[179ULL] * 1000.0;
  out->mOBS_ACT.mX[858ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based4_electricalModel_v;
  out->mOBS_ACT.mX[859ULL] = t75->mX.mX[178ULL];
  out->mOBS_ACT.mX[860ULL] = t75->mX.mX[57ULL];
  out->mOBS_ACT.mX[861ULL] = t75->mX.mX[57ULL];
  out->mOBS_ACT.mX[862ULL] = t75->mX.mX[57ULL];
  out->mOBS_ACT.mX[863ULL] = t75->mX.mX[57ULL];
  out->mOBS_ACT.mX[864ULL] = t75->mX.mX[58ULL] * 0.00027777777777777778;
  out->mOBS_ACT.mX[865ULL] = t75->mX.mX[57ULL];
  out->mOBS_ACT.mX[866ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_i;
  out->mOBS_ACT.mX[867ULL] = t75->mX.mX[104ULL];
  out->mOBS_ACT.mX[868ULL] = t75->mX.mX[59ULL];
  out->mOBS_ACT.mX[869ULL] = t75->mX.mX[59ULL];
  out->mOBS_ACT.mX[870ULL] = t75->mX.mX[183ULL];
  out->mOBS_ACT.mX[871ULL] = t75->mX.mX[182ULL];
  out->mOBS_ACT.mX[872ULL] = t75->mX.mX[103ULL];
  for (t18 = 60ULL; t18 - 60ULL < 5ULL; t18++) {
    out->mOBS_ACT.mX[t18 + 813ULL] = t75->mX.mX[t18];
  }

  for (t18 = 0ULL; t18 < 5ULL; t18++) {
    out->mOBS_ACT.mX[t18 + 878ULL] =
      Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xGdynamic
      [t18];
  }

  out->mOBS_ACT.mX[883ULL] = 0.0;
  out->mOBS_ACT.mX[884ULL] = t75->mX.mX[181ULL];
  out->mOBS_ACT.mX[885ULL] = t75->mX.mX[184ULL] * 1000.0;
  out->mOBS_ACT.mX[886ULL] = t75->mX.mX[183ULL];
  out->mOBS_ACT.mX[887ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_v;
  out->mOBS_ACT.mX[888ULL] = 1.0;
  out->mOBS_ACT.mX[889ULL] = t75->mX.mX[180ULL];
  out->mOBS_ACT.mX[890ULL] = 1.0;
  out->mOBS_ACT.mX[891ULL] = t75->mX.mX[57ULL];
  out->mOBS_ACT.mX[892ULL] = t75->mX.mX[59ULL];
  out->mOBS_ACT.mX[893ULL] = 1.0;
  out->mOBS_ACT.mX[894ULL] = t75->mX.mX[180ULL];
  out->mOBS_ACT.mX[895ULL] = t75->mX.mX[181ULL];
  out->mOBS_ACT.mX[896ULL] = 1.0;
  out->mOBS_ACT.mX[897ULL] = t75->mX.mX[182ULL];
  out->mOBS_ACT.mX[898ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_i;
  out->mOBS_ACT.mX[899ULL] = t75->mX.mX[104ULL];
  out->mOBS_ACT.mX[900ULL] = t75->mX.mX[59ULL];
  out->mOBS_ACT.mX[901ULL] = t75->mX.mX[103ULL];
  out->mOBS_ACT.mX[902ULL] = t75->mX.mX[183ULL];
  out->mOBS_ACT.mX[903ULL] = t75->mX.mX[183ULL];
  out->mOBS_ACT.mX[904ULL] = t75->mX.mX[57ULL];
  out->mOBS_ACT.mX[905ULL] = ((t75->mX.mX[49ULL] * 2.0E-6 + t75->mX.mX[57ULL] *
    -4.0E-6) + t75->mX.mX[65ULL] * 2.0E-6) * 1000.0;
  out->mOBS_ACT.mX[906ULL] = t75->mX.mX[57ULL];
  out->mOBS_ACT.mX[907ULL] = t75->mX.mX[57ULL];
  out->mOBS_ACT.mX[908ULL] = t75->mX.mX[184ULL] * 1000.0;
  out->mOBS_ACT.mX[909ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based5_electricalModel_v;
  out->mOBS_ACT.mX[910ULL] = t75->mX.mX[183ULL];
  out->mOBS_ACT.mX[911ULL] = t75->mX.mX[65ULL];
  out->mOBS_ACT.mX[912ULL] = t75->mX.mX[65ULL];
  out->mOBS_ACT.mX[913ULL] = t75->mX.mX[65ULL];
  out->mOBS_ACT.mX[914ULL] = t75->mX.mX[65ULL];
  out->mOBS_ACT.mX[915ULL] = t75->mX.mX[66ULL] * 0.00027777777777777778;
  out->mOBS_ACT.mX[916ULL] = t75->mX.mX[65ULL];
  out->mOBS_ACT.mX[917ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_i;
  out->mOBS_ACT.mX[918ULL] = t75->mX.mX[105ULL];
  out->mOBS_ACT.mX[919ULL] = t75->mX.mX[67ULL];
  out->mOBS_ACT.mX[920ULL] = t75->mX.mX[67ULL];
  out->mOBS_ACT.mX[921ULL] = t75->mX.mX[188ULL];
  out->mOBS_ACT.mX[922ULL] = t75->mX.mX[187ULL];
  out->mOBS_ACT.mX[923ULL] = t75->mX.mX[104ULL];
  for (t18 = 68ULL; t18 - 68ULL < 5ULL; t18++) {
    out->mOBS_ACT.mX[t18 + 856ULL] = t75->mX.mX[t18];
  }

  for (t18 = 0ULL; t18 < 5ULL; t18++) {
    out->mOBS_ACT.mX[t18 + 929ULL] =
      Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xGdynamic
      [t18];
  }

  out->mOBS_ACT.mX[934ULL] = 0.0;
  out->mOBS_ACT.mX[935ULL] = t75->mX.mX[186ULL];
  out->mOBS_ACT.mX[936ULL] = t75->mX.mX[189ULL] * 1000.0;
  out->mOBS_ACT.mX[937ULL] = t75->mX.mX[188ULL];
  out->mOBS_ACT.mX[938ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_v;
  out->mOBS_ACT.mX[939ULL] = 1.0;
  out->mOBS_ACT.mX[940ULL] = t75->mX.mX[185ULL];
  out->mOBS_ACT.mX[941ULL] = 1.0;
  out->mOBS_ACT.mX[942ULL] = t75->mX.mX[65ULL];
  out->mOBS_ACT.mX[943ULL] = t75->mX.mX[67ULL];
  out->mOBS_ACT.mX[944ULL] = 1.0;
  out->mOBS_ACT.mX[945ULL] = t75->mX.mX[185ULL];
  out->mOBS_ACT.mX[946ULL] = t75->mX.mX[186ULL];
  out->mOBS_ACT.mX[947ULL] = 1.0;
  out->mOBS_ACT.mX[948ULL] = t75->mX.mX[187ULL];
  out->mOBS_ACT.mX[949ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_i;
  out->mOBS_ACT.mX[950ULL] = t75->mX.mX[105ULL];
  out->mOBS_ACT.mX[951ULL] = t75->mX.mX[67ULL];
  out->mOBS_ACT.mX[952ULL] = t75->mX.mX[104ULL];
  out->mOBS_ACT.mX[953ULL] = t75->mX.mX[188ULL];
  out->mOBS_ACT.mX[954ULL] = t75->mX.mX[188ULL];
  out->mOBS_ACT.mX[955ULL] = t75->mX.mX[65ULL];
  out->mOBS_ACT.mX[956ULL] = ((t75->mX.mX[57ULL] * 2.0E-6 + t75->mX.mX[65ULL] *
    -4.0E-6) + t75->mX.mX[73ULL] * 2.0E-6) * 1000.0;
  out->mOBS_ACT.mX[957ULL] = t75->mX.mX[65ULL];
  out->mOBS_ACT.mX[958ULL] = t75->mX.mX[65ULL];
  out->mOBS_ACT.mX[959ULL] = t75->mX.mX[189ULL] * 1000.0;
  out->mOBS_ACT.mX[960ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based6_electricalModel_v;
  out->mOBS_ACT.mX[961ULL] = t75->mX.mX[188ULL];
  out->mOBS_ACT.mX[962ULL] = t75->mX.mX[73ULL];
  out->mOBS_ACT.mX[963ULL] = t75->mX.mX[73ULL];
  out->mOBS_ACT.mX[964ULL] = t75->mX.mX[73ULL];
  out->mOBS_ACT.mX[965ULL] = t75->mX.mX[73ULL];
  out->mOBS_ACT.mX[966ULL] = t75->mX.mX[74ULL] * 0.00027777777777777778;
  out->mOBS_ACT.mX[967ULL] = t75->mX.mX[73ULL];
  out->mOBS_ACT.mX[968ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based7_electricalModel_i;
  out->mOBS_ACT.mX[969ULL] = t75->mX.mX[106ULL];
  out->mOBS_ACT.mX[970ULL] = t75->mX.mX[75ULL];
  out->mOBS_ACT.mX[971ULL] = t75->mX.mX[75ULL];
  out->mOBS_ACT.mX[972ULL] = t75->mX.mX[193ULL];
  out->mOBS_ACT.mX[973ULL] = t75->mX.mX[192ULL];
  out->mOBS_ACT.mX[974ULL] = t75->mX.mX[105ULL];
  for (t18 = 76ULL; t18 - 76ULL < 5ULL; t18++) {
    out->mOBS_ACT.mX[t18 + 899ULL] = t75->mX.mX[t18];
  }

  for (t18 = 0ULL; t18 < 5ULL; t18++) {
    out->mOBS_ACT.mX[t18 + 980ULL] =
      Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xGdynamic
      [t18];
  }

  out->mOBS_ACT.mX[985ULL] = 0.0;
  out->mOBS_ACT.mX[986ULL] = t75->mX.mX[191ULL];
  out->mOBS_ACT.mX[987ULL] = t75->mX.mX[194ULL] * 1000.0;
  out->mOBS_ACT.mX[988ULL] = t75->mX.mX[193ULL];
  out->mOBS_ACT.mX[989ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based7_electricalModel_v;
  out->mOBS_ACT.mX[990ULL] = 1.0;
  out->mOBS_ACT.mX[991ULL] = t75->mX.mX[190ULL];
  out->mOBS_ACT.mX[992ULL] = 1.0;
  out->mOBS_ACT.mX[993ULL] = t75->mX.mX[73ULL];
  out->mOBS_ACT.mX[994ULL] = t75->mX.mX[75ULL];
  out->mOBS_ACT.mX[995ULL] = 1.0;
  out->mOBS_ACT.mX[996ULL] = t75->mX.mX[190ULL];
  out->mOBS_ACT.mX[997ULL] = t75->mX.mX[191ULL];
  out->mOBS_ACT.mX[998ULL] = 1.0;
  out->mOBS_ACT.mX[999ULL] = t75->mX.mX[192ULL];
  out->mOBS_ACT.mX[1000ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based7_electricalModel_i;
  out->mOBS_ACT.mX[1001ULL] = t75->mX.mX[106ULL];
  out->mOBS_ACT.mX[1002ULL] = t75->mX.mX[75ULL];
  out->mOBS_ACT.mX[1003ULL] = t75->mX.mX[105ULL];
  out->mOBS_ACT.mX[1004ULL] = t75->mX.mX[193ULL];
  out->mOBS_ACT.mX[1005ULL] = t75->mX.mX[193ULL];
  out->mOBS_ACT.mX[1006ULL] = t75->mX.mX[73ULL];
  out->mOBS_ACT.mX[1007ULL] = ((t75->mX.mX[65ULL] * 2.0E-6 + t75->mX.mX[73ULL] *
    -4.0E-6) + t75->mX.mX[81ULL] * 2.0E-6) * 1000.0;
  out->mOBS_ACT.mX[1008ULL] = t75->mX.mX[73ULL];
  out->mOBS_ACT.mX[1009ULL] = t75->mX.mX[73ULL];
  out->mOBS_ACT.mX[1010ULL] = t75->mX.mX[194ULL] * 1000.0;
  out->mOBS_ACT.mX[1011ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based7_electricalModel_v;
  out->mOBS_ACT.mX[1012ULL] = t75->mX.mX[193ULL];
  out->mOBS_ACT.mX[1013ULL] = t75->mX.mX[81ULL];
  out->mOBS_ACT.mX[1014ULL] = t75->mX.mX[81ULL];
  out->mOBS_ACT.mX[1015ULL] = t75->mX.mX[81ULL];
  out->mOBS_ACT.mX[1016ULL] = t75->mX.mX[81ULL];
  out->mOBS_ACT.mX[1017ULL] = t75->mX.mX[82ULL] * 0.00027777777777777778;
  out->mOBS_ACT.mX[1018ULL] = t75->mX.mX[81ULL];
  out->mOBS_ACT.mX[1019ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_i;
  out->mOBS_ACT.mX[1020ULL] = t75->mX.mX[107ULL];
  out->mOBS_ACT.mX[1021ULL] = t75->mX.mX[83ULL];
  out->mOBS_ACT.mX[1022ULL] = t75->mX.mX[83ULL];
  out->mOBS_ACT.mX[1023ULL] = t75->mX.mX[198ULL];
  out->mOBS_ACT.mX[1024ULL] = t75->mX.mX[197ULL];
  out->mOBS_ACT.mX[1025ULL] = t75->mX.mX[106ULL];
  for (t18 = 84ULL; t18 - 84ULL < 5ULL; t18++) {
    out->mOBS_ACT.mX[t18 + 942ULL] = t75->mX.mX[t18];
  }

  for (t18 = 0ULL; t18 < 5ULL; t18++) {
    out->mOBS_ACT.mX[t18 + 1031ULL] =
      Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xGdynamic
      [t18];
  }

  out->mOBS_ACT.mX[1036ULL] = 0.0;
  out->mOBS_ACT.mX[1037ULL] = t75->mX.mX[196ULL];
  out->mOBS_ACT.mX[1038ULL] = t75->mX.mX[199ULL] * 1000.0;
  out->mOBS_ACT.mX[1039ULL] = t75->mX.mX[198ULL];
  out->mOBS_ACT.mX[1040ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_v;
  out->mOBS_ACT.mX[1041ULL] = 1.0;
  out->mOBS_ACT.mX[1042ULL] = t75->mX.mX[195ULL];
  out->mOBS_ACT.mX[1043ULL] = 1.0;
  out->mOBS_ACT.mX[1044ULL] = t75->mX.mX[81ULL];
  out->mOBS_ACT.mX[1045ULL] = t75->mX.mX[83ULL];
  out->mOBS_ACT.mX[1046ULL] = 1.0;
  out->mOBS_ACT.mX[1047ULL] = t75->mX.mX[195ULL];
  out->mOBS_ACT.mX[1048ULL] = t75->mX.mX[196ULL];
  out->mOBS_ACT.mX[1049ULL] = 1.0;
  out->mOBS_ACT.mX[1050ULL] = t75->mX.mX[197ULL];
  out->mOBS_ACT.mX[1051ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_i;
  out->mOBS_ACT.mX[1052ULL] = t75->mX.mX[107ULL];
  out->mOBS_ACT.mX[1053ULL] = t75->mX.mX[83ULL];
  out->mOBS_ACT.mX[1054ULL] = t75->mX.mX[106ULL];
  out->mOBS_ACT.mX[1055ULL] = t75->mX.mX[198ULL];
  out->mOBS_ACT.mX[1056ULL] = t75->mX.mX[198ULL];
  out->mOBS_ACT.mX[1057ULL] = t75->mX.mX[81ULL];
  out->mOBS_ACT.mX[1058ULL] = ((t75->mX.mX[73ULL] * 2.0E-6 + t75->mX.mX[81ULL] *
    -4.0E-6) + t75->mX.mX[26ULL] * 2.0E-6) * 1000.0;
  out->mOBS_ACT.mX[1059ULL] = t75->mX.mX[81ULL];
  out->mOBS_ACT.mX[1060ULL] = t75->mX.mX[81ULL];
  out->mOBS_ACT.mX[1061ULL] = t75->mX.mX[199ULL] * 1000.0;
  out->mOBS_ACT.mX[1062ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based8_electricalModel_v;
  out->mOBS_ACT.mX[1063ULL] = t75->mX.mX[198ULL];
  out->mOBS_ACT.mX[1064ULL] = t75->mX.mX[26ULL];
  out->mOBS_ACT.mX[1065ULL] = t75->mX.mX[26ULL];
  out->mOBS_ACT.mX[1066ULL] = t75->mX.mX[26ULL];
  out->mOBS_ACT.mX[1067ULL] = t75->mX.mX[26ULL];
  out->mOBS_ACT.mX[1068ULL] = t75->mX.mX[89ULL] * 0.00027777777777777778;
  out->mOBS_ACT.mX[1069ULL] = t75->mX.mX[26ULL];
  out->mOBS_ACT.mX[1070ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_i;
  out->mOBS_ACT.mX[1071ULL] = t75->mX.mX[98ULL];
  out->mOBS_ACT.mX[1072ULL] = t75->mX.mX[90ULL];
  out->mOBS_ACT.mX[1073ULL] = t75->mX.mX[90ULL];
  out->mOBS_ACT.mX[1074ULL] = t75->mX.mX[203ULL];
  out->mOBS_ACT.mX[1075ULL] = t75->mX.mX[202ULL];
  out->mOBS_ACT.mX[1076ULL] = t75->mX.mX[107ULL];
  for (t18 = 91ULL; t18 - 91ULL < 5ULL; t18++) {
    out->mOBS_ACT.mX[t18 + 986ULL] = t75->mX.mX[t18];
  }

  for (t18 = 0ULL; t18 < 5ULL; t18++) {
    out->mOBS_ACT.mX[t18 + 1082ULL] =
      Plant_Subsystem_Series_Module_Battery_Table_Based_electricalModel_xGdynamic
      [t18];
  }

  out->mOBS_ACT.mX[1087ULL] = 0.0;
  out->mOBS_ACT.mX[1088ULL] = t75->mX.mX[201ULL];
  out->mOBS_ACT.mX[1089ULL] = t75->mX.mX[204ULL] * 1000.0;
  out->mOBS_ACT.mX[1090ULL] = t75->mX.mX[203ULL];
  out->mOBS_ACT.mX[1091ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_v;
  out->mOBS_ACT.mX[1092ULL] = 1.0;
  out->mOBS_ACT.mX[1093ULL] = t75->mX.mX[200ULL];
  out->mOBS_ACT.mX[1094ULL] = 1.0;
  out->mOBS_ACT.mX[1095ULL] = t75->mX.mX[26ULL];
  out->mOBS_ACT.mX[1096ULL] = t75->mX.mX[90ULL];
  out->mOBS_ACT.mX[1097ULL] = 1.0;
  out->mOBS_ACT.mX[1098ULL] = t75->mX.mX[200ULL];
  out->mOBS_ACT.mX[1099ULL] = t75->mX.mX[201ULL];
  out->mOBS_ACT.mX[1100ULL] = 1.0;
  out->mOBS_ACT.mX[1101ULL] = t75->mX.mX[202ULL];
  out->mOBS_ACT.mX[1102ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_i;
  out->mOBS_ACT.mX[1103ULL] = t75->mX.mX[98ULL];
  out->mOBS_ACT.mX[1104ULL] = t75->mX.mX[90ULL];
  out->mOBS_ACT.mX[1105ULL] = t75->mX.mX[107ULL];
  out->mOBS_ACT.mX[1106ULL] = t75->mX.mX[203ULL];
  out->mOBS_ACT.mX[1107ULL] = t75->mX.mX[203ULL];
  out->mOBS_ACT.mX[1108ULL] = t75->mX.mX[26ULL];
  out->mOBS_ACT.mX[1109ULL] = ((t75->mX.mX[17ULL] * 2.0E-6 + t75->mX.mX[81ULL] *
    2.0E-6) + t75->mX.mX[26ULL] * -4.0E-6) * 1000.0;
  out->mOBS_ACT.mX[1110ULL] = t75->mX.mX[26ULL];
  out->mOBS_ACT.mX[1111ULL] = t75->mX.mX[26ULL];
  out->mOBS_ACT.mX[1112ULL] = t75->mX.mX[204ULL] * 1000.0;
  out->mOBS_ACT.mX[1113ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based9_electricalModel_v;
  out->mOBS_ACT.mX[1114ULL] = t75->mX.mX[203ULL];
  out->mOBS_ACT.mX[1115ULL] = t75->mX.mX[147ULL];
  out->mOBS_ACT.mX[1116ULL] = Plant_Charger_Load_Batt0_v;
  out->mOBS_ACT.mX[1117ULL] = t75->mX.mX[96ULL];
  out->mOBS_ACT.mX[1118ULL] = t75->mX.mX[98ULL];
  out->mOBS_ACT.mX[1119ULL] = t75->mX.mX[99ULL];
  out->mOBS_ACT.mX[1120ULL] = 0.0;
  out->mOBS_ACT.mX[1121ULL] = t75->mX.mX[100ULL];
  out->mOBS_ACT.mX[1122ULL] = t75->mX.mX[101ULL];
  out->mOBS_ACT.mX[1123ULL] = t75->mX.mX[102ULL];
  out->mOBS_ACT.mX[1124ULL] = t75->mX.mX[103ULL];
  out->mOBS_ACT.mX[1125ULL] = t75->mX.mX[104ULL];
  out->mOBS_ACT.mX[1126ULL] = t75->mX.mX[105ULL];
  out->mOBS_ACT.mX[1127ULL] = t75->mX.mX[106ULL];
  out->mOBS_ACT.mX[1128ULL] = t75->mX.mX[107ULL];
  out->mOBS_ACT.mX[1129ULL] = 0.0;
  out->mOBS_ACT.mX[1130ULL] = t75->mX.mX[0ULL];
  out->mOBS_ACT.mX[1131ULL] = ((t75->mX.mX[0ULL] * -2.0E-6 + t75->mX.mX[8ULL] *
    2.0E-6) - t75->mX.mX[149ULL]) * 1000.0;
  out->mOBS_ACT.mX[1132ULL] = t75->mU.mX[14ULL];
  out->mOBS_ACT.mX[1133ULL] = t75->mX.mX[0ULL];
  out->mOBS_ACT.mX[1134ULL] = t75->mX.mX[0ULL];
  out->mOBS_ACT.mX[1135ULL] = t75->mX.mX[8ULL];
  out->mOBS_ACT.mX[1136ULL] =
    Plant_Subsystem_Series_Module_Convective_Heat_Transfer_Q * 1000.0;
  out->mOBS_ACT.mX[1137ULL] =
    Plant_Subsystem_Series_Module_Convective_Heat_Transfer_Q * 500000.0;
  out->mOBS_ACT.mX[1138ULL] = 0.0;
  out->mOBS_ACT.mX[1139ULL] = t75->mX.mX[8ULL];
  out->mOBS_ACT.mX[1140ULL] = t75->mX.mX[16ULL];
  out->mOBS_ACT.mX[1141ULL] =
    Plant_Subsystem_Series_Module_Convective_Heat_Transfer1_Q * 1000.0;
  out->mOBS_ACT.mX[1142ULL] =
    Plant_Subsystem_Series_Module_Convective_Heat_Transfer1_Q * 500000.0;
  out->mOBS_ACT.mX[1143ULL] = 0.0;
  out->mOBS_ACT.mX[1144ULL] = t75->mX.mX[17ULL];
  out->mOBS_ACT.mX[1145ULL] = t75->mX.mX[25ULL];
  out->mOBS_ACT.mX[1146ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based11_thermalModel_Q * 1000.0;
  out->mOBS_ACT.mX[1147ULL] =
    Plant_Subsystem_Series_Module_Battery_Table_Based11_thermalModel_Q *
    500000.0;
  out->mOBS_ACT.mX[1148ULL] = 0.0;
  out->mOBS_ACT.mX[1149ULL] = t75->mX.mX[16ULL];
  out->mOBS_ACT.mX[1150ULL] = t75->mX.mX[41ULL];
  out->mOBS_ACT.mX[1151ULL] =
    Plant_Subsystem_Series_Module_Convective_Heat_Transfer2_Q * 1000.0;
  out->mOBS_ACT.mX[1152ULL] =
    Plant_Subsystem_Series_Module_Convective_Heat_Transfer2_Q * 500000.0;
  out->mOBS_ACT.mX[1153ULL] = 0.0;
  out->mOBS_ACT.mX[1154ULL] = t75->mX.mX[41ULL];
  out->mOBS_ACT.mX[1155ULL] = t75->mX.mX[49ULL];
  out->mOBS_ACT.mX[1156ULL] =
    Plant_Subsystem_Series_Module_Convective_Heat_Transfer3_Q * 1000.0;
  out->mOBS_ACT.mX[1157ULL] =
    Plant_Subsystem_Series_Module_Convective_Heat_Transfer3_Q * 500000.0;
  out->mOBS_ACT.mX[1158ULL] = 0.0;
  out->mOBS_ACT.mX[1159ULL] = t75->mX.mX[49ULL];
  out->mOBS_ACT.mX[1160ULL] = t75->mX.mX[57ULL];
  out->mOBS_ACT.mX[1161ULL] =
    Plant_Subsystem_Series_Module_Convective_Heat_Transfer4_Q * 1000.0;
  out->mOBS_ACT.mX[1162ULL] =
    Plant_Subsystem_Series_Module_Convective_Heat_Transfer4_Q * 500000.0;
  out->mOBS_ACT.mX[1163ULL] = 0.0;
  out->mOBS_ACT.mX[1164ULL] = t75->mX.mX[57ULL];
  out->mOBS_ACT.mX[1165ULL] = t75->mX.mX[65ULL];
  out->mOBS_ACT.mX[1166ULL] =
    Plant_Subsystem_Series_Module_Convective_Heat_Transfer5_Q * 1000.0;
  out->mOBS_ACT.mX[1167ULL] =
    Plant_Subsystem_Series_Module_Convective_Heat_Transfer5_Q * 500000.0;
  out->mOBS_ACT.mX[1168ULL] = 0.0;
  out->mOBS_ACT.mX[1169ULL] = t75->mX.mX[65ULL];
  out->mOBS_ACT.mX[1170ULL] = t75->mX.mX[73ULL];
  out->mOBS_ACT.mX[1171ULL] =
    Plant_Subsystem_Series_Module_Convective_Heat_Transfer6_Q * 1000.0;
  out->mOBS_ACT.mX[1172ULL] =
    Plant_Subsystem_Series_Module_Convective_Heat_Transfer6_Q * 500000.0;
  out->mOBS_ACT.mX[1173ULL] = 0.0;
  out->mOBS_ACT.mX[1174ULL] = t75->mX.mX[73ULL];
  out->mOBS_ACT.mX[1175ULL] = t75->mX.mX[81ULL];
  out->mOBS_ACT.mX[1176ULL] =
    Plant_Subsystem_Series_Module_Convective_Heat_Transfer7_Q * 1000.0;
  out->mOBS_ACT.mX[1177ULL] =
    Plant_Subsystem_Series_Module_Convective_Heat_Transfer7_Q * 500000.0;
  out->mOBS_ACT.mX[1178ULL] = 0.0;
  out->mOBS_ACT.mX[1179ULL] = t75->mX.mX[81ULL];
  out->mOBS_ACT.mX[1180ULL] = t75->mX.mX[26ULL];
  out->mOBS_ACT.mX[1181ULL] =
    Plant_Subsystem_Series_Module_Convective_Heat_Transfer8_Q * 1000.0;
  out->mOBS_ACT.mX[1182ULL] =
    Plant_Subsystem_Series_Module_Convective_Heat_Transfer8_Q * 500000.0;
  out->mOBS_ACT.mX[1183ULL] = 0.0;
  out->mOBS_ACT.mX[1184ULL] = t75->mX.mX[26ULL];
  out->mOBS_ACT.mX[1185ULL] = t75->mX.mX[17ULL];
  out->mOBS_ACT.mX[1186ULL] =
    Plant_Subsystem_Series_Module_Convective_Heat_Transfer9_Q * 1000.0;
  out->mOBS_ACT.mX[1187ULL] =
    Plant_Subsystem_Series_Module_Convective_Heat_Transfer9_Q * 500000.0;
  out->mOBS_ACT.mX[1188ULL] = 0.0;
  out->mOBS_ACT.mX[1189ULL] = t75->mX.mX[25ULL];
  out->mOBS_ACT.mX[1190ULL] = t75->mX.mX[25ULL];
  out->mOBS_ACT.mX[1191ULL] = t75->mU.mX[14ULL];
  out->mOBS_ACT.mX[1192ULL] = t75->mX.mX[0ULL];
  out->mOBS_ACT.mX[1193ULL] = 0.0;
  out->mOBS_ACT.mX[1194ULL] = t75->mX.mX[0ULL];
  out->mOBS_ACT.mX[1195ULL] = t75->mX.mX[8ULL];
  out->mOBS_ACT.mX[1196ULL] = 0.0;
  out->mOBS_ACT.mX[1197ULL] = t75->mX.mX[8ULL];
  out->mOBS_ACT.mX[1198ULL] = t75->mX.mX[17ULL];
  out->mOBS_ACT.mX[1199ULL] = 0.0;
  out->mOBS_ACT.mX[1200ULL] = t75->mX.mX[17ULL];
  out->mOBS_ACT.mX[1201ULL] = t75->mX.mX[17ULL];
  out->mOBS_ACT.mX[1202ULL] = t75->mX.mX[25ULL];
  out->mOBS_ACT.mX[1203ULL] = 0.0;
  out->mOBS_ACT.mX[1204ULL] = t75->mX.mX[25ULL];
  out->mOBS_ACT.mX[1205ULL] = t75->mX.mX[25ULL];
  out->mOBS_ACT.mX[1206ULL] = t75->mX.mX[8ULL];
  out->mOBS_ACT.mX[1207ULL] = t75->mX.mX[16ULL];
  out->mOBS_ACT.mX[1208ULL] = 0.0;
  out->mOBS_ACT.mX[1209ULL] = t75->mX.mX[16ULL];
  out->mOBS_ACT.mX[1210ULL] = t75->mX.mX[16ULL];
  out->mOBS_ACT.mX[1211ULL] = t75->mX.mX[41ULL];
  out->mOBS_ACT.mX[1212ULL] = 0.0;
  out->mOBS_ACT.mX[1213ULL] = t75->mX.mX[41ULL];
  out->mOBS_ACT.mX[1214ULL] = t75->mX.mX[41ULL];
  out->mOBS_ACT.mX[1215ULL] = t75->mX.mX[49ULL];
  out->mOBS_ACT.mX[1216ULL] = 0.0;
  out->mOBS_ACT.mX[1217ULL] = t75->mX.mX[49ULL];
  out->mOBS_ACT.mX[1218ULL] = t75->mX.mX[49ULL];
  out->mOBS_ACT.mX[1219ULL] = t75->mX.mX[57ULL];
  out->mOBS_ACT.mX[1220ULL] = 0.0;
  out->mOBS_ACT.mX[1221ULL] = t75->mX.mX[57ULL];
  out->mOBS_ACT.mX[1222ULL] = t75->mX.mX[57ULL];
  out->mOBS_ACT.mX[1223ULL] = t75->mX.mX[65ULL];
  out->mOBS_ACT.mX[1224ULL] = 0.0;
  out->mOBS_ACT.mX[1225ULL] = t75->mX.mX[65ULL];
  out->mOBS_ACT.mX[1226ULL] = t75->mX.mX[65ULL];
  out->mOBS_ACT.mX[1227ULL] = t75->mX.mX[73ULL];
  out->mOBS_ACT.mX[1228ULL] = 0.0;
  out->mOBS_ACT.mX[1229ULL] = t75->mX.mX[73ULL];
  out->mOBS_ACT.mX[1230ULL] = t75->mX.mX[73ULL];
  out->mOBS_ACT.mX[1231ULL] = t75->mX.mX[81ULL];
  out->mOBS_ACT.mX[1232ULL] = 0.0;
  out->mOBS_ACT.mX[1233ULL] = t75->mX.mX[81ULL];
  out->mOBS_ACT.mX[1234ULL] = t75->mX.mX[81ULL];
  out->mOBS_ACT.mX[1235ULL] = t75->mX.mX[26ULL];
  out->mOBS_ACT.mX[1236ULL] = 0.0;
  out->mOBS_ACT.mX[1237ULL] = t75->mX.mX[26ULL];
  out->mOBS_ACT.mX[1238ULL] = t75->mX.mX[26ULL];
  out->mOBS_ACT.mX[1239ULL] = t75->mX.mX[0ULL];
  out->mOBS_ACT.mX[1240ULL] = 0.0;
  out->mOBS_ACT.mX[1241ULL] = 0.0;
  out->mOBS_ACT.mX[1242ULL] = Plant_Charger_Load_Batt0_v;
  out->mOBS_ACT.mX[1243ULL] = 0.0;
  out->mOBS_ACT.mX[1244ULL] = Plant_Charger_Load_Batt0_v;
  out->mOBS_ACT.mX[1245ULL] = Plant_Charger_Load_Batt0_v;
  (void)LC;
  (void)out;
  return 0;
}
