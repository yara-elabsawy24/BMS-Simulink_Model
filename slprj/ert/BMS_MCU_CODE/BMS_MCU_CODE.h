/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BMS_MCU_CODE.h
 *
 * Code generated for Simulink model 'BMS_MCU_CODE'.
 *
 * Model version                  : 1.59
 * Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
 * C/C++ source code generated on : Thu Jun  4 17:01:57 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef BMS_MCU_CODE_h_
#define BMS_MCU_CODE_h_
#ifndef BMS_MCU_CODE_COMMON_INCLUDES_
#define BMS_MCU_CODE_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rt_nonfinite.h"
#include "math.h"
#endif                                 /* BMS_MCU_CODE_COMMON_INCLUDES_ */

#include "BMS_MCU_CODE_types.h"

/* Block signals for model 'BMS_MCU_CODE' */
typedef struct {
  Fault_Level Fault_Level_l;           /* '<S5>/Chart3' */
  Fault_Level Fault_Level_b;           /* '<S5>/Chart2' */
  Fault_Level Fault_Level_n;           /* '<S5>/Chart1' */
  Fault_Level Fault_Level_d;           /* '<S5>/Chart' */
  Fault_out Fault_out_b;               /* '<S6>/BMS_States' */
} B_BMS_MCU_CODE_c_T;

/* Block states (default storage) for model 'BMS_MCU_CODE' */
typedef struct {
  real_T DiscreteTimeIntegrator5_DSTATE;/* '<S5>/Discrete-Time Integrator5' */
  real_T DiscreteTimeIntegrator6_DSTATE;/* '<S5>/Discrete-Time Integrator6' */
  real_T DiscreteTimeIntegrator7_DSTATE;/* '<S5>/Discrete-Time Integrator7' */
  real_T DiscreteTimeIntegrator4_DSTATE;/* '<S5>/Discrete-Time Integrator4' */
  real_T DiscreteTimeIntegrator8_DSTATE;/* '<S5>/Discrete-Time Integrator8' */
  real_T DiscreteTimeIntegrator9_DSTATE;/* '<S5>/Discrete-Time Integrator9' */
  real_T DiscreteTimeIntegrator12_DSTATE;/* '<S5>/Discrete-Time Integrator12' */
  real_T DiscreteTimeIntegrator13_DSTATE;/* '<S5>/Discrete-Time Integrator13' */
  real_T DiscreteTimeIntegrator14_DSTATE;/* '<S5>/Discrete-Time Integrator14' */
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S2>/Discrete-Time Integrator' */
  real32_T DiscreteTimeIntegrator_DSTATE_d;/* '<S5>/Discrete-Time Integrator' */
  real32_T DiscreteTimeIntegrator1_DSTATE;/* '<S5>/Discrete-Time Integrator1' */
  real32_T DiscreteTimeIntegrator2_DSTATE;/* '<S5>/Discrete-Time Integrator2' */
  real32_T DiscreteTimeIntegrator3_DSTATE;/* '<S5>/Discrete-Time Integrator3' */
  real32_T DiscreteTimeIntegrator10_DSTATE;/* '<S5>/Discrete-Time Integrator10' */
  real32_T DiscreteTimeIntegrator11_DSTATE;/* '<S5>/Discrete-Time Integrator11' */
  real32_T MaxCellTemp;                /* '<S6>/BMS_States' */
  real32_T Delta;                      /* '<S6>/BMS_States' */
  real32_T MinCellTemp;                /* '<S6>/BMS_States' */
  real32_T DeltaCellVolt;              /* '<S3>/Chart' */
  uint32_T temporalCounter_i1;         /* '<S6>/BMS_States' */
  uint32_T temporalCounter_i1_d;       /* '<S3>/Chart' */
  uint8_T is_active_c6_BMS_MCU_CODE;   /* '<S6>/BMS_States' */
  uint8_T is_Normal_State;             /* '<S6>/BMS_States' */
  uint8_T is_Monitor_CurrentLim;       /* '<S6>/BMS_States' */
  uint8_T is_Monitor_CellTemp;         /* '<S6>/BMS_States' */
  uint8_T is_Monitor_CellVolt;         /* '<S6>/BMS_States' */
  uint8_T is_active_c8_BMS_MCU_CODE;   /* '<S5>/Chart3' */
  uint8_T is_active_c7_BMS_MCU_CODE;   /* '<S5>/Chart2' */
  uint8_T is_active_c1_BMS_MCU_CODE;   /* '<S5>/Chart1' */
  uint8_T is_active_c5_BMS_MCU_CODE;   /* '<S5>/Chart' */
  uint8_T is_active_c2_BMS_MCU_CODE;   /* '<S3>/Chart' */
  uint8_T is_c2_BMS_MCU_CODE;          /* '<S3>/Chart' */
  uint8_T is_Balancing_On;             /* '<S3>/Chart' */
  boolean_T FaultPresent;              /* '<S6>/BMS_States' */
  boolean_T flgBalCompl;               /* '<S3>/Chart' */
  boolean_T flgBalInt;                 /* '<S3>/Chart' */
} DW_BMS_MCU_CODE_f_T;

/* Real-time Model Data Structure */
struct tag_RTM_BMS_MCU_CODE_T {
  const char_T **errorStatus;
};

typedef struct {
  B_BMS_MCU_CODE_c_T rtb;
  DW_BMS_MCU_CODE_f_T rtdw;
  RT_MODEL_BMS_MCU_CODE_T rtm;
} MdlrefDW_BMS_MCU_CODE_T;

/* Model reference registration function */
extern void BMS_MCU_CODE_initialize(const char_T **rt_errorStatus,
  RT_MODEL_BMS_MCU_CODE_T *const BMS_MCU_CODE_M);
extern void BMS_MCU_CODE_Init(boolean_T rty_From_BMS_Bal_Cmd[12], real_T
  rty_Fault_Level[16], DW_BMS_MCU_CODE_f_T *localDW);
extern void BMS_MCU_CODE(const real32_T rtu_From_Plant_Vmod[12], const real32_T
  rtu_From_Plant_Tmod[12], const real32_T *rtu_From_Plant_Pack_Current, const
  real32_T rtu_From_Plant_SOCmod[12], const real32_T
  *rtu_From_Plant_V_Batt_Monitor, const SRE *rtu_State_Required, boolean_T
  *rty_Fault_Out_VoltSensor, boolean_T *rty_Fault_Out_UV, boolean_T
  *rty_Fault_Out_OT, boolean_T *rty_Fault_Out_UT, boolean_T *rty_Fault_Out_OC,
  boolean_T *rty_Fault_Out_OV, real32_T rty_SOC[12], real32_T
  *rty_V_Batt_Monitor, real32_T *rty_Ipack, real32_T rty_Temp[12], real32_T
  rty_V_Cell[12], BMS_State *rty_From_BMS_BMS_State_Out, real32_T
  *rty_From_BMS_Current_Limits_Dis, real32_T *rty_From_BMS_Current_Limits_Cha,
  boolean_T rty_From_BMS_Bal_Cmd[12], real_T rty_Fault_Level[16],
  B_BMS_MCU_CODE_c_T *localB, DW_BMS_MCU_CODE_f_T *localDW);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Scope' : Unused code path elimination
 * Block '<S8>/  ' : Eliminated nontunable gain of 1
 * Block '<S8>/Cast To Double' : Eliminate redundant data type conversion
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'BMS_MCU_CODE'
 * '<S1>'   : 'BMS_MCU_CODE/BMS_Control'
 * '<S2>'   : 'BMS_MCU_CODE/SOC_Calc'
 * '<S3>'   : 'BMS_MCU_CODE/BMS_Control/Balancer'
 * '<S4>'   : 'BMS_MCU_CODE/BMS_Control/Current_Limits_Calc'
 * '<S5>'   : 'BMS_MCU_CODE/BMS_Control/Fault_Severity'
 * '<S6>'   : 'BMS_MCU_CODE/BMS_Control/Subsystem'
 * '<S7>'   : 'BMS_MCU_CODE/BMS_Control/Balancer/Chart'
 * '<S8>'   : 'BMS_MCU_CODE/BMS_Control/Current_Limits_Calc/Charge_Current_Calc'
 * '<S9>'   : 'BMS_MCU_CODE/BMS_Control/Current_Limits_Calc/Discharge_Current_Calc'
 * '<S10>'  : 'BMS_MCU_CODE/BMS_Control/Current_Limits_Calc/Subsystem'
 * '<S11>'  : 'BMS_MCU_CODE/BMS_Control/Fault_Severity/Chart'
 * '<S12>'  : 'BMS_MCU_CODE/BMS_Control/Fault_Severity/Chart1'
 * '<S13>'  : 'BMS_MCU_CODE/BMS_Control/Fault_Severity/Chart2'
 * '<S14>'  : 'BMS_MCU_CODE/BMS_Control/Fault_Severity/Chart3'
 * '<S15>'  : 'BMS_MCU_CODE/BMS_Control/Fault_Severity/Compare To Constant'
 * '<S16>'  : 'BMS_MCU_CODE/BMS_Control/Fault_Severity/Compare To Constant1'
 * '<S17>'  : 'BMS_MCU_CODE/BMS_Control/Fault_Severity/Compare To Constant10'
 * '<S18>'  : 'BMS_MCU_CODE/BMS_Control/Fault_Severity/Compare To Constant11'
 * '<S19>'  : 'BMS_MCU_CODE/BMS_Control/Fault_Severity/Compare To Constant12'
 * '<S20>'  : 'BMS_MCU_CODE/BMS_Control/Fault_Severity/Compare To Constant13'
 * '<S21>'  : 'BMS_MCU_CODE/BMS_Control/Fault_Severity/Compare To Constant14'
 * '<S22>'  : 'BMS_MCU_CODE/BMS_Control/Fault_Severity/Compare To Constant15'
 * '<S23>'  : 'BMS_MCU_CODE/BMS_Control/Fault_Severity/Compare To Constant16'
 * '<S24>'  : 'BMS_MCU_CODE/BMS_Control/Fault_Severity/Compare To Constant17'
 * '<S25>'  : 'BMS_MCU_CODE/BMS_Control/Fault_Severity/Compare To Constant18'
 * '<S26>'  : 'BMS_MCU_CODE/BMS_Control/Fault_Severity/Compare To Constant19'
 * '<S27>'  : 'BMS_MCU_CODE/BMS_Control/Fault_Severity/Compare To Constant2'
 * '<S28>'  : 'BMS_MCU_CODE/BMS_Control/Fault_Severity/Compare To Constant20'
 * '<S29>'  : 'BMS_MCU_CODE/BMS_Control/Fault_Severity/Compare To Constant21'
 * '<S30>'  : 'BMS_MCU_CODE/BMS_Control/Fault_Severity/Compare To Constant22'
 * '<S31>'  : 'BMS_MCU_CODE/BMS_Control/Fault_Severity/Compare To Constant23'
 * '<S32>'  : 'BMS_MCU_CODE/BMS_Control/Fault_Severity/Compare To Constant24'
 * '<S33>'  : 'BMS_MCU_CODE/BMS_Control/Fault_Severity/Compare To Constant25'
 * '<S34>'  : 'BMS_MCU_CODE/BMS_Control/Fault_Severity/Compare To Constant26'
 * '<S35>'  : 'BMS_MCU_CODE/BMS_Control/Fault_Severity/Compare To Constant27'
 * '<S36>'  : 'BMS_MCU_CODE/BMS_Control/Fault_Severity/Compare To Constant28'
 * '<S37>'  : 'BMS_MCU_CODE/BMS_Control/Fault_Severity/Compare To Constant29'
 * '<S38>'  : 'BMS_MCU_CODE/BMS_Control/Fault_Severity/Compare To Constant3'
 * '<S39>'  : 'BMS_MCU_CODE/BMS_Control/Fault_Severity/Compare To Constant4'
 * '<S40>'  : 'BMS_MCU_CODE/BMS_Control/Fault_Severity/Compare To Constant5'
 * '<S41>'  : 'BMS_MCU_CODE/BMS_Control/Fault_Severity/Compare To Constant6'
 * '<S42>'  : 'BMS_MCU_CODE/BMS_Control/Fault_Severity/Compare To Constant7'
 * '<S43>'  : 'BMS_MCU_CODE/BMS_Control/Fault_Severity/Compare To Constant8'
 * '<S44>'  : 'BMS_MCU_CODE/BMS_Control/Fault_Severity/Compare To Constant9'
 * '<S45>'  : 'BMS_MCU_CODE/BMS_Control/Subsystem/BMS_States'
 */
#endif                                 /* BMS_MCU_CODE_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
