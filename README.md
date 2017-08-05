# E2E_example_projects
Miscellaneous example projects for answering questions on https://e2e.ti.com

RM46_light_sensor
=================

For https://e2e.ti.com/support/development_tools/code_composer_studio/f/81/p/608704/2240771#2240771

Displays the ADC value from the light sensor on a LAUNCHXL2-RM46 on the serial port.
Developed using CCS 7.2 and HALCoGen 04.06.01.


TM4C_RTC_trim_overflow
======================

For https://e2e.ti.com/support/microcontrollers/tiva_arm/f/908/t/610515

Developed using CCS 7.2 and TivaWare 2.1.4.178.


66AK2H14_C66_system_trace_TCI6638K2K_device_file
================================================

For https://e2e.ti.com/support/development_tools/code_composer_studio/f/81/t/614498

Developed using CCS 7.2

This is a program for running on the C66xx_0 core on a 66AK2H14 on an EVMK2H which repeatidly
modifies a 1 Gbyte array in DDR memory in order to generate test traffic for the hardware trace analyser
type of "Memory Throughput Analysis".

For testing the EVMK2H was set to "DSP no boot mode" and the ..\..\emulation\boards\xtcievmk2x\gel\xtcievmk2x.gel script
used to configure the hardware.

The program has not been optimised for speed, and is updating the 1Gbyte array in approx 40 seconds,
which in theory is performing 26.8 Mbytes/sec read and 26.8 Mbytes/sec write.

The device in the target confguration has been set to TCI6638K2K due to the 66AK2H12 device file not containing
all required entries for tracing (https://e2e.ti.com/support/development_tools/code_composer_studio/f/81/t/511744)


66AK2H14_A15_system_trace_TCI6638K2K_device_file
================================================

As per 66AK2H14_C66_system_trace_TCI6638K2K_device_file, but run on the A15_0 core.


66AK2H14_SMPExample1_CortexA15
==============================

For https://e2e.ti.com/support/development_tools/code_composer_studio/f/81/t/609173

Developed using CCS 7.2, SYS/BIOS 6.46.4.53 and XDCtools 3.30.3.47

Version of SYS/BIOS SMP example project 1 from http://processors.wiki.ti.com/index.php/SMP/BIOS#Example_CCS_Projects
which has been changed to run on the 4 Cortex-A15 cores of a 66AK2H14.

For testing the EVMK2H was set to "DSP no boot mode" and the ..\..\emulation\boards\xtcievmk2x\gel\xtcievmk2x_arm.gel script
used to configure the hardware.

The device in the target confguration has been set to TCI6638K2K due to the 66AK2H12 device file not containing
all required entries for tracing (https://e2e.ti.com/support/development_tools/code_composer_studio/f/81/t/511744)



66AK2H14_SMP_dhrystone_CortexA15
================================

For https://e2e.ti.com/support/development_tools/code_composer_studio/f/81/t/609173

Created from the source files in ti-processor-sdk-rtos-am335x-evm-03.00.00.04\processor_sdk_rtos_am335x_3_00_00_04\demos\posix-smp
and set to run on four Cortex-A15 cores of a 66AK2H14.
This version uses SemiHosting to report the results, which avoids the need for board specific code to enable the UART.

For testing the EVMK2H was set to "DSP no boot mode" and the ..\..\emulation\boards\xtcievmk2x\gel\xtcievmk2x_arm.gel script
used to configure the hardware.

The device in the target confguration has been set to TCI6638K2K due to the 66AK2H12 device file not containing
all required entries for tracing (https://e2e.ti.com/support/development_tools/code_composer_studio/f/81/t/511744)

The time64 clock frequency set in the app.cfg assumes the GEL script has set the SYSCLK1 PLL to 983.04 MHz;
if the SYSCLK1 PLL frequency is different the timing results will be incorrect.

Sample results when the Cortex-A15's are running at 1 GHz CPU frequency:
[CortexA15_0] Starting BIOS...
Dhrystone Benchmark, Version 2.1+Thread (Language: C)
Stage 1: find good iteration count without threads
Attempting 100000 iterations
Attempting 200000 iterations
Attempting 400000 iterations
dhrystones 5695045, dmips=3066
Stage 2: find best number of threads
400000 iterations * 1 threads
[CortexA15_3] dhrystones 5813669, dmips=3130
400000 iterations * 2 threads
dhrystones 11124516, dmips=5990
400000 iterations * 4 threads
[CortexA15_2] dhrystones 22236792, dmips=11974
400000 iterations * 8 threads
[CortexA15_0] dhrystones 22483510, dmips=12107
dhrystone benchmark complete



MSP430FG4618_trig_stack_size
============================

For https://e2e.ti.com/support/development_tools/compiler/f/343/p/614929/2265167#2265167

Developed using CCS 7.2


MSP430G2553_tiny_printf and MSP430G2553_tiny_printf_HOSTwrite
=============================================================

For https://e2e.ti.com/support/development_tools/code_composer_studio/f/81/t/564568

Developed using CCS 7

Primary aim was to get a miniminal printf() which used CIO to fit into the memory of a MSP430G2553,
since the overhead of trying to link the run time library exceeded the device memory.

Secondary aim was to have a post-build rule which runs the cg_xml call_graph utility.

The CG_XML_ROOT build variable is used to set the cg_xml installation directory.


TM4C129_integer_divide_by_zero
==============================

For https://e2e.ti.com/support/development_tools/compiler/f/343/t/615449

Developed using CCS 7.2


TM4C129_selftest
================

For https://e2e.ti.com/support/development_tools/compiler/f/343/t/590562

Developed using CCS 7.1
