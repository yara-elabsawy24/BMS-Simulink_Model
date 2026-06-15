/*
 * File: BMS_MCU_CODE_ca.h
 *
 * Abstract: Tests assumptions in the generated code.
 */

#ifndef BMS_MCU_CODE_CA_H
#define BMS_MCU_CODE_CA_H

/* preprocessor validation checks */
#include "BMS_MCU_CODE_ca_preproc.h"
#include "coder_assumptions_hwimpl.h"

/* variables holding test results */
extern CA_ChecksTestResults CA_BMS_MCU_CODE_Res;
extern CA_PWS_TestResults CA_BMS_MCU_CODE_PWSRes;

/* variables holding "expected" and "actual" hardware implementation */
extern const CA_Checks CA_BMS_MCU_CODE_Exp;
extern CA_Checks CA_BMS_MCU_CODE_Act;
extern const int numberOfImportedTypes;

/* entry point function to run tests */
void BMS_MCU_CODE_caRunTests(void);

#endif                                 /* BMS_MCU_CODE_CA_H */
