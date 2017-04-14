################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
main.obj: C:/Users/chris/Downloads/slac227l/5438UE_1_52_00/src/main.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.0.LTS/bin/cl430" -vmspx --abi=eabi --code_model=large --data_model=large -O2 --opt_for_speed=5 -g --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.0.LTS/include" --include_path="C:/ti/ccsv7/ccs_base/msp430/include" --include_path="C:/Users/chris/Downloads/slac227l/5438UE_1_52_00/src/F5xx_F6xx_Core_Lib" --include_path="C:/Users/chris/Downloads/slac227l/5438UE_1_52_00/src/MSP-EXP430F5438_HAL" --include_path="C:/Users/chris/Downloads/slac227l/5438UE_1_52_00/src/UserExperienceDemo" --define=__MSP430F5438A__ --diag_warning=225 --display_error_number --silicon_errata=CPU21 --silicon_errata=CPU22 --silicon_errata=CPU23 --silicon_errata=CPU40 --printf_support=minimal --preproc_with_compile --preproc_dependency="main.d" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

system_pre_init.obj: ../system_pre_init.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.0.LTS/bin/cl430" -vmspx --abi=eabi --code_model=large --data_model=large -O2 --opt_for_speed=5 -g --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.0.LTS/include" --include_path="C:/ti/ccsv7/ccs_base/msp430/include" --include_path="C:/Users/chris/Downloads/slac227l/5438UE_1_52_00/src/F5xx_F6xx_Core_Lib" --include_path="C:/Users/chris/Downloads/slac227l/5438UE_1_52_00/src/MSP-EXP430F5438_HAL" --include_path="C:/Users/chris/Downloads/slac227l/5438UE_1_52_00/src/UserExperienceDemo" --define=__MSP430F5438A__ --diag_warning=225 --display_error_number --silicon_errata=CPU21 --silicon_errata=CPU22 --silicon_errata=CPU23 --silicon_errata=CPU40 --printf_support=minimal --preproc_with_compile --preproc_dependency="system_pre_init.d" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


