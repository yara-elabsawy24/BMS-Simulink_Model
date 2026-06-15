/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BMS_MCU_CODE.c
 *
 * Code generated for Simulink model 'BMS_MCU_CODE'.
 *
 * Model version                  : 1.43
 * Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
 * C/C++ source code generated on : Mon Jun 15 12:57:48 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BMS_MCU_CODE.h"
#include "rtwtypes.h"
#include "BMS_MCU_CODE_types.h"
#include <string.h>
#include <math.h>
#include "maximum_TTkd84nS.h"
#include "minimum_ruU8vKTP.h"
#include "plook_u32ff_binx.h"
#include "intrp2d_fu32fl_pw.h"
#include "look1_binlxpw.h"
#include "BMS_MCU_CODE_private.h"

/* Named constants for Chart: '<S3>/Chart' */
#define BMS_MCU_CODE_IN_Balance_Active ((uint8_T)1U)
#define BMS_MCU_CODE_IN_Balancing_Off  ((uint8_T)1U)
#define BMS_MCU_CODE_IN_Balancing_On   ((uint8_T)2U)
#define BMS_MCU_CODE_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define BMS_MCU_C_IN_Balance_Not_Active ((uint8_T)2U)

/* Named constants for Chart: '<S6>/BMS_States' */
#define BMS_MCU_CODE_IN_Charging       ((uint8_T)1U)
#define BMS_MCU_CODE_IN_Fault          ((uint8_T)2U)
#define BMS_MCU_CODE_IN_Flying         ((uint8_T)3U)
#define BMS_MCU_CODE_IN_Idle           ((uint8_T)4U)
#define BMS_MCU_CODE_IN_No_OT_UT       ((uint8_T)1U)
#define BMS_MCU_CODE_IN_No_OV_UV       ((uint8_T)1U)
#define BMS_MCU_CODE_IN_OC_Fault       ((uint8_T)2U)
#define BMS_MCU_CODE_IN_OT_Fault       ((uint8_T)2U)
#define BMS_MCU_CODE_IN_OV_Fault       ((uint8_T)2U)
#define BMS_MCU_CODE_IN_Sensor_Fault   ((uint8_T)3U)
#define BMS_MCU_CODE_IN_UT_Fault       ((uint8_T)3U)
#define BMS_MCU_CODE_IN_UV_Fault       ((uint8_T)4U)
#define BMS_MCU_CODE_IN_Wait           ((uint8_T)3U)
#define BMS_MCU__IN_No_CurrentLim_Fault ((uint8_T)1U)

/* System initialize for referenced model: 'BMS_MCU_CODE' */
void BMS_MCU_CODE_Init(boolean_T rty_From_BMS_Bal_Cmd[12], real_T
  rty_Fault_Level[16], DW_BMS_MCU_CODE_f_T *localDW)
{
  int32_T i;

  /* SystemInitialize for SignalConversion generated from: '<Root>/Fault_Level' */
  memset(&rty_Fault_Level[0], 0, sizeof(real_T) << 4U);

  /* SystemInitialize for Chart: '<S3>/Chart' */
  for (i = 0; i < 12; i++) {
    rty_From_BMS_Bal_Cmd[i] = false;
  }

  localDW->flgBalInt = true;

  /* End of SystemInitialize for Chart: '<S3>/Chart' */
}

/* Output and update for referenced model: 'BMS_MCU_CODE' */
void BMS_MCU_CODE(const real32_T rtu_From_Plant_Vmod[12], const real32_T
                  rtu_From_Plant_Tmod[12], const real32_T
                  *rtu_From_Plant_Pack_Current, const real32_T
                  rtu_From_Plant_SOCmod[12], const real32_T
                  *rtu_From_Plant_V_Batt_Monitor, const SRE *rtu_State_Required,
                  boolean_T *rty_Fault_Out_VoltSensor, boolean_T
                  *rty_Fault_Out_UV, boolean_T *rty_Fault_Out_OT, boolean_T
                  *rty_Fault_Out_UT, boolean_T *rty_Fault_Out_OC, boolean_T
                  *rty_Fault_Out_OV, real32_T rty_SOC[12], real32_T
                  *rty_V_Batt_Monitor, real32_T *rty_Ipack, real32_T rty_Temp[12],
                  real32_T rty_V_Cell[12], BMS_State *rty_From_BMS_BMS_State_Out,
                  real32_T *rty_From_BMS_Current_Limits_Dis, real32_T
                  *rty_From_BMS_Current_Limits_Cha, boolean_T
                  rty_From_BMS_Bal_Cmd[12], real_T rty_Fault_Level[16],
                  B_BMS_MCU_CODE_c_T *localB, DW_BMS_MCU_CODE_f_T *localDW)
{
  real_T rtb_Gain;
  int32_T i;
  real32_T rtb_uDLookupTable[12];
  real32_T fractions[2];
  real32_T frac;
  real32_T maxV;
  real32_T maxV_0;
  real32_T maxV_1;
  real32_T rtu_From_Plant_Tmod_0;
  uint32_T bpIndices[2];
  boolean_T exitg1;
  boolean_T exitg2;
  boolean_T exitg3;

  /* Chart: '<S5>/Chart' incorporates:
   *  Constant: '<S39>/Constant'
   *  Constant: '<S40>/Constant'
   *  Constant: '<S41>/Constant'
   *  Constant: '<S42>/Constant'
   *  DiscreteIntegrator: '<S5>/Discrete-Time Integrator'
   *  DiscreteIntegrator: '<S5>/Discrete-Time Integrator1'
   *  DiscreteIntegrator: '<S5>/Discrete-Time Integrator2'
   *  DiscreteIntegrator: '<S5>/Discrete-Time Integrator3'
   *  RelationalOperator: '<S39>/Compare'
   *  RelationalOperator: '<S40>/Compare'
   *  RelationalOperator: '<S41>/Compare'
   *  RelationalOperator: '<S42>/Compare'
   */
  if (localDW->is_active_c5_BMS_MCU_CODE == 0) {
    localDW->is_active_c5_BMS_MCU_CODE = 1U;
  } else if (localDW->DiscreteTimeIntegrator3_DSTATE >= 0.1F) {
    localB->Fault_Level_d.UV = 4.0;
  } else if (localDW->DiscreteTimeIntegrator2_DSTATE >= 2.0F) {
    localB->Fault_Level_d.UV = 3.0;
  } else if (localDW->DiscreteTimeIntegrator1_DSTATE >= 1.0F) {
    localB->Fault_Level_d.UV = 2.0;
  } else {
    localB->Fault_Level_d.UV = (localDW->DiscreteTimeIntegrator_DSTATE_d >= 0.5F);
  }

  /* End of Chart: '<S5>/Chart' */

  /* Chart: '<S5>/Chart1' incorporates:
   *  Constant: '<S20>/Constant'
   *  Constant: '<S21>/Constant'
   *  Constant: '<S22>/Constant'
   *  DiscreteIntegrator: '<S5>/Discrete-Time Integrator5'
   *  DiscreteIntegrator: '<S5>/Discrete-Time Integrator6'
   *  DiscreteIntegrator: '<S5>/Discrete-Time Integrator7'
   *  RelationalOperator: '<S20>/Compare'
   *  RelationalOperator: '<S21>/Compare'
   *  RelationalOperator: '<S22>/Compare'
   */
  if (localDW->is_active_c1_BMS_MCU_CODE == 0) {
    localDW->is_active_c1_BMS_MCU_CODE = 1U;
  } else if (localDW->DiscreteTimeIntegrator7_DSTATE >= 0.1) {
    localB->Fault_Level_n.OV = 3.0;
  } else if (localDW->DiscreteTimeIntegrator6_DSTATE >= 2.0) {
    localB->Fault_Level_n.OV = 2.0;
  } else {
    localB->Fault_Level_n.OV = (localDW->DiscreteTimeIntegrator5_DSTATE >= 1.0);
  }

  /* End of Chart: '<S5>/Chart1' */

  /* Chart: '<S5>/Chart2' incorporates:
   *  Constant: '<S25>/Constant'
   *  Constant: '<S26>/Constant'
   *  Constant: '<S28>/Constant'
   *  Constant: '<S29>/Constant'
   *  DiscreteIntegrator: '<S5>/Discrete-Time Integrator10'
   *  DiscreteIntegrator: '<S5>/Discrete-Time Integrator4'
   *  DiscreteIntegrator: '<S5>/Discrete-Time Integrator8'
   *  DiscreteIntegrator: '<S5>/Discrete-Time Integrator9'
   *  RelationalOperator: '<S25>/Compare'
   *  RelationalOperator: '<S26>/Compare'
   *  RelationalOperator: '<S28>/Compare'
   *  RelationalOperator: '<S29>/Compare'
   */
  if (localDW->is_active_c7_BMS_MCU_CODE == 0) {
    localDW->is_active_c7_BMS_MCU_CODE = 1U;
  } else if (localDW->DiscreteTimeIntegrator10_DSTATE >= 0.1F) {
    localB->Fault_Level_b.OT = 4.0;
  } else if (localDW->DiscreteTimeIntegrator9_DSTATE >= 2.0) {
    localB->Fault_Level_b.OT = 3.0;
  } else if (localDW->DiscreteTimeIntegrator8_DSTATE >= 1.0) {
    localB->Fault_Level_b.OT = 2.0;
  } else {
    localB->Fault_Level_b.OT = (localDW->DiscreteTimeIntegrator4_DSTATE >= 0.5);
  }

  /* End of Chart: '<S5>/Chart2' */

  /* Chart: '<S5>/Chart3' incorporates:
   *  Constant: '<S33>/Constant'
   *  Constant: '<S34>/Constant'
   *  Constant: '<S35>/Constant'
   *  Constant: '<S36>/Constant'
   *  DiscreteIntegrator: '<S5>/Discrete-Time Integrator11'
   *  DiscreteIntegrator: '<S5>/Discrete-Time Integrator12'
   *  DiscreteIntegrator: '<S5>/Discrete-Time Integrator13'
   *  DiscreteIntegrator: '<S5>/Discrete-Time Integrator14'
   *  RelationalOperator: '<S33>/Compare'
   *  RelationalOperator: '<S34>/Compare'
   *  RelationalOperator: '<S35>/Compare'
   *  RelationalOperator: '<S36>/Compare'
   */
  if (localDW->is_active_c8_BMS_MCU_CODE == 0) {
    localDW->is_active_c8_BMS_MCU_CODE = 1U;
  } else if (localDW->DiscreteTimeIntegrator11_DSTATE >= 0.1F) {
    localB->Fault_Level_l.UT = 4.0;
  } else if (localDW->DiscreteTimeIntegrator14_DSTATE >= 2.0) {
    localB->Fault_Level_l.UT = 3.0;
  } else if (localDW->DiscreteTimeIntegrator13_DSTATE >= 1.0) {
    localB->Fault_Level_l.UT = 2.0;
  } else {
    localB->Fault_Level_l.UT = (localDW->DiscreteTimeIntegrator12_DSTATE >= 0.5);
  }

  /* End of Chart: '<S5>/Chart3' */

  /* SignalConversion generated from: '<Root>/Fault_Level' */
  rty_Fault_Level[0] = localB->Fault_Level_b.OT;
  rty_Fault_Level[1] = localB->Fault_Level_b.UT;
  rty_Fault_Level[2] = localB->Fault_Level_b.UV;
  rty_Fault_Level[3] = localB->Fault_Level_b.OV;
  rty_Fault_Level[4] = localB->Fault_Level_l.OT;
  rty_Fault_Level[5] = localB->Fault_Level_l.UT;
  rty_Fault_Level[6] = localB->Fault_Level_l.UV;
  rty_Fault_Level[7] = localB->Fault_Level_l.OV;
  rty_Fault_Level[8] = localB->Fault_Level_d.OT;
  rty_Fault_Level[9] = localB->Fault_Level_d.UT;
  rty_Fault_Level[10] = localB->Fault_Level_d.UV;
  rty_Fault_Level[11] = localB->Fault_Level_d.OV;
  rty_Fault_Level[12] = localB->Fault_Level_n.OT;
  rty_Fault_Level[13] = localB->Fault_Level_n.UT;
  rty_Fault_Level[14] = localB->Fault_Level_n.UV;
  rty_Fault_Level[15] = localB->Fault_Level_n.OV;

  /* MinMax: '<S4>/Max' */
  maxV = rtu_From_Plant_Tmod[0];
  for (i = 0; i < 11; i++) {
    maxV = fmaxf(maxV, rtu_From_Plant_Tmod[i + 1]);
  }

  /* Lookup_n-D: '<S4>/2-D Lookup Table' incorporates:
   *  MinMax: '<S4>/Max'
   */
  bpIndices[1U] = plook_u32ff_binx(maxV, rtCP_uDLookupTable_bp02Data, 4U, &frac);
  fractions[1U] = frac;
  for (i = 0; i < 12; i++) {
    bpIndices[0U] = plook_u32ff_binx(rtu_From_Plant_SOCmod[i],
      rtCP_uDLookupTable_bp01Data_m, 10U, &frac);
    fractions[0U] = frac;
    rtb_uDLookupTable[i] = intrp2d_fu32fl_pw(bpIndices, fractions,
      rtCP_uDLookupTable_tableData_a, 11U);
  }

  /* End of Lookup_n-D: '<S4>/2-D Lookup Table' */

  /* MinMax: '<S10>/MinMax' */
  frac = rtu_From_Plant_Vmod[0];

  /* MinMax: '<S10>/Max' */
  maxV = rtu_From_Plant_Vmod[0];

  /* MinMax: '<S9>/Max' */
  maxV_0 = rtb_uDLookupTable[0];

  /* MinMax: '<S8>/Max' */
  maxV_1 = rtb_uDLookupTable[0];
  for (i = 0; i < 11; i++) {
    /* MinMax: '<S10>/MinMax' */
    maxV_1 = rtu_From_Plant_Vmod[i + 1];
    frac = fminf(frac, maxV_1);

    /* MinMax: '<S10>/Max' */
    maxV = fmaxf(maxV, maxV_1);

    /* MinMax: '<S9>/Max' */
    maxV_0 = fmaxf(maxV_0, rtb_uDLookupTable[i + 1]);

    /* MinMax: '<S8>/Max' */
    maxV_1 = maxV_0;
  }

  /* DataTypeConversion: '<S9>/Cast To Single' incorporates:
   *  Constant: '<S9>/Cutoff_Volt'
   *  Gain: '<S9>/Gain'
   *  MinMax: '<S10>/MinMax'
   *  MinMax: '<S9>/Max'
   *  Product: '<S9>/Divide'
   *  Sum: '<S9>/Sum'
   */
  *rty_From_BMS_Current_Limits_Dis = (real32_T)-((frac - 3.0) / maxV_0);

  /* DataTypeConversion: '<S8>/Cast To Single' incorporates:
   *  Constant: '<S8>/Constant'
   *  Constant: '<S8>/Constant1'
   *  MinMax: '<S10>/Max'
   *  MinMax: '<S8>/Max'
   *  MinMax: '<S8>/Min'
   *  Product: '<S8>/Divide'
   *  Sum: '<S8>/Sum'
   */
  *rty_From_BMS_Current_Limits_Cha = (real32_T)fmin((4.2 - maxV) / maxV_1, 10.0);

  /* Sum: '<S1>/Sum of Elements' */
  maxV_0 = -0.0F;
  for (i = 0; i < 12; i++) {
    maxV_0 += rtu_From_Plant_Vmod[i];
  }

  /* Chart: '<S6>/BMS_States' incorporates:
   *  MinMax: '<S10>/Max'
   *  MinMax: '<S10>/MinMax'
   *  Sum: '<S1>/Sum of Elements'
   */
  if (localDW->temporalCounter_i1 < MAX_uint32_T) {
    localDW->temporalCounter_i1++;
  }

  if (localDW->is_active_c6_BMS_MCU_CODE == 0) {
    localDW->is_active_c6_BMS_MCU_CODE = 1U;
    localDW->is_Normal_State = BMS_MCU_CODE_IN_Idle;
    *rty_From_BMS_BMS_State_Out = Standbying;
    localB->Fault_out_b.OC = false;
    localDW->is_Monitor_CurrentLim = BMS_MCU__IN_No_CurrentLim_Fault;
    localB->Fault_out_b.OT = false;
    localB->Fault_out_b.UT = false;
    localDW->is_Monitor_CellTemp = BMS_MCU_CODE_IN_No_OT_UT;
    localDW->MaxCellTemp = maximum_TTkd84nS(rtu_From_Plant_Tmod);
    localDW->MinCellTemp = minimum_ruU8vKTP(rtu_From_Plant_Tmod);
    localDW->FaultPresent = false;
    localB->Fault_out_b.VoltSensor = false;
    localB->Fault_out_b.UV = false;
    localB->Fault_out_b.OV = false;
    localDW->is_Monitor_CellVolt = BMS_MCU_CODE_IN_No_OV_UV;
    localDW->Delta = fabsf(maxV_0 - *rtu_From_Plant_V_Batt_Monitor);
  } else {
    switch (localDW->is_Normal_State) {
     case BMS_MCU_CODE_IN_Charging:
      if ((*rtu_State_Required != Charge) || (*rtu_State_Required == Standby)) {
        localDW->is_Normal_State = BMS_MCU_CODE_IN_Idle;
        *rty_From_BMS_BMS_State_Out = Standbying;
      } else if (*rtu_State_Required == Fly) {
        localDW->is_Normal_State = BMS_MCU_CODE_IN_Flying;
        *rty_From_BMS_BMS_State_Out = Flying;
      } else if (localDW->FaultPresent) {
        localDW->is_Normal_State = BMS_MCU_CODE_IN_Fault;
        *rty_From_BMS_BMS_State_Out = Fault;
      }
      break;

     case BMS_MCU_CODE_IN_Fault:
      *rty_From_BMS_BMS_State_Out = Fault;
      break;

     case BMS_MCU_CODE_IN_Flying:
      if ((*rtu_State_Required != Fly) || (*rtu_State_Required == Standby)) {
        localDW->is_Normal_State = BMS_MCU_CODE_IN_Idle;
        *rty_From_BMS_BMS_State_Out = Standbying;
      } else if (*rtu_State_Required == Charge) {
        localDW->is_Normal_State = BMS_MCU_CODE_IN_Charging;
        *rty_From_BMS_BMS_State_Out = Charging;
      } else if (localDW->FaultPresent) {
        localDW->is_Normal_State = BMS_MCU_CODE_IN_Fault;
        *rty_From_BMS_BMS_State_Out = Fault;
      }
      break;

     default:
      /* case IN_Idle: */
      switch (*rtu_State_Required) {
       case Fly:
        localDW->is_Normal_State = BMS_MCU_CODE_IN_Flying;
        *rty_From_BMS_BMS_State_Out = Flying;
        break;

       case Charge:
        localDW->is_Normal_State = BMS_MCU_CODE_IN_Charging;
        *rty_From_BMS_BMS_State_Out = Charging;
        break;

       default:
        if (localDW->FaultPresent) {
          localDW->is_Normal_State = BMS_MCU_CODE_IN_Fault;
          *rty_From_BMS_BMS_State_Out = Fault;
        }
        break;
      }
      break;
    }

    switch (localDW->is_Monitor_CurrentLim) {
     case BMS_MCU__IN_No_CurrentLim_Fault:
      if ((*rtu_From_Plant_Pack_Current < *rty_From_BMS_Current_Limits_Dis) || (*
           rtu_From_Plant_Pack_Current > *rty_From_BMS_Current_Limits_Cha)) {
        localDW->temporalCounter_i1 = 0U;
        localDW->is_Monitor_CurrentLim = BMS_MCU_CODE_IN_Wait;
      }
      break;

     case BMS_MCU_CODE_IN_OC_Fault:
      break;

     default:
      /* case IN_Wait: */
      if (localDW->temporalCounter_i1 >= 1000U) {
        localDW->is_Monitor_CurrentLim = BMS_MCU_CODE_IN_OC_Fault;
        localDW->FaultPresent = true;
        localB->Fault_out_b.OC = true;
      } else if ((*rtu_From_Plant_Pack_Current >=
                  *rty_From_BMS_Current_Limits_Dis) &&
                 (*rtu_From_Plant_Pack_Current <=
                  *rty_From_BMS_Current_Limits_Cha)) {
        localDW->is_Monitor_CurrentLim = BMS_MCU__IN_No_CurrentLim_Fault;
      }
      break;
    }

    switch (localDW->is_Monitor_CellTemp) {
     case BMS_MCU_CODE_IN_No_OT_UT:
      if (localDW->MinCellTemp <= 253.0F) {
        localDW->is_Monitor_CellTemp = BMS_MCU_CODE_IN_UT_Fault;
        localDW->FaultPresent = true;
        localB->Fault_out_b.UT = true;
      } else if (localDW->MaxCellTemp >= 333.0F) {
        localDW->is_Monitor_CellTemp = BMS_MCU_CODE_IN_OT_Fault;
        localDW->FaultPresent = true;
        localB->Fault_out_b.OT = true;
      } else {
        localDW->MaxCellTemp = maximum_TTkd84nS(rtu_From_Plant_Tmod);
        localDW->MinCellTemp = minimum_ruU8vKTP(rtu_From_Plant_Tmod);
      }
      break;

     case BMS_MCU_CODE_IN_OT_Fault:
      break;

     default:
      /* case IN_UT_Fault: */
      break;
    }

    switch (localDW->is_Monitor_CellVolt) {
     case BMS_MCU_CODE_IN_No_OV_UV:
      if (localDW->Delta >= 0.02F) {
        localDW->is_Monitor_CellVolt = BMS_MCU_CODE_IN_Sensor_Fault;
        localDW->FaultPresent = true;
        localB->Fault_out_b.VoltSensor = true;
      } else if (frac <= 3.0F) {
        localDW->is_Monitor_CellVolt = BMS_MCU_CODE_IN_UV_Fault;
        localDW->FaultPresent = true;
        localB->Fault_out_b.UV = true;
      } else if (maxV >= 4.2F) {
        localDW->is_Monitor_CellVolt = BMS_MCU_CODE_IN_OV_Fault;
        localDW->FaultPresent = true;
        localB->Fault_out_b.OV = true;
      } else {
        localDW->Delta = fabsf(maxV_0 - *rtu_From_Plant_V_Batt_Monitor);
      }
      break;

     case BMS_MCU_CODE_IN_OV_Fault:
     case BMS_MCU_CODE_IN_Sensor_Fault:
      break;

     default:
      /* case IN_UV_Fault: */
      if (frac > 3.0F) {
        localDW->is_Monitor_CellVolt = BMS_MCU_CODE_IN_No_OV_UV;
        localDW->Delta = fabsf(maxV_0 - *rtu_From_Plant_V_Batt_Monitor);
      }
      break;
    }
  }

  /* End of Chart: '<S6>/BMS_States' */

  /* Chart: '<S3>/Chart' incorporates:
   *  MinMax: '<S10>/Max'
   *  MinMax: '<S10>/MinMax'
   */
  if (localDW->temporalCounter_i1_d < MAX_uint32_T) {
    localDW->temporalCounter_i1_d++;
  }

  if (localDW->is_active_c2_BMS_MCU_CODE == 0) {
    localDW->is_active_c2_BMS_MCU_CODE = 1U;
    localDW->flgBalCompl = true;
    localDW->temporalCounter_i1_d = 0U;
    localDW->is_c2_BMS_MCU_CODE = BMS_MCU_CODE_IN_Balancing_Off;
    for (i = 0; i < 12; i++) {
      rty_From_BMS_Bal_Cmd[i] = false;
    }

    localDW->DeltaCellVolt = maxV - frac;
  } else if (localDW->is_c2_BMS_MCU_CODE == BMS_MCU_CODE_IN_Balancing_Off) {
    if (localDW->flgBalInt && (*rty_From_BMS_BMS_State_Out == Charging) &&
        (localDW->temporalCounter_i1_d >= 5000.0F) && (localDW->DeltaCellVolt >
         0.04F)) {
      localDW->is_c2_BMS_MCU_CODE = BMS_MCU_CODE_IN_Balancing_On;
      localDW->DeltaCellVolt = maxV - frac;
      localDW->is_Balancing_On = BMS_MCU_CODE_IN_Balance_Active;
      for (i = 0; i < 12; i++) {
        rty_From_BMS_Bal_Cmd[i] = (rtu_From_Plant_Vmod[i] - frac > 0.02F);
      }

      localDW->flgBalCompl = true;
      i = 0;
      exitg3 = false;
      while ((!exitg3) && (i < 12)) {
        if (rty_From_BMS_Bal_Cmd[i]) {
          localDW->flgBalCompl = false;
          exitg3 = true;
        } else {
          i++;
        }
      }
    } else {
      localDW->DeltaCellVolt = maxV - frac;
    }

    /* case IN_Balancing_On: */
  } else if (*rty_From_BMS_BMS_State_Out == Flying) {
    localDW->is_Balancing_On = BMS_MCU_CODE_IN_NO_ACTIVE_CHILD;
    localDW->temporalCounter_i1_d = 0U;
    localDW->is_c2_BMS_MCU_CODE = BMS_MCU_CODE_IN_Balancing_Off;
    for (i = 0; i < 12; i++) {
      rty_From_BMS_Bal_Cmd[i] = false;
    }

    localDW->DeltaCellVolt = maxV - frac;
  } else {
    localDW->DeltaCellVolt = maxV - frac;
    switch (localDW->is_Balancing_On) {
     case BMS_MCU_CODE_IN_Balance_Active:
      if (localDW->flgBalCompl) {
        localDW->temporalCounter_i1_d = 0U;
        localDW->is_Balancing_On = BMS_MCU_C_IN_Balance_Not_Active;
      } else {
        for (i = 0; i < 12; i++) {
          rty_From_BMS_Bal_Cmd[i] = (rtu_From_Plant_Vmod[i] - frac > 0.02F);
        }

        localDW->flgBalCompl = true;
        i = 0;
        exitg2 = false;
        while ((!exitg2) && (i < 12)) {
          if (rty_From_BMS_Bal_Cmd[i]) {
            localDW->flgBalCompl = false;
            exitg2 = true;
          } else {
            i++;
          }
        }
      }
      break;

     default:
      /* case IN_Balance_Not_Active: */
      if ((localDW->temporalCounter_i1_d >= 10000.0F) && (localDW->DeltaCellVolt
           > 0.04F)) {
        localDW->is_Balancing_On = BMS_MCU_CODE_IN_Balance_Active;
        for (i = 0; i < 12; i++) {
          rty_From_BMS_Bal_Cmd[i] = (rtu_From_Plant_Vmod[i] - frac > 0.02F);
        }

        localDW->flgBalCompl = true;
        i = 0;
        exitg1 = false;
        while ((!exitg1) && (i < 12)) {
          if (rty_From_BMS_Bal_Cmd[i]) {
            localDW->flgBalCompl = false;
            exitg1 = true;
          } else {
            i++;
          }
        }
      } else if (localDW->temporalCounter_i1_d >= 30000.0F) {
        localDW->is_Balancing_On = BMS_MCU_CODE_IN_NO_ACTIVE_CHILD;
        localDW->temporalCounter_i1_d = 0U;
        localDW->is_c2_BMS_MCU_CODE = BMS_MCU_CODE_IN_Balancing_Off;
        for (i = 0; i < 12; i++) {
          rty_From_BMS_Bal_Cmd[i] = false;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S3>/Chart' */

  /* SignalConversion generated from: '<Root>/Fault_Out' */
  *rty_Fault_Out_VoltSensor = localB->Fault_out_b.VoltSensor;

  /* SignalConversion generated from: '<Root>/Fault_Out' */
  *rty_Fault_Out_UV = localB->Fault_out_b.UV;

  /* SignalConversion generated from: '<Root>/Fault_Out' */
  *rty_Fault_Out_OT = localB->Fault_out_b.OT;

  /* SignalConversion generated from: '<Root>/Fault_Out' */
  *rty_Fault_Out_UT = localB->Fault_out_b.UT;

  /* SignalConversion generated from: '<Root>/Fault_Out' */
  *rty_Fault_Out_OC = localB->Fault_out_b.OC;

  /* SignalConversion generated from: '<Root>/Fault_Out' */
  *rty_Fault_Out_OV = localB->Fault_out_b.OV;

  /* Gain: '<S2>/Gain' incorporates:
   *  DiscreteIntegrator: '<S2>/Discrete-Time Integrator'
   */
  rtb_Gain = 5.3418803418803419E-5 * localDW->DiscreteTimeIntegrator_DSTATE;
  for (i = 0; i < 12; i++) {
    /* SignalConversion generated from: '<Root>/Temp' */
    rty_Temp[i] = rtu_From_Plant_Tmod[i];

    /* SignalConversion generated from: '<Root>/V_Cell' */
    maxV_1 = rtu_From_Plant_Vmod[i];
    rty_V_Cell[i] = maxV_1;

    /* DataTypeConversion: '<S2>/Cast To Single' incorporates:
     *  DataTypeConversion: '<S2>/Cast To Double1'
     *  Lookup_n-D: '<S2>/1-D Lookup Table'
     *  Sum: '<S2>/Sum'
     */
    rty_SOC[i] = (real32_T)(look1_binlxpw(maxV_1, rtCP_uDLookupTable_bp01Data,
      rtCP_uDLookupTable_tableData, 8U) - rtb_Gain);
  }

  /* MinMax: '<S5>/Max' */
  maxV_0 = rtu_From_Plant_Tmod[0];

  /* MinMax: '<S5>/Max1' */
  maxV_1 = rtu_From_Plant_Tmod[0];
  for (i = 0; i < 11; i++) {
    /* MinMax: '<S5>/Max' */
    rtu_From_Plant_Tmod_0 = rtu_From_Plant_Tmod[i + 1];
    maxV_0 = fmaxf(maxV_0, rtu_From_Plant_Tmod_0);

    /* MinMax: '<S5>/Max1' */
    maxV_1 = fminf(maxV_1, rtu_From_Plant_Tmod_0);
  }

  /* SignalConversion generated from: '<Root>/Ipack' */
  *rty_Ipack = *rtu_From_Plant_Pack_Current;

  /* SignalConversion generated from: '<Root>/V_Batt_Monitor' */
  *rty_V_Batt_Monitor = *rtu_From_Plant_V_Batt_Monitor;

  /* Update for DiscreteIntegrator: '<S5>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S15>/Constant'
   *  DataTypeConversion: '<S5>/Cast To Single'
   *  MinMax: '<S10>/MinMax'
   *  RelationalOperator: '<S15>/Compare'
   */
  localDW->DiscreteTimeIntegrator_DSTATE_d += (real32_T)(frac <= 3.4F) * 0.001F;

  /* Update for DiscreteIntegrator: '<S5>/Discrete-Time Integrator1' incorporates:
   *  Constant: '<S16>/Constant'
   *  DataTypeConversion: '<S5>/Cast To Single1'
   *  MinMax: '<S10>/MinMax'
   *  RelationalOperator: '<S16>/Compare'
   */
  localDW->DiscreteTimeIntegrator1_DSTATE += (real32_T)(frac <= 3.3F) * 0.001F;

  /* Update for DiscreteIntegrator: '<S5>/Discrete-Time Integrator2' incorporates:
   *  Constant: '<S27>/Constant'
   *  DataTypeConversion: '<S5>/Cast To Single2'
   *  MinMax: '<S10>/MinMax'
   *  RelationalOperator: '<S27>/Compare'
   */
  localDW->DiscreteTimeIntegrator2_DSTATE += (real32_T)(frac <= 3.1F) * 0.001F;

  /* Update for DiscreteIntegrator: '<S5>/Discrete-Time Integrator3' incorporates:
   *  Constant: '<S38>/Constant'
   *  DataTypeConversion: '<S5>/Cast To Single3'
   *  MinMax: '<S10>/MinMax'
   *  RelationalOperator: '<S38>/Compare'
   */
  localDW->DiscreteTimeIntegrator3_DSTATE += (real32_T)(frac <= 3.0F) * 0.001F;

  /* Update for DiscreteIntegrator: '<S5>/Discrete-Time Integrator5' incorporates:
   *  Constant: '<S44>/Constant'
   *  DataTypeConversion: '<S5>/Cast To Single5'
   *  MinMax: '<S10>/Max'
   *  RelationalOperator: '<S44>/Compare'
   */
  localDW->DiscreteTimeIntegrator5_DSTATE += (real_T)(maxV >= 4.15F) * 0.001;

  /* Update for DiscreteIntegrator: '<S5>/Discrete-Time Integrator6' incorporates:
   *  Constant: '<S17>/Constant'
   *  DataTypeConversion: '<S5>/Cast To Single6'
   *  MinMax: '<S10>/Max'
   *  RelationalOperator: '<S17>/Compare'
   */
  localDW->DiscreteTimeIntegrator6_DSTATE += (real_T)(maxV >= 4.2F) * 0.001;

  /* Update for DiscreteIntegrator: '<S5>/Discrete-Time Integrator7' incorporates:
   *  Constant: '<S18>/Constant'
   *  DataTypeConversion: '<S5>/Cast To Single7'
   *  MinMax: '<S10>/Max'
   *  RelationalOperator: '<S18>/Compare'
   */
  localDW->DiscreteTimeIntegrator7_DSTATE += (real_T)(maxV >= 4.25F) * 0.001;

  /* Update for DiscreteIntegrator: '<S5>/Discrete-Time Integrator4' incorporates:
   *  Constant: '<S43>/Constant'
   *  DataTypeConversion: '<S5>/Cast To Single4'
   *  MinMax: '<S5>/Max'
   *  RelationalOperator: '<S43>/Compare'
   */
  localDW->DiscreteTimeIntegrator4_DSTATE += (real_T)(maxV_0 >= 318.0F) * 0.001;

  /* Update for DiscreteIntegrator: '<S5>/Discrete-Time Integrator8' incorporates:
   *  Constant: '<S19>/Constant'
   *  DataTypeConversion: '<S5>/Cast To Single8'
   *  MinMax: '<S5>/Max'
   *  RelationalOperator: '<S19>/Compare'
   */
  localDW->DiscreteTimeIntegrator8_DSTATE += (real_T)(maxV_0 >= 323.0F) * 0.001;

  /* Update for DiscreteIntegrator: '<S5>/Discrete-Time Integrator9' incorporates:
   *  Constant: '<S23>/Constant'
   *  DataTypeConversion: '<S5>/Cast To Single9'
   *  MinMax: '<S5>/Max'
   *  RelationalOperator: '<S23>/Compare'
   */
  localDW->DiscreteTimeIntegrator9_DSTATE += (real_T)(maxV_0 >= 333.0F) * 0.001;

  /* Update for DiscreteIntegrator: '<S5>/Discrete-Time Integrator10' incorporates:
   *  Constant: '<S24>/Constant'
   *  DataTypeConversion: '<S5>/Cast To Single10'
   *  MinMax: '<S5>/Max'
   *  RelationalOperator: '<S24>/Compare'
   */
  localDW->DiscreteTimeIntegrator10_DSTATE += (real32_T)(maxV_0 >= 343.0F) *
    0.001F;

  /* Update for DiscreteIntegrator: '<S5>/Discrete-Time Integrator12' incorporates:
   *  Constant: '<S37>/Constant'
   *  DataTypeConversion: '<S5>/Cast To Single12'
   *  MinMax: '<S5>/Max1'
   *  RelationalOperator: '<S37>/Compare'
   */
  localDW->DiscreteTimeIntegrator12_DSTATE += (real_T)(maxV_1 <= 273.0F) * 0.001;

  /* Update for DiscreteIntegrator: '<S5>/Discrete-Time Integrator13' incorporates:
   *  Constant: '<S30>/Constant'
   *  DataTypeConversion: '<S5>/Cast To Single13'
   *  MinMax: '<S5>/Max1'
   *  RelationalOperator: '<S30>/Compare'
   */
  localDW->DiscreteTimeIntegrator13_DSTATE += (real_T)(maxV_1 <= 263.0F) * 0.001;

  /* Update for DiscreteIntegrator: '<S5>/Discrete-Time Integrator14' incorporates:
   *  Constant: '<S31>/Constant'
   *  DataTypeConversion: '<S5>/Cast To Single14'
   *  MinMax: '<S5>/Max1'
   *  RelationalOperator: '<S31>/Compare'
   */
  localDW->DiscreteTimeIntegrator14_DSTATE += (real_T)(maxV_1 <= 260.0F) * 0.001;

  /* Update for DiscreteIntegrator: '<S5>/Discrete-Time Integrator11' incorporates:
   *  Constant: '<S32>/Constant'
   *  DataTypeConversion: '<S5>/Cast To Single11'
   *  MinMax: '<S5>/Max1'
   *  RelationalOperator: '<S32>/Compare'
   */
  localDW->DiscreteTimeIntegrator11_DSTATE += (real32_T)(maxV_1 <= 253.0F) *
    0.001F;

  /* Update for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' incorporates:
   *  DataTypeConversion: '<S2>/Cast To Double'
   */
  localDW->DiscreteTimeIntegrator_DSTATE += 0.001 * *rtu_From_Plant_Pack_Current;
}

/* Model initialize function */
void BMS_MCU_CODE_initialize(const char_T **rt_errorStatus,
  RT_MODEL_BMS_MCU_CODE_T *const BMS_MCU_CODE_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(BMS_MCU_CODE_M, rt_errorStatus);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
