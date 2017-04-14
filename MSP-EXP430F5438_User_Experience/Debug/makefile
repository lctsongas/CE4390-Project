################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := C:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.0.LTS

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"./main.obj" \
"./system_pre_init.obj" \
"./F5xx_F6xx_Core_Lib/HAL_FLASH.obj" \
"./F5xx_F6xx_Core_Lib/HAL_PMAP.obj" \
"./F5xx_F6xx_Core_Lib/HAL_PMM.obj" \
"./F5xx_F6xx_Core_Lib/HAL_TLV.obj" \
"./F5xx_F6xx_Core_Lib/HAL_UCS.obj" \
"./MSP-EXP430F5438_HAL/hal_adc.obj" \
"./MSP-EXP430F5438_HAL/hal_board.obj" \
"./MSP-EXP430F5438_HAL/hal_buttons.obj" \
"./MSP-EXP430F5438_HAL/hal_lcd.obj" \
"./MSP-EXP430F5438_HAL/hal_lcd_fonts.obj" \
"./MSP-EXP430F5438_HAL/hal_rf.obj" \
"./MSP-EXP430F5438_HAL/hal_rtc.obj" \
"./MSP-EXP430F5438_HAL/hal_usb.obj" \
"./UserExperienceDemo/5xx_ACTIVE_test.obj" \
"./UserExperienceDemo/FFT.obj" \
"./UserExperienceDemo/FFT_430.obj" \
"./UserExperienceDemo/LPM.obj" \
"./UserExperienceDemo/PMM.obj" \
"./UserExperienceDemo/PowerTest.obj" \
"./UserExperienceDemo/UserExperienceGraphics.obj" \
"./UserExperienceDemo/UserExperience_F5438A.obj" \
"./UserExperienceDemo/adcTemp.obj" \
"./UserExperienceDemo/audio.obj" \
"./UserExperienceDemo/balanceBall.obj" \
"./UserExperienceDemo/clock.obj" \
"./UserExperienceDemo/flashUtils.obj" \
"./UserExperienceDemo/menuSetting.obj" \
"./UserExperienceDemo/usbTest.obj" \
"../lnk_msp430f5438a_mod.cmd" \
$(GEN_CMDS__FLAG) \
-llibc.a \
-llibmath.a \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include F5xx_F6xx_Core_Lib/subdir_vars.mk
-include MSP-EXP430F5438_HAL/subdir_vars.mk
-include UserExperienceDemo/subdir_vars.mk
-include subdir_rules.mk
-include F5xx_F6xx_Core_Lib/subdir_rules.mk
-include MSP-EXP430F5438_HAL/subdir_rules.mk
-include UserExperienceDemo/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
MSP-EXP430F5438UserExperience.out \

EXE_OUTPUTS__QUOTED += \
"MSP-EXP430F5438UserExperience.out" \

BIN_OUTPUTS += \
MSP-EXP430F5438UserExperience.txt \

BIN_OUTPUTS__QUOTED += \
"MSP-EXP430F5438UserExperience.txt" \


# All Target
all: MSP-EXP430F5438UserExperience.out

# Tool invocations
MSP-EXP430F5438UserExperience.out: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@echo 'Building target: $@'
	@echo 'Invoking: MSP430 Linker'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.0.LTS/bin/cl430" -vmspx --abi=eabi --code_model=large --data_model=large -O2 --opt_for_speed=5 -g --define=__MSP430F5438A__ --diag_warning=225 --display_error_number --silicon_errata=CPU21 --silicon_errata=CPU22 --silicon_errata=CPU23 --silicon_errata=CPU40 --printf_support=minimal -z --stack_size=160 -m"MSP-EXP430F5438UserExperience.map" --heap_size=160 --use_hw_mpy=F5 -i"C:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.0.LTS/lib" -i"C:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.0.LTS/include" -i"C:/ti/ccsv7/ccs_base/msp430/include" -i"C:/ti/ccsv7/msp430/include" -i"C:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.0.LTS/lib" -i"C:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.0.LTS/include" -i"C:/ti/ccsv7/ccs_base/msp430/lib/5xx_6xx_FRxx" --reread_libs --warn_sections --xml_link_info="link_details.xml" --rom_model -o "MSP-EXP430F5438UserExperience.out" $(ORDERED_OBJS)
	@echo 'Finished building target: $@'
	@echo ' '
	@$(MAKE) --no-print-directory post-build

MSP-EXP430F5438UserExperience.txt: $(EXE_OUTPUTS)
	@echo 'Invoking: MSP430 Hex Utility'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.0.LTS/bin/hex430" --memwidth=8 --romwidth=8 -o "MSP-EXP430F5438UserExperience.txt" $(EXE_OUTPUTS__QUOTED)
	@echo 'Finished building: $@'
	@echo ' '
	@$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) $(BIN_OUTPUTS__QUOTED)$(EXE_OUTPUTS__QUOTED)
	-$(RM) "main.obj" "system_pre_init.obj" "F5xx_F6xx_Core_Lib\HAL_FLASH.obj" "F5xx_F6xx_Core_Lib\HAL_PMAP.obj" "F5xx_F6xx_Core_Lib\HAL_PMM.obj" "F5xx_F6xx_Core_Lib\HAL_TLV.obj" "F5xx_F6xx_Core_Lib\HAL_UCS.obj" "MSP-EXP430F5438_HAL\hal_adc.obj" "MSP-EXP430F5438_HAL\hal_board.obj" "MSP-EXP430F5438_HAL\hal_buttons.obj" "MSP-EXP430F5438_HAL\hal_lcd.obj" "MSP-EXP430F5438_HAL\hal_lcd_fonts.obj" "MSP-EXP430F5438_HAL\hal_rf.obj" "MSP-EXP430F5438_HAL\hal_rtc.obj" "MSP-EXP430F5438_HAL\hal_usb.obj" "UserExperienceDemo\5xx_ACTIVE_test.obj" "UserExperienceDemo\FFT.obj" "UserExperienceDemo\FFT_430.obj" "UserExperienceDemo\LPM.obj" "UserExperienceDemo\PMM.obj" "UserExperienceDemo\PowerTest.obj" "UserExperienceDemo\UserExperienceGraphics.obj" "UserExperienceDemo\UserExperience_F5438A.obj" "UserExperienceDemo\adcTemp.obj" "UserExperienceDemo\audio.obj" "UserExperienceDemo\balanceBall.obj" "UserExperienceDemo\clock.obj" "UserExperienceDemo\flashUtils.obj" "UserExperienceDemo\menuSetting.obj" "UserExperienceDemo\usbTest.obj" 
	-$(RM) "main.d" "system_pre_init.d" "F5xx_F6xx_Core_Lib\HAL_FLASH.d" "F5xx_F6xx_Core_Lib\HAL_PMAP.d" "F5xx_F6xx_Core_Lib\HAL_PMM.d" "F5xx_F6xx_Core_Lib\HAL_TLV.d" "F5xx_F6xx_Core_Lib\HAL_UCS.d" "MSP-EXP430F5438_HAL\hal_adc.d" "MSP-EXP430F5438_HAL\hal_board.d" "MSP-EXP430F5438_HAL\hal_buttons.d" "MSP-EXP430F5438_HAL\hal_lcd.d" "MSP-EXP430F5438_HAL\hal_lcd_fonts.d" "MSP-EXP430F5438_HAL\hal_rf.d" "MSP-EXP430F5438_HAL\hal_rtc.d" "MSP-EXP430F5438_HAL\hal_usb.d" "UserExperienceDemo\FFT.d" "UserExperienceDemo\LPM.d" "UserExperienceDemo\PMM.d" "UserExperienceDemo\PowerTest.d" "UserExperienceDemo\UserExperienceGraphics.d" "UserExperienceDemo\UserExperience_F5438A.d" "UserExperienceDemo\adcTemp.d" "UserExperienceDemo\audio.d" "UserExperienceDemo\balanceBall.d" "UserExperienceDemo\clock.d" "UserExperienceDemo\flashUtils.d" "UserExperienceDemo\menuSetting.d" "UserExperienceDemo\usbTest.d" 
	-$(RM) "UserExperienceDemo\5xx_ACTIVE_test.d" "UserExperienceDemo\FFT_430.d" 
	-@echo 'Finished clean'
	-@echo ' '

post-build:
	-@echo 'Create flash image: TI-TXT'
	-"C:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.0.LTS/bin/hex430.exe" --ti_txt "MSP-EXP430F5438UserExperience.out" -o "MSP-EXP430F5438UserExperience.txt" -order MS -romwidth 16
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

