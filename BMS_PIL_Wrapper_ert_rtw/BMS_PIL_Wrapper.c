/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BMS_PIL_Wrapper.c
 *
 * Code generated for Simulink model 'BMS_PIL_Wrapper'.
 *
 * Model version                  : 1.23
 * Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
 * C/C++ source code generated on : Thu Jun  4 17:02:28 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BMS_PIL_Wrapper.h"
#include "rtwtypes.h"
#include <math.h>
#include "rt_remd_snf.h"
#include <string.h>
#include "BMS_PIL_Wrapper_types.h"
#include <stddef.h>
#include "look1_binlxpw.h"
#include "BMS_PIL_Wrapper_private.h"
#include "BMS_MCU_CODE.h"

/* Named constants for Test Sequence: '<Root>/Test Sequence' */
#define BMS_PIL_Wrapper_IN_Flying      ((uint8_T)1U)
#define BMS_PIL_Wrapper_IN_step_2      ((uint8_T)2U)

/* Block signals (default storage) */
B_BMS_PIL_Wrapper_T BMS_PIL_Wrapper_B;

/* Block states (default storage) */
DW_BMS_PIL_Wrapper_T BMS_PIL_Wrapper_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_BMS_PIL_Wrapper_T BMS_PIL_Wrapper_Y;

/* Real-time model */
static RT_MODEL_BMS_PIL_Wrapper_T BMS_PIL_Wrapper_M_;
RT_MODEL_BMS_PIL_Wrapper_T *const BMS_PIL_Wrapper_M = &BMS_PIL_Wrapper_M_;

/* Model step function */
void BMS_PIL_Wrapper_step(void)
{
  /* local block i/o variables */
  real32_T rtb_Charge_Current_Limit;
  real32_T rtb_DataTypeConversion;
  real32_T rtb_DataTypeConversion1;
  real32_T rtb_DataTypeConversion10;
  real32_T rtb_DataTypeConversion11;
  real32_T rtb_DataTypeConversion2;
  real32_T rtb_DataTypeConversion3;
  real32_T rtb_DataTypeConversion4;
  real32_T rtb_DataTypeConversion5;
  real32_T rtb_DataTypeConversion6;
  real32_T rtb_DataTypeConversion7;
  real32_T rtb_DataTypeConversion8;
  real32_T rtb_DataTypeConversion9;
  real32_T rtb_CastToSingle12;
  real32_T rtb_CastToSingle13;
  real32_T rtb_CastToSingle14;
  real32_T rtb_CastToSingle15;
  real32_T rtb_CastToSingle16;
  real32_T rtb_CastToSingle17;
  real32_T rtb_CastToSingle18;
  real32_T rtb_CastToSingle19;
  real32_T rtb_CastToSingle20;
  real32_T rtb_CastToSingle21;
  real32_T rtb_CastToSingle22;
  real32_T rtb_CastToSingle23;
  real32_T rtb_CastToSingle;
  real32_T rtb_CastToSingle1_a;
  real32_T rtb_CastToSingle10;
  real32_T rtb_CastToSingle11;
  real32_T rtb_CastToSingle2;
  real32_T rtb_CastToSingle3;
  real32_T rtb_CastToSingle4;
  real32_T rtb_CastToSingle5;
  real32_T rtb_CastToSingle6;
  real32_T rtb_CastToSingle7;
  real32_T rtb_CastToSingle8;
  real32_T rtb_CastToSingle9;
  boolean_T rtb_VoltSensor;
  boolean_T rtb_UV;
  boolean_T rtb_OT;
  boolean_T rtb_UT;
  boolean_T rtb_OC;
  boolean_T rtb_OV;

  {
    NeParameterBundle expl_temp;
    NeslSimulationData *simulationData;
    NeuDiagnosticManager *diag;
    NeuDiagnosticTree *diagTree;
    NeuDiagnosticTree *diagnosticTree;
    NeuDiagnosticTree *diagnosticTree_0;
    NeuDiagnosticTree *diagnosticTree_1;
    char *msg;
    char *msg_0;
    char *msg_1;
    char *msg_2;
    real_T rtb_Gain;
    real_T rtb_Sum1;
    real_T time;
    real_T time_0;
    real_T time_1;
    real_T time_2;
    real_T time_3;
    real_T time_4;
    real_T time_tmp;
    int32_T isHit;
    int32_T isHit_0;
    int32_T isHit_1;
    int32_T k;
    real32_T rtb_Discharge_Current_Limit;
    real32_T rtb_Switch1;
    boolean_T ok;

    /* Test Sequence: '<Root>/Test Sequence' */
    if (BMS_PIL_Wrapper_DW.is_active_c8_BMS_PIL_Wrapper == 0) {
      BMS_PIL_Wrapper_DW.is_active_c8_BMS_PIL_Wrapper = 1U;
      BMS_PIL_Wrapper_DW.is_c8_BMS_PIL_Wrapper = BMS_PIL_Wrapper_IN_Flying;
      BMS_PIL_Wrapper_B.State_Required = Charge;
    } else if (BMS_PIL_Wrapper_DW.is_c8_BMS_PIL_Wrapper ==
               BMS_PIL_Wrapper_IN_Flying) {
      BMS_PIL_Wrapper_DW.is_c8_BMS_PIL_Wrapper = BMS_PIL_Wrapper_IN_step_2;
    } else {
      /* case IN_step_2: */
    }

    /* End of Test Sequence: '<Root>/Test Sequence' */

    /* ModelReference generated from: '<Root>/BMS_MCU_CODE' incorporates:
     *  BusCreator: '<Root>/Bus Creator'
     *  Outport: '<Root>/Ipack'
     *  Outport: '<Root>/SOC'
     *  Outport: '<Root>/Temp'
     *  Outport: '<Root>/V_Batt_Monitor'
     *  Outport: '<Root>/V_Cell'
     *  UnitDelay: '<Root>/Unit Delay'
     *  UnitDelay: '<Root>/Unit Delay1'
     *  UnitDelay: '<Root>/Unit Delay2'
     *  UnitDelay: '<Root>/Unit Delay3'
     *  UnitDelay: '<Root>/Unit Delay4'
     */
    BMS_MCU_CODE(&BMS_PIL_Wrapper_DW.UnitDelay4_DSTATE[0],
                 &BMS_PIL_Wrapper_DW.UnitDelay3_DSTATE[0],
                 &BMS_PIL_Wrapper_DW.UnitDelay1_DSTATE,
                 &BMS_PIL_Wrapper_DW.UnitDelay_DSTATE_m[0],
                 &BMS_PIL_Wrapper_DW.UnitDelay2_DSTATE,
                 &BMS_PIL_Wrapper_B.State_Required, &rtb_VoltSensor, &rtb_UV,
                 &rtb_OT, &rtb_UT, &rtb_OC, &rtb_OV, &BMS_PIL_Wrapper_Y.SOC[0],
                 &BMS_PIL_Wrapper_Y.V_Batt_Monitor, &BMS_PIL_Wrapper_Y.Ipack,
                 &BMS_PIL_Wrapper_Y.Temp[0], &BMS_PIL_Wrapper_Y.V_Cell[0],
                 &BMS_PIL_Wrapper_B.BMS_State_Out, &rtb_Discharge_Current_Limit,
                 &rtb_Charge_Current_Limit, &BMS_PIL_Wrapper_B.Bal_Cmd[0],
                 &BMS_PIL_Wrapper_B.BMS_MCU_CODE_o16[0],
                 &(BMS_PIL_Wrapper_DW.BMS_MCU_CODE_InstanceData.rtb),
                 &(BMS_PIL_Wrapper_DW.BMS_MCU_CODE_InstanceData.rtdw));

    /* Switch: '<S5>/Switch' incorporates:
     *  Constant: '<S5>/Constant1'
     *  Constant: '<S7>/Constant'
     *  MinMax: '<S5>/Min'
     *  RelationalOperator: '<S7>/Compare'
     *  UnitDelay: '<S5>/Unit Delay'
     */
    if (BMS_PIL_Wrapper_B.State_Required == Charge) {
      /* MinMax: '<S14>/MinMax1' incorporates:
       *  UnitDelay: '<S2>/Unit Delay'
       */
      rtb_Switch1 = BMS_PIL_Wrapper_DW.UnitDelay_DSTATE_b[0];
      for (k = 0; k < 11; k++) {
        rtb_Switch1 = fmaxf(rtb_Switch1, BMS_PIL_Wrapper_DW.UnitDelay_DSTATE_b[k
                            + 1]);
      }

      /* Switch: '<S5>/Switch1' incorporates:
       *  Constant: '<S2>/Constant'
       *  MinMax: '<S14>/MinMax1'
       *  RelationalOperator: '<S5>/Relational Operator'
       */
      if (rtb_Switch1 < 4.2) {
        rtb_Switch1 = rtb_Charge_Current_Limit;
      } else {
        /* Sum: '<S5>/Sum1' incorporates:
         *  Gain: '<S5>/Gain'
         *  Sum: '<S5>/Sum'
         *  UnitDelay: '<S5>/Unit Delay'
         */
        rtb_Sum1 = (4.2 - rtb_Switch1) * 0.02 +
          BMS_PIL_Wrapper_DW.UnitDelay_DSTATE;

        /* Saturate: '<S5>/Saturation' */
        if (rtb_Sum1 <= 0.0) {
          rtb_Switch1 = 0.0F;
        } else {
          rtb_Switch1 = (real32_T)rtb_Sum1;
        }

        /* End of Saturate: '<S5>/Saturation' */
      }

      /* End of Switch: '<S5>/Switch1' */
      BMS_PIL_Wrapper_DW.UnitDelay_DSTATE = fminf(rtb_Charge_Current_Limit,
        rtb_Switch1);
    } else {
      BMS_PIL_Wrapper_DW.UnitDelay_DSTATE = 0.0;
    }

    /* End of Switch: '<S5>/Switch' */

    /* RateLimiter: '<S2>/Rate Limiter' incorporates:
     *  UnitDelay: '<S5>/Unit Delay'
     */
    rtb_Sum1 = BMS_PIL_Wrapper_DW.UnitDelay_DSTATE - BMS_PIL_Wrapper_DW.PrevY;
    if (rtb_Sum1 > 0.01) {
      /* RateLimiter: '<S2>/Rate Limiter' */
      BMS_PIL_Wrapper_DW.PrevY += 0.01;
    } else if (rtb_Sum1 < -0.01) {
      /* RateLimiter: '<S2>/Rate Limiter' */
      BMS_PIL_Wrapper_DW.PrevY -= 0.01;
    } else {
      /* RateLimiter: '<S2>/Rate Limiter' */
      BMS_PIL_Wrapper_DW.PrevY = BMS_PIL_Wrapper_DW.UnitDelay_DSTATE;
    }

    /* End of RateLimiter: '<S2>/Rate Limiter' */

    /* Switch: '<S6>/Switch' incorporates:
     *  Constant: '<S15>/Constant'
     *  Constant: '<S6>/Constant'
     *  DataTypeConversion: '<S2>/Data Type Conversion'
     *  RelationalOperator: '<S15>/Compare'
     */
    if (BMS_PIL_Wrapper_B.State_Required == Charge) {
      rtb_Sum1 = (real32_T)BMS_PIL_Wrapper_DW.PrevY;
    } else {
      rtb_Sum1 = 0.0;
    }

    /* End of Switch: '<S6>/Switch' */

    /* SimscapeInputBlock: '<S25>/INPUT_2_1_1' incorporates:
     *  Gain: '<S6>/Gain1'
     */
    BMS_PIL_Wrapper_B.INPUT_2_1_1[0] = 0.99 * rtb_Sum1;

    /* SimscapeInputBlock: '<S25>/INPUT_2_1_1' */
    BMS_PIL_Wrapper_B.INPUT_2_1_1[1] = 0.0;
    BMS_PIL_Wrapper_B.INPUT_2_1_1[2] = 0.0;
    BMS_PIL_Wrapper_DW.INPUT_2_1_1_Discrete_3746703564[0] =
      !(BMS_PIL_Wrapper_B.INPUT_2_1_1[0] ==
        BMS_PIL_Wrapper_DW.INPUT_2_1_1_Discrete_3746703564[1]);
    BMS_PIL_Wrapper_DW.INPUT_2_1_1_Discrete_3746703564[1] =
      BMS_PIL_Wrapper_B.INPUT_2_1_1[0];
    BMS_PIL_Wrapper_B.INPUT_2_1_1[0] =
      BMS_PIL_Wrapper_DW.INPUT_2_1_1_Discrete_3746703564[1];
    BMS_PIL_Wrapper_B.INPUT_2_1_1[3] =
      BMS_PIL_Wrapper_DW.INPUT_2_1_1_Discrete_3746703564[0];

    /* Switch: '<S6>/Switch1' incorporates:
     *  Constant: '<S16>/Constant'
     *  RelationalOperator: '<S16>/Compare'
     */
    if (BMS_PIL_Wrapper_B.State_Required == Fly) {
      /* Gain: '<S6>/Gain' incorporates:
       *  Clock: '<S17>/Clock'
       *  Constant: '<S17>/Constant'
       *  Lookup_n-D: '<S17>/Look-Up Table1'
       *  Math: '<S17>/Math Function'
       */
      rtb_Gain = -look1_binlxpw(rt_remd_snf(BMS_PIL_Wrapper_M->Timing.t[0],
        300.0), rtCP_LookUpTable1_bp01Data, rtCP_LookUpTable1_tableData, 5U);

      /* Switch: '<S18>/Switch2' incorporates:
       *  DataTypeConversion: '<S6>/Data Type Conversion'
       *  DataTypeConversion: '<S6>/Data Type Conversion1'
       *  RelationalOperator: '<S18>/LowerRelop1'
       *  RelationalOperator: '<S18>/UpperRelop'
       *  Switch: '<S18>/Switch'
       */
      if (rtb_Gain > rtb_Charge_Current_Limit) {
        /* SimscapeInputBlock: '<S25>/INPUT_1_1_1' */
        BMS_PIL_Wrapper_B.INPUT_1_1_1[0] = rtb_Charge_Current_Limit;
      } else if (rtb_Gain < rtb_Discharge_Current_Limit) {
        /* Switch: '<S18>/Switch' incorporates:
         *  DataTypeConversion: '<S6>/Data Type Conversion'
         *  SimscapeInputBlock: '<S25>/INPUT_1_1_1'
         */
        BMS_PIL_Wrapper_B.INPUT_1_1_1[0] = rtb_Discharge_Current_Limit;
      } else {
        /* SimscapeInputBlock: '<S25>/INPUT_1_1_1' incorporates:
         *  Switch: '<S18>/Switch'
         */
        BMS_PIL_Wrapper_B.INPUT_1_1_1[0] = rtb_Gain;
      }

      /* End of Switch: '<S18>/Switch2' */
    } else {
      /* SimscapeInputBlock: '<S25>/INPUT_1_1_1' incorporates:
       *  Constant: '<S6>/Constant2'
       *  Switch: '<S6>/Switch1'
       */
      BMS_PIL_Wrapper_B.INPUT_1_1_1[0] = 0.0;
    }

    /* End of Switch: '<S6>/Switch1' */

    /* SimscapeInputBlock: '<S25>/INPUT_1_1_1' */
    BMS_PIL_Wrapper_B.INPUT_1_1_1[1] = 0.0;
    BMS_PIL_Wrapper_B.INPUT_1_1_1[2] = 0.0;
    BMS_PIL_Wrapper_B.INPUT_1_1_1[3] = 0.0;

    /* SimscapeInputBlock: '<S25>/INPUT_5_1_1' incorporates:
     *  DataTypeConversion: '<S26>/Cast To Double10'
     */
    BMS_PIL_Wrapper_B.INPUT_5_1_1[0] = BMS_PIL_Wrapper_B.Bal_Cmd[10];
    BMS_PIL_Wrapper_B.INPUT_5_1_1[1] = 0.0;
    BMS_PIL_Wrapper_B.INPUT_5_1_1[2] = 0.0;
    BMS_PIL_Wrapper_DW.INPUT_5_1_1_Discrete_1836250332[0] =
      !(BMS_PIL_Wrapper_B.INPUT_5_1_1[0] ==
        BMS_PIL_Wrapper_DW.INPUT_5_1_1_Discrete_1836250332[1]);
    BMS_PIL_Wrapper_DW.INPUT_5_1_1_Discrete_1836250332[1] =
      BMS_PIL_Wrapper_B.INPUT_5_1_1[0];
    BMS_PIL_Wrapper_B.INPUT_5_1_1[0] =
      BMS_PIL_Wrapper_DW.INPUT_5_1_1_Discrete_1836250332[1];
    BMS_PIL_Wrapper_B.INPUT_5_1_1[3] =
      BMS_PIL_Wrapper_DW.INPUT_5_1_1_Discrete_1836250332[0];

    /* SimscapeInputBlock: '<S25>/INPUT_6_1_1' incorporates:
     *  DataTypeConversion: '<S26>/Cast To Double11'
     */
    BMS_PIL_Wrapper_B.INPUT_6_1_1[0] = BMS_PIL_Wrapper_B.Bal_Cmd[11];
    BMS_PIL_Wrapper_B.INPUT_6_1_1[1] = 0.0;
    BMS_PIL_Wrapper_B.INPUT_6_1_1[2] = 0.0;
    BMS_PIL_Wrapper_DW.INPUT_6_1_1_Discrete_718441996[0] =
      !(BMS_PIL_Wrapper_B.INPUT_6_1_1[0] ==
        BMS_PIL_Wrapper_DW.INPUT_6_1_1_Discrete_718441996[1]);
    BMS_PIL_Wrapper_DW.INPUT_6_1_1_Discrete_718441996[1] =
      BMS_PIL_Wrapper_B.INPUT_6_1_1[0];
    BMS_PIL_Wrapper_B.INPUT_6_1_1[0] =
      BMS_PIL_Wrapper_DW.INPUT_6_1_1_Discrete_718441996[1];
    BMS_PIL_Wrapper_B.INPUT_6_1_1[3] =
      BMS_PIL_Wrapper_DW.INPUT_6_1_1_Discrete_718441996[0];

    /* SimscapeInputBlock: '<S25>/INPUT_4_1_1' incorporates:
     *  DataTypeConversion: '<S26>/Cast To Double1'
     */
    BMS_PIL_Wrapper_B.INPUT_4_1_1[0] = BMS_PIL_Wrapper_B.Bal_Cmd[1];
    BMS_PIL_Wrapper_B.INPUT_4_1_1[1] = 0.0;
    BMS_PIL_Wrapper_B.INPUT_4_1_1[2] = 0.0;
    BMS_PIL_Wrapper_DW.INPUT_4_1_1_Discrete_1343413612[0] =
      !(BMS_PIL_Wrapper_B.INPUT_4_1_1[0] ==
        BMS_PIL_Wrapper_DW.INPUT_4_1_1_Discrete_1343413612[1]);
    BMS_PIL_Wrapper_DW.INPUT_4_1_1_Discrete_1343413612[1] =
      BMS_PIL_Wrapper_B.INPUT_4_1_1[0];
    BMS_PIL_Wrapper_B.INPUT_4_1_1[0] =
      BMS_PIL_Wrapper_DW.INPUT_4_1_1_Discrete_1343413612[1];
    BMS_PIL_Wrapper_B.INPUT_4_1_1[3] =
      BMS_PIL_Wrapper_DW.INPUT_4_1_1_Discrete_1343413612[0];

    /* SimscapeInputBlock: '<S25>/INPUT_7_1_1' incorporates:
     *  DataTypeConversion: '<S26>/Cast To Double2'
     */
    BMS_PIL_Wrapper_B.INPUT_7_1_1[0] = BMS_PIL_Wrapper_B.Bal_Cmd[2];
    BMS_PIL_Wrapper_B.INPUT_7_1_1[1] = 0.0;
    BMS_PIL_Wrapper_B.INPUT_7_1_1[2] = 0.0;
    BMS_PIL_Wrapper_DW.INPUT_7_1_1_Discrete_397584316[0] =
      !(BMS_PIL_Wrapper_B.INPUT_7_1_1[0] ==
        BMS_PIL_Wrapper_DW.INPUT_7_1_1_Discrete_397584316[1]);
    BMS_PIL_Wrapper_DW.INPUT_7_1_1_Discrete_397584316[1] =
      BMS_PIL_Wrapper_B.INPUT_7_1_1[0];
    BMS_PIL_Wrapper_B.INPUT_7_1_1[0] =
      BMS_PIL_Wrapper_DW.INPUT_7_1_1_Discrete_397584316[1];
    BMS_PIL_Wrapper_B.INPUT_7_1_1[3] =
      BMS_PIL_Wrapper_DW.INPUT_7_1_1_Discrete_397584316[0];

    /* SimscapeInputBlock: '<S25>/INPUT_8_1_1' incorporates:
     *  DataTypeConversion: '<S26>/Cast To Double3'
     */
    BMS_PIL_Wrapper_B.INPUT_8_1_1[0] = BMS_PIL_Wrapper_B.Bal_Cmd[3];
    BMS_PIL_Wrapper_B.INPUT_8_1_1[1] = 0.0;
    BMS_PIL_Wrapper_B.INPUT_8_1_1[2] = 0.0;
    BMS_PIL_Wrapper_DW.INPUT_8_1_1_Discrete_2514628717[0] =
      !(BMS_PIL_Wrapper_B.INPUT_8_1_1[0] ==
        BMS_PIL_Wrapper_DW.INPUT_8_1_1_Discrete_2514628717[1]);
    BMS_PIL_Wrapper_DW.INPUT_8_1_1_Discrete_2514628717[1] =
      BMS_PIL_Wrapper_B.INPUT_8_1_1[0];
    BMS_PIL_Wrapper_B.INPUT_8_1_1[0] =
      BMS_PIL_Wrapper_DW.INPUT_8_1_1_Discrete_2514628717[1];
    BMS_PIL_Wrapper_B.INPUT_8_1_1[3] =
      BMS_PIL_Wrapper_DW.INPUT_8_1_1_Discrete_2514628717[0];

    /* SimscapeInputBlock: '<S25>/INPUT_9_1_1' incorporates:
     *  DataTypeConversion: '<S26>/Cast To Double4'
     */
    BMS_PIL_Wrapper_B.INPUT_9_1_1[0] = BMS_PIL_Wrapper_B.Bal_Cmd[4];
    BMS_PIL_Wrapper_B.INPUT_9_1_1[1] = 0.0;
    BMS_PIL_Wrapper_B.INPUT_9_1_1[2] = 0.0;
    BMS_PIL_Wrapper_DW.INPUT_9_1_1_Discrete_2827098589[0] =
      !(BMS_PIL_Wrapper_B.INPUT_9_1_1[0] ==
        BMS_PIL_Wrapper_DW.INPUT_9_1_1_Discrete_2827098589[1]);
    BMS_PIL_Wrapper_DW.INPUT_9_1_1_Discrete_2827098589[1] =
      BMS_PIL_Wrapper_B.INPUT_9_1_1[0];
    BMS_PIL_Wrapper_B.INPUT_9_1_1[0] =
      BMS_PIL_Wrapper_DW.INPUT_9_1_1_Discrete_2827098589[1];
    BMS_PIL_Wrapper_B.INPUT_9_1_1[3] =
      BMS_PIL_Wrapper_DW.INPUT_9_1_1_Discrete_2827098589[0];

    /* SimscapeInputBlock: '<S25>/INPUT_10_1_1' incorporates:
     *  DataTypeConversion: '<S26>/Cast To Double5'
     */
    BMS_PIL_Wrapper_B.INPUT_10_1_1[0] = BMS_PIL_Wrapper_B.Bal_Cmd[5];
    BMS_PIL_Wrapper_B.INPUT_10_1_1[1] = 0.0;
    BMS_PIL_Wrapper_B.INPUT_10_1_1[2] = 0.0;
    BMS_PIL_Wrapper_DW.INPUT_10_1_1_Discrete_102206221[0] =
      !(BMS_PIL_Wrapper_B.INPUT_10_1_1[0] ==
        BMS_PIL_Wrapper_DW.INPUT_10_1_1_Discrete_102206221[1]);
    BMS_PIL_Wrapper_DW.INPUT_10_1_1_Discrete_102206221[1] =
      BMS_PIL_Wrapper_B.INPUT_10_1_1[0];
    BMS_PIL_Wrapper_B.INPUT_10_1_1[0] =
      BMS_PIL_Wrapper_DW.INPUT_10_1_1_Discrete_102206221[1];
    BMS_PIL_Wrapper_B.INPUT_10_1_1[3] =
      BMS_PIL_Wrapper_DW.INPUT_10_1_1_Discrete_102206221[0];

    /* SimscapeInputBlock: '<S25>/INPUT_11_1_1' incorporates:
     *  DataTypeConversion: '<S26>/Cast To Double6'
     */
    BMS_PIL_Wrapper_B.INPUT_11_1_1[0] = BMS_PIL_Wrapper_B.Bal_Cmd[6];
    BMS_PIL_Wrapper_B.INPUT_11_1_1[1] = 0.0;
    BMS_PIL_Wrapper_B.INPUT_11_1_1[2] = 0.0;
    BMS_PIL_Wrapper_DW.INPUT_11_1_1_Discrete_25904952[0] =
      !(BMS_PIL_Wrapper_B.INPUT_11_1_1[0] ==
        BMS_PIL_Wrapper_DW.INPUT_11_1_1_Discrete_25904952[1]);
    BMS_PIL_Wrapper_DW.INPUT_11_1_1_Discrete_25904952[1] =
      BMS_PIL_Wrapper_B.INPUT_11_1_1[0];
    BMS_PIL_Wrapper_B.INPUT_11_1_1[0] =
      BMS_PIL_Wrapper_DW.INPUT_11_1_1_Discrete_25904952[1];
    BMS_PIL_Wrapper_B.INPUT_11_1_1[3] =
      BMS_PIL_Wrapper_DW.INPUT_11_1_1_Discrete_25904952[0];

    /* SimscapeInputBlock: '<S25>/INPUT_12_1_1' incorporates:
     *  DataTypeConversion: '<S26>/Cast To Double7'
     */
    BMS_PIL_Wrapper_B.INPUT_12_1_1[0] = BMS_PIL_Wrapper_B.Bal_Cmd[7];
    BMS_PIL_Wrapper_B.INPUT_12_1_1[1] = 0.0;
    BMS_PIL_Wrapper_B.INPUT_12_1_1[2] = 0.0;
    BMS_PIL_Wrapper_DW.INPUT_12_1_1_Discrete_117723901[0] =
      !(BMS_PIL_Wrapper_B.INPUT_12_1_1[0] ==
        BMS_PIL_Wrapper_DW.INPUT_12_1_1_Discrete_117723901[1]);
    BMS_PIL_Wrapper_DW.INPUT_12_1_1_Discrete_117723901[1] =
      BMS_PIL_Wrapper_B.INPUT_12_1_1[0];
    BMS_PIL_Wrapper_B.INPUT_12_1_1[0] =
      BMS_PIL_Wrapper_DW.INPUT_12_1_1_Discrete_117723901[1];
    BMS_PIL_Wrapper_B.INPUT_12_1_1[3] =
      BMS_PIL_Wrapper_DW.INPUT_12_1_1_Discrete_117723901[0];

    /* SimscapeInputBlock: '<S25>/INPUT_13_1_1' incorporates:
     *  DataTypeConversion: '<S26>/Cast To Double8'
     */
    BMS_PIL_Wrapper_B.INPUT_13_1_1[0] = BMS_PIL_Wrapper_B.Bal_Cmd[8];
    BMS_PIL_Wrapper_B.INPUT_13_1_1[1] = 0.0;
    BMS_PIL_Wrapper_B.INPUT_13_1_1[2] = 0.0;
    BMS_PIL_Wrapper_DW.INPUT_13_1_1_Discrete_206851797[0] =
      !(BMS_PIL_Wrapper_B.INPUT_13_1_1[0] ==
        BMS_PIL_Wrapper_DW.INPUT_13_1_1_Discrete_206851797[1]);
    BMS_PIL_Wrapper_DW.INPUT_13_1_1_Discrete_206851797[1] =
      BMS_PIL_Wrapper_B.INPUT_13_1_1[0];
    BMS_PIL_Wrapper_B.INPUT_13_1_1[0] =
      BMS_PIL_Wrapper_DW.INPUT_13_1_1_Discrete_206851797[1];
    BMS_PIL_Wrapper_B.INPUT_13_1_1[3] =
      BMS_PIL_Wrapper_DW.INPUT_13_1_1_Discrete_206851797[0];

    /* SimscapeInputBlock: '<S25>/INPUT_14_1_1' incorporates:
     *  DataTypeConversion: '<S26>/Cast To Double9'
     */
    BMS_PIL_Wrapper_B.INPUT_14_1_1[0] = BMS_PIL_Wrapper_B.Bal_Cmd[9];
    BMS_PIL_Wrapper_B.INPUT_14_1_1[1] = 0.0;
    BMS_PIL_Wrapper_B.INPUT_14_1_1[2] = 0.0;
    BMS_PIL_Wrapper_DW.INPUT_14_1_1_Discrete_337928404[0] =
      !(BMS_PIL_Wrapper_B.INPUT_14_1_1[0] ==
        BMS_PIL_Wrapper_DW.INPUT_14_1_1_Discrete_337928404[1]);
    BMS_PIL_Wrapper_DW.INPUT_14_1_1_Discrete_337928404[1] =
      BMS_PIL_Wrapper_B.INPUT_14_1_1[0];
    BMS_PIL_Wrapper_B.INPUT_14_1_1[0] =
      BMS_PIL_Wrapper_DW.INPUT_14_1_1_Discrete_337928404[1];
    BMS_PIL_Wrapper_B.INPUT_14_1_1[3] =
      BMS_PIL_Wrapper_DW.INPUT_14_1_1_Discrete_337928404[0];

    /* SimscapeInputBlock: '<S25>/INPUT_3_1_1' incorporates:
     *  DataTypeConversion: '<S26>/Cast To Double'
     */
    BMS_PIL_Wrapper_B.INPUT_3_1_1[0] = BMS_PIL_Wrapper_B.Bal_Cmd[0];
    BMS_PIL_Wrapper_B.INPUT_3_1_1[1] = 0.0;
    BMS_PIL_Wrapper_B.INPUT_3_1_1[2] = 0.0;
    BMS_PIL_Wrapper_DW.INPUT_3_1_1_Discrete_3794927996[0] =
      !(BMS_PIL_Wrapper_B.INPUT_3_1_1[0] ==
        BMS_PIL_Wrapper_DW.INPUT_3_1_1_Discrete_3794927996[1]);
    BMS_PIL_Wrapper_DW.INPUT_3_1_1_Discrete_3794927996[1] =
      BMS_PIL_Wrapper_B.INPUT_3_1_1[0];
    BMS_PIL_Wrapper_B.INPUT_3_1_1[0] =
      BMS_PIL_Wrapper_DW.INPUT_3_1_1_Discrete_3794927996[1];
    BMS_PIL_Wrapper_B.INPUT_3_1_1[3] =
      BMS_PIL_Wrapper_DW.INPUT_3_1_1_Discrete_3794927996[0];

    /* SimscapeInputBlock: '<S25>/INPUT_15_1_1' incorporates:
     *  Constant: '<S27>/Constant'
     */
    BMS_PIL_Wrapper_B.INPUT_15_1_1[0] = 298.0;
    BMS_PIL_Wrapper_B.INPUT_15_1_1[1] = 0.0;
    BMS_PIL_Wrapper_B.INPUT_15_1_1[2] = 0.0;
    BMS_PIL_Wrapper_DW.INPUT_15_1_1_Discrete_409441944[0] =
      !(BMS_PIL_Wrapper_B.INPUT_15_1_1[0] ==
        BMS_PIL_Wrapper_DW.INPUT_15_1_1_Discrete_409441944[1]);
    BMS_PIL_Wrapper_DW.INPUT_15_1_1_Discrete_409441944[1] =
      BMS_PIL_Wrapper_B.INPUT_15_1_1[0];
    BMS_PIL_Wrapper_B.INPUT_15_1_1[0] =
      BMS_PIL_Wrapper_DW.INPUT_15_1_1_Discrete_409441944[1];
    BMS_PIL_Wrapper_B.INPUT_15_1_1[3] =
      BMS_PIL_Wrapper_DW.INPUT_15_1_1_Discrete_409441944[0];

    /* SimscapeRtp: '<S10>/RTP_1' incorporates:
     *  Constant: '<S27>/Subsystem_around_RTP_24C3D2C3_cell_temperature'
     *  Constant: '<S27>/Subsystem_around_RTP_24C3D2C3_stateOfCharge'
     *  Constant: '<S27>/Subsystem_around_RTP_285EE4A8_cell_temperature'
     *  Constant: '<S27>/Subsystem_around_RTP_285EE4A8_stateOfCharge'
     *  Constant: '<S27>/Subsystem_around_RTP_2D759EE8_cell_temperature'
     *  Constant: '<S27>/Subsystem_around_RTP_2D759EE8_stateOfCharge'
     *  Constant: '<S27>/Subsystem_around_RTP_2F3320B1_cell_temperature'
     *  Constant: '<S27>/Subsystem_around_RTP_2F3320B1_stateOfCharge'
     *  Constant: '<S27>/Subsystem_around_RTP_53C4E255_cell_temperature'
     *  Constant: '<S27>/Subsystem_around_RTP_53C4E255_stateOfCharge'
     *  Constant: '<S27>/Subsystem_around_RTP_58341027_cell_temperature'
     *  Constant: '<S27>/Subsystem_around_RTP_58341027_stateOfCharge'
     *  Constant: '<S27>/Subsystem_around_RTP_5A72AE7E_cell_temperature'
     *  Constant: '<S27>/Subsystem_around_RTP_5A72AE7E_stateOfCharge'
     *  Constant: '<S27>/Subsystem_around_RTP_5F59D43E_cell_temperature'
     *  Constant: '<S27>/Subsystem_around_RTP_5F59D43E_stateOfCharge'
     *  Constant: '<S27>/Subsystem_around_RTP_B157B512_cell_temperature'
     *  Constant: '<S27>/Subsystem_around_RTP_B157B512_stateOfCharge'
     *  Constant: '<S27>/Subsystem_around_RTP_B47CCF52_cell_temperature'
     *  Constant: '<S27>/Subsystem_around_RTP_B47CCF52_stateOfCharge'
     *  Constant: '<S27>/Subsystem_around_RTP_C37BFFC4_cell_temperature'
     *  Constant: '<S27>/Subsystem_around_RTP_C37BFFC4_stateOfCharge'
     *  Constant: '<S27>/Subsystem_around_RTP_C6508584_cell_temperature'
     *  Constant: '<S27>/Subsystem_around_RTP_C6508584_stateOfCharge'
     */
    if (BMS_PIL_Wrapper_DW.RTP_1_SetParametersNeeded) {
      BMS_PIL_Wrapper_B.dv4[0] = 0.15;
      BMS_PIL_Wrapper_B.dv4[1] = 0.15;
      BMS_PIL_Wrapper_B.dv4[2] = 0.18;
      BMS_PIL_Wrapper_B.dv4[3] = 0.22;
      BMS_PIL_Wrapper_B.dv4[4] = 0.15;
      BMS_PIL_Wrapper_B.dv4[5] = 0.15;
      BMS_PIL_Wrapper_B.dv4[6] = 0.15;
      BMS_PIL_Wrapper_B.dv4[7] = 0.15;
      BMS_PIL_Wrapper_B.dv4[8] = 0.15;
      BMS_PIL_Wrapper_B.dv4[9] = 0.15;
      BMS_PIL_Wrapper_B.dv4[10] = 0.15;
      BMS_PIL_Wrapper_B.dv4[11] = 0.15;
      BMS_PIL_Wrapper_B.dv4[12] = 298.15;
      BMS_PIL_Wrapper_B.dv4[13] = 298.15;
      BMS_PIL_Wrapper_B.dv4[14] = 298.15;
      BMS_PIL_Wrapper_B.dv4[15] = 298.15;
      BMS_PIL_Wrapper_B.dv4[16] = 298.15;
      BMS_PIL_Wrapper_B.dv4[17] = 298.15;
      BMS_PIL_Wrapper_B.dv4[18] = 298.15;
      BMS_PIL_Wrapper_B.dv4[19] = 298.15;
      BMS_PIL_Wrapper_B.dv4[20] = 298.15;
      BMS_PIL_Wrapper_B.dv4[21] = 298.15;
      BMS_PIL_Wrapper_B.dv4[22] = 298.15;
      BMS_PIL_Wrapper_B.dv4[23] = 298.15;
      diag = rtw_create_diagnostics();
      diagTree = neu_diagnostic_manager_get_initial_tree(diag);
      expl_temp.mRealParameters.mN = 24;
      expl_temp.mRealParameters.mX = &BMS_PIL_Wrapper_B.dv4[0];
      expl_temp.mLogicalParameters.mN = 0;
      expl_temp.mLogicalParameters.mX = NULL;
      expl_temp.mIntegerParameters.mN = 0;
      expl_temp.mIntegerParameters.mX = NULL;
      expl_temp.mIndexParameters.mN = 0;
      expl_temp.mIndexParameters.mX = NULL;
      ok = nesl_rtp_manager_set_rtps((NeslRtpManager *)
        BMS_PIL_Wrapper_DW.RTP_1_RtpManager, BMS_PIL_Wrapper_M->Timing.t[0],
        expl_temp, diag);
      if (!ok) {
        ok = error_buffer_is_empty(rtmGetErrorStatus(BMS_PIL_Wrapper_M));
        if (ok) {
          msg = rtw_diagnostics_msg(diagTree);
          rtmSetErrorStatus(BMS_PIL_Wrapper_M, msg);
        }
      }
    }

    BMS_PIL_Wrapper_DW.RTP_1_SetParametersNeeded = false;

    /* End of SimscapeRtp: '<S10>/RTP_1' */

    /* SimscapeExecutionBlock: '<S25>/STATE_1' incorporates:
     *  SimscapeExecutionBlock: '<S25>/OUTPUT_1_0'
     *  SimscapeExecutionBlock: '<S25>/OUTPUT_1_1'
     */
    simulationData = (NeslSimulationData *)BMS_PIL_Wrapper_DW.STATE_1_SimData;
    rtb_Gain = BMS_PIL_Wrapper_M->Timing.t[0];
    time = rtb_Gain;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 205;
    simulationData->mData->mDiscStates.mX =
      &BMS_PIL_Wrapper_DW.STATE_1_Discrete_2616936702[0];
    simulationData->mData->mModeVector.mN = 132;
    simulationData->mData->mModeVector.mX = &BMS_PIL_Wrapper_DW.STATE_1_Modes[0];
    ok = false;
    simulationData->mData->mFoundZcEvents = ok;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    ok = false;
    simulationData->mData->mIsSolverAssertCheck = ok;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    BMS_PIL_Wrapper_B.iv2[0] = 0;
    BMS_PIL_Wrapper_B.dv2[0] = BMS_PIL_Wrapper_B.INPUT_2_1_1[0];
    BMS_PIL_Wrapper_B.dv2[1] = BMS_PIL_Wrapper_B.INPUT_2_1_1[1];
    BMS_PIL_Wrapper_B.dv2[2] = BMS_PIL_Wrapper_B.INPUT_2_1_1[2];
    BMS_PIL_Wrapper_B.dv2[3] = BMS_PIL_Wrapper_B.INPUT_2_1_1[3];
    BMS_PIL_Wrapper_B.iv2[1] = 4;
    BMS_PIL_Wrapper_B.dv2[4] = BMS_PIL_Wrapper_B.INPUT_1_1_1[0];
    BMS_PIL_Wrapper_B.dv2[5] = BMS_PIL_Wrapper_B.INPUT_1_1_1[1];
    BMS_PIL_Wrapper_B.dv2[6] = BMS_PIL_Wrapper_B.INPUT_1_1_1[2];
    BMS_PIL_Wrapper_B.dv2[7] = BMS_PIL_Wrapper_B.INPUT_1_1_1[3];
    BMS_PIL_Wrapper_B.iv2[2] = 8;
    BMS_PIL_Wrapper_B.dv2[8] = BMS_PIL_Wrapper_B.INPUT_5_1_1[0];
    BMS_PIL_Wrapper_B.dv2[9] = BMS_PIL_Wrapper_B.INPUT_5_1_1[1];
    BMS_PIL_Wrapper_B.dv2[10] = BMS_PIL_Wrapper_B.INPUT_5_1_1[2];
    BMS_PIL_Wrapper_B.dv2[11] = BMS_PIL_Wrapper_B.INPUT_5_1_1[3];
    BMS_PIL_Wrapper_B.iv2[3] = 12;
    BMS_PIL_Wrapper_B.dv2[12] = BMS_PIL_Wrapper_B.INPUT_6_1_1[0];
    BMS_PIL_Wrapper_B.dv2[13] = BMS_PIL_Wrapper_B.INPUT_6_1_1[1];
    BMS_PIL_Wrapper_B.dv2[14] = BMS_PIL_Wrapper_B.INPUT_6_1_1[2];
    BMS_PIL_Wrapper_B.dv2[15] = BMS_PIL_Wrapper_B.INPUT_6_1_1[3];
    BMS_PIL_Wrapper_B.iv2[4] = 16;
    BMS_PIL_Wrapper_B.dv2[16] = BMS_PIL_Wrapper_B.INPUT_4_1_1[0];
    BMS_PIL_Wrapper_B.dv2[17] = BMS_PIL_Wrapper_B.INPUT_4_1_1[1];
    BMS_PIL_Wrapper_B.dv2[18] = BMS_PIL_Wrapper_B.INPUT_4_1_1[2];
    BMS_PIL_Wrapper_B.dv2[19] = BMS_PIL_Wrapper_B.INPUT_4_1_1[3];
    BMS_PIL_Wrapper_B.iv2[5] = 20;
    BMS_PIL_Wrapper_B.dv2[20] = BMS_PIL_Wrapper_B.INPUT_7_1_1[0];
    BMS_PIL_Wrapper_B.dv2[21] = BMS_PIL_Wrapper_B.INPUT_7_1_1[1];
    BMS_PIL_Wrapper_B.dv2[22] = BMS_PIL_Wrapper_B.INPUT_7_1_1[2];
    BMS_PIL_Wrapper_B.dv2[23] = BMS_PIL_Wrapper_B.INPUT_7_1_1[3];
    BMS_PIL_Wrapper_B.iv2[6] = 24;
    BMS_PIL_Wrapper_B.dv2[24] = BMS_PIL_Wrapper_B.INPUT_8_1_1[0];
    BMS_PIL_Wrapper_B.dv2[25] = BMS_PIL_Wrapper_B.INPUT_8_1_1[1];
    BMS_PIL_Wrapper_B.dv2[26] = BMS_PIL_Wrapper_B.INPUT_8_1_1[2];
    BMS_PIL_Wrapper_B.dv2[27] = BMS_PIL_Wrapper_B.INPUT_8_1_1[3];
    BMS_PIL_Wrapper_B.iv2[7] = 28;
    BMS_PIL_Wrapper_B.dv2[28] = BMS_PIL_Wrapper_B.INPUT_9_1_1[0];
    BMS_PIL_Wrapper_B.dv2[29] = BMS_PIL_Wrapper_B.INPUT_9_1_1[1];
    BMS_PIL_Wrapper_B.dv2[30] = BMS_PIL_Wrapper_B.INPUT_9_1_1[2];
    BMS_PIL_Wrapper_B.dv2[31] = BMS_PIL_Wrapper_B.INPUT_9_1_1[3];
    BMS_PIL_Wrapper_B.iv2[8] = 32;
    BMS_PIL_Wrapper_B.dv2[32] = BMS_PIL_Wrapper_B.INPUT_10_1_1[0];
    BMS_PIL_Wrapper_B.dv2[33] = BMS_PIL_Wrapper_B.INPUT_10_1_1[1];
    BMS_PIL_Wrapper_B.dv2[34] = BMS_PIL_Wrapper_B.INPUT_10_1_1[2];
    BMS_PIL_Wrapper_B.dv2[35] = BMS_PIL_Wrapper_B.INPUT_10_1_1[3];
    BMS_PIL_Wrapper_B.iv2[9] = 36;
    BMS_PIL_Wrapper_B.dv2[36] = BMS_PIL_Wrapper_B.INPUT_11_1_1[0];
    BMS_PIL_Wrapper_B.dv2[37] = BMS_PIL_Wrapper_B.INPUT_11_1_1[1];
    BMS_PIL_Wrapper_B.dv2[38] = BMS_PIL_Wrapper_B.INPUT_11_1_1[2];
    BMS_PIL_Wrapper_B.dv2[39] = BMS_PIL_Wrapper_B.INPUT_11_1_1[3];
    BMS_PIL_Wrapper_B.iv2[10] = 40;
    BMS_PIL_Wrapper_B.dv2[40] = BMS_PIL_Wrapper_B.INPUT_12_1_1[0];
    BMS_PIL_Wrapper_B.dv2[41] = BMS_PIL_Wrapper_B.INPUT_12_1_1[1];
    BMS_PIL_Wrapper_B.dv2[42] = BMS_PIL_Wrapper_B.INPUT_12_1_1[2];
    BMS_PIL_Wrapper_B.dv2[43] = BMS_PIL_Wrapper_B.INPUT_12_1_1[3];
    BMS_PIL_Wrapper_B.iv2[11] = 44;
    BMS_PIL_Wrapper_B.dv2[44] = BMS_PIL_Wrapper_B.INPUT_13_1_1[0];
    BMS_PIL_Wrapper_B.dv2[45] = BMS_PIL_Wrapper_B.INPUT_13_1_1[1];
    BMS_PIL_Wrapper_B.dv2[46] = BMS_PIL_Wrapper_B.INPUT_13_1_1[2];
    BMS_PIL_Wrapper_B.dv2[47] = BMS_PIL_Wrapper_B.INPUT_13_1_1[3];
    BMS_PIL_Wrapper_B.iv2[12] = 48;
    BMS_PIL_Wrapper_B.dv2[48] = BMS_PIL_Wrapper_B.INPUT_14_1_1[0];
    BMS_PIL_Wrapper_B.dv2[49] = BMS_PIL_Wrapper_B.INPUT_14_1_1[1];
    BMS_PIL_Wrapper_B.dv2[50] = BMS_PIL_Wrapper_B.INPUT_14_1_1[2];
    BMS_PIL_Wrapper_B.dv2[51] = BMS_PIL_Wrapper_B.INPUT_14_1_1[3];
    BMS_PIL_Wrapper_B.iv2[13] = 52;
    BMS_PIL_Wrapper_B.dv2[52] = BMS_PIL_Wrapper_B.INPUT_3_1_1[0];
    BMS_PIL_Wrapper_B.dv2[53] = BMS_PIL_Wrapper_B.INPUT_3_1_1[1];
    BMS_PIL_Wrapper_B.dv2[54] = BMS_PIL_Wrapper_B.INPUT_3_1_1[2];
    BMS_PIL_Wrapper_B.dv2[55] = BMS_PIL_Wrapper_B.INPUT_3_1_1[3];
    BMS_PIL_Wrapper_B.iv2[14] = 56;
    BMS_PIL_Wrapper_B.dv2[56] = BMS_PIL_Wrapper_B.INPUT_15_1_1[0];
    BMS_PIL_Wrapper_B.dv2[57] = BMS_PIL_Wrapper_B.INPUT_15_1_1[1];
    BMS_PIL_Wrapper_B.dv2[58] = BMS_PIL_Wrapper_B.INPUT_15_1_1[2];
    BMS_PIL_Wrapper_B.dv2[59] = BMS_PIL_Wrapper_B.INPUT_15_1_1[3];
    BMS_PIL_Wrapper_B.iv2[15] = 60;
    simulationData->mData->mInputValues.mN = 60;
    simulationData->mData->mInputValues.mX = &BMS_PIL_Wrapper_B.dv2[0];
    simulationData->mData->mInputOffsets.mN = 16;
    simulationData->mData->mInputOffsets.mX = &BMS_PIL_Wrapper_B.iv2[0];
    simulationData->mData->mOutputs.mN = 337;
    simulationData->mData->mOutputs.mX = &BMS_PIL_Wrapper_B.STATE_1[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_tmp = ((BMS_PIL_Wrapper_M->Timing.clockTick1) * 0.001);
    time_0 = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_0;
    isHit = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diag = (NeuDiagnosticManager *)BMS_PIL_Wrapper_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diag);
    k = ne_simulator_method((NeslSimulator *)
      BMS_PIL_Wrapper_DW.STATE_1_Simulator, NESL_SIM_OUTPUTS, simulationData,
      diag);
    if (k != 0) {
      ok = error_buffer_is_empty(rtmGetErrorStatus(BMS_PIL_Wrapper_M));
      if (ok) {
        msg_0 = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(BMS_PIL_Wrapper_M, msg_0);
      }
    }

    /* End of SimscapeExecutionBlock: '<S25>/STATE_1' */

    /* SimscapeExecutionBlock: '<S25>/OUTPUT_1_1' */
    simulationData = (NeslSimulationData *)BMS_PIL_Wrapper_DW.OUTPUT_1_1_SimData;
    time_1 = rtb_Gain;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &BMS_PIL_Wrapper_DW.OUTPUT_1_1_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &BMS_PIL_Wrapper_DW.OUTPUT_1_1_Modes;
    ok = false;
    simulationData->mData->mFoundZcEvents = ok;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    ok = false;
    simulationData->mData->mIsSolverAssertCheck = ok;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    BMS_PIL_Wrapper_B.iv[0] = 0;
    BMS_PIL_Wrapper_B.dv[0] = BMS_PIL_Wrapper_B.INPUT_2_1_1[0];
    BMS_PIL_Wrapper_B.dv[1] = BMS_PIL_Wrapper_B.INPUT_2_1_1[1];
    BMS_PIL_Wrapper_B.dv[2] = BMS_PIL_Wrapper_B.INPUT_2_1_1[2];
    BMS_PIL_Wrapper_B.dv[3] = BMS_PIL_Wrapper_B.INPUT_2_1_1[3];
    BMS_PIL_Wrapper_B.iv[1] = 4;
    BMS_PIL_Wrapper_B.dv[4] = BMS_PIL_Wrapper_B.INPUT_1_1_1[0];
    BMS_PIL_Wrapper_B.dv[5] = BMS_PIL_Wrapper_B.INPUT_1_1_1[1];
    BMS_PIL_Wrapper_B.dv[6] = BMS_PIL_Wrapper_B.INPUT_1_1_1[2];
    BMS_PIL_Wrapper_B.dv[7] = BMS_PIL_Wrapper_B.INPUT_1_1_1[3];
    BMS_PIL_Wrapper_B.iv[2] = 8;
    BMS_PIL_Wrapper_B.dv[8] = BMS_PIL_Wrapper_B.INPUT_5_1_1[0];
    BMS_PIL_Wrapper_B.dv[9] = BMS_PIL_Wrapper_B.INPUT_5_1_1[1];
    BMS_PIL_Wrapper_B.dv[10] = BMS_PIL_Wrapper_B.INPUT_5_1_1[2];
    BMS_PIL_Wrapper_B.dv[11] = BMS_PIL_Wrapper_B.INPUT_5_1_1[3];
    BMS_PIL_Wrapper_B.iv[3] = 12;
    BMS_PIL_Wrapper_B.dv[12] = BMS_PIL_Wrapper_B.INPUT_6_1_1[0];
    BMS_PIL_Wrapper_B.dv[13] = BMS_PIL_Wrapper_B.INPUT_6_1_1[1];
    BMS_PIL_Wrapper_B.dv[14] = BMS_PIL_Wrapper_B.INPUT_6_1_1[2];
    BMS_PIL_Wrapper_B.dv[15] = BMS_PIL_Wrapper_B.INPUT_6_1_1[3];
    BMS_PIL_Wrapper_B.iv[4] = 16;
    BMS_PIL_Wrapper_B.dv[16] = BMS_PIL_Wrapper_B.INPUT_4_1_1[0];
    BMS_PIL_Wrapper_B.dv[17] = BMS_PIL_Wrapper_B.INPUT_4_1_1[1];
    BMS_PIL_Wrapper_B.dv[18] = BMS_PIL_Wrapper_B.INPUT_4_1_1[2];
    BMS_PIL_Wrapper_B.dv[19] = BMS_PIL_Wrapper_B.INPUT_4_1_1[3];
    BMS_PIL_Wrapper_B.iv[5] = 20;
    BMS_PIL_Wrapper_B.dv[20] = BMS_PIL_Wrapper_B.INPUT_7_1_1[0];
    BMS_PIL_Wrapper_B.dv[21] = BMS_PIL_Wrapper_B.INPUT_7_1_1[1];
    BMS_PIL_Wrapper_B.dv[22] = BMS_PIL_Wrapper_B.INPUT_7_1_1[2];
    BMS_PIL_Wrapper_B.dv[23] = BMS_PIL_Wrapper_B.INPUT_7_1_1[3];
    BMS_PIL_Wrapper_B.iv[6] = 24;
    BMS_PIL_Wrapper_B.dv[24] = BMS_PIL_Wrapper_B.INPUT_8_1_1[0];
    BMS_PIL_Wrapper_B.dv[25] = BMS_PIL_Wrapper_B.INPUT_8_1_1[1];
    BMS_PIL_Wrapper_B.dv[26] = BMS_PIL_Wrapper_B.INPUT_8_1_1[2];
    BMS_PIL_Wrapper_B.dv[27] = BMS_PIL_Wrapper_B.INPUT_8_1_1[3];
    BMS_PIL_Wrapper_B.iv[7] = 28;
    BMS_PIL_Wrapper_B.dv[28] = BMS_PIL_Wrapper_B.INPUT_9_1_1[0];
    BMS_PIL_Wrapper_B.dv[29] = BMS_PIL_Wrapper_B.INPUT_9_1_1[1];
    BMS_PIL_Wrapper_B.dv[30] = BMS_PIL_Wrapper_B.INPUT_9_1_1[2];
    BMS_PIL_Wrapper_B.dv[31] = BMS_PIL_Wrapper_B.INPUT_9_1_1[3];
    BMS_PIL_Wrapper_B.iv[8] = 32;
    BMS_PIL_Wrapper_B.dv[32] = BMS_PIL_Wrapper_B.INPUT_10_1_1[0];
    BMS_PIL_Wrapper_B.dv[33] = BMS_PIL_Wrapper_B.INPUT_10_1_1[1];
    BMS_PIL_Wrapper_B.dv[34] = BMS_PIL_Wrapper_B.INPUT_10_1_1[2];
    BMS_PIL_Wrapper_B.dv[35] = BMS_PIL_Wrapper_B.INPUT_10_1_1[3];
    BMS_PIL_Wrapper_B.iv[9] = 36;
    BMS_PIL_Wrapper_B.dv[36] = BMS_PIL_Wrapper_B.INPUT_11_1_1[0];
    BMS_PIL_Wrapper_B.dv[37] = BMS_PIL_Wrapper_B.INPUT_11_1_1[1];
    BMS_PIL_Wrapper_B.dv[38] = BMS_PIL_Wrapper_B.INPUT_11_1_1[2];
    BMS_PIL_Wrapper_B.dv[39] = BMS_PIL_Wrapper_B.INPUT_11_1_1[3];
    BMS_PIL_Wrapper_B.iv[10] = 40;
    BMS_PIL_Wrapper_B.dv[40] = BMS_PIL_Wrapper_B.INPUT_12_1_1[0];
    BMS_PIL_Wrapper_B.dv[41] = BMS_PIL_Wrapper_B.INPUT_12_1_1[1];
    BMS_PIL_Wrapper_B.dv[42] = BMS_PIL_Wrapper_B.INPUT_12_1_1[2];
    BMS_PIL_Wrapper_B.dv[43] = BMS_PIL_Wrapper_B.INPUT_12_1_1[3];
    BMS_PIL_Wrapper_B.iv[11] = 44;
    BMS_PIL_Wrapper_B.dv[44] = BMS_PIL_Wrapper_B.INPUT_13_1_1[0];
    BMS_PIL_Wrapper_B.dv[45] = BMS_PIL_Wrapper_B.INPUT_13_1_1[1];
    BMS_PIL_Wrapper_B.dv[46] = BMS_PIL_Wrapper_B.INPUT_13_1_1[2];
    BMS_PIL_Wrapper_B.dv[47] = BMS_PIL_Wrapper_B.INPUT_13_1_1[3];
    BMS_PIL_Wrapper_B.iv[12] = 48;
    BMS_PIL_Wrapper_B.dv[48] = BMS_PIL_Wrapper_B.INPUT_14_1_1[0];
    BMS_PIL_Wrapper_B.dv[49] = BMS_PIL_Wrapper_B.INPUT_14_1_1[1];
    BMS_PIL_Wrapper_B.dv[50] = BMS_PIL_Wrapper_B.INPUT_14_1_1[2];
    BMS_PIL_Wrapper_B.dv[51] = BMS_PIL_Wrapper_B.INPUT_14_1_1[3];
    BMS_PIL_Wrapper_B.iv[13] = 52;
    BMS_PIL_Wrapper_B.dv[52] = BMS_PIL_Wrapper_B.INPUT_3_1_1[0];
    BMS_PIL_Wrapper_B.dv[53] = BMS_PIL_Wrapper_B.INPUT_3_1_1[1];
    BMS_PIL_Wrapper_B.dv[54] = BMS_PIL_Wrapper_B.INPUT_3_1_1[2];
    BMS_PIL_Wrapper_B.dv[55] = BMS_PIL_Wrapper_B.INPUT_3_1_1[3];
    BMS_PIL_Wrapper_B.iv[14] = 56;
    BMS_PIL_Wrapper_B.dv[56] = BMS_PIL_Wrapper_B.INPUT_15_1_1[0];
    BMS_PIL_Wrapper_B.dv[57] = BMS_PIL_Wrapper_B.INPUT_15_1_1[1];
    BMS_PIL_Wrapper_B.dv[58] = BMS_PIL_Wrapper_B.INPUT_15_1_1[2];
    BMS_PIL_Wrapper_B.dv[59] = BMS_PIL_Wrapper_B.INPUT_15_1_1[3];
    BMS_PIL_Wrapper_B.iv[15] = 60;
    memcpy(&BMS_PIL_Wrapper_B.dv[60], &BMS_PIL_Wrapper_B.STATE_1[0], 337U *
           sizeof(real_T));
    BMS_PIL_Wrapper_B.iv[16] = 397;
    simulationData->mData->mInputValues.mN = 397;
    simulationData->mData->mInputValues.mX = &BMS_PIL_Wrapper_B.dv[0];
    simulationData->mData->mInputOffsets.mN = 17;
    simulationData->mData->mInputOffsets.mX = &BMS_PIL_Wrapper_B.iv[0];
    simulationData->mData->mOutputs.mN = 37;
    simulationData->mData->mOutputs.mX = &BMS_PIL_Wrapper_B.OUTPUT_1_1[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_2 = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_2;
    isHit_0 = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_0;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diag = (NeuDiagnosticManager *)BMS_PIL_Wrapper_DW.OUTPUT_1_1_DiagMgr;
    diagnosticTree_0 = neu_diagnostic_manager_get_initial_tree(diag);
    k = ne_simulator_method((NeslSimulator *)
      BMS_PIL_Wrapper_DW.OUTPUT_1_1_Simulator, NESL_SIM_OUTPUTS, simulationData,
      diag);
    if (k != 0) {
      ok = error_buffer_is_empty(rtmGetErrorStatus(BMS_PIL_Wrapper_M));
      if (ok) {
        msg_1 = rtw_diagnostics_msg(diagnosticTree_0);
        rtmSetErrorStatus(BMS_PIL_Wrapper_M, msg_1);
      }
    }

    /* DataTypeConversion: '<S2>/Cast To Single1' incorporates:
     *  UnitDelay: '<Root>/Unit Delay2'
     */
    BMS_PIL_Wrapper_DW.UnitDelay2_DSTATE = (real32_T)
      BMS_PIL_Wrapper_B.OUTPUT_1_1[36];

    /* DataTypeConversion: '<S26>/Data Type Conversion' */
    rtb_DataTypeConversion = (real32_T)BMS_PIL_Wrapper_B.OUTPUT_1_1[11];

    /* DataTypeConversion: '<S26>/Data Type Conversion1' */
    rtb_DataTypeConversion1 = (real32_T)BMS_PIL_Wrapper_B.OUTPUT_1_1[2];

    /* DataTypeConversion: '<S26>/Data Type Conversion10' */
    rtb_DataTypeConversion10 = (real32_T)BMS_PIL_Wrapper_B.OUTPUT_1_1[0];

    /* DataTypeConversion: '<S26>/Data Type Conversion11' */
    rtb_DataTypeConversion11 = (real32_T)BMS_PIL_Wrapper_B.OUTPUT_1_1[1];

    /* DataTypeConversion: '<S26>/Data Type Conversion2' */
    rtb_DataTypeConversion2 = (real32_T)BMS_PIL_Wrapper_B.OUTPUT_1_1[3];

    /* DataTypeConversion: '<S26>/Data Type Conversion3' */
    rtb_DataTypeConversion3 = (real32_T)BMS_PIL_Wrapper_B.OUTPUT_1_1[4];

    /* DataTypeConversion: '<S26>/Data Type Conversion4' */
    rtb_DataTypeConversion4 = (real32_T)BMS_PIL_Wrapper_B.OUTPUT_1_1[5];

    /* DataTypeConversion: '<S26>/Data Type Conversion5' */
    rtb_DataTypeConversion5 = (real32_T)BMS_PIL_Wrapper_B.OUTPUT_1_1[6];

    /* DataTypeConversion: '<S26>/Data Type Conversion6' */
    rtb_DataTypeConversion6 = (real32_T)BMS_PIL_Wrapper_B.OUTPUT_1_1[7];

    /* DataTypeConversion: '<S26>/Data Type Conversion7' */
    rtb_DataTypeConversion7 = (real32_T)BMS_PIL_Wrapper_B.OUTPUT_1_1[8];

    /* DataTypeConversion: '<S26>/Data Type Conversion8' */
    rtb_DataTypeConversion8 = (real32_T)BMS_PIL_Wrapper_B.OUTPUT_1_1[9];

    /* DataTypeConversion: '<S26>/Data Type Conversion9' */
    rtb_DataTypeConversion9 = (real32_T)BMS_PIL_Wrapper_B.OUTPUT_1_1[10];

    /* DataTypeConversion: '<S27>/Cast To Single12' */
    rtb_CastToSingle12 = (real32_T)BMS_PIL_Wrapper_B.OUTPUT_1_1[23];

    /* DataTypeConversion: '<S27>/Cast To Single13' */
    rtb_CastToSingle13 = (real32_T)BMS_PIL_Wrapper_B.OUTPUT_1_1[14];

    /* DataTypeConversion: '<S27>/Cast To Single14' */
    rtb_CastToSingle14 = (real32_T)BMS_PIL_Wrapper_B.OUTPUT_1_1[15];

    /* DataTypeConversion: '<S27>/Cast To Single15' */
    rtb_CastToSingle15 = (real32_T)BMS_PIL_Wrapper_B.OUTPUT_1_1[16];

    /* DataTypeConversion: '<S27>/Cast To Single16' */
    rtb_CastToSingle16 = (real32_T)BMS_PIL_Wrapper_B.OUTPUT_1_1[17];

    /* DataTypeConversion: '<S27>/Cast To Single17' */
    rtb_CastToSingle17 = (real32_T)BMS_PIL_Wrapper_B.OUTPUT_1_1[18];

    /* DataTypeConversion: '<S27>/Cast To Single18' */
    rtb_CastToSingle18 = (real32_T)BMS_PIL_Wrapper_B.OUTPUT_1_1[19];

    /* DataTypeConversion: '<S27>/Cast To Single19' */
    rtb_CastToSingle19 = (real32_T)BMS_PIL_Wrapper_B.OUTPUT_1_1[20];

    /* DataTypeConversion: '<S27>/Cast To Single20' */
    rtb_CastToSingle20 = (real32_T)BMS_PIL_Wrapper_B.OUTPUT_1_1[21];

    /* DataTypeConversion: '<S27>/Cast To Single21' */
    rtb_CastToSingle21 = (real32_T)BMS_PIL_Wrapper_B.OUTPUT_1_1[22];

    /* DataTypeConversion: '<S27>/Cast To Single22' */
    rtb_CastToSingle22 = (real32_T)BMS_PIL_Wrapper_B.OUTPUT_1_1[12];

    /* DataTypeConversion: '<S27>/Cast To Single23' */
    rtb_CastToSingle23 = (real32_T)BMS_PIL_Wrapper_B.OUTPUT_1_1[13];

    /* DataTypeConversion: '<S27>/Cast To Single' */
    rtb_CastToSingle = (real32_T)BMS_PIL_Wrapper_B.OUTPUT_1_1[35];

    /* DataTypeConversion: '<S27>/Cast To Single1' */
    rtb_CastToSingle1_a = (real32_T)BMS_PIL_Wrapper_B.OUTPUT_1_1[26];

    /* DataTypeConversion: '<S27>/Cast To Single10' */
    rtb_CastToSingle10 = (real32_T)BMS_PIL_Wrapper_B.OUTPUT_1_1[24];

    /* DataTypeConversion: '<S27>/Cast To Single11' */
    rtb_CastToSingle11 = (real32_T)BMS_PIL_Wrapper_B.OUTPUT_1_1[25];

    /* DataTypeConversion: '<S27>/Cast To Single2' */
    rtb_CastToSingle2 = (real32_T)BMS_PIL_Wrapper_B.OUTPUT_1_1[27];

    /* DataTypeConversion: '<S27>/Cast To Single3' */
    rtb_CastToSingle3 = (real32_T)BMS_PIL_Wrapper_B.OUTPUT_1_1[28];

    /* DataTypeConversion: '<S27>/Cast To Single4' */
    rtb_CastToSingle4 = (real32_T)BMS_PIL_Wrapper_B.OUTPUT_1_1[29];

    /* DataTypeConversion: '<S27>/Cast To Single5' */
    rtb_CastToSingle5 = (real32_T)BMS_PIL_Wrapper_B.OUTPUT_1_1[30];

    /* DataTypeConversion: '<S27>/Cast To Single6' */
    rtb_CastToSingle6 = (real32_T)BMS_PIL_Wrapper_B.OUTPUT_1_1[31];

    /* DataTypeConversion: '<S27>/Cast To Single7' */
    rtb_CastToSingle7 = (real32_T)BMS_PIL_Wrapper_B.OUTPUT_1_1[32];

    /* DataTypeConversion: '<S27>/Cast To Single8' */
    rtb_CastToSingle8 = (real32_T)BMS_PIL_Wrapper_B.OUTPUT_1_1[33];

    /* DataTypeConversion: '<S27>/Cast To Single9' */
    rtb_CastToSingle9 = (real32_T)BMS_PIL_Wrapper_B.OUTPUT_1_1[34];

    /* SimscapeExecutionBlock: '<S25>/OUTPUT_1_0' */
    simulationData = (NeslSimulationData *)BMS_PIL_Wrapper_DW.OUTPUT_1_0_SimData;
    time_3 = rtb_Gain;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_3;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &BMS_PIL_Wrapper_DW.OUTPUT_1_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &BMS_PIL_Wrapper_DW.OUTPUT_1_0_Modes;
    ok = false;
    simulationData->mData->mFoundZcEvents = ok;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    ok = false;
    simulationData->mData->mIsSolverAssertCheck = ok;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    BMS_PIL_Wrapper_B.iv1[0] = 0;
    BMS_PIL_Wrapper_B.dv1[0] = BMS_PIL_Wrapper_B.INPUT_2_1_1[0];
    BMS_PIL_Wrapper_B.dv1[1] = BMS_PIL_Wrapper_B.INPUT_2_1_1[1];
    BMS_PIL_Wrapper_B.dv1[2] = BMS_PIL_Wrapper_B.INPUT_2_1_1[2];
    BMS_PIL_Wrapper_B.dv1[3] = BMS_PIL_Wrapper_B.INPUT_2_1_1[3];
    BMS_PIL_Wrapper_B.iv1[1] = 4;
    BMS_PIL_Wrapper_B.dv1[4] = BMS_PIL_Wrapper_B.INPUT_1_1_1[0];
    BMS_PIL_Wrapper_B.dv1[5] = BMS_PIL_Wrapper_B.INPUT_1_1_1[1];
    BMS_PIL_Wrapper_B.dv1[6] = BMS_PIL_Wrapper_B.INPUT_1_1_1[2];
    BMS_PIL_Wrapper_B.dv1[7] = BMS_PIL_Wrapper_B.INPUT_1_1_1[3];
    BMS_PIL_Wrapper_B.iv1[2] = 8;
    BMS_PIL_Wrapper_B.dv1[8] = BMS_PIL_Wrapper_B.INPUT_5_1_1[0];
    BMS_PIL_Wrapper_B.dv1[9] = BMS_PIL_Wrapper_B.INPUT_5_1_1[1];
    BMS_PIL_Wrapper_B.dv1[10] = BMS_PIL_Wrapper_B.INPUT_5_1_1[2];
    BMS_PIL_Wrapper_B.dv1[11] = BMS_PIL_Wrapper_B.INPUT_5_1_1[3];
    BMS_PIL_Wrapper_B.iv1[3] = 12;
    BMS_PIL_Wrapper_B.dv1[12] = BMS_PIL_Wrapper_B.INPUT_6_1_1[0];
    BMS_PIL_Wrapper_B.dv1[13] = BMS_PIL_Wrapper_B.INPUT_6_1_1[1];
    BMS_PIL_Wrapper_B.dv1[14] = BMS_PIL_Wrapper_B.INPUT_6_1_1[2];
    BMS_PIL_Wrapper_B.dv1[15] = BMS_PIL_Wrapper_B.INPUT_6_1_1[3];
    BMS_PIL_Wrapper_B.iv1[4] = 16;
    BMS_PIL_Wrapper_B.dv1[16] = BMS_PIL_Wrapper_B.INPUT_4_1_1[0];
    BMS_PIL_Wrapper_B.dv1[17] = BMS_PIL_Wrapper_B.INPUT_4_1_1[1];
    BMS_PIL_Wrapper_B.dv1[18] = BMS_PIL_Wrapper_B.INPUT_4_1_1[2];
    BMS_PIL_Wrapper_B.dv1[19] = BMS_PIL_Wrapper_B.INPUT_4_1_1[3];
    BMS_PIL_Wrapper_B.iv1[5] = 20;
    BMS_PIL_Wrapper_B.dv1[20] = BMS_PIL_Wrapper_B.INPUT_7_1_1[0];
    BMS_PIL_Wrapper_B.dv1[21] = BMS_PIL_Wrapper_B.INPUT_7_1_1[1];
    BMS_PIL_Wrapper_B.dv1[22] = BMS_PIL_Wrapper_B.INPUT_7_1_1[2];
    BMS_PIL_Wrapper_B.dv1[23] = BMS_PIL_Wrapper_B.INPUT_7_1_1[3];
    BMS_PIL_Wrapper_B.iv1[6] = 24;
    BMS_PIL_Wrapper_B.dv1[24] = BMS_PIL_Wrapper_B.INPUT_8_1_1[0];
    BMS_PIL_Wrapper_B.dv1[25] = BMS_PIL_Wrapper_B.INPUT_8_1_1[1];
    BMS_PIL_Wrapper_B.dv1[26] = BMS_PIL_Wrapper_B.INPUT_8_1_1[2];
    BMS_PIL_Wrapper_B.dv1[27] = BMS_PIL_Wrapper_B.INPUT_8_1_1[3];
    BMS_PIL_Wrapper_B.iv1[7] = 28;
    BMS_PIL_Wrapper_B.dv1[28] = BMS_PIL_Wrapper_B.INPUT_9_1_1[0];
    BMS_PIL_Wrapper_B.dv1[29] = BMS_PIL_Wrapper_B.INPUT_9_1_1[1];
    BMS_PIL_Wrapper_B.dv1[30] = BMS_PIL_Wrapper_B.INPUT_9_1_1[2];
    BMS_PIL_Wrapper_B.dv1[31] = BMS_PIL_Wrapper_B.INPUT_9_1_1[3];
    BMS_PIL_Wrapper_B.iv1[8] = 32;
    BMS_PIL_Wrapper_B.dv1[32] = BMS_PIL_Wrapper_B.INPUT_10_1_1[0];
    BMS_PIL_Wrapper_B.dv1[33] = BMS_PIL_Wrapper_B.INPUT_10_1_1[1];
    BMS_PIL_Wrapper_B.dv1[34] = BMS_PIL_Wrapper_B.INPUT_10_1_1[2];
    BMS_PIL_Wrapper_B.dv1[35] = BMS_PIL_Wrapper_B.INPUT_10_1_1[3];
    BMS_PIL_Wrapper_B.iv1[9] = 36;
    BMS_PIL_Wrapper_B.dv1[36] = BMS_PIL_Wrapper_B.INPUT_11_1_1[0];
    BMS_PIL_Wrapper_B.dv1[37] = BMS_PIL_Wrapper_B.INPUT_11_1_1[1];
    BMS_PIL_Wrapper_B.dv1[38] = BMS_PIL_Wrapper_B.INPUT_11_1_1[2];
    BMS_PIL_Wrapper_B.dv1[39] = BMS_PIL_Wrapper_B.INPUT_11_1_1[3];
    BMS_PIL_Wrapper_B.iv1[10] = 40;
    BMS_PIL_Wrapper_B.dv1[40] = BMS_PIL_Wrapper_B.INPUT_12_1_1[0];
    BMS_PIL_Wrapper_B.dv1[41] = BMS_PIL_Wrapper_B.INPUT_12_1_1[1];
    BMS_PIL_Wrapper_B.dv1[42] = BMS_PIL_Wrapper_B.INPUT_12_1_1[2];
    BMS_PIL_Wrapper_B.dv1[43] = BMS_PIL_Wrapper_B.INPUT_12_1_1[3];
    BMS_PIL_Wrapper_B.iv1[11] = 44;
    BMS_PIL_Wrapper_B.dv1[44] = BMS_PIL_Wrapper_B.INPUT_13_1_1[0];
    BMS_PIL_Wrapper_B.dv1[45] = BMS_PIL_Wrapper_B.INPUT_13_1_1[1];
    BMS_PIL_Wrapper_B.dv1[46] = BMS_PIL_Wrapper_B.INPUT_13_1_1[2];
    BMS_PIL_Wrapper_B.dv1[47] = BMS_PIL_Wrapper_B.INPUT_13_1_1[3];
    BMS_PIL_Wrapper_B.iv1[12] = 48;
    BMS_PIL_Wrapper_B.dv1[48] = BMS_PIL_Wrapper_B.INPUT_14_1_1[0];
    BMS_PIL_Wrapper_B.dv1[49] = BMS_PIL_Wrapper_B.INPUT_14_1_1[1];
    BMS_PIL_Wrapper_B.dv1[50] = BMS_PIL_Wrapper_B.INPUT_14_1_1[2];
    BMS_PIL_Wrapper_B.dv1[51] = BMS_PIL_Wrapper_B.INPUT_14_1_1[3];
    BMS_PIL_Wrapper_B.iv1[13] = 52;
    BMS_PIL_Wrapper_B.dv1[52] = BMS_PIL_Wrapper_B.INPUT_3_1_1[0];
    BMS_PIL_Wrapper_B.dv1[53] = BMS_PIL_Wrapper_B.INPUT_3_1_1[1];
    BMS_PIL_Wrapper_B.dv1[54] = BMS_PIL_Wrapper_B.INPUT_3_1_1[2];
    BMS_PIL_Wrapper_B.dv1[55] = BMS_PIL_Wrapper_B.INPUT_3_1_1[3];
    BMS_PIL_Wrapper_B.iv1[14] = 56;
    BMS_PIL_Wrapper_B.dv1[56] = BMS_PIL_Wrapper_B.INPUT_15_1_1[0];
    BMS_PIL_Wrapper_B.dv1[57] = BMS_PIL_Wrapper_B.INPUT_15_1_1[1];
    BMS_PIL_Wrapper_B.dv1[58] = BMS_PIL_Wrapper_B.INPUT_15_1_1[2];
    BMS_PIL_Wrapper_B.dv1[59] = BMS_PIL_Wrapper_B.INPUT_15_1_1[3];
    BMS_PIL_Wrapper_B.iv1[15] = 60;
    memcpy(&BMS_PIL_Wrapper_B.dv1[60], &BMS_PIL_Wrapper_B.STATE_1[0], 337U *
           sizeof(real_T));
    BMS_PIL_Wrapper_B.iv1[16] = 397;
    simulationData->mData->mInputValues.mN = 397;
    simulationData->mData->mInputValues.mX = &BMS_PIL_Wrapper_B.dv1[0];
    simulationData->mData->mInputOffsets.mN = 17;
    simulationData->mData->mInputOffsets.mX = &BMS_PIL_Wrapper_B.iv1[0];
    simulationData->mData->mOutputs.mN = 1;
    simulationData->mData->mOutputs.mX = &rtb_Sum1;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_4 = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_4;
    isHit_1 = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_1;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulationData->mData->mHadEvents = false;
    diag = (NeuDiagnosticManager *)BMS_PIL_Wrapper_DW.OUTPUT_1_0_DiagMgr;
    diagnosticTree_1 = neu_diagnostic_manager_get_initial_tree(diag);
    k = ne_simulator_method((NeslSimulator *)
      BMS_PIL_Wrapper_DW.OUTPUT_1_0_Simulator, NESL_SIM_OUTPUTS, simulationData,
      diag);
    if (k != 0) {
      ok = error_buffer_is_empty(rtmGetErrorStatus(BMS_PIL_Wrapper_M));
      if (ok) {
        msg_2 = rtw_diagnostics_msg(diagnosticTree_1);
        rtmSetErrorStatus(BMS_PIL_Wrapper_M, msg_2);
      }
    }

    /* DataTypeConversion: '<S2>/Cast To Single' incorporates:
     *  UnitDelay: '<Root>/Unit Delay1'
     */
    BMS_PIL_Wrapper_DW.UnitDelay1_DSTATE = (real32_T)rtb_Sum1;

    /* MinMax: '<Root>/Max' */
    rtb_Sum1 = BMS_PIL_Wrapper_B.BMS_MCU_CODE_o16[0];
    for (k = 0; k < 15; k++) {
      rtb_Sum1 = fmax(rtb_Sum1, BMS_PIL_Wrapper_B.BMS_MCU_CODE_o16[k + 1]);
    }

    /* Chart: '<S1>/Chart' incorporates:
     *  MinMax: '<Root>/Max'
     */
    if (BMS_PIL_Wrapper_DW.is_active_c9_BMS_PIL_Wrapper == 0) {
      BMS_PIL_Wrapper_DW.is_active_c9_BMS_PIL_Wrapper = 1U;
      if (rtb_Sum1 == 4.0) {
        /* Outport: '<Root>/Drone_Mode' */
        BMS_PIL_Wrapper_Y.Drone_Mode = 4.0;

        /* Outport: '<Root>/Motor_Command' */
        BMS_PIL_Wrapper_Y.Motor_Command = 0.0;
      } else if (rtb_Sum1 == 3.0) {
        /* Outport: '<Root>/Drone_Mode' */
        BMS_PIL_Wrapper_Y.Drone_Mode = 3.0;

        /* Outport: '<Root>/Motor_Command' */
        BMS_PIL_Wrapper_Y.Motor_Command = 0.3;
      } else if (rtb_Sum1 == 2.0) {
        /* Outport: '<Root>/Drone_Mode' */
        BMS_PIL_Wrapper_Y.Drone_Mode = 2.0;

        /* Outport: '<Root>/Motor_Command' */
        BMS_PIL_Wrapper_Y.Motor_Command = 0.6;
      } else if (rtb_Sum1 == 1.0) {
        /* Outport: '<Root>/Drone_Mode' */
        BMS_PIL_Wrapper_Y.Drone_Mode = 1.0;

        /* Outport: '<Root>/Motor_Command' */
        BMS_PIL_Wrapper_Y.Motor_Command = 1.0;
      } else {
        /* Outport: '<Root>/Drone_Mode' */
        BMS_PIL_Wrapper_Y.Drone_Mode = 0.0;

        /* Outport: '<Root>/Motor_Command' */
        BMS_PIL_Wrapper_Y.Motor_Command = 1.0;
      }
    } else if (rtb_Sum1 == 4.0) {
      /* Outport: '<Root>/Drone_Mode' */
      BMS_PIL_Wrapper_Y.Drone_Mode = 4.0;

      /* Outport: '<Root>/Motor_Command' */
      BMS_PIL_Wrapper_Y.Motor_Command = 0.0;
    } else if (rtb_Sum1 == 3.0) {
      /* Outport: '<Root>/Drone_Mode' */
      BMS_PIL_Wrapper_Y.Drone_Mode = 3.0;

      /* Outport: '<Root>/Motor_Command' */
      BMS_PIL_Wrapper_Y.Motor_Command = 0.3;
    } else if (rtb_Sum1 == 2.0) {
      /* Outport: '<Root>/Drone_Mode' */
      BMS_PIL_Wrapper_Y.Drone_Mode = 2.0;

      /* Outport: '<Root>/Motor_Command' */
      BMS_PIL_Wrapper_Y.Motor_Command = 0.6;
    } else if (rtb_Sum1 == 1.0) {
      /* Outport: '<Root>/Drone_Mode' */
      BMS_PIL_Wrapper_Y.Drone_Mode = 1.0;

      /* Outport: '<Root>/Motor_Command' */
      BMS_PIL_Wrapper_Y.Motor_Command = 1.0;
    } else {
      /* Outport: '<Root>/Drone_Mode' */
      BMS_PIL_Wrapper_Y.Drone_Mode = 0.0;

      /* Outport: '<Root>/Motor_Command' */
      BMS_PIL_Wrapper_Y.Motor_Command = 1.0;
    }

    /* End of Chart: '<S1>/Chart' */
  }

  {
    NeslSimulationData *simulationData;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    char *msg;
    real_T time;
    int32_T tmp_1;
    int_T tmp_0[16];
    boolean_T tmp;

    /* Update for UnitDelay: '<Root>/Unit Delay4' */
    BMS_PIL_Wrapper_DW.UnitDelay4_DSTATE[0] = rtb_DataTypeConversion;
    BMS_PIL_Wrapper_DW.UnitDelay4_DSTATE[1] = rtb_DataTypeConversion1;
    BMS_PIL_Wrapper_DW.UnitDelay4_DSTATE[2] = rtb_DataTypeConversion2;
    BMS_PIL_Wrapper_DW.UnitDelay4_DSTATE[3] = rtb_DataTypeConversion3;
    BMS_PIL_Wrapper_DW.UnitDelay4_DSTATE[4] = rtb_DataTypeConversion4;
    BMS_PIL_Wrapper_DW.UnitDelay4_DSTATE[5] = rtb_DataTypeConversion5;
    BMS_PIL_Wrapper_DW.UnitDelay4_DSTATE[6] = rtb_DataTypeConversion6;
    BMS_PIL_Wrapper_DW.UnitDelay4_DSTATE[7] = rtb_DataTypeConversion7;
    BMS_PIL_Wrapper_DW.UnitDelay4_DSTATE[8] = rtb_DataTypeConversion8;
    BMS_PIL_Wrapper_DW.UnitDelay4_DSTATE[9] = rtb_DataTypeConversion9;
    BMS_PIL_Wrapper_DW.UnitDelay4_DSTATE[10] = rtb_DataTypeConversion10;
    BMS_PIL_Wrapper_DW.UnitDelay4_DSTATE[11] = rtb_DataTypeConversion11;

    /* Update for UnitDelay: '<Root>/Unit Delay3' */
    BMS_PIL_Wrapper_DW.UnitDelay3_DSTATE[0] = rtb_CastToSingle;
    BMS_PIL_Wrapper_DW.UnitDelay3_DSTATE[1] = rtb_CastToSingle1_a;
    BMS_PIL_Wrapper_DW.UnitDelay3_DSTATE[2] = rtb_CastToSingle2;
    BMS_PIL_Wrapper_DW.UnitDelay3_DSTATE[3] = rtb_CastToSingle3;
    BMS_PIL_Wrapper_DW.UnitDelay3_DSTATE[4] = rtb_CastToSingle4;
    BMS_PIL_Wrapper_DW.UnitDelay3_DSTATE[5] = rtb_CastToSingle5;
    BMS_PIL_Wrapper_DW.UnitDelay3_DSTATE[6] = rtb_CastToSingle6;
    BMS_PIL_Wrapper_DW.UnitDelay3_DSTATE[7] = rtb_CastToSingle7;
    BMS_PIL_Wrapper_DW.UnitDelay3_DSTATE[8] = rtb_CastToSingle8;
    BMS_PIL_Wrapper_DW.UnitDelay3_DSTATE[9] = rtb_CastToSingle9;
    BMS_PIL_Wrapper_DW.UnitDelay3_DSTATE[10] = rtb_CastToSingle10;
    BMS_PIL_Wrapper_DW.UnitDelay3_DSTATE[11] = rtb_CastToSingle11;

    /* Update for UnitDelay: '<Root>/Unit Delay' */
    BMS_PIL_Wrapper_DW.UnitDelay_DSTATE_m[0] = rtb_CastToSingle12;
    BMS_PIL_Wrapper_DW.UnitDelay_DSTATE_m[1] = rtb_CastToSingle13;
    BMS_PIL_Wrapper_DW.UnitDelay_DSTATE_m[2] = rtb_CastToSingle14;
    BMS_PIL_Wrapper_DW.UnitDelay_DSTATE_m[3] = rtb_CastToSingle15;
    BMS_PIL_Wrapper_DW.UnitDelay_DSTATE_m[4] = rtb_CastToSingle16;
    BMS_PIL_Wrapper_DW.UnitDelay_DSTATE_m[5] = rtb_CastToSingle17;
    BMS_PIL_Wrapper_DW.UnitDelay_DSTATE_m[6] = rtb_CastToSingle18;
    BMS_PIL_Wrapper_DW.UnitDelay_DSTATE_m[7] = rtb_CastToSingle19;
    BMS_PIL_Wrapper_DW.UnitDelay_DSTATE_m[8] = rtb_CastToSingle20;
    BMS_PIL_Wrapper_DW.UnitDelay_DSTATE_m[9] = rtb_CastToSingle21;
    BMS_PIL_Wrapper_DW.UnitDelay_DSTATE_m[10] = rtb_CastToSingle22;
    BMS_PIL_Wrapper_DW.UnitDelay_DSTATE_m[11] = rtb_CastToSingle23;

    /* Update for UnitDelay: '<S2>/Unit Delay' */
    BMS_PIL_Wrapper_DW.UnitDelay_DSTATE_b[0] = rtb_DataTypeConversion;
    BMS_PIL_Wrapper_DW.UnitDelay_DSTATE_b[1] = rtb_DataTypeConversion1;
    BMS_PIL_Wrapper_DW.UnitDelay_DSTATE_b[2] = rtb_DataTypeConversion2;
    BMS_PIL_Wrapper_DW.UnitDelay_DSTATE_b[3] = rtb_DataTypeConversion3;
    BMS_PIL_Wrapper_DW.UnitDelay_DSTATE_b[4] = rtb_DataTypeConversion4;
    BMS_PIL_Wrapper_DW.UnitDelay_DSTATE_b[5] = rtb_DataTypeConversion5;
    BMS_PIL_Wrapper_DW.UnitDelay_DSTATE_b[6] = rtb_DataTypeConversion6;
    BMS_PIL_Wrapper_DW.UnitDelay_DSTATE_b[7] = rtb_DataTypeConversion7;
    BMS_PIL_Wrapper_DW.UnitDelay_DSTATE_b[8] = rtb_DataTypeConversion8;
    BMS_PIL_Wrapper_DW.UnitDelay_DSTATE_b[9] = rtb_DataTypeConversion9;
    BMS_PIL_Wrapper_DW.UnitDelay_DSTATE_b[10] = rtb_DataTypeConversion10;
    BMS_PIL_Wrapper_DW.UnitDelay_DSTATE_b[11] = rtb_DataTypeConversion11;

    /* Update for SimscapeExecutionBlock: '<S25>/STATE_1' */
    simulationData = (NeslSimulationData *)BMS_PIL_Wrapper_DW.STATE_1_SimData;
    time = BMS_PIL_Wrapper_M->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 205;
    simulationData->mData->mDiscStates.mX =
      &BMS_PIL_Wrapper_DW.STATE_1_Discrete_2616936702[0];
    simulationData->mData->mModeVector.mN = 132;
    simulationData->mData->mModeVector.mX = &BMS_PIL_Wrapper_DW.STATE_1_Modes[0];
    tmp = false;
    simulationData->mData->mFoundZcEvents = tmp;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp = false;
    simulationData->mData->mIsSolverAssertCheck = tmp;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = true;
    tmp_0[0] = 0;
    BMS_PIL_Wrapper_B.dv3[0] = BMS_PIL_Wrapper_B.INPUT_2_1_1[0];
    BMS_PIL_Wrapper_B.dv3[1] = BMS_PIL_Wrapper_B.INPUT_2_1_1[1];
    BMS_PIL_Wrapper_B.dv3[2] = BMS_PIL_Wrapper_B.INPUT_2_1_1[2];
    BMS_PIL_Wrapper_B.dv3[3] = BMS_PIL_Wrapper_B.INPUT_2_1_1[3];
    tmp_0[1] = 4;
    BMS_PIL_Wrapper_B.dv3[4] = BMS_PIL_Wrapper_B.INPUT_1_1_1[0];
    BMS_PIL_Wrapper_B.dv3[5] = BMS_PIL_Wrapper_B.INPUT_1_1_1[1];
    BMS_PIL_Wrapper_B.dv3[6] = BMS_PIL_Wrapper_B.INPUT_1_1_1[2];
    BMS_PIL_Wrapper_B.dv3[7] = BMS_PIL_Wrapper_B.INPUT_1_1_1[3];
    tmp_0[2] = 8;
    BMS_PIL_Wrapper_B.dv3[8] = BMS_PIL_Wrapper_B.INPUT_5_1_1[0];
    BMS_PIL_Wrapper_B.dv3[9] = BMS_PIL_Wrapper_B.INPUT_5_1_1[1];
    BMS_PIL_Wrapper_B.dv3[10] = BMS_PIL_Wrapper_B.INPUT_5_1_1[2];
    BMS_PIL_Wrapper_B.dv3[11] = BMS_PIL_Wrapper_B.INPUT_5_1_1[3];
    tmp_0[3] = 12;
    BMS_PIL_Wrapper_B.dv3[12] = BMS_PIL_Wrapper_B.INPUT_6_1_1[0];
    BMS_PIL_Wrapper_B.dv3[13] = BMS_PIL_Wrapper_B.INPUT_6_1_1[1];
    BMS_PIL_Wrapper_B.dv3[14] = BMS_PIL_Wrapper_B.INPUT_6_1_1[2];
    BMS_PIL_Wrapper_B.dv3[15] = BMS_PIL_Wrapper_B.INPUT_6_1_1[3];
    tmp_0[4] = 16;
    BMS_PIL_Wrapper_B.dv3[16] = BMS_PIL_Wrapper_B.INPUT_4_1_1[0];
    BMS_PIL_Wrapper_B.dv3[17] = BMS_PIL_Wrapper_B.INPUT_4_1_1[1];
    BMS_PIL_Wrapper_B.dv3[18] = BMS_PIL_Wrapper_B.INPUT_4_1_1[2];
    BMS_PIL_Wrapper_B.dv3[19] = BMS_PIL_Wrapper_B.INPUT_4_1_1[3];
    tmp_0[5] = 20;
    BMS_PIL_Wrapper_B.dv3[20] = BMS_PIL_Wrapper_B.INPUT_7_1_1[0];
    BMS_PIL_Wrapper_B.dv3[21] = BMS_PIL_Wrapper_B.INPUT_7_1_1[1];
    BMS_PIL_Wrapper_B.dv3[22] = BMS_PIL_Wrapper_B.INPUT_7_1_1[2];
    BMS_PIL_Wrapper_B.dv3[23] = BMS_PIL_Wrapper_B.INPUT_7_1_1[3];
    tmp_0[6] = 24;
    BMS_PIL_Wrapper_B.dv3[24] = BMS_PIL_Wrapper_B.INPUT_8_1_1[0];
    BMS_PIL_Wrapper_B.dv3[25] = BMS_PIL_Wrapper_B.INPUT_8_1_1[1];
    BMS_PIL_Wrapper_B.dv3[26] = BMS_PIL_Wrapper_B.INPUT_8_1_1[2];
    BMS_PIL_Wrapper_B.dv3[27] = BMS_PIL_Wrapper_B.INPUT_8_1_1[3];
    tmp_0[7] = 28;
    BMS_PIL_Wrapper_B.dv3[28] = BMS_PIL_Wrapper_B.INPUT_9_1_1[0];
    BMS_PIL_Wrapper_B.dv3[29] = BMS_PIL_Wrapper_B.INPUT_9_1_1[1];
    BMS_PIL_Wrapper_B.dv3[30] = BMS_PIL_Wrapper_B.INPUT_9_1_1[2];
    BMS_PIL_Wrapper_B.dv3[31] = BMS_PIL_Wrapper_B.INPUT_9_1_1[3];
    tmp_0[8] = 32;
    BMS_PIL_Wrapper_B.dv3[32] = BMS_PIL_Wrapper_B.INPUT_10_1_1[0];
    BMS_PIL_Wrapper_B.dv3[33] = BMS_PIL_Wrapper_B.INPUT_10_1_1[1];
    BMS_PIL_Wrapper_B.dv3[34] = BMS_PIL_Wrapper_B.INPUT_10_1_1[2];
    BMS_PIL_Wrapper_B.dv3[35] = BMS_PIL_Wrapper_B.INPUT_10_1_1[3];
    tmp_0[9] = 36;
    BMS_PIL_Wrapper_B.dv3[36] = BMS_PIL_Wrapper_B.INPUT_11_1_1[0];
    BMS_PIL_Wrapper_B.dv3[37] = BMS_PIL_Wrapper_B.INPUT_11_1_1[1];
    BMS_PIL_Wrapper_B.dv3[38] = BMS_PIL_Wrapper_B.INPUT_11_1_1[2];
    BMS_PIL_Wrapper_B.dv3[39] = BMS_PIL_Wrapper_B.INPUT_11_1_1[3];
    tmp_0[10] = 40;
    BMS_PIL_Wrapper_B.dv3[40] = BMS_PIL_Wrapper_B.INPUT_12_1_1[0];
    BMS_PIL_Wrapper_B.dv3[41] = BMS_PIL_Wrapper_B.INPUT_12_1_1[1];
    BMS_PIL_Wrapper_B.dv3[42] = BMS_PIL_Wrapper_B.INPUT_12_1_1[2];
    BMS_PIL_Wrapper_B.dv3[43] = BMS_PIL_Wrapper_B.INPUT_12_1_1[3];
    tmp_0[11] = 44;
    BMS_PIL_Wrapper_B.dv3[44] = BMS_PIL_Wrapper_B.INPUT_13_1_1[0];
    BMS_PIL_Wrapper_B.dv3[45] = BMS_PIL_Wrapper_B.INPUT_13_1_1[1];
    BMS_PIL_Wrapper_B.dv3[46] = BMS_PIL_Wrapper_B.INPUT_13_1_1[2];
    BMS_PIL_Wrapper_B.dv3[47] = BMS_PIL_Wrapper_B.INPUT_13_1_1[3];
    tmp_0[12] = 48;
    BMS_PIL_Wrapper_B.dv3[48] = BMS_PIL_Wrapper_B.INPUT_14_1_1[0];
    BMS_PIL_Wrapper_B.dv3[49] = BMS_PIL_Wrapper_B.INPUT_14_1_1[1];
    BMS_PIL_Wrapper_B.dv3[50] = BMS_PIL_Wrapper_B.INPUT_14_1_1[2];
    BMS_PIL_Wrapper_B.dv3[51] = BMS_PIL_Wrapper_B.INPUT_14_1_1[3];
    tmp_0[13] = 52;
    BMS_PIL_Wrapper_B.dv3[52] = BMS_PIL_Wrapper_B.INPUT_3_1_1[0];
    BMS_PIL_Wrapper_B.dv3[53] = BMS_PIL_Wrapper_B.INPUT_3_1_1[1];
    BMS_PIL_Wrapper_B.dv3[54] = BMS_PIL_Wrapper_B.INPUT_3_1_1[2];
    BMS_PIL_Wrapper_B.dv3[55] = BMS_PIL_Wrapper_B.INPUT_3_1_1[3];
    tmp_0[14] = 56;
    BMS_PIL_Wrapper_B.dv3[56] = BMS_PIL_Wrapper_B.INPUT_15_1_1[0];
    BMS_PIL_Wrapper_B.dv3[57] = BMS_PIL_Wrapper_B.INPUT_15_1_1[1];
    BMS_PIL_Wrapper_B.dv3[58] = BMS_PIL_Wrapper_B.INPUT_15_1_1[2];
    BMS_PIL_Wrapper_B.dv3[59] = BMS_PIL_Wrapper_B.INPUT_15_1_1[3];
    tmp_0[15] = 60;
    simulationData->mData->mInputValues.mN = 60;
    simulationData->mData->mInputValues.mX = &BMS_PIL_Wrapper_B.dv3[0];
    simulationData->mData->mInputOffsets.mN = 16;
    simulationData->mData->mInputOffsets.mX = &tmp_0[0];
    diagnosticManager = (NeuDiagnosticManager *)
      BMS_PIL_Wrapper_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_1 = ne_simulator_method((NeslSimulator *)
      BMS_PIL_Wrapper_DW.STATE_1_Simulator, NESL_SIM_UPDATE, simulationData,
      diagnosticManager);
    if (tmp_1 != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(BMS_PIL_Wrapper_M));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(BMS_PIL_Wrapper_M, msg);
      }
    }

    /* End of Update for SimscapeExecutionBlock: '<S25>/STATE_1' */
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  BMS_PIL_Wrapper_M->Timing.t[0] =
    ((time_T)(++BMS_PIL_Wrapper_M->Timing.clockTick0)) *
    BMS_PIL_Wrapper_M->Timing.stepSize0;

  {
    /* Update absolute timer for sample time: [0.001s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.001, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     */
    BMS_PIL_Wrapper_M->Timing.clockTick1++;
  }
}

/* Model initialize function */
void BMS_PIL_Wrapper_initialize(void)
{
  /* Registration code */
  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&BMS_PIL_Wrapper_M->solverInfo,
                          &BMS_PIL_Wrapper_M->Timing.simTimeStep);
    rtsiSetTPtr(&BMS_PIL_Wrapper_M->solverInfo, &rtmGetTPtr(BMS_PIL_Wrapper_M));
    rtsiSetStepSizePtr(&BMS_PIL_Wrapper_M->solverInfo,
                       &BMS_PIL_Wrapper_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&BMS_PIL_Wrapper_M->solverInfo, (&rtmGetErrorStatus
      (BMS_PIL_Wrapper_M)));
    rtsiSetRTModelPtr(&BMS_PIL_Wrapper_M->solverInfo, BMS_PIL_Wrapper_M);
  }

  rtsiSetSimTimeStep(&BMS_PIL_Wrapper_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetIsMinorTimeStepWithModeChange(&BMS_PIL_Wrapper_M->solverInfo, false);
  rtsiSetIsContModeFrozen(&BMS_PIL_Wrapper_M->solverInfo, false);
  rtsiSetSolverName(&BMS_PIL_Wrapper_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(BMS_PIL_Wrapper_M, &BMS_PIL_Wrapper_M->Timing.tArray[0]);
  BMS_PIL_Wrapper_M->Timing.stepSize0 = 0.001;

  /* Model Initialize function for ModelReference Block: '<Root>/BMS_MCU_CODE' */
  BMS_MCU_CODE_initialize(rtmGetErrorStatusPointer(BMS_PIL_Wrapper_M),
    &(BMS_PIL_Wrapper_DW.BMS_MCU_CODE_InstanceData.rtm));

  {
    NeModelParameters modelParameters;
    NeModelParameters modelParameters_0;
    NeModelParameters modelParameters_1;
    NeslRtpManager *manager;
    NeslRtpManager *manager_0;
    NeslSimulationData *tmp_1;
    NeslSimulator *tmp_0;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    NeuDiagnosticTree *diagnosticTree_0;
    NeuDiagnosticTree *diagnosticTree_1;
    char *msg;
    char *msg_0;
    char *msg_1;
    real_T tmp_2;
    int32_T i;
    boolean_T tmp;

    /* Start for SimscapeRtp: '<S10>/RTP_1' */
    manager_0 = nesl_lease_rtp_manager(
      "BMS_PIL_Wrapper/Plant/Solver Configuration_1", 0);
    manager = manager_0;
    tmp = pointer_is_null(manager_0);
    if (tmp) {
      BMS_PIL_Wrapper_6c5e8dbc_1_gateway();
      manager = nesl_lease_rtp_manager(
        "BMS_PIL_Wrapper/Plant/Solver Configuration_1", 0);
    }

    BMS_PIL_Wrapper_DW.RTP_1_RtpManager = (void *)manager;
    BMS_PIL_Wrapper_DW.RTP_1_SetParametersNeeded = true;

    /* End of Start for SimscapeRtp: '<S10>/RTP_1' */

    /* Start for SimscapeExecutionBlock: '<S25>/STATE_1' */
    tmp_0 = nesl_lease_simulator("BMS_PIL_Wrapper/Plant/Solver Configuration_1",
      0, 0);
    BMS_PIL_Wrapper_DW.STATE_1_Simulator = (void *)tmp_0;
    tmp = pointer_is_null(BMS_PIL_Wrapper_DW.STATE_1_Simulator);
    if (tmp) {
      BMS_PIL_Wrapper_6c5e8dbc_1_gateway();
      tmp_0 = nesl_lease_simulator(
        "BMS_PIL_Wrapper/Plant/Solver Configuration_1", 0, 0);
      BMS_PIL_Wrapper_DW.STATE_1_Simulator = (void *)tmp_0;
    }

    tmp_1 = nesl_create_simulation_data();
    BMS_PIL_Wrapper_DW.STATE_1_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    BMS_PIL_Wrapper_DW.STATE_1_DiagMgr = (void *)diagnosticManager;
    modelParameters.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters.mSolverTolerance = 0.001;
    modelParameters.mSolverAbsTol = 0.001;
    modelParameters.mSolverRelTol = 0.001;
    modelParameters.mVariableStepSolver = false;
    modelParameters.mIsUsingODEN = false;
    modelParameters.mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO;
    modelParameters.mFixedStepSize = 0.001;
    modelParameters.mStartTime = 0.0;
    modelParameters.mLoadInitialState = false;
    modelParameters.mUseSimState = false;
    modelParameters.mLinTrimCompile = false;
    modelParameters.mLoggingMode = SSC_LOGGING_OFF;
    modelParameters.mRTWModifiedTimeStamp = 7.02483895E+8;
    modelParameters.mZcDisabled = true;
    modelParameters.mUseModelRefSolver = false;
    modelParameters.mTargetFPGAHIL = false;
    tmp_2 = 0.001;
    modelParameters.mSolverTolerance = tmp_2;
    tmp_2 = 0.001;
    modelParameters.mFixedStepSize = tmp_2;
    tmp = false;
    modelParameters.mVariableStepSolver = tmp;
    tmp = false;
    modelParameters.mIsUsingODEN = tmp;
    modelParameters.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)
      BMS_PIL_Wrapper_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = nesl_initialize_simulator((NeslSimulator *)
      BMS_PIL_Wrapper_DW.STATE_1_Simulator, &modelParameters, diagnosticManager);
    if (i != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(BMS_PIL_Wrapper_M));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(BMS_PIL_Wrapper_M, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S25>/STATE_1' */

    /* Start for SimscapeExecutionBlock: '<S25>/OUTPUT_1_1' */
    tmp_0 = nesl_lease_simulator("BMS_PIL_Wrapper/Plant/Solver Configuration_1",
      1, 1);
    BMS_PIL_Wrapper_DW.OUTPUT_1_1_Simulator = (void *)tmp_0;
    tmp = pointer_is_null(BMS_PIL_Wrapper_DW.OUTPUT_1_1_Simulator);
    if (tmp) {
      BMS_PIL_Wrapper_6c5e8dbc_1_gateway();
      tmp_0 = nesl_lease_simulator(
        "BMS_PIL_Wrapper/Plant/Solver Configuration_1", 1, 1);
      BMS_PIL_Wrapper_DW.OUTPUT_1_1_Simulator = (void *)tmp_0;
    }

    tmp_1 = nesl_create_simulation_data();
    BMS_PIL_Wrapper_DW.OUTPUT_1_1_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    BMS_PIL_Wrapper_DW.OUTPUT_1_1_DiagMgr = (void *)diagnosticManager;
    modelParameters_0.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_0.mSolverTolerance = 0.001;
    modelParameters_0.mSolverAbsTol = 0.001;
    modelParameters_0.mSolverRelTol = 0.001;
    modelParameters_0.mVariableStepSolver = false;
    modelParameters_0.mIsUsingODEN = false;
    modelParameters_0.mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO;
    modelParameters_0.mFixedStepSize = 0.001;
    modelParameters_0.mStartTime = 0.0;
    modelParameters_0.mLoadInitialState = false;
    modelParameters_0.mUseSimState = false;
    modelParameters_0.mLinTrimCompile = false;
    modelParameters_0.mLoggingMode = SSC_LOGGING_OFF;
    modelParameters_0.mRTWModifiedTimeStamp = 7.02483895E+8;
    modelParameters_0.mZcDisabled = true;
    modelParameters_0.mUseModelRefSolver = false;
    modelParameters_0.mTargetFPGAHIL = false;
    tmp_2 = 0.001;
    modelParameters_0.mSolverTolerance = tmp_2;
    tmp_2 = 0.001;
    modelParameters_0.mFixedStepSize = tmp_2;
    tmp = false;
    modelParameters_0.mVariableStepSolver = tmp;
    tmp = false;
    modelParameters_0.mIsUsingODEN = tmp;
    modelParameters_0.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)
      BMS_PIL_Wrapper_DW.OUTPUT_1_1_DiagMgr;
    diagnosticTree_0 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = nesl_initialize_simulator((NeslSimulator *)
      BMS_PIL_Wrapper_DW.OUTPUT_1_1_Simulator, &modelParameters_0,
      diagnosticManager);
    if (i != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(BMS_PIL_Wrapper_M));
      if (tmp) {
        msg_0 = rtw_diagnostics_msg(diagnosticTree_0);
        rtmSetErrorStatus(BMS_PIL_Wrapper_M, msg_0);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S25>/OUTPUT_1_1' */

    /* Start for SimscapeExecutionBlock: '<S25>/OUTPUT_1_0' */
    tmp_0 = nesl_lease_simulator("BMS_PIL_Wrapper/Plant/Solver Configuration_1",
      1, 0);
    BMS_PIL_Wrapper_DW.OUTPUT_1_0_Simulator = (void *)tmp_0;
    tmp = pointer_is_null(BMS_PIL_Wrapper_DW.OUTPUT_1_0_Simulator);
    if (tmp) {
      BMS_PIL_Wrapper_6c5e8dbc_1_gateway();
      tmp_0 = nesl_lease_simulator(
        "BMS_PIL_Wrapper/Plant/Solver Configuration_1", 1, 0);
      BMS_PIL_Wrapper_DW.OUTPUT_1_0_Simulator = (void *)tmp_0;
    }

    tmp_1 = nesl_create_simulation_data();
    BMS_PIL_Wrapper_DW.OUTPUT_1_0_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    BMS_PIL_Wrapper_DW.OUTPUT_1_0_DiagMgr = (void *)diagnosticManager;
    modelParameters_1.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_1.mSolverTolerance = 0.001;
    modelParameters_1.mSolverAbsTol = 0.001;
    modelParameters_1.mSolverRelTol = 0.001;
    modelParameters_1.mVariableStepSolver = false;
    modelParameters_1.mIsUsingODEN = false;
    modelParameters_1.mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO;
    modelParameters_1.mFixedStepSize = 0.001;
    modelParameters_1.mStartTime = 0.0;
    modelParameters_1.mLoadInitialState = false;
    modelParameters_1.mUseSimState = false;
    modelParameters_1.mLinTrimCompile = false;
    modelParameters_1.mLoggingMode = SSC_LOGGING_OFF;
    modelParameters_1.mRTWModifiedTimeStamp = 7.02483895E+8;
    modelParameters_1.mZcDisabled = true;
    modelParameters_1.mUseModelRefSolver = false;
    modelParameters_1.mTargetFPGAHIL = false;
    tmp_2 = 0.001;
    modelParameters_1.mSolverTolerance = tmp_2;
    tmp_2 = 0.001;
    modelParameters_1.mFixedStepSize = tmp_2;
    tmp = false;
    modelParameters_1.mVariableStepSolver = tmp;
    tmp = false;
    modelParameters_1.mIsUsingODEN = tmp;
    modelParameters_1.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)
      BMS_PIL_Wrapper_DW.OUTPUT_1_0_DiagMgr;
    diagnosticTree_1 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = nesl_initialize_simulator((NeslSimulator *)
      BMS_PIL_Wrapper_DW.OUTPUT_1_0_Simulator, &modelParameters_1,
      diagnosticManager);
    if (i != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(BMS_PIL_Wrapper_M));
      if (tmp) {
        msg_1 = rtw_diagnostics_msg(diagnosticTree_1);
        rtmSetErrorStatus(BMS_PIL_Wrapper_M, msg_1);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S25>/OUTPUT_1_0' */
    for (i = 0; i < 12; i++) {
      /* InitializeConditions for UnitDelay: '<Root>/Unit Delay4' */
      BMS_PIL_Wrapper_DW.UnitDelay4_DSTATE[i] = 3.6F;

      /* InitializeConditions for UnitDelay: '<Root>/Unit Delay3' */
      BMS_PIL_Wrapper_DW.UnitDelay3_DSTATE[i] = 293.0F;

      /* InitializeConditions for UnitDelay: '<Root>/Unit Delay' */
      BMS_PIL_Wrapper_DW.UnitDelay_DSTATE_m[i] = 1.0F;
    }

    /* InitializeConditions for UnitDelay: '<Root>/Unit Delay2' */
    BMS_PIL_Wrapper_DW.UnitDelay2_DSTATE = 43.2F;

    /* SystemInitialize for ModelReference generated from: '<Root>/BMS_MCU_CODE' */
    BMS_MCU_CODE_Init(&BMS_PIL_Wrapper_B.Bal_Cmd[0],
                      &BMS_PIL_Wrapper_B.BMS_MCU_CODE_o16[0],
                      &(BMS_PIL_Wrapper_DW.BMS_MCU_CODE_InstanceData.rtdw));
  }
}

/* Model terminate function */
void BMS_PIL_Wrapper_terminate(void)
{
  /* Terminate for SimscapeExecutionBlock: '<S25>/STATE_1' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    BMS_PIL_Wrapper_DW.STATE_1_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    BMS_PIL_Wrapper_DW.STATE_1_SimData);
  nesl_erase_simulator("BMS_PIL_Wrapper/Plant/Solver Configuration_1");
  nesl_destroy_registry();

  /* Terminate for SimscapeExecutionBlock: '<S25>/OUTPUT_1_1' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    BMS_PIL_Wrapper_DW.OUTPUT_1_1_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    BMS_PIL_Wrapper_DW.OUTPUT_1_1_SimData);
  nesl_erase_simulator("BMS_PIL_Wrapper/Plant/Solver Configuration_1");
  nesl_destroy_registry();

  /* Terminate for SimscapeExecutionBlock: '<S25>/OUTPUT_1_0' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    BMS_PIL_Wrapper_DW.OUTPUT_1_0_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    BMS_PIL_Wrapper_DW.OUTPUT_1_0_SimData);
  nesl_erase_simulator("BMS_PIL_Wrapper/Plant/Solver Configuration_1");
  nesl_destroy_registry();
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
