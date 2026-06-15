/*
 * File: coder_assumptions.h
 *
 * Abstract: Coder assumptions header file
 */

#ifndef CODER_ASSUMPTIONS_H
#define CODER_ASSUMPTIONS_H

/* include model specific checks */
#include "BMS_MCU_CODE_ca.h"

/* global results variable mapping for static code */
#define CA_Expected                    CA_BMS_MCU_CODE_Exp
#define CA_Actual                      CA_BMS_MCU_CODE_Act
#define CA_TestResults                 CA_BMS_MCU_CODE_Res
#define CA_PortableWordSizes_Results   CA_BMS_MCU_CODE_PWSRes

/* entry point function mapping for static code */
#define CA_Run_Tests                   BMS_MCU_CODE_caRunTests
#define CA_MODEL_SPECIFIC_CHECKS_ENABLED 0
#endif                                 /* CODER_ASSUMPTIONS_H */
