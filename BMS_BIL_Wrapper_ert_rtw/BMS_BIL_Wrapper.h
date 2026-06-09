/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BMS_BIL_Wrapper.h
 *
 * Code generated for Simulink model 'BMS_BIL_Wrapper'.
 *
 * Model version                  : 1.26
 * Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
 * C/C++ source code generated on : Tue Jun  9 13:26:22 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef BMS_BIL_Wrapper_h_
#define BMS_BIL_Wrapper_h_
#ifndef BMS_BIL_Wrapper_COMMON_INCLUDES_
#define BMS_BIL_Wrapper_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "main.h"
#include "mw_stm32_utils.h"
#include "MW_SPI.h"
#include "mw_stm32_spi_ll.h"
#endif                                 /* BMS_BIL_Wrapper_COMMON_INCLUDES_ */

#include "BMS_BIL_Wrapper_types.h"
#include <math.h>
#include <stddef.h>
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  Fault_Level Fault_Level_e;           /* '<S6>/Chart3' */
  Fault_Level Fault_Level_m;           /* '<S6>/Chart2' */
  Fault_Level Fault_Level_o;           /* '<S6>/Chart1' */
  Fault_Level Fault_Level_l;           /* '<S6>/Chart' */
  real_T V_Sum_LSB;                    /* '<S69>/Divide1' */
  real32_T CastToSingle4;              /* '<S73>/Cast To Single4' */
  real32_T CastToSingle2;              /* '<S71>/Cast To Single2' */
  SRE State_Required;                  /* '<Root>/Test Sequence' */
  BMS_State BMS_State_Out;             /* '<S7>/BMS_States' */
  boolean_T Bal_Cmd[14];               /* '<S8>/Chart' */
} B_BMS_BIL_Wrapper_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  stm32cube_blocks_SPIControlle_T obj; /* '<Root>/SPI Controller Transfer' */
  stm32cube_blocks_DigitalPortW_T obj_j;/* '<S62>/Digital Port Write' */
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S74>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator5_DSTATE;/* '<S6>/Discrete-Time Integrator5' */
  real_T DiscreteTimeIntegrator6_DSTATE;/* '<S6>/Discrete-Time Integrator6' */
  real_T DiscreteTimeIntegrator7_DSTATE;/* '<S6>/Discrete-Time Integrator7' */
  real_T DiscreteTimeIntegrator4_DSTATE;/* '<S6>/Discrete-Time Integrator4' */
  real_T DiscreteTimeIntegrator8_DSTATE;/* '<S6>/Discrete-Time Integrator8' */
  real_T DiscreteTimeIntegrator9_DSTATE;/* '<S6>/Discrete-Time Integrator9' */
  real_T DiscreteTimeIntegrator12_DSTATE;/* '<S6>/Discrete-Time Integrator12' */
  real_T DiscreteTimeIntegrator13_DSTATE;/* '<S6>/Discrete-Time Integrator13' */
  real_T DiscreteTimeIntegrator14_DSTATE;/* '<S6>/Discrete-Time Integrator14' */
  real32_T UnitDelay_1_DSTATE[14];     /* '<Root>/Unit Delay' */
  real32_T UnitDelay_5_DSTATE[5];      /* '<Root>/Unit Delay' */
  real32_T UnitDelay_6_DSTATE[14];     /* '<Root>/Unit Delay' */
  real32_T UnitDelay_4_DSTATE;         /* '<Root>/Unit Delay' */
  real32_T UnitDelay_3_DSTATE;         /* '<Root>/Unit Delay' */
  real32_T UnitDelay_2_DSTATE;         /* '<Root>/Unit Delay' */
  real32_T DiscreteTimeIntegrator_DSTATE_g;/* '<S6>/Discrete-Time Integrator' */
  real32_T DiscreteTimeIntegrator1_DSTATE;/* '<S6>/Discrete-Time Integrator1' */
  real32_T DiscreteTimeIntegrator2_DSTATE;/* '<S6>/Discrete-Time Integrator2' */
  real32_T DiscreteTimeIntegrator3_DSTATE;/* '<S6>/Discrete-Time Integrator3' */
  real32_T DiscreteTimeIntegrator10_DSTATE;/* '<S6>/Discrete-Time Integrator10' */
  real32_T DiscreteTimeIntegrator11_DSTATE;/* '<S6>/Discrete-Time Integrator11' */
  real32_T TappedDelay_X[5];           /* '<S73>/Tapped Delay' */
  real32_T TappedDelay_X_l[14];        /* '<S71>/Tapped Delay' */
  real32_T DeltaCellVolt;              /* '<S8>/Chart' */
  real32_T MaxCellTemp;                /* '<S7>/BMS_States' */
  real32_T MinCellTemp;                /* '<S7>/BMS_States' */
  real32_T Delta;                      /* '<S7>/BMS_States' */
  uint32_T temporalCounter_i1;         /* '<S8>/Chart' */
  uint32_T temporalCounter_i1_n;       /* '<S7>/BMS_States' */
  uint16_T Output_DSTATE;              /* '<S54>/Output' */
  uint8_T is_active_c1_BMS_BIL_Wrapper;/* '<Root>/Test Sequence' */
  uint8_T is_c1_BMS_BIL_Wrapper;       /* '<Root>/Test Sequence' */
  uint8_T is_active_c8_BMS_BIL_Wrapper;/* '<S8>/Chart' */
  uint8_T is_c8_BMS_BIL_Wrapper;       /* '<S8>/Chart' */
  uint8_T is_Balancing_On;             /* '<S8>/Chart' */
  uint8_T is_active_c6_BMS_BIL_Wrapper;/* '<S7>/BMS_States' */
  uint8_T is_Normal_State;             /* '<S7>/BMS_States' */
  uint8_T is_Monitor_CurrentLim;       /* '<S7>/BMS_States' */
  uint8_T is_Monitor_CellVolt;         /* '<S7>/BMS_States' */
  uint8_T is_Monitor_CellTemp;         /* '<S7>/BMS_States' */
  uint8_T is_active_c3_BMS_BIL_Wrapper;/* '<S6>/Chart3' */
  uint8_T is_active_c5_BMS_BIL_Wrapper;/* '<S6>/Chart2' */
  uint8_T is_active_c4_BMS_BIL_Wrapper;/* '<S6>/Chart1' */
  uint8_T is_active_c2_BMS_BIL_Wrapper;/* '<S6>/Chart' */
  boolean_T flgBalCompl;               /* '<S8>/Chart' */
  boolean_T flgBalInt;                 /* '<S8>/Chart' */
  boolean_T FaultPresent;              /* '<S7>/BMS_States' */
} DW_BMS_BIL_Wrapper_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T IntegertoBitConverter[8];/* '<S58>/Integer to Bit Converter' */
  const real_T IntegertoBitConverter1[8];/* '<S58>/Integer to Bit Converter1' */
  const real_T IntegertoBitConverter15[8];/* '<S58>/Integer to Bit Converter15' */
  const real_T IntegertoBitConverter16[8];/* '<S58>/Integer to Bit Converter16' */
} ConstB_BMS_BIL_Wrapper_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Computed Parameter: uDLookupTable_tableData
   * Referenced by: '<S5>/2-D Lookup Table'
   */
  real32_T uDLookupTable_tableData[55];

  /* Computed Parameter: uDLookupTable_bp01Data
   * Referenced by: '<S5>/2-D Lookup Table'
   */
  real32_T uDLookupTable_bp01Data[11];

  /* Computed Parameter: uDLookupTable_bp02Data
   * Referenced by: '<S5>/2-D Lookup Table'
   */
  real32_T uDLookupTable_bp02Data[5];

  /* Computed Parameter: uDLookupTable_tableData_o
   * Referenced by: '<S74>/1-D Lookup Table'
   */
  real32_T uDLookupTable_tableData_o[9];

  /* Computed Parameter: uDLookupTable_bp01Data_d
   * Referenced by: '<S74>/1-D Lookup Table'
   */
  real32_T uDLookupTable_bp01Data_d[9];

  /* Expression: uint8([194 16 64 0 57])
   * Referenced by: '<S48>/Bal_Mode'
   */
  uint8_T Bal_Mode_Value[5];

  /* Expression: uint8([194 12 32 0 55])
   * Referenced by: '<S48>/Bal_On'
   */
  uint8_T Bal_On_Value[5];

  /* Expression: uint8([131 236 0 0 16])
   * Referenced by: '<S48>/Constant'
   */
  uint8_T Constant_Value_by[5];

  /* Expression: uint8([131 224 0 0 22])
   * Referenced by: '<S48>/Constant13'
   */
  uint8_T Constant13_Value[5];
} ConstP_BMS_BIL_Wrapper_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Bal_Cmd1[16];                 /* '<Root>/Bal_Cmd1' */
} ExtY_BMS_BIL_Wrapper_T;

/* Real-time Model Data Structure */
struct tag_RTM_BMS_BIL_Wrapper_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_BMS_BIL_Wrapper_T BMS_BIL_Wrapper_B;

/* Block states (default storage) */
extern DW_BMS_BIL_Wrapper_T BMS_BIL_Wrapper_DW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_BMS_BIL_Wrapper_T BMS_BIL_Wrapper_Y;
extern const ConstB_BMS_BIL_Wrapper_T BMS_BIL_Wrapper_ConstB;/* constant block i/o */

/* Constant parameters (default storage) */
extern const ConstP_BMS_BIL_Wrapper_T BMS_BIL_Wrapper_ConstP;

/* Model entry point functions */
extern void BMS_BIL_Wrapper_initialize(void);
extern void BMS_BIL_Wrapper_step(void);
extern void BMS_BIL_Wrapper_terminate(void);

/* Real-time Model object */
extern RT_MODEL_BMS_BIL_Wrapper_T *const BMS_BIL_Wrapper_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S5>/Display' : Unused code path elimination
 * Block '<S5>/Display1' : Unused code path elimination
 * Block '<S1>/Scope7' : Unused code path elimination
 * Block '<S54>/FixPt Data Type Propagation' : Unused code path elimination
 * Block '<S56>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S57>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<Root>/To Workspace' : Unused code path elimination
 * Block '<Root>/To Workspace1' : Unused code path elimination
 * Block '<S9>/  ' : Eliminated nontunable gain of 1
 * Block '<S58>/Reshape' : Reshape block reduction
 * Block '<S58>/Reshape1' : Reshape block reduction
 * Block '<S58>/Reshape2' : Reshape block reduction
 * Block '<S58>/Reshape3' : Reshape block reduction
 * Block '<S58>/Reshape4' : Reshape block reduction
 * Block '<S58>/Reshape5' : Reshape block reduction
 * Block '<S73>/Gain3' : Eliminated nontunable gain of 1
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
 * '<Root>' : 'BMS_BIL_Wrapper'
 * '<S1>'   : 'BMS_BIL_Wrapper/BMS_Control'
 * '<S2>'   : 'BMS_BIL_Wrapper/Data_Acquisition_From_L99BM114'
 * '<S3>'   : 'BMS_BIL_Wrapper/Raw_Data_Conv'
 * '<S4>'   : 'BMS_BIL_Wrapper/Test Sequence'
 * '<S5>'   : 'BMS_BIL_Wrapper/BMS_Control/Current_Limits_Calc'
 * '<S6>'   : 'BMS_BIL_Wrapper/BMS_Control/Fault_Severity'
 * '<S7>'   : 'BMS_BIL_Wrapper/BMS_Control/Subsystem'
 * '<S8>'   : 'BMS_BIL_Wrapper/BMS_Control/Subsystem1'
 * '<S9>'   : 'BMS_BIL_Wrapper/BMS_Control/Current_Limits_Calc/Charge_Current_Calc'
 * '<S10>'  : 'BMS_BIL_Wrapper/BMS_Control/Current_Limits_Calc/Discharge_Current_Calc'
 * '<S11>'  : 'BMS_BIL_Wrapper/BMS_Control/Current_Limits_Calc/Subsystem'
 * '<S12>'  : 'BMS_BIL_Wrapper/BMS_Control/Fault_Severity/Chart'
 * '<S13>'  : 'BMS_BIL_Wrapper/BMS_Control/Fault_Severity/Chart1'
 * '<S14>'  : 'BMS_BIL_Wrapper/BMS_Control/Fault_Severity/Chart2'
 * '<S15>'  : 'BMS_BIL_Wrapper/BMS_Control/Fault_Severity/Chart3'
 * '<S16>'  : 'BMS_BIL_Wrapper/BMS_Control/Fault_Severity/Compare To Constant'
 * '<S17>'  : 'BMS_BIL_Wrapper/BMS_Control/Fault_Severity/Compare To Constant1'
 * '<S18>'  : 'BMS_BIL_Wrapper/BMS_Control/Fault_Severity/Compare To Constant10'
 * '<S19>'  : 'BMS_BIL_Wrapper/BMS_Control/Fault_Severity/Compare To Constant11'
 * '<S20>'  : 'BMS_BIL_Wrapper/BMS_Control/Fault_Severity/Compare To Constant12'
 * '<S21>'  : 'BMS_BIL_Wrapper/BMS_Control/Fault_Severity/Compare To Constant13'
 * '<S22>'  : 'BMS_BIL_Wrapper/BMS_Control/Fault_Severity/Compare To Constant14'
 * '<S23>'  : 'BMS_BIL_Wrapper/BMS_Control/Fault_Severity/Compare To Constant15'
 * '<S24>'  : 'BMS_BIL_Wrapper/BMS_Control/Fault_Severity/Compare To Constant16'
 * '<S25>'  : 'BMS_BIL_Wrapper/BMS_Control/Fault_Severity/Compare To Constant17'
 * '<S26>'  : 'BMS_BIL_Wrapper/BMS_Control/Fault_Severity/Compare To Constant18'
 * '<S27>'  : 'BMS_BIL_Wrapper/BMS_Control/Fault_Severity/Compare To Constant19'
 * '<S28>'  : 'BMS_BIL_Wrapper/BMS_Control/Fault_Severity/Compare To Constant2'
 * '<S29>'  : 'BMS_BIL_Wrapper/BMS_Control/Fault_Severity/Compare To Constant20'
 * '<S30>'  : 'BMS_BIL_Wrapper/BMS_Control/Fault_Severity/Compare To Constant21'
 * '<S31>'  : 'BMS_BIL_Wrapper/BMS_Control/Fault_Severity/Compare To Constant22'
 * '<S32>'  : 'BMS_BIL_Wrapper/BMS_Control/Fault_Severity/Compare To Constant23'
 * '<S33>'  : 'BMS_BIL_Wrapper/BMS_Control/Fault_Severity/Compare To Constant24'
 * '<S34>'  : 'BMS_BIL_Wrapper/BMS_Control/Fault_Severity/Compare To Constant25'
 * '<S35>'  : 'BMS_BIL_Wrapper/BMS_Control/Fault_Severity/Compare To Constant26'
 * '<S36>'  : 'BMS_BIL_Wrapper/BMS_Control/Fault_Severity/Compare To Constant27'
 * '<S37>'  : 'BMS_BIL_Wrapper/BMS_Control/Fault_Severity/Compare To Constant28'
 * '<S38>'  : 'BMS_BIL_Wrapper/BMS_Control/Fault_Severity/Compare To Constant29'
 * '<S39>'  : 'BMS_BIL_Wrapper/BMS_Control/Fault_Severity/Compare To Constant3'
 * '<S40>'  : 'BMS_BIL_Wrapper/BMS_Control/Fault_Severity/Compare To Constant4'
 * '<S41>'  : 'BMS_BIL_Wrapper/BMS_Control/Fault_Severity/Compare To Constant5'
 * '<S42>'  : 'BMS_BIL_Wrapper/BMS_Control/Fault_Severity/Compare To Constant6'
 * '<S43>'  : 'BMS_BIL_Wrapper/BMS_Control/Fault_Severity/Compare To Constant7'
 * '<S44>'  : 'BMS_BIL_Wrapper/BMS_Control/Fault_Severity/Compare To Constant8'
 * '<S45>'  : 'BMS_BIL_Wrapper/BMS_Control/Fault_Severity/Compare To Constant9'
 * '<S46>'  : 'BMS_BIL_Wrapper/BMS_Control/Subsystem/BMS_States'
 * '<S47>'  : 'BMS_BIL_Wrapper/BMS_Control/Subsystem1/Chart'
 * '<S48>'  : 'BMS_BIL_Wrapper/Data_Acquisition_From_L99BM114/All_Frames'
 * '<S49>'  : 'BMS_BIL_Wrapper/Data_Acquisition_From_L99BM114/Compare To Constant'
 * '<S50>'  : 'BMS_BIL_Wrapper/Data_Acquisition_From_L99BM114/Compare To Constant1'
 * '<S51>'  : 'BMS_BIL_Wrapper/Data_Acquisition_From_L99BM114/Compare To Constant2'
 * '<S52>'  : 'BMS_BIL_Wrapper/Data_Acquisition_From_L99BM114/Compare To Constant3'
 * '<S53>'  : 'BMS_BIL_Wrapper/Data_Acquisition_From_L99BM114/Digital Port Write'
 * '<S54>'  : 'BMS_BIL_Wrapper/Data_Acquisition_From_L99BM114/All_Frames/Counter Free-Running'
 * '<S55>'  : 'BMS_BIL_Wrapper/Data_Acquisition_From_L99BM114/All_Frames/Subsystem'
 * '<S56>'  : 'BMS_BIL_Wrapper/Data_Acquisition_From_L99BM114/All_Frames/Counter Free-Running/Increment Real World'
 * '<S57>'  : 'BMS_BIL_Wrapper/Data_Acquisition_From_L99BM114/All_Frames/Counter Free-Running/Wrap To Zero'
 * '<S58>'  : 'BMS_BIL_Wrapper/Data_Acquisition_From_L99BM114/All_Frames/Subsystem/Subsystem'
 * '<S59>'  : 'BMS_BIL_Wrapper/Data_Acquisition_From_L99BM114/All_Frames/Subsystem/Subsystem/MATLAB Function'
 * '<S60>'  : 'BMS_BIL_Wrapper/Data_Acquisition_From_L99BM114/All_Frames/Subsystem/Subsystem/MATLAB Function1'
 * '<S61>'  : 'BMS_BIL_Wrapper/Data_Acquisition_From_L99BM114/Digital Port Write/ECSoC'
 * '<S62>'  : 'BMS_BIL_Wrapper/Data_Acquisition_From_L99BM114/Digital Port Write/ECSoC/ECSimCodegen'
 * '<S63>'  : 'BMS_BIL_Wrapper/Raw_Data_Conv/Compare To Constant'
 * '<S64>'  : 'BMS_BIL_Wrapper/Raw_Data_Conv/Compare To Constant1'
 * '<S65>'  : 'BMS_BIL_Wrapper/Raw_Data_Conv/Compare To Constant2'
 * '<S66>'  : 'BMS_BIL_Wrapper/Raw_Data_Conv/Compare To Constant3'
 * '<S67>'  : 'BMS_BIL_Wrapper/Raw_Data_Conv/Compare To Constant4'
 * '<S68>'  : 'BMS_BIL_Wrapper/Raw_Data_Conv/GPIOs_Frames'
 * '<S69>'  : 'BMS_BIL_Wrapper/Raw_Data_Conv/Proceed_Batt_Volt_Monitor'
 * '<S70>'  : 'BMS_BIL_Wrapper/Raw_Data_Conv/Proceed_Batt_Volt_Sum'
 * '<S71>'  : 'BMS_BIL_Wrapper/Raw_Data_Conv/Proceed_Cell_Volt'
 * '<S72>'  : 'BMS_BIL_Wrapper/Raw_Data_Conv/Proceed_Current'
 * '<S73>'  : 'BMS_BIL_Wrapper/Raw_Data_Conv/Proceed_Temp'
 * '<S74>'  : 'BMS_BIL_Wrapper/Raw_Data_Conv/Subsystem'
 * '<S75>'  : 'BMS_BIL_Wrapper/Raw_Data_Conv/GPIOs_Frames/Compare To Constant'
 * '<S76>'  : 'BMS_BIL_Wrapper/Raw_Data_Conv/GPIOs_Frames/Compare To Constant1'
 * '<S77>'  : 'BMS_BIL_Wrapper/Raw_Data_Conv/GPIOs_Frames/Compare To Constant2'
 * '<S78>'  : 'BMS_BIL_Wrapper/Raw_Data_Conv/GPIOs_Frames/Compare To Constant3'
 * '<S79>'  : 'BMS_BIL_Wrapper/Raw_Data_Conv/GPIOs_Frames/Compare To Constant4'
 */
#endif                                 /* BMS_BIL_Wrapper_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
