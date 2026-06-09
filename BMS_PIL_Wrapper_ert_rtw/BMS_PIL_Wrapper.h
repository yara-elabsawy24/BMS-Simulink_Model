/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BMS_PIL_Wrapper.h
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

#ifndef BMS_PIL_Wrapper_h_
#define BMS_PIL_Wrapper_h_
#ifndef BMS_PIL_Wrapper_COMMON_INCLUDES_
#define BMS_PIL_Wrapper_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "nesl_rtw_rtp.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_1_gateway.h"
#include "nesl_rtw.h"
#endif                                 /* BMS_PIL_Wrapper_COMMON_INCLUDES_ */

#include "BMS_PIL_Wrapper_types.h"
#include "BMS_MCU_CODE.h"
#include "rtGetNaN.h"
#include <stddef.h>
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetErrorStatusPointer
#define rtmGetErrorStatusPointer(rtm)  ((const char_T **)(&((rtm)->errorStatus)))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T dv[397];
  real_T dv1[397];
  real_T dv2[60];
  real_T dv3[60];
  real_T OUTPUT_1_1[37];               /* '<S25>/OUTPUT_1_1' */
  real_T dv4[24];
  real_T BMS_MCU_CODE_o16[16];         /* '<Root>/BMS_MCU_CODE' */
  int_T iv[17];
  int_T iv1[17];
  int_T iv2[16];
  real_T INPUT_2_1_1[4];               /* '<S25>/INPUT_2_1_1' */
  real_T INPUT_1_1_1[4];               /* '<S25>/INPUT_1_1_1' */
  real_T INPUT_5_1_1[4];               /* '<S25>/INPUT_5_1_1' */
  real_T INPUT_6_1_1[4];               /* '<S25>/INPUT_6_1_1' */
  real_T INPUT_4_1_1[4];               /* '<S25>/INPUT_4_1_1' */
  real_T INPUT_7_1_1[4];               /* '<S25>/INPUT_7_1_1' */
  real_T INPUT_8_1_1[4];               /* '<S25>/INPUT_8_1_1' */
  real_T INPUT_9_1_1[4];               /* '<S25>/INPUT_9_1_1' */
  real_T INPUT_10_1_1[4];              /* '<S25>/INPUT_10_1_1' */
  real_T INPUT_11_1_1[4];              /* '<S25>/INPUT_11_1_1' */
  real_T INPUT_12_1_1[4];              /* '<S25>/INPUT_12_1_1' */
  real_T INPUT_13_1_1[4];              /* '<S25>/INPUT_13_1_1' */
  real_T INPUT_14_1_1[4];              /* '<S25>/INPUT_14_1_1' */
  real_T INPUT_3_1_1[4];               /* '<S25>/INPUT_3_1_1' */
  real_T INPUT_15_1_1[4];              /* '<S25>/INPUT_15_1_1' */
  real_T RTP_1;                        /* '<S10>/RTP_1' */
  real_T STATE_1[337];                 /* '<S25>/STATE_1' */
  SRE State_Required;                  /* '<Root>/Test Sequence' */
  BMS_State BMS_State_Out;             /* '<Root>/BMS_MCU_CODE' */
  boolean_T Bal_Cmd[12];               /* '<Root>/BMS_MCU_CODE' */
} B_BMS_PIL_Wrapper_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay_DSTATE;             /* '<S5>/Unit Delay' */
  real_T INPUT_2_1_1_Discrete_3746703564[2];/* '<S25>/INPUT_2_1_1' */
  real_T INPUT_1_1_1_Discrete_2566017564[2];/* '<S25>/INPUT_1_1_1' */
  real_T INPUT_5_1_1_Discrete_1836250332[2];/* '<S25>/INPUT_5_1_1' */
  real_T INPUT_6_1_1_Discrete_718441996[2];/* '<S25>/INPUT_6_1_1' */
  real_T INPUT_4_1_1_Discrete_1343413612[2];/* '<S25>/INPUT_4_1_1' */
  real_T INPUT_7_1_1_Discrete_397584316[2];/* '<S25>/INPUT_7_1_1' */
  real_T INPUT_8_1_1_Discrete_2514628717[2];/* '<S25>/INPUT_8_1_1' */
  real_T INPUT_9_1_1_Discrete_2827098589[2];/* '<S25>/INPUT_9_1_1' */
  real_T INPUT_10_1_1_Discrete_102206221[2];/* '<S25>/INPUT_10_1_1' */
  real_T INPUT_11_1_1_Discrete_25904952[2];/* '<S25>/INPUT_11_1_1' */
  real_T INPUT_12_1_1_Discrete_117723901[2];/* '<S25>/INPUT_12_1_1' */
  real_T INPUT_13_1_1_Discrete_206851797[2];/* '<S25>/INPUT_13_1_1' */
  real_T INPUT_14_1_1_Discrete_337928404[2];/* '<S25>/INPUT_14_1_1' */
  real_T INPUT_3_1_1_Discrete_3794927996[2];/* '<S25>/INPUT_3_1_1' */
  real_T INPUT_15_1_1_Discrete_409441944[2];/* '<S25>/INPUT_15_1_1' */
  real_T STATE_1_Discrete_2616936702[205];/* '<S25>/STATE_1' */
  real_T PrevY;                        /* '<S2>/Rate Limiter' */
  real_T STATE_1_ZcValueStore;         /* '<S25>/STATE_1' */
  real_T OUTPUT_1_1_Discrete;          /* '<S25>/OUTPUT_1_1' */
  real_T OUTPUT_1_1_ZcValueStore;      /* '<S25>/OUTPUT_1_1' */
  real_T OUTPUT_1_0_Discrete;          /* '<S25>/OUTPUT_1_0' */
  real_T OUTPUT_1_0_ZcValueStore;      /* '<S25>/OUTPUT_1_0' */
  void* RTP_1_RtpManager;              /* '<S10>/RTP_1' */
  void* STATE_1_Simulator;             /* '<S25>/STATE_1' */
  void* STATE_1_SimData;               /* '<S25>/STATE_1' */
  void* STATE_1_DiagMgr;               /* '<S25>/STATE_1' */
  void* STATE_1_ZcLogger;              /* '<S25>/STATE_1' */
  void* STATE_1_TsInfo;                /* '<S25>/STATE_1' */
  void* OUTPUT_1_1_Simulator;          /* '<S25>/OUTPUT_1_1' */
  void* OUTPUT_1_1_SimData;            /* '<S25>/OUTPUT_1_1' */
  void* OUTPUT_1_1_DiagMgr;            /* '<S25>/OUTPUT_1_1' */
  void* OUTPUT_1_1_ZcLogger;           /* '<S25>/OUTPUT_1_1' */
  void* OUTPUT_1_1_TsInfo;             /* '<S25>/OUTPUT_1_1' */
  void* OUTPUT_1_0_Simulator;          /* '<S25>/OUTPUT_1_0' */
  void* OUTPUT_1_0_SimData;            /* '<S25>/OUTPUT_1_0' */
  void* OUTPUT_1_0_DiagMgr;            /* '<S25>/OUTPUT_1_0' */
  void* OUTPUT_1_0_ZcLogger;           /* '<S25>/OUTPUT_1_0' */
  void* OUTPUT_1_0_TsInfo;             /* '<S25>/OUTPUT_1_0' */
  real32_T UnitDelay4_DSTATE[12];      /* '<Root>/Unit Delay4' */
  real32_T UnitDelay3_DSTATE[12];      /* '<Root>/Unit Delay3' */
  real32_T UnitDelay_DSTATE_m[12];     /* '<Root>/Unit Delay' */
  real32_T UnitDelay1_DSTATE;          /* '<Root>/Unit Delay1' */
  real32_T UnitDelay2_DSTATE;          /* '<Root>/Unit Delay2' */
  real32_T UnitDelay_DSTATE_b[12];     /* '<S2>/Unit Delay' */
  int_T STATE_1_Modes[132];            /* '<S25>/STATE_1' */
  int_T OUTPUT_1_1_Modes;              /* '<S25>/OUTPUT_1_1' */
  int_T OUTPUT_1_0_Modes;              /* '<S25>/OUTPUT_1_0' */
  uint8_T STATE_1_ZcSignalDir;         /* '<S25>/STATE_1' */
  uint8_T STATE_1_ZcStateStore;        /* '<S25>/STATE_1' */
  uint8_T OUTPUT_1_1_ZcSignalDir;      /* '<S25>/OUTPUT_1_1' */
  uint8_T OUTPUT_1_1_ZcStateStore;     /* '<S25>/OUTPUT_1_1' */
  uint8_T OUTPUT_1_0_ZcSignalDir;      /* '<S25>/OUTPUT_1_0' */
  uint8_T OUTPUT_1_0_ZcStateStore;     /* '<S25>/OUTPUT_1_0' */
  uint8_T is_active_c8_BMS_PIL_Wrapper;/* '<Root>/Test Sequence' */
  uint8_T is_c8_BMS_PIL_Wrapper;       /* '<Root>/Test Sequence' */
  uint8_T is_active_c9_BMS_PIL_Wrapper;/* '<S1>/Chart' */
  boolean_T RTP_1_SetParametersNeeded; /* '<S10>/RTP_1' */
  boolean_T STATE_1_FirstOutput;       /* '<S25>/STATE_1' */
  boolean_T OUTPUT_1_1_FirstOutput;    /* '<S25>/OUTPUT_1_1' */
  boolean_T OUTPUT_1_0_FirstOutput;    /* '<S25>/OUTPUT_1_0' */
  MdlrefDW_BMS_MCU_CODE_T BMS_MCU_CODE_InstanceData;/* '<Root>/BMS_MCU_CODE' */
} DW_BMS_PIL_Wrapper_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real32_T SOC[12];                    /* '<Root>/SOC' */
  real32_T V_Batt_Monitor;             /* '<Root>/V_Batt_Monitor' */
  real32_T Ipack;                      /* '<Root>/Ipack' */
  real32_T Temp[12];                   /* '<Root>/Temp' */
  real32_T V_Cell[12];                 /* '<Root>/V_Cell' */
  real_T Drone_Mode;                   /* '<Root>/Drone_Mode' */
  real_T Motor_Command;                /* '<Root>/Motor_Command' */
} ExtY_BMS_PIL_Wrapper_T;

/* Real-time Model Data Structure */
struct tag_RTM_BMS_PIL_Wrapper_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    SimTimeStep simTimeStep;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block signals (default storage) */
extern B_BMS_PIL_Wrapper_T BMS_PIL_Wrapper_B;

/* Block states (default storage) */
extern DW_BMS_PIL_Wrapper_T BMS_PIL_Wrapper_DW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_BMS_PIL_Wrapper_T BMS_PIL_Wrapper_Y;

/* Model entry point functions */
extern void BMS_PIL_Wrapper_initialize(void);
extern void BMS_PIL_Wrapper_step(void);
extern void BMS_PIL_Wrapper_terminate(void);

/* Real-time Model object */
extern RT_MODEL_BMS_PIL_Wrapper_T *const BMS_PIL_Wrapper_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S12>/Data Type Duplicate' : Unused code path elimination
 * Block '<S18>/Data Type Duplicate' : Unused code path elimination
 * Block '<S18>/Data Type Propagation' : Unused code path elimination
 * Block '<Root>/Scope' : Unused code path elimination
 * Block '<S12>/Conversion' : Eliminate redundant data type conversion
 * Block '<S5>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S17>/Output' : Eliminate redundant signal conversion block
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
 * '<Root>' : 'BMS_PIL_Wrapper'
 * '<S1>'   : 'BMS_PIL_Wrapper/FC'
 * '<S2>'   : 'BMS_PIL_Wrapper/Plant'
 * '<S3>'   : 'BMS_PIL_Wrapper/Test Sequence'
 * '<S4>'   : 'BMS_PIL_Wrapper/FC/Chart'
 * '<S5>'   : 'BMS_PIL_Wrapper/Plant/CC-CV Charging (Proportional Control)'
 * '<S6>'   : 'BMS_PIL_Wrapper/Plant/Charger-Load'
 * '<S7>'   : 'BMS_PIL_Wrapper/Plant/Compare To Constant'
 * '<S8>'   : 'BMS_PIL_Wrapper/Plant/PS-Simulink Converter'
 * '<S9>'   : 'BMS_PIL_Wrapper/Plant/PS-Simulink Converter1'
 * '<S10>'  : 'BMS_PIL_Wrapper/Plant/Solver Configuration'
 * '<S11>'  : 'BMS_PIL_Wrapper/Plant/Subsystem'
 * '<S12>'  : 'BMS_PIL_Wrapper/Plant/CC-CV Charging (Proportional Control)/Data Type Conversion Inherited1'
 * '<S13>'  : 'BMS_PIL_Wrapper/Plant/CC-CV Charging (Proportional Control)/MinMax'
 * '<S14>'  : 'BMS_PIL_Wrapper/Plant/CC-CV Charging (Proportional Control)/MinMax/Compute MinMax'
 * '<S15>'  : 'BMS_PIL_Wrapper/Plant/Charger-Load/Compare To Constant'
 * '<S16>'  : 'BMS_PIL_Wrapper/Plant/Charger-Load/Compare To Constant1'
 * '<S17>'  : 'BMS_PIL_Wrapper/Plant/Charger-Load/Load_Profile'
 * '<S18>'  : 'BMS_PIL_Wrapper/Plant/Charger-Load/Saturation Dynamic'
 * '<S19>'  : 'BMS_PIL_Wrapper/Plant/Charger-Load/Simulink-PS Converter'
 * '<S20>'  : 'BMS_PIL_Wrapper/Plant/Charger-Load/Simulink-PS Converter1'
 * '<S21>'  : 'BMS_PIL_Wrapper/Plant/Charger-Load/Simulink-PS Converter/EVAL_KEY'
 * '<S22>'  : 'BMS_PIL_Wrapper/Plant/Charger-Load/Simulink-PS Converter1/EVAL_KEY'
 * '<S23>'  : 'BMS_PIL_Wrapper/Plant/PS-Simulink Converter/EVAL_KEY'
 * '<S24>'  : 'BMS_PIL_Wrapper/Plant/PS-Simulink Converter1/EVAL_KEY'
 * '<S25>'  : 'BMS_PIL_Wrapper/Plant/Solver Configuration/EVAL_KEY'
 * '<S26>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring'
 * '<S27>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module'
 * '<S28>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/PS-Simulink Converter'
 * '<S29>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/PS-Simulink Converter1'
 * '<S30>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/PS-Simulink Converter10'
 * '<S31>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/PS-Simulink Converter11'
 * '<S32>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/PS-Simulink Converter2'
 * '<S33>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/PS-Simulink Converter3'
 * '<S34>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/PS-Simulink Converter4'
 * '<S35>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/PS-Simulink Converter5'
 * '<S36>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/PS-Simulink Converter6'
 * '<S37>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/PS-Simulink Converter7'
 * '<S38>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/PS-Simulink Converter8'
 * '<S39>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/PS-Simulink Converter9'
 * '<S40>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Simulink-PS Converter'
 * '<S41>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Simulink-PS Converter1'
 * '<S42>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Simulink-PS Converter10'
 * '<S43>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Simulink-PS Converter11'
 * '<S44>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Simulink-PS Converter2'
 * '<S45>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Simulink-PS Converter3'
 * '<S46>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Simulink-PS Converter4'
 * '<S47>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Simulink-PS Converter5'
 * '<S48>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Simulink-PS Converter6'
 * '<S49>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Simulink-PS Converter7'
 * '<S50>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Simulink-PS Converter8'
 * '<S51>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Simulink-PS Converter9'
 * '<S52>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/PS-Simulink Converter/EVAL_KEY'
 * '<S53>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/PS-Simulink Converter1/EVAL_KEY'
 * '<S54>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/PS-Simulink Converter10/EVAL_KEY'
 * '<S55>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/PS-Simulink Converter11/EVAL_KEY'
 * '<S56>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/PS-Simulink Converter2/EVAL_KEY'
 * '<S57>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/PS-Simulink Converter3/EVAL_KEY'
 * '<S58>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/PS-Simulink Converter4/EVAL_KEY'
 * '<S59>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/PS-Simulink Converter5/EVAL_KEY'
 * '<S60>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/PS-Simulink Converter6/EVAL_KEY'
 * '<S61>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/PS-Simulink Converter7/EVAL_KEY'
 * '<S62>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/PS-Simulink Converter8/EVAL_KEY'
 * '<S63>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/PS-Simulink Converter9/EVAL_KEY'
 * '<S64>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Simulink-PS Converter/EVAL_KEY'
 * '<S65>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Simulink-PS Converter1/EVAL_KEY'
 * '<S66>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Simulink-PS Converter10/EVAL_KEY'
 * '<S67>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Simulink-PS Converter11/EVAL_KEY'
 * '<S68>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Simulink-PS Converter2/EVAL_KEY'
 * '<S69>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Simulink-PS Converter3/EVAL_KEY'
 * '<S70>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Simulink-PS Converter4/EVAL_KEY'
 * '<S71>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Simulink-PS Converter5/EVAL_KEY'
 * '<S72>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Simulink-PS Converter6/EVAL_KEY'
 * '<S73>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Simulink-PS Converter7/EVAL_KEY'
 * '<S74>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Simulink-PS Converter8/EVAL_KEY'
 * '<S75>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Simulink-PS Converter9/EVAL_KEY'
 * '<S76>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter'
 * '<S77>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter1'
 * '<S78>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter10'
 * '<S79>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter11'
 * '<S80>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter12'
 * '<S81>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter13'
 * '<S82>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter14'
 * '<S83>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter15'
 * '<S84>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter16'
 * '<S85>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter17'
 * '<S86>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter18'
 * '<S87>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter19'
 * '<S88>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter2'
 * '<S89>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter20'
 * '<S90>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter21'
 * '<S91>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter22'
 * '<S92>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter23'
 * '<S93>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter3'
 * '<S94>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter4'
 * '<S95>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter5'
 * '<S96>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter6'
 * '<S97>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter7'
 * '<S98>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter8'
 * '<S99>'  : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter9'
 * '<S100>' : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Simulink-PS Converter'
 * '<S101>' : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter/EVAL_KEY'
 * '<S102>' : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter1/EVAL_KEY'
 * '<S103>' : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter10/EVAL_KEY'
 * '<S104>' : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter11/EVAL_KEY'
 * '<S105>' : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter12/EVAL_KEY'
 * '<S106>' : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter13/EVAL_KEY'
 * '<S107>' : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter14/EVAL_KEY'
 * '<S108>' : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter15/EVAL_KEY'
 * '<S109>' : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter16/EVAL_KEY'
 * '<S110>' : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter17/EVAL_KEY'
 * '<S111>' : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter18/EVAL_KEY'
 * '<S112>' : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter19/EVAL_KEY'
 * '<S113>' : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter2/EVAL_KEY'
 * '<S114>' : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter20/EVAL_KEY'
 * '<S115>' : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter21/EVAL_KEY'
 * '<S116>' : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter22/EVAL_KEY'
 * '<S117>' : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter23/EVAL_KEY'
 * '<S118>' : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter3/EVAL_KEY'
 * '<S119>' : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter4/EVAL_KEY'
 * '<S120>' : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter5/EVAL_KEY'
 * '<S121>' : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter6/EVAL_KEY'
 * '<S122>' : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter7/EVAL_KEY'
 * '<S123>' : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter8/EVAL_KEY'
 * '<S124>' : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink Converter9/EVAL_KEY'
 * '<S125>' : 'BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Simulink-PS Converter/EVAL_KEY'
 */
#endif                                 /* BMS_PIL_Wrapper_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
