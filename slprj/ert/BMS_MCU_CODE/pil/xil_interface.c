/*
 * File: xil_interface.c
 *
 * PIL generated interface for code: "BMS_MCU_CODE"
 *
 */

#include "BMS_MCU_CODE.h"
#include "BMS_MCU_CODE_private.h"
#include "xil_interface.h"

/* Functions with a C call interface */
#ifdef __cplusplus

extern "C"
{

#endif

#include "xil_data_stream.h"
#ifdef __cplusplus

}

#endif

/* interface data */
real32_T i_From_Plant_Vmod[12];

/* interface data */
real32_T i_From_Plant_Tmod[12];

/* interface data */
real32_T i_From_Plant_Pack_Current;

/* interface data */
real32_T i_From_Plant_SOCmod[12];

/* interface data */
real32_T i_From_Plant_V_Batt_Monitor;

/* interface data */
SRE i_State_Required;

/* interface data */
boolean_T o_Fault_Out_VoltSensor;

/* interface data */
boolean_T o_Fault_Out_UV;

/* interface data */
boolean_T o_Fault_Out_OT;

/* interface data */
boolean_T o_Fault_Out_UT;

/* interface data */
boolean_T o_Fault_Out_OC;

/* interface data */
boolean_T o_Fault_Out_OV;

/* interface data */
real32_T o_SOC[12];

/* interface data */
real32_T o_V_Batt_Monitor;

/* interface data */
real32_T o_Ipack;

/* interface data */
real32_T o_Temp[12];

/* interface data */
real32_T o_V_Cell[12];

/* interface data */
BMS_State o_From_BMS_BMS_State_Out;

/* interface data */
real32_T o_From_BMS_Current_Limits_Dischar;

/* interface data */
real32_T o_From_BMS_Current_Limits_Charge_;

/* interface data */
boolean_T o_o_From_BMS_Bal_Cmd[12];

/* interface data */
real_T o_o_Fault_Level_p[16];

/* initialize error status as a null pointer */
static const char_T * rt_errorStatus_tgt_var = ((const char_T *) 0);
static const char_T ** rt_errorStatus = &rt_errorStatus_tgt_var;

/* interface data */
MdlrefDW_BMS_MCU_CODE_T BMS_MCU_CODE_MdlrefDW;

/* interface (pointer) data */
RT_MODEL_BMS_MCU_CODE_T * RTModel_ptr = &(BMS_MCU_CODE_MdlrefDW.rtm);

/* Storage for assignment data transfer */
static int32_T input_6_cData_1_nonaddr_io;

/* Storage for assignment data transfer */
static int32_T output_12_cData_1_nonaddr_io;
static XILIOData xil_fcnid0_task1_output_u[7];
static XILIOData xil_fcnid0_task1_y[17];
static XILIOData xil_fcnid0_init_y[17];
static XILIOData xil_fcnid0_system_initialize_y[17];

/* In-the-Loop Interface functions - see xil_interface.h */
XIL_INTERFACE_ERROR_CODE xilProcessParams(uint32_T xilFcnId)
{
  /* Single In-the-Loop Component */
  if (xilFcnId != 0) {
    return XIL_INTERFACE_UNKNOWN_FCNID;
  }

  return XIL_INTERFACE_SUCCESS;
}

XIL_INTERFACE_ERROR_CODE xilGetDataTypeInfo(void)
{
  {
    /* send response id code */
    MemUnit_T memUnitData = XIL_RESPONSE_TYPE_SIZE;
    if (xilWriteData(&memUnitData, sizeof(memUnitData)) !=
        XIL_DATA_STREAM_SUCCESS) {
      return XIL_INTERFACE_COMMS_FAILURE;
    }

    /* send type id */
    memUnitData = 1;
    if (xilWriteData(&memUnitData, sizeof(memUnitData)) !=
        XIL_DATA_STREAM_SUCCESS) {
      return XIL_INTERFACE_COMMS_FAILURE;
    }

    /* PIL_FLOAT_SIZE should only be already defined for MathWorks testing */
#ifndef PIL_FLOAT_SIZE
#define PIL_FLOAT_SIZE                 sizeof(float)
#endif

    /* send size in bytes */
    memUnitData = (MemUnit_T) PIL_FLOAT_SIZE;

#ifndef HOST_WORD_ADDRESSABLE_TESTING

    /* convert MemUnits to bytes */
    memUnitData *= MEM_UNIT_BYTES;

#endif

    if (xilWriteData(&memUnitData, sizeof(memUnitData)) !=
        XIL_DATA_STREAM_SUCCESS) {
      return XIL_INTERFACE_COMMS_FAILURE;
    }
  }

  {
    /* send response id code */
    MemUnit_T memUnitData = XIL_RESPONSE_TYPE_SIZE;
    if (xilWriteData(&memUnitData, sizeof(memUnitData)) !=
        XIL_DATA_STREAM_SUCCESS) {
      return XIL_INTERFACE_COMMS_FAILURE;
    }

    /* send type id */
    memUnitData = 0;
    if (xilWriteData(&memUnitData, sizeof(memUnitData)) !=
        XIL_DATA_STREAM_SUCCESS) {
      return XIL_INTERFACE_COMMS_FAILURE;
    }

    /* PIL_DOUBLE_SIZE should only be already defined for MathWorks testing */
#ifndef PIL_DOUBLE_SIZE
#define PIL_DOUBLE_SIZE                sizeof(double)
#endif

    /* send size in bytes */
    memUnitData = (MemUnit_T) PIL_DOUBLE_SIZE;

#ifndef HOST_WORD_ADDRESSABLE_TESTING

    /* convert MemUnits to bytes */
    memUnitData *= MEM_UNIT_BYTES;

#endif

    if (xilWriteData(&memUnitData, sizeof(memUnitData)) !=
        XIL_DATA_STREAM_SUCCESS) {
      return XIL_INTERFACE_COMMS_FAILURE;
    }
  }

  return XIL_INTERFACE_SUCCESS;
}

XIL_INTERFACE_ERROR_CODE xilInitialize(uint32_T xilFcnId)
{
  XIL_INTERFACE_ERROR_CODE errorCode = XIL_INTERFACE_SUCCESS;

  {
  }

  /* initialize output storage owned by In-the-Loop */
  {
    o_Fault_Out_VoltSensor = 0;
  }

  {
    o_Fault_Out_UV = 0;
  }

  {
    o_Fault_Out_OT = 0;
  }

  {
    o_Fault_Out_UT = 0;
  }

  {
    o_Fault_Out_OC = 0;
  }

  {
    o_Fault_Out_OV = 0;
  }

  {
    {
      uint32_T elementIdx_0;
      for (elementIdx_0 = 0; elementIdx_0 < 12; elementIdx_0++) {
        o_SOC[elementIdx_0] = 0;
      }                                /* for */
    }
  }

  {
    o_V_Batt_Monitor = 0;
  }

  {
    o_Ipack = 0;
  }

  {
    {
      uint32_T elementIdx_0;
      for (elementIdx_0 = 0; elementIdx_0 < 12; elementIdx_0++) {
        o_Temp[elementIdx_0] = 0;
      }                                /* for */
    }
  }

  {
    {
      uint32_T elementIdx_0;
      for (elementIdx_0 = 0; elementIdx_0 < 12; elementIdx_0++) {
        o_V_Cell[elementIdx_0] = 0;
      }                                /* for */
    }
  }

  {
    o_From_BMS_BMS_State_Out = Standbying;
  }

  {
    o_From_BMS_Current_Limits_Dischar = 0;
  }

  {
    o_From_BMS_Current_Limits_Charge_ = 0;
  }

  {
    {
      uint32_T elementIdx_0;
      for (elementIdx_0 = 0; elementIdx_0 < 12; elementIdx_0++) {
        o_o_From_BMS_Bal_Cmd[elementIdx_0] = 0;
      }                                /* for */
    }
  }

  {
    {
      uint32_T elementIdx_0;
      for (elementIdx_0 = 0; elementIdx_0 < 16; elementIdx_0++) {
        o_o_Fault_Level_p[elementIdx_0] = 0;
      }                                /* for */
    }
  }

  /* Single In-the-Loop Component */
  if (xilFcnId == 0) {
    /* Call all Set class methods */
    BMS_MCU_CODE_initialize(rt_errorStatus, RTModel_ptr);

    /* Call all Get class methods */
    {
      output_12_cData_1_nonaddr_io = ( int32_T ) o_From_BMS_BMS_State_Out;
    }
  } else {
    errorCode = XIL_INTERFACE_UNKNOWN_FCNID;
  }

  return errorCode;
}

XIL_INTERFACE_ERROR_CODE xilPause(uint32_T xilFcnId)
{
  XIL_INTERFACE_ERROR_CODE errorCode = XIL_INTERFACE_SUCCESS;
  if (xilFcnId == 0) {
    /* Nothing to do */
  } else {
    errorCode = XIL_INTERFACE_UNKNOWN_FCNID;
  }                                    /* if */

  return errorCode;
}

XIL_INTERFACE_ERROR_CODE xilSystemInitialize(uint32_T xilFcnId)
{
  XIL_INTERFACE_ERROR_CODE errorCode = XIL_INTERFACE_SUCCESS;

  /* Single In-the-Loop Component */
  if (xilFcnId == 0) {
    BMS_MCU_CODE_Init(o_o_From_BMS_Bal_Cmd, o_o_Fault_Level_p,
                      &(BMS_MCU_CODE_MdlrefDW.rtdw));

    {
      output_12_cData_1_nonaddr_io = ( int32_T ) o_From_BMS_BMS_State_Out;
    }
  } else {
    errorCode = XIL_INTERFACE_UNKNOWN_FCNID;
  }

  return errorCode;
}

XIL_INTERFACE_ERROR_CODE xilSystemReset(uint32_T xilFcnId)
{
  XIL_INTERFACE_ERROR_CODE errorCode = XIL_INTERFACE_SUCCESS;

  /* Single In-the-Loop Component */
  if (xilFcnId == 0) {
    /* No Function to Call */
  } else {
    errorCode = XIL_INTERFACE_UNKNOWN_FCNID;
  }

  return errorCode;
}

XIL_INTERFACE_ERROR_CODE xilGetHostToTargetData(uint32_T xilFcnId,
  XIL_COMMAND_TYPE_ENUM xilCommandType, uint32_T xilCommandIdx, XILIOData
  ** xilIOData)
{
  XIL_INTERFACE_ERROR_CODE errorCode = XIL_INTERFACE_SUCCESS;
  *xilIOData = 0;

  /* Single In-the-Loop Component */
  if (xilFcnId != 0) {
    errorCode = XIL_INTERFACE_UNKNOWN_FCNID;
    return errorCode;
  }

  switch (xilCommandType) {
   case XIL_OUTPUT_COMMAND:
    {
      static int initComplete = 0;
      if (!initComplete) {
        uint32_T tableIdx = 0;

        {
          void * dataAddress = (void *) &(i_From_Plant_Vmod[0]);
          xil_fcnid0_task1_output_u[tableIdx].memUnitLength = 12 * sizeof
            (real32_T);
          xil_fcnid0_task1_output_u[tableIdx++].address = (MemUnit_T *)
            dataAddress;
        }

        {
          void * dataAddress = (void *) &(i_From_Plant_Tmod[0]);
          xil_fcnid0_task1_output_u[tableIdx].memUnitLength = 12 * sizeof
            (real32_T);
          xil_fcnid0_task1_output_u[tableIdx++].address = (MemUnit_T *)
            dataAddress;
        }

        {
          void * dataAddress = (void *) &(i_From_Plant_Pack_Current);
          xil_fcnid0_task1_output_u[tableIdx].memUnitLength = 1 * sizeof
            (real32_T);
          xil_fcnid0_task1_output_u[tableIdx++].address = (MemUnit_T *)
            dataAddress;
        }

        {
          void * dataAddress = (void *) &(i_From_Plant_SOCmod[0]);
          xil_fcnid0_task1_output_u[tableIdx].memUnitLength = 12 * sizeof
            (real32_T);
          xil_fcnid0_task1_output_u[tableIdx++].address = (MemUnit_T *)
            dataAddress;
        }

        {
          void * dataAddress = (void *) &(i_From_Plant_V_Batt_Monitor);
          xil_fcnid0_task1_output_u[tableIdx].memUnitLength = 1 * sizeof
            (real32_T);
          xil_fcnid0_task1_output_u[tableIdx++].address = (MemUnit_T *)
            dataAddress;
        }

        {
          xil_fcnid0_task1_output_u[tableIdx].memUnitLength = 1 * sizeof(int32_T);
          xil_fcnid0_task1_output_u[tableIdx++].address = (MemUnit_T *)
            &input_6_cData_1_nonaddr_io;
        }

        xil_fcnid0_task1_output_u[tableIdx].memUnitLength = 0;
        xil_fcnid0_task1_output_u[tableIdx++].address = (MemUnit_T *) 0;
        initComplete = 1;
      }                                /* if */

      *xilIOData = &xil_fcnid0_task1_output_u[0];
      break;
    }

   default:
    errorCode = XIL_INTERFACE_UNKNOWN_TID;
    break;
  }

  UNUSED_PARAMETER(xilCommandIdx);
  return errorCode;
}

XIL_INTERFACE_ERROR_CODE xilGetTargetToHostPreData(uint32_T xilFcnId,
  XIL_COMMAND_TYPE_ENUM xilCommandType, uint32_T xilCommandIdx, XILIOData
  ** xilIOData, MemUnit_T responseId, uint32_T serverFcnId)
{
  XIL_INTERFACE_ERROR_CODE errorCode = XIL_INTERFACE_SUCCESS;
  *xilIOData = 0;
  if (xilFcnId != 0) {
    errorCode = XIL_INTERFACE_UNKNOWN_FCNID;
    return errorCode;
  }                                    /* if */

  errorCode = XIL_INTERFACE_UNKNOWN_TID;
  UNUSED_PARAMETER(xilCommandType);
  UNUSED_PARAMETER(xilCommandIdx);
  UNUSED_PARAMETER(responseId);
  UNUSED_PARAMETER(serverFcnId);
  return errorCode;
}

XIL_INTERFACE_ERROR_CODE xilOutput(uint32_T xilFcnId, uint32_T xilTID)
{
  /* Single In-the-Loop Component */
  if (xilFcnId != 0) {
    return XIL_INTERFACE_UNKNOWN_FCNID;
  }

  switch (xilTID) {
   case 1:
    {
      i_State_Required = ( SRE ) input_6_cData_1_nonaddr_io;
    }

    /* Call all Set class methods */
    BMS_MCU_CODE(i_From_Plant_Vmod, i_From_Plant_Tmod,
                 &(i_From_Plant_Pack_Current), i_From_Plant_SOCmod,
                 &(i_From_Plant_V_Batt_Monitor), &(i_State_Required),
                 &(o_Fault_Out_VoltSensor), &(o_Fault_Out_UV), &(o_Fault_Out_OT),
                 &(o_Fault_Out_UT), &(o_Fault_Out_OC), &(o_Fault_Out_OV), o_SOC,
                 &(o_V_Batt_Monitor), &(o_Ipack), o_Temp, o_V_Cell,
                 &(o_From_BMS_BMS_State_Out),
                 &(o_From_BMS_Current_Limits_Dischar),
                 &(o_From_BMS_Current_Limits_Charge_), o_o_From_BMS_Bal_Cmd,
                 o_o_Fault_Level_p, &(BMS_MCU_CODE_MdlrefDW.rtb),
                 &(BMS_MCU_CODE_MdlrefDW.rtdw));

    /* Call all Get class methods */
    {
      output_12_cData_1_nonaddr_io = ( int32_T ) o_From_BMS_BMS_State_Out;
    }
    break;

   default:
    return XIL_INTERFACE_UNKNOWN_TID;
  }

  return XIL_INTERFACE_SUCCESS;
}

XIL_INTERFACE_ERROR_CODE xilUpdate(uint32_T xilFcnId, uint32_T xilTID)
{
  /* Single In-the-Loop Component */
  if (xilFcnId != 0) {
    return XIL_INTERFACE_UNKNOWN_FCNID;
  }

  /* No Update Function */
  UNUSED_PARAMETER(xilTID);
  return XIL_INTERFACE_SUCCESS;
}

XIL_INTERFACE_ERROR_CODE xilGetTargetToHostData(uint32_T xilFcnId,
  XIL_COMMAND_TYPE_ENUM xilCommandType, uint32_T xilCommandIdx, XILIOData
  ** xilIOData, MemUnit_T responseId, uint32_T serverFcnId)
{
  XIL_INTERFACE_ERROR_CODE errorCode = XIL_INTERFACE_SUCCESS;

  /* Single In-the-Loop Component */
  *xilIOData = 0;
  if (xilFcnId != 0) {
    errorCode = XIL_INTERFACE_UNKNOWN_FCNID;
    return errorCode;
  }

  switch (xilCommandType) {
   case XIL_INITIALIZE_COMMAND:
    {
      static int initComplete = 0;
      if (!initComplete) {
        uint32_T tableIdx = 0;

        {
          void * dataAddress = (void *) &(o_Fault_Out_VoltSensor);
          xil_fcnid0_init_y[tableIdx].memUnitLength = 1 * sizeof(boolean_T);
          xil_fcnid0_init_y[tableIdx++].address = (MemUnit_T *) dataAddress;
        }

        {
          void * dataAddress = (void *) &(o_Fault_Out_UV);
          xil_fcnid0_init_y[tableIdx].memUnitLength = 1 * sizeof(boolean_T);
          xil_fcnid0_init_y[tableIdx++].address = (MemUnit_T *) dataAddress;
        }

        {
          void * dataAddress = (void *) &(o_Fault_Out_OT);
          xil_fcnid0_init_y[tableIdx].memUnitLength = 1 * sizeof(boolean_T);
          xil_fcnid0_init_y[tableIdx++].address = (MemUnit_T *) dataAddress;
        }

        {
          void * dataAddress = (void *) &(o_Fault_Out_UT);
          xil_fcnid0_init_y[tableIdx].memUnitLength = 1 * sizeof(boolean_T);
          xil_fcnid0_init_y[tableIdx++].address = (MemUnit_T *) dataAddress;
        }

        {
          void * dataAddress = (void *) &(o_Fault_Out_OC);
          xil_fcnid0_init_y[tableIdx].memUnitLength = 1 * sizeof(boolean_T);
          xil_fcnid0_init_y[tableIdx++].address = (MemUnit_T *) dataAddress;
        }

        {
          void * dataAddress = (void *) &(o_Fault_Out_OV);
          xil_fcnid0_init_y[tableIdx].memUnitLength = 1 * sizeof(boolean_T);
          xil_fcnid0_init_y[tableIdx++].address = (MemUnit_T *) dataAddress;
        }

        {
          void * dataAddress = (void *) &(o_SOC[0]);
          xil_fcnid0_init_y[tableIdx].memUnitLength = 12 * sizeof(real32_T);
          xil_fcnid0_init_y[tableIdx++].address = (MemUnit_T *) dataAddress;
        }

        {
          void * dataAddress = (void *) &(o_V_Batt_Monitor);
          xil_fcnid0_init_y[tableIdx].memUnitLength = 1 * sizeof(real32_T);
          xil_fcnid0_init_y[tableIdx++].address = (MemUnit_T *) dataAddress;
        }

        {
          void * dataAddress = (void *) &(o_Ipack);
          xil_fcnid0_init_y[tableIdx].memUnitLength = 1 * sizeof(real32_T);
          xil_fcnid0_init_y[tableIdx++].address = (MemUnit_T *) dataAddress;
        }

        {
          void * dataAddress = (void *) &(o_Temp[0]);
          xil_fcnid0_init_y[tableIdx].memUnitLength = 12 * sizeof(real32_T);
          xil_fcnid0_init_y[tableIdx++].address = (MemUnit_T *) dataAddress;
        }

        {
          void * dataAddress = (void *) &(o_V_Cell[0]);
          xil_fcnid0_init_y[tableIdx].memUnitLength = 12 * sizeof(real32_T);
          xil_fcnid0_init_y[tableIdx++].address = (MemUnit_T *) dataAddress;
        }

        {
          xil_fcnid0_init_y[tableIdx].memUnitLength = 1 * sizeof(int32_T);
          xil_fcnid0_init_y[tableIdx++].address = (MemUnit_T *)
            &output_12_cData_1_nonaddr_io;
        }

        {
          void * dataAddress = (void *) &(o_From_BMS_Current_Limits_Dischar);
          xil_fcnid0_init_y[tableIdx].memUnitLength = 1 * sizeof(real32_T);
          xil_fcnid0_init_y[tableIdx++].address = (MemUnit_T *) dataAddress;
        }

        {
          void * dataAddress = (void *) &(o_From_BMS_Current_Limits_Charge_);
          xil_fcnid0_init_y[tableIdx].memUnitLength = 1 * sizeof(real32_T);
          xil_fcnid0_init_y[tableIdx++].address = (MemUnit_T *) dataAddress;
        }

        {
          void * dataAddress = (void *) &(o_o_From_BMS_Bal_Cmd[0]);
          xil_fcnid0_init_y[tableIdx].memUnitLength = 12 * sizeof(boolean_T);
          xil_fcnid0_init_y[tableIdx++].address = (MemUnit_T *) dataAddress;
        }

        {
          void * dataAddress = (void *) &(o_o_Fault_Level_p[0]);
          xil_fcnid0_init_y[tableIdx].memUnitLength = 16 * sizeof(real_T);
          xil_fcnid0_init_y[tableIdx++].address = (MemUnit_T *) dataAddress;
        }

        xil_fcnid0_init_y[tableIdx].memUnitLength = 0;
        xil_fcnid0_init_y[tableIdx++].address = (MemUnit_T *) 0;
        initComplete = 1;
      }                                /* if */

      {
        if (xilWriteData(&responseId, sizeof(responseId)) !=
            XIL_DATA_STREAM_SUCCESS) {
          return XIL_INTERFACE_COMMS_FAILURE;
        }                              /* if */

        if (responseId == XIL_RESPONSE_CS_REQUEST_SERVICE) {
          if (xilWriteData((MemUnit_T *) &serverFcnId, sizeof(serverFcnId)) !=
              XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
          }                            /* if */
        }                              /* if */
      }

      *xilIOData = &xil_fcnid0_init_y[0];
      break;
    }

   case XIL_OUTPUT_COMMAND:
    {
      static int initComplete = 0;
      if (!initComplete) {
        uint32_T tableIdx = 0;

        {
          void * dataAddress = (void *) &(o_Fault_Out_VoltSensor);
          xil_fcnid0_task1_y[tableIdx].memUnitLength = 1 * sizeof(boolean_T);
          xil_fcnid0_task1_y[tableIdx++].address = (MemUnit_T *) dataAddress;
        }

        {
          void * dataAddress = (void *) &(o_Fault_Out_UV);
          xil_fcnid0_task1_y[tableIdx].memUnitLength = 1 * sizeof(boolean_T);
          xil_fcnid0_task1_y[tableIdx++].address = (MemUnit_T *) dataAddress;
        }

        {
          void * dataAddress = (void *) &(o_Fault_Out_OT);
          xil_fcnid0_task1_y[tableIdx].memUnitLength = 1 * sizeof(boolean_T);
          xil_fcnid0_task1_y[tableIdx++].address = (MemUnit_T *) dataAddress;
        }

        {
          void * dataAddress = (void *) &(o_Fault_Out_UT);
          xil_fcnid0_task1_y[tableIdx].memUnitLength = 1 * sizeof(boolean_T);
          xil_fcnid0_task1_y[tableIdx++].address = (MemUnit_T *) dataAddress;
        }

        {
          void * dataAddress = (void *) &(o_Fault_Out_OC);
          xil_fcnid0_task1_y[tableIdx].memUnitLength = 1 * sizeof(boolean_T);
          xil_fcnid0_task1_y[tableIdx++].address = (MemUnit_T *) dataAddress;
        }

        {
          void * dataAddress = (void *) &(o_Fault_Out_OV);
          xil_fcnid0_task1_y[tableIdx].memUnitLength = 1 * sizeof(boolean_T);
          xil_fcnid0_task1_y[tableIdx++].address = (MemUnit_T *) dataAddress;
        }

        {
          void * dataAddress = (void *) &(o_SOC[0]);
          xil_fcnid0_task1_y[tableIdx].memUnitLength = 12 * sizeof(real32_T);
          xil_fcnid0_task1_y[tableIdx++].address = (MemUnit_T *) dataAddress;
        }

        {
          void * dataAddress = (void *) &(o_V_Batt_Monitor);
          xil_fcnid0_task1_y[tableIdx].memUnitLength = 1 * sizeof(real32_T);
          xil_fcnid0_task1_y[tableIdx++].address = (MemUnit_T *) dataAddress;
        }

        {
          void * dataAddress = (void *) &(o_Ipack);
          xil_fcnid0_task1_y[tableIdx].memUnitLength = 1 * sizeof(real32_T);
          xil_fcnid0_task1_y[tableIdx++].address = (MemUnit_T *) dataAddress;
        }

        {
          void * dataAddress = (void *) &(o_Temp[0]);
          xil_fcnid0_task1_y[tableIdx].memUnitLength = 12 * sizeof(real32_T);
          xil_fcnid0_task1_y[tableIdx++].address = (MemUnit_T *) dataAddress;
        }

        {
          void * dataAddress = (void *) &(o_V_Cell[0]);
          xil_fcnid0_task1_y[tableIdx].memUnitLength = 12 * sizeof(real32_T);
          xil_fcnid0_task1_y[tableIdx++].address = (MemUnit_T *) dataAddress;
        }

        {
          xil_fcnid0_task1_y[tableIdx].memUnitLength = 1 * sizeof(int32_T);
          xil_fcnid0_task1_y[tableIdx++].address = (MemUnit_T *)
            &output_12_cData_1_nonaddr_io;
        }

        {
          void * dataAddress = (void *) &(o_From_BMS_Current_Limits_Dischar);
          xil_fcnid0_task1_y[tableIdx].memUnitLength = 1 * sizeof(real32_T);
          xil_fcnid0_task1_y[tableIdx++].address = (MemUnit_T *) dataAddress;
        }

        {
          void * dataAddress = (void *) &(o_From_BMS_Current_Limits_Charge_);
          xil_fcnid0_task1_y[tableIdx].memUnitLength = 1 * sizeof(real32_T);
          xil_fcnid0_task1_y[tableIdx++].address = (MemUnit_T *) dataAddress;
        }

        {
          void * dataAddress = (void *) &(o_o_From_BMS_Bal_Cmd[0]);
          xil_fcnid0_task1_y[tableIdx].memUnitLength = 12 * sizeof(boolean_T);
          xil_fcnid0_task1_y[tableIdx++].address = (MemUnit_T *) dataAddress;
        }

        {
          void * dataAddress = (void *) &(o_o_Fault_Level_p[0]);
          xil_fcnid0_task1_y[tableIdx].memUnitLength = 16 * sizeof(real_T);
          xil_fcnid0_task1_y[tableIdx++].address = (MemUnit_T *) dataAddress;
        }

        xil_fcnid0_task1_y[tableIdx].memUnitLength = 0;
        xil_fcnid0_task1_y[tableIdx++].address = (MemUnit_T *) 0;
        initComplete = 1;
      }                                /* if */

      {
        if (xilWriteData(&responseId, sizeof(responseId)) !=
            XIL_DATA_STREAM_SUCCESS) {
          return XIL_INTERFACE_COMMS_FAILURE;
        }                              /* if */

        if (responseId == XIL_RESPONSE_CS_REQUEST_SERVICE) {
          if (xilWriteData((MemUnit_T *) &serverFcnId, sizeof(serverFcnId)) !=
              XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
          }                            /* if */
        }                              /* if */
      }

      *xilIOData = &xil_fcnid0_task1_y[0];
      break;
    }

   case XIL_SYSTEM_INITIALIZE_COMMAND:
    {
      static int initComplete = 0;
      if (!initComplete) {
        uint32_T tableIdx = 0;

        {
          void * dataAddress = (void *) &(o_Fault_Out_VoltSensor);
          xil_fcnid0_system_initialize_y[tableIdx].memUnitLength = 1 * sizeof
            (boolean_T);
          xil_fcnid0_system_initialize_y[tableIdx++].address = (MemUnit_T *)
            dataAddress;
        }

        {
          void * dataAddress = (void *) &(o_Fault_Out_UV);
          xil_fcnid0_system_initialize_y[tableIdx].memUnitLength = 1 * sizeof
            (boolean_T);
          xil_fcnid0_system_initialize_y[tableIdx++].address = (MemUnit_T *)
            dataAddress;
        }

        {
          void * dataAddress = (void *) &(o_Fault_Out_OT);
          xil_fcnid0_system_initialize_y[tableIdx].memUnitLength = 1 * sizeof
            (boolean_T);
          xil_fcnid0_system_initialize_y[tableIdx++].address = (MemUnit_T *)
            dataAddress;
        }

        {
          void * dataAddress = (void *) &(o_Fault_Out_UT);
          xil_fcnid0_system_initialize_y[tableIdx].memUnitLength = 1 * sizeof
            (boolean_T);
          xil_fcnid0_system_initialize_y[tableIdx++].address = (MemUnit_T *)
            dataAddress;
        }

        {
          void * dataAddress = (void *) &(o_Fault_Out_OC);
          xil_fcnid0_system_initialize_y[tableIdx].memUnitLength = 1 * sizeof
            (boolean_T);
          xil_fcnid0_system_initialize_y[tableIdx++].address = (MemUnit_T *)
            dataAddress;
        }

        {
          void * dataAddress = (void *) &(o_Fault_Out_OV);
          xil_fcnid0_system_initialize_y[tableIdx].memUnitLength = 1 * sizeof
            (boolean_T);
          xil_fcnid0_system_initialize_y[tableIdx++].address = (MemUnit_T *)
            dataAddress;
        }

        {
          void * dataAddress = (void *) &(o_SOC[0]);
          xil_fcnid0_system_initialize_y[tableIdx].memUnitLength = 12 * sizeof
            (real32_T);
          xil_fcnid0_system_initialize_y[tableIdx++].address = (MemUnit_T *)
            dataAddress;
        }

        {
          void * dataAddress = (void *) &(o_V_Batt_Monitor);
          xil_fcnid0_system_initialize_y[tableIdx].memUnitLength = 1 * sizeof
            (real32_T);
          xil_fcnid0_system_initialize_y[tableIdx++].address = (MemUnit_T *)
            dataAddress;
        }

        {
          void * dataAddress = (void *) &(o_Ipack);
          xil_fcnid0_system_initialize_y[tableIdx].memUnitLength = 1 * sizeof
            (real32_T);
          xil_fcnid0_system_initialize_y[tableIdx++].address = (MemUnit_T *)
            dataAddress;
        }

        {
          void * dataAddress = (void *) &(o_Temp[0]);
          xil_fcnid0_system_initialize_y[tableIdx].memUnitLength = 12 * sizeof
            (real32_T);
          xil_fcnid0_system_initialize_y[tableIdx++].address = (MemUnit_T *)
            dataAddress;
        }

        {
          void * dataAddress = (void *) &(o_V_Cell[0]);
          xil_fcnid0_system_initialize_y[tableIdx].memUnitLength = 12 * sizeof
            (real32_T);
          xil_fcnid0_system_initialize_y[tableIdx++].address = (MemUnit_T *)
            dataAddress;
        }

        {
          xil_fcnid0_system_initialize_y[tableIdx].memUnitLength = 1 * sizeof
            (int32_T);
          xil_fcnid0_system_initialize_y[tableIdx++].address = (MemUnit_T *)
            &output_12_cData_1_nonaddr_io;
        }

        {
          void * dataAddress = (void *) &(o_From_BMS_Current_Limits_Dischar);
          xil_fcnid0_system_initialize_y[tableIdx].memUnitLength = 1 * sizeof
            (real32_T);
          xil_fcnid0_system_initialize_y[tableIdx++].address = (MemUnit_T *)
            dataAddress;
        }

        {
          void * dataAddress = (void *) &(o_From_BMS_Current_Limits_Charge_);
          xil_fcnid0_system_initialize_y[tableIdx].memUnitLength = 1 * sizeof
            (real32_T);
          xil_fcnid0_system_initialize_y[tableIdx++].address = (MemUnit_T *)
            dataAddress;
        }

        {
          void * dataAddress = (void *) &(o_o_From_BMS_Bal_Cmd[0]);
          xil_fcnid0_system_initialize_y[tableIdx].memUnitLength = 12 * sizeof
            (boolean_T);
          xil_fcnid0_system_initialize_y[tableIdx++].address = (MemUnit_T *)
            dataAddress;
        }

        {
          void * dataAddress = (void *) &(o_o_Fault_Level_p[0]);
          xil_fcnid0_system_initialize_y[tableIdx].memUnitLength = 16 * sizeof
            (real_T);
          xil_fcnid0_system_initialize_y[tableIdx++].address = (MemUnit_T *)
            dataAddress;
        }

        xil_fcnid0_system_initialize_y[tableIdx].memUnitLength = 0;
        xil_fcnid0_system_initialize_y[tableIdx++].address = (MemUnit_T *) 0;
        initComplete = 1;
      }                                /* if */

      {
        if (xilWriteData(&responseId, sizeof(responseId)) !=
            XIL_DATA_STREAM_SUCCESS) {
          return XIL_INTERFACE_COMMS_FAILURE;
        }                              /* if */

        if (responseId == XIL_RESPONSE_CS_REQUEST_SERVICE) {
          if (xilWriteData((MemUnit_T *) &serverFcnId, sizeof(serverFcnId)) !=
              XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
          }                            /* if */
        }                              /* if */
      }

      *xilIOData = &xil_fcnid0_system_initialize_y[0];
      break;
    }

   default:
    errorCode = XIL_INTERFACE_UNKNOWN_TID;
    break;
  }

  UNUSED_PARAMETER(xilCommandIdx);
  UNUSED_PARAMETER(responseId);
  UNUSED_PARAMETER(serverFcnId);
  return errorCode;
}

XIL_INTERFACE_ERROR_CODE xilTerminate(uint32_T xilFcnId)
{
  if (xilFcnId != 0) {
    return XIL_INTERFACE_UNKNOWN_FCNID;
  }                                    /* if */

  /* Invoke any terminate Function */
  /* No Function to Call */

  /* Free Opaque Region Based Data */
  return XIL_INTERFACE_SUCCESS;
}

XIL_INTERFACE_ERROR_CODE xilInitTargetData(void)
{
  return XIL_INTERFACE_SUCCESS;
}

XIL_INTERFACE_ERROR_CODE xilEnable(uint32_T xilFcnId, uint32_T xilTID)
{
  /* Single In-the-Loop Component */
  if (xilFcnId != 0) {
    return XIL_INTERFACE_UNKNOWN_FCNID;
  }

  UNUSED_PARAMETER(xilTID);

  /* No Enable Function - this function should never be called */
  return XIL_INTERFACE_UNKNOWN_TID;
}

XIL_INTERFACE_ERROR_CODE xilDisable(uint32_T xilFcnId, uint32_T xilTID)
{
  /* Single In-the-Loop Component */
  if (xilFcnId != 0) {
    return XIL_INTERFACE_UNKNOWN_FCNID;
  }

  UNUSED_PARAMETER(xilTID);

  /* No Disable Function - this function should never be called */
  return XIL_INTERFACE_UNKNOWN_TID;
}
