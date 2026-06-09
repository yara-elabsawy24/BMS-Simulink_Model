/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BMS_MCU_CODE_types.h
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

#ifndef BMS_MCU_CODE_types_h_
#define BMS_MCU_CODE_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_SRE_
#define DEFINED_TYPEDEF_FOR_SRE_

typedef enum {
  Charge = 0,                          /* Default value */
  Fly,
  Standby
} SRE;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Fault_Level_
#define DEFINED_TYPEDEF_FOR_Fault_Level_

typedef struct {
  real_T OT;
  real_T UT;
  real_T UV;
  real_T OV;
} Fault_Level;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Current_Limits_
#define DEFINED_TYPEDEF_FOR_Current_Limits_

typedef struct {
  real32_T Discharge_Current_Limit;
  real32_T Charge_Current_Limit;
} Current_Limits;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Fault_out_
#define DEFINED_TYPEDEF_FOR_Fault_out_

typedef struct {
  boolean_T VoltSensor;
  boolean_T UV;
  boolean_T OT;
  boolean_T UT;
  boolean_T OC;
  boolean_T OV;
} Fault_out;

#endif

#ifndef DEFINED_TYPEDEF_FOR_BMS_State_
#define DEFINED_TYPEDEF_FOR_BMS_State_

typedef enum {
  Standbying = 0,                      /* Default value */
  Flying = 2,
  Fault = 3,
  Charging = 1
} BMS_State;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_BMS_MCU_CODE_T RT_MODEL_BMS_MCU_CODE_T;

#endif                                 /* BMS_MCU_CODE_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
