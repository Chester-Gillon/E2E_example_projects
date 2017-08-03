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
