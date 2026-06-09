###########################################################################
## Makefile generated for component 'rtwshared'. 
## 
## Makefile     : rtwshared.mk
## Generated on : Thu Jun 04 17:02:42 2026
## Final product: ./rtwshared.lib
## Product type : static library
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile
# COMPILER_COMMAND_FILE   Compiler command listing model reference header paths
# CMD_FILE                Command file
# MODELLIB                Static library target

PRODUCT_NAME              = rtwshared
MAKEFILE                  = rtwshared.mk
MATLAB_ROOT               = C:/PROGRA~1/MATLAB/R2025b
MATLAB_BIN                = C:/PROGRA~1/MATLAB/R2025b/bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)/win64
START_DIR                 = C:/Users/odona/OneDrive/Yara/Thesis/BMS_Thesis
SOLVER                    = 
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
TGT_FCN_LIB               = ISO_C
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 
RELATIVE_PATH_TO_ANCHOR   = ../../..
COMPILER_COMMAND_FILE     = rtwshared_comp.rsp
CMD_FILE                  = rtwshared.rsp
C_STANDARD_OPTS           = 
CPP_STANDARD_OPTS         = 
MODELLIB                  = rtwshared.lib

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          GNU Tools for ARM Embedded Processors
# Supported Version(s):    
# ToolchainInfo Version:   2025b
# Specification Revision:  1.0
# 
#-------------------------------------------
# Macros assumed to be defined elsewhere
#-------------------------------------------

# TARGET_LOAD_CMD_ARGS
# TARGET_LOAD_CMD
# MW_GNU_ARM_TOOLS_PATH
# FDATASECTIONS_FLG

#-----------
# MACROS
#-----------

LIBGCC                    = ${shell $(MW_GNU_ARM_TOOLS_PATH)/arm-none-eabi-gcc ${CFLAGS} -print-libgcc-file-name}
LIBC                      = ${shell $(MW_GNU_ARM_TOOLS_PATH)/arm-none-eabi-gcc ${CFLAGS} -print-file-name=libc.a}
LIBM                      = ${shell $(MW_GNU_ARM_TOOLS_PATH)/arm-none-eabi-gcc ${CFLAGS} -print-file-name=libm.a}
PRODUCT_NAME_WITHOUT_EXTN = $(basename $(PRODUCT))
PRODUCT_BIN               = $(PRODUCT_NAME_WITHOUT_EXTN).bin
PRODUCT_HEX               = $(PRODUCT_NAME_WITHOUT_EXTN).hex
CPFLAGS                   = -O binary
SHELL                     = %SystemRoot%/system32/cmd.exe

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = -lm

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# Assembler: GNU ARM Assembler
AS_PATH = $(MW_GNU_ARM_TOOLS_PATH)
AS = "$(AS_PATH)/arm-none-eabi-gcc"

# C Compiler: GNU ARM C Compiler
CC_PATH = $(MW_GNU_ARM_TOOLS_PATH)
CC = "$(CC_PATH)/arm-none-eabi-gcc"

# Linker: GNU ARM Linker
LD_PATH = $(MW_GNU_ARM_TOOLS_PATH)
LD = "$(LD_PATH)/arm-none-eabi-g++"

# C++ Compiler: GNU ARM C++ Compiler
CPP_PATH = $(MW_GNU_ARM_TOOLS_PATH)
CPP = "$(CPP_PATH)/arm-none-eabi-g++"

# C++ Linker: GNU ARM C++ Linker
CPP_LD_PATH = $(MW_GNU_ARM_TOOLS_PATH)
CPP_LD = "$(CPP_LD_PATH)/arm-none-eabi-g++"

# Archiver: GNU ARM Archiver
AR_PATH = $(MW_GNU_ARM_TOOLS_PATH)
AR = "$(AR_PATH)/arm-none-eabi-ar"

# MEX Tool: MEX Tool
MEX_PATH = $(MATLAB_ARCH_BIN)
MEX = "$(MEX_PATH)/mex"

# Binary Converter: Binary Converter
OBJCOPYPATH = $(MW_GNU_ARM_TOOLS_PATH)
OBJCOPY = "$(OBJCOPYPATH)/arm-none-eabi-objcopy"

# Hex Converter: Hex Converter
OBJCOPYPATH = $(MW_GNU_ARM_TOOLS_PATH)
OBJCOPY = "$(OBJCOPYPATH)/arm-none-eabi-objcopy"

# Executable Size: Executable Size
EXESIZEPATH = $(MW_GNU_ARM_TOOLS_PATH)
EXESIZE = "$(EXESIZEPATH)/arm-none-eabi-size"

# Download: Download
DOWNLOAD =

# Execute: Execute
EXECUTE = $(PRODUCT)

# Builder: GMAKE Utility
MAKE_PATH = %MATLAB%\bin\win64
MAKE = "$(MAKE_PATH)/gmake"


#-------------------------
# Directives/Utilities
#-------------------------

ASDEBUG             = -g
AS_OUTPUT_FLAG      = -o
CDEBUG              = -g
C_OUTPUT_FLAG       = -o
LDDEBUG             = -g
OUTPUT_FLAG         = -o
CPPDEBUG            = -g
CPP_OUTPUT_FLAG     = -o
CPPLDDEBUG          = -g
OUTPUT_FLAG         = -o
ARDEBUG             =
STATICLIB_OUTPUT_FLAG =
MEX_DEBUG           = -g
RM                  = @del /f/q
ECHO                = @echo
MV                  = @move
RUN                 =

#--------------------------------
# "Debug" Build Configuration
#--------------------------------

ARFLAGS              = ruvs
ASFLAGS              = -MMD -MP -MF"$(@:%.s.o=%.s.dep)" -MT"$@"  \
                       -Wall \
                       -x assembler-with-cpp \
                       $(ASFLAGS_ADDITIONAL) \
                       $(DEFINES) \
                       $(INCLUDES) \
                       -c \
                       -g
OBJCOPYFLAGS_BIN     = -O binary $(PRODUCT) $(PRODUCT_BIN)
CFLAGS               = $(FDATASECTIONS_FLG) \
                       -Wall \
                       -c \
                       -MMD -MP -MF"$(@:%.c.o=%.c.dep)" -MT"$@"  \
                       -O0 \
                       -g
CPPFLAGS             = -std=gnu++14 \
                       -fno-rtti \
                       -fno-exceptions \
                       $(FDATASECTIONS_FLG) \
                       -Wall \
                       -c \
                       -MMD -MP -MF"$(@:%.cpp.o=%.cpp.dep)" -MT"$@"  \
                       -O0 \
                       -g
CPP_LDFLAGS          = -Wl,--gc-sections \
                       -Wl,-Map="$(PRODUCT_NAME).map" \
                       -g
CPP_SHAREDLIB_LDFLAGS  =
DOWNLOAD_FLAGS       =
EXESIZE_FLAGS        = $(PRODUCT)
EXECUTE_FLAGS        =
OBJCOPYFLAGS_HEX     = -O ihex $(PRODUCT) $(PRODUCT_HEX)
LDFLAGS              = -Wl,--gc-sections \
                       -Wl,-Map="$(PRODUCT_NAME).map" \
                       -g
MEX_CPPFLAGS         =
MEX_CPPLDFLAGS       =
MEX_CFLAGS           =
MEX_LDFLAGS          =
MAKE_FLAGS           = -f $(MAKEFILE)
SHAREDLIB_LDFLAGS    =



###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = ./rtwshared.lib
PRODUCT_TYPE = "static library"
BUILD_TYPE = "Model Reference Library"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = 

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_ = -D__MW_TARGET_USE_HARDWARE_RESOURCES_H__ -DUSE_FULL_LL_DRIVER -DSTM32F446xx -DUSE_HAL_DRIVER -DMW_TIMEBASESOURCE=TIM5 -DMW_GPIO_BIT_SHIFT=0 -DMW_CONNECTIVITY_UART=USART2_BASE -DMW_CONNECTIVITY_RX_DMA=DMA1 -DMW_USART2_RX_DMA_STREAM=5 -DMW_USART2_RX_DMA_ENABLED=DMA1_Stream5_IRQHandler -DMW_CONNECTIVITY_RX_DMAStream=LL_DMA_STREAM_5 -DMW_CONNECTIVITY_RX_BUFFER=GET_USART2_RECEIVE_BUFFER -DMW_USART2_RECEIVE_BUFFER_SIZE=1024 -DMW_USART2_ENABLED=1
DEFINES_BUILD_ARGS = -DINTEGER_CODE=0
DEFINES_CUSTOM = 
DEFINES_SKIPFORSIL = -DNRT -DXCP_CUSTOM_PLATFORM -DXCP_MEM_DAQ_RESERVED_POOL_BLOCKS_NUMBER=10 -D__FPU_PRESENT=1U -D__FPU_USED=1U -DSTACK_SIZE=512

DEFINES = $(DEFINES_) $(DEFINES_BUILD_ARGS) $(DEFINES_CUSTOM) $(DEFINES_SKIPFORSIL)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(START_DIR)/slprj/ert/_sharedutils/binsearch_u32f.c $(START_DIR)/slprj/ert/_sharedutils/const_params.c $(START_DIR)/slprj/ert/_sharedutils/intrp2d_fu32fl_pw.c $(START_DIR)/slprj/ert/_sharedutils/look1_binlxpw.c $(START_DIR)/slprj/ert/_sharedutils/maximum_TTkd84nS.c $(START_DIR)/slprj/ert/_sharedutils/minimum_ruU8vKTP.c $(START_DIR)/slprj/ert/_sharedutils/plook_u32ff_binx.c $(START_DIR)/slprj/ert/_sharedutils/rt_nonfinite.c $(START_DIR)/slprj/ert/_sharedutils/rtGetNaN.c $(START_DIR)/slprj/ert/_sharedutils/rt_backsubrr_dbl.c $(START_DIR)/slprj/ert/_sharedutils/rt_forwardsubrr_dbl.c $(START_DIR)/slprj/ert/_sharedutils/rt_lu_real.c $(START_DIR)/slprj/ert/_sharedutils/rt_matrixlib_dbl.c $(START_DIR)/slprj/ert/_sharedutils/rt_remd_snf.c

ALL_SRCS = $(SRCS)

###########################################################################
## OBJECTS
###########################################################################

OBJS = binsearch_u32f.c.o const_params.c.o intrp2d_fu32fl_pw.c.o look1_binlxpw.c.o maximum_TTkd84nS.c.o minimum_ruU8vKTP.c.o plook_u32ff_binx.c.o rt_nonfinite.c.o rtGetNaN.c.o rt_backsubrr_dbl.c.o rt_forwardsubrr_dbl.c.o rt_lu_real.c.o rt_matrixlib_dbl.c.o rt_remd_snf.c.o

ALL_OBJS = $(OBJS)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

LIBS = 

###########################################################################
## SYSTEM LIBRARIES
###########################################################################

SYSTEM_LIBS = 

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_SKIPFORSIL = -mcpu=cortex-m4 -mthumb -mlittle-endian -mthumb-interwork -mfpu=fpv4-sp-d16 -mfloat-abi=hard -ffp-contract=off
CFLAGS_BASIC = $(DEFINES) $(INCLUDES) @$(COMPILER_COMMAND_FILE)

CFLAGS += $(CFLAGS_SKIPFORSIL) $(CFLAGS_BASIC)

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_SKIPFORSIL = -mcpu=cortex-m4 -mthumb -mlittle-endian -mthumb-interwork -mfpu=fpv4-sp-d16 -mfloat-abi=hard -ffp-contract=off
CPPFLAGS_BASIC = $(DEFINES) $(INCLUDES) @$(COMPILER_COMMAND_FILE)

CPPFLAGS += $(CPPFLAGS_SKIPFORSIL) $(CPPFLAGS_BASIC)

#---------------
# C++ Linker
#---------------

CPP_LDFLAGS_SKIPFORSIL = -mcpu=cortex-m4 -mthumb -mlittle-endian -mthumb-interwork -mfpu=fpv4-sp-d16 -mfloat-abi=hard --entry Reset_Handler --specs=nosys.specs  --specs=nano.specs

CPP_LDFLAGS += $(CPP_LDFLAGS_SKIPFORSIL)

#------------------------------
# C++ Shared Library Linker
#------------------------------

CPP_SHAREDLIB_LDFLAGS_SKIPFORSIL = -mcpu=cortex-m4 -mthumb -mlittle-endian -mthumb-interwork -mfpu=fpv4-sp-d16 -mfloat-abi=hard --entry Reset_Handler --specs=nosys.specs  --specs=nano.specs

CPP_SHAREDLIB_LDFLAGS += $(CPP_SHAREDLIB_LDFLAGS_SKIPFORSIL)

#-----------
# Linker
#-----------

LDFLAGS_SKIPFORSIL = -mcpu=cortex-m4 -mthumb -mlittle-endian -mthumb-interwork -mfpu=fpv4-sp-d16 -mfloat-abi=hard --entry Reset_Handler --specs=nosys.specs  --specs=nano.specs

LDFLAGS += $(LDFLAGS_SKIPFORSIL)

#---------------------
# MEX C++ Compiler
#---------------------

MEX_CPP_Compiler_BASIC =  @$(COMPILER_COMMAND_FILE)

MEX_CPPFLAGS += $(MEX_CPP_Compiler_BASIC)

#-----------------
# MEX Compiler
#-----------------

MEX_Compiler_BASIC =  @$(COMPILER_COMMAND_FILE)

MEX_CFLAGS += $(MEX_Compiler_BASIC)

#--------------------------
# Shared Library Linker
#--------------------------

SHAREDLIB_LDFLAGS_SKIPFORSIL = -mcpu=cortex-m4 -mthumb -mlittle-endian -mthumb-interwork -mfpu=fpv4-sp-d16 -mfloat-abi=hard --entry Reset_Handler --specs=nosys.specs  --specs=nano.specs

SHAREDLIB_LDFLAGS += $(SHAREDLIB_LDFLAGS_SKIPFORSIL)

###########################################################################
## INLINED COMMANDS
###########################################################################


ALL_DEPS:=$(patsubst %.o,%.dep,$(ALL_OBJS))
all:

ifndef DISABLE_GCC_FUNCTION_DATA_SECTIONS
FDATASECTIONS_FLG := -ffunction-sections -fdata-sections
endif



-include codertarget_assembly_flags.mk
-include ../codertarget_assembly_flags.mk
-include ../../codertarget_assembly_flags.mk
-include mw_gnu_arm_tools_path.mk
-include ../mw_gnu_arm_tools_path.mk
-include ../../mw_gnu_arm_tools_path.mk
-include $(ALL_DEPS)


###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build clean info prebuild postbuild download execute


all : build postbuild
	@echo "### Successfully generated all binary outputs."


build : prebuild $(PRODUCT)


prebuild : 


postbuild : $(PRODUCT)


download : postbuild


execute : download


###########################################################################
## FINAL TARGET
###########################################################################

#---------------------------------
# Create a static library         
#---------------------------------

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS)
	@echo "### Creating static library "$(PRODUCT)" ..."
	$(AR) $(ARFLAGS)  $(PRODUCT) @$(CMD_FILE)
	@echo "### Created: $(PRODUCT)"


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

%.c.o : %.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.s.o : %.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.s.o : %.S
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.cpp.o : %.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.cpp.o : %.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.cpp.o : %.C
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.cpp.o : %.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.c.o : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.s.o : $(RELATIVE_PATH_TO_ANCHOR)/%.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.s.o : $(RELATIVE_PATH_TO_ANCHOR)/%.S
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.cpp.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.cpp.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.cpp.o : $(RELATIVE_PATH_TO_ANCHOR)/%.C
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.cpp.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.c.o : $(START_DIR)/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.s.o : $(START_DIR)/%.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.s.o : $(START_DIR)/%.S
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.cpp.o : $(START_DIR)/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.cpp.o : $(START_DIR)/%.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.cpp.o : $(START_DIR)/%.C
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.cpp.o : $(START_DIR)/%.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


binsearch_u32f.c.o : $(START_DIR)/slprj/ert/_sharedutils/binsearch_u32f.c
	$(CC) $(CFLAGS) -o "$@" "$<"


const_params.c.o : $(START_DIR)/slprj/ert/_sharedutils/const_params.c
	$(CC) $(CFLAGS) -o "$@" "$<"


intrp2d_fu32fl_pw.c.o : $(START_DIR)/slprj/ert/_sharedutils/intrp2d_fu32fl_pw.c
	$(CC) $(CFLAGS) -o "$@" "$<"


look1_binlxpw.c.o : $(START_DIR)/slprj/ert/_sharedutils/look1_binlxpw.c
	$(CC) $(CFLAGS) -o "$@" "$<"


maximum_TTkd84nS.c.o : $(START_DIR)/slprj/ert/_sharedutils/maximum_TTkd84nS.c
	$(CC) $(CFLAGS) -o "$@" "$<"


minimum_ruU8vKTP.c.o : $(START_DIR)/slprj/ert/_sharedutils/minimum_ruU8vKTP.c
	$(CC) $(CFLAGS) -o "$@" "$<"


plook_u32ff_binx.c.o : $(START_DIR)/slprj/ert/_sharedutils/plook_u32ff_binx.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_nonfinite.c.o : $(START_DIR)/slprj/ert/_sharedutils/rt_nonfinite.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rtGetNaN.c.o : $(START_DIR)/slprj/ert/_sharedutils/rtGetNaN.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_backsubrr_dbl.c.o : $(START_DIR)/slprj/ert/_sharedutils/rt_backsubrr_dbl.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_forwardsubrr_dbl.c.o : $(START_DIR)/slprj/ert/_sharedutils/rt_forwardsubrr_dbl.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_lu_real.c.o : $(START_DIR)/slprj/ert/_sharedutils/rt_lu_real.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_matrixlib_dbl.c.o : $(START_DIR)/slprj/ert/_sharedutils/rt_matrixlib_dbl.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_remd_snf.c.o : $(START_DIR)/slprj/ert/_sharedutils/rt_remd_snf.c
	$(CC) $(CFLAGS) -o "$@" "$<"


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : rtw_proj.tmw


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	@echo "### PRODUCT = $(PRODUCT)"
	@echo "### PRODUCT_TYPE = $(PRODUCT_TYPE)"
	@echo "### BUILD_TYPE = $(BUILD_TYPE)"
	@echo "### INCLUDES = $(INCLUDES)"
	@echo "### DEFINES = $(DEFINES)"
	@echo "### ALL_SRCS = $(ALL_SRCS)"
	@echo "### ALL_OBJS = $(ALL_OBJS)"
	@echo "### LIBS = $(LIBS)"
	@echo "### MODELREF_LIBS = $(MODELREF_LIBS)"
	@echo "### SYSTEM_LIBS = $(SYSTEM_LIBS)"
	@echo "### TOOLCHAIN_LIBS = $(TOOLCHAIN_LIBS)"
	@echo "### ASFLAGS = $(ASFLAGS)"
	@echo "### CFLAGS = $(CFLAGS)"
	@echo "### LDFLAGS = $(LDFLAGS)"
	@echo "### SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS)"
	@echo "### CPPFLAGS = $(CPPFLAGS)"
	@echo "### CPP_LDFLAGS = $(CPP_LDFLAGS)"
	@echo "### CPP_SHAREDLIB_LDFLAGS = $(CPP_SHAREDLIB_LDFLAGS)"
	@echo "### ARFLAGS = $(ARFLAGS)"
	@echo "### MEX_CFLAGS = $(MEX_CFLAGS)"
	@echo "### MEX_CPPFLAGS = $(MEX_CPPFLAGS)"
	@echo "### MEX_LDFLAGS = $(MEX_LDFLAGS)"
	@echo "### MEX_CPPLDFLAGS = $(MEX_CPPLDFLAGS)"
	@echo "### OBJCOPYFLAGS_BIN = $(OBJCOPYFLAGS_BIN)"
	@echo "### OBJCOPYFLAGS_HEX = $(OBJCOPYFLAGS_HEX)"
	@echo "### EXESIZE_FLAGS = $(EXESIZE_FLAGS)"
	@echo "### DOWNLOAD_FLAGS = $(DOWNLOAD_FLAGS)"
	@echo "### EXECUTE_FLAGS = $(EXECUTE_FLAGS)"
	@echo "### MAKE_FLAGS = $(MAKE_FLAGS)"


clean : 
	$(ECHO) "### Deleting all derived files ..."
	$(RM) $(subst /,\,$(PRODUCT))
	$(RM) $(subst /,\,$(ALL_OBJS))
	$(RM) *.c.dep
	$(RM) *.cpp.dep
	$(RM) *.s.dep
	$(ECHO) "### Deleted all derived files."


