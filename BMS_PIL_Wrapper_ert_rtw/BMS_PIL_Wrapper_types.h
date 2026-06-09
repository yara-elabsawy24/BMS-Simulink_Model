/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BMS_PIL_Wrapper_types.h
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

#ifndef BMS_PIL_Wrapper_types_h_
#define BMS_PIL_Wrapper_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_SRE_
#define DEFINED_TYPEDEF_FOR_SRE_

typedef enum {
  Charge = 0,                          /* Default value */
  Fly,
  Standby
} SRE;

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
typedef struct tag_RTM_BMS_PIL_Wrapper_T RT_MODEL_BMS_PIL_Wrapper_T;

#endif                                 /* BMS_PIL_Wrapper_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
