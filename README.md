# E2E_example_projects
Miscellaneous example projects for answering questions on https://e2e.ti.com

RM46_light_sensor
=================

For https://e2e.ti.com/support/development_tools/code_composer_studio/f/81/p/608704/2240771#2240771
and https://e2e.ti.com/support/tools/ccs/f/81/t/798139

Displays the ADC value from the light sensor on a LAUNCHXL2-RM46 on the serial port, and has an empty entry hook.
Developed using CCS 7.2 and HALCoGen 04.07.00.


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

Developed using CCS 9.3, SYS/BIOS 6.46.4.53 and XDCtools 3.30.3.47

Version of SYS/BIOS SMP example project 1 from http://processors.wiki.ti.com/index.php/SMP/BIOS#Example_CCS_Projects
which has been changed to run on the 4 Cortex-A15 cores of a 66AK2H14.

For testing the EVMK2H was set to "DSP no boot mode" and the ..\..\emulation\boards\xtcievmk2x\gel\xtcievmk2x_arm.gel script
used to configure the hardware.


66AK2H14_SMP_dhrystone_CortexA15
================================

For https://e2e.ti.com/support/development_tools/code_composer_studio/f/81/t/609173

Developed using CCS 7.2 and ti-processor-sdk-rtos-k2hk-evm-04.00.00.04

From ti-processor-sdk-rtos-k2hk-evm-04.00.00.04 used:
- SYS/BIOS 6.46.5.55
- k2hk PDK 4.0.6
- XDCtools 3.32.1.22

Created from the source files in ti-processor-sdk-rtos-k2hk-evm-04.00.00.04\processor_sdk_rtos_k2hk_4_00_00_04\demos\posix-smp
and set to run on four Cortex-A15 cores of a 66AK2H14.
This version uses the UART to report the results, and doesn't use SemiHosting.
This avoids any SemiHosting breakpoints occurring when running the program.

For testing the EVMK2H was set to "DSP no boot mode" and the ..\..\emulation\boards\xtcievmk2x\gel\xtcievmk2x_arm.gel script
used to configure the hardware.

The device in the target confguration has been set to TCI6638K2K due to the 66AK2H12 device file not containing
all required entries for tracing (https://e2e.ti.com/support/development_tools/code_composer_studio/f/81/t/511744)

The time64 clock frequency set in the app.cfg assumes the GEL script has set the SYSCLK1 PLL to 983.04 MHz;
if the SYSCLK1 PLL frequency is different the timing results will be incorrect.

Sample results when the Cortex-A15's are running at 1 GHz CPU frequency:
Starting BIOS...
Dhrystone Benchmark, Version 2.1+Thread (Language: C)
Stage 1: find good iteration count without threads
Attempting 100000 iterations
Attempting 200000 iterations
Attempting 400000 iterations
dhrystones 5693973, dmips=3066
Stage 2: find best number of threads
400000 iterations * 1 threads
dhrystones 5555279, dmips=2991
400000 iterations * 2 threads
dhrystones 10671127, dmips=5746
400000 iterations * 4 threads
dhrystones 21325460, dmips=11483
400000 iterations * 8 threads
dhrystones 21319712, dmips=11480
dhrystone benchmark complete


AM5728_SMP_dhrystone_CortexA15
==============================

For https://e2e.ti.com/support/development_tools/code_composer_studio/f/81/t/609173

Developed using CCS 7.2 and ti-processor-sdk-rtos-am57xx-evm-04.00.00.04

From ti-processor-sdk-rtos-am57xx-evm-04.00.00.04 used:
- SYS/BIOS 6.46.5.55
- am57xx PDK 1.0.7
- XDCtools 3.32.1.22

A version of 66AK2H14_SMP_dhrystone_CortexA15, but for running on a dual-core Cortex-A15 in a Beagleboard-X15

For testing halt U-boot and GEL scripts are used to configure the target.
This version uses the UART to report the results, and doesn't use SemiHosting.
This avoids any SemiHosting breakpoints occurring when running the program.

Sample results when the Cortex-A15's are running at 1 GHz CPU frequency:
Dhrystone Benchmark, Version 2.1+Thread (Language: C)
Stage 1: find good iteration count without threads
Attempting 100000 iterations
Attempting 200000 iterations
Attempting 400000 iterations
Attempting 800000 iterations
Attempting 1600000 iterations
Attempting 3200000 iterations
Attempting 6400000 iterations
Attempting 12800000 iterations
dhrystones 5797101, dmips=3121
Stage 2: find best number of threads
12800000 iterations * 1 threads
dhrystones 5678793, dmips=3058
12800000 iterations * 2 threads
dhrystones 11111112, dmips=5983
12800000 iterations * 4 threads
dhrystones 11108700, dmips=5982
dhrystone benchmark complete

Note that while the reported dmips for a single Cortex-A15 core is similar to that for the 66AK2H14 also
with a 1 GHz CPU frequency the number of iterations is ~3.5 larger. That suggests there is an issue in one
of the programs with the CPU and/or timer frequencies actually in use.



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

For https://e2e.ti.com/support/development_tools/compiler/f/343/t/590562,
https://e2e.ti.com/support/development_tools/code_composer_studio/f/81/p/589919/2169517 and
https://e2e.ti.com/support/development_tools/code_composer_studio/f/81/t/660958

Developed using CCS 7.1

This was created as self-test program for a TM4C129 device.
When created also found a problem where the TI ARM v16.9.2.LTS compiler at optimization level 2 unexpectedly
eliminated function where only side-effect is use of the RTS assert macro.

The compiler bug was fixed in the TI ARM v16.9.4.LTS compiler, and the project has been changed to use
the later fixed compiler.

The program sets the clock frequency to the maximum of 120 MHz and then repeatedly performs tests on the flash and SRAM by:

a) Writing a test pattern to 90% of SRAM, which changes for every iteration.

b) Verifying the contents of flash by using a CRC inserted by the linker,
where the CRC hardware module is used to calculate the actual CRC which is compared
against the expected CRC created by the linker.

c) Checking a test pattern in 90% of flash.

d) Checking the test pattern which was written to SRAM.

The only external hardware resource required is one GPIO which is toggled at 1Hz to indicate the program is still running;
the internal 16 MHz PIOSC is used for the clock source to avoid the need for an external crystal.
Every minute the total number of test iterations to far is reported to the CCS CIO console,
as another way of checking the program is still running.
The program is a bare-metal example using TivaWare, and there are therefore no tasks or interrupts.

A test failure will be reported by either:

- The LED stops flashing if the program encounters a hard fault.

- An error message in the CCS CIO console if the program is aborted after detecting an error in the test patterns in SRAM
or flash, assuming the error allows the program to run for long enough to report the error as opposed to getting a hard fault.

The program should be able to be run on any TM4C129 series device with 256 Kbytes of SRAM and 1 Mbyte of flash.
The PROGRESS_LED_PERIPHERAL, PROGRESS_LED_PORT and PROGRESS_LED_PIN macros in the TM4C129_self_test.c need
to changed to select which GPIO pin is toggled to indicate the test is still running.


TM4C129_CPP_calls_returning_pointer
===================================

A failed attempt to re-create the compiler problem reported in https://e2e.ti.com/support/development_tools/compiler/f/343/t/615255

Developed using CCS 7.2 and TI ARM compiler v5.2.6


AM3352_gcc_hello_segger_jlink_linux_failure
===========================================

For https://e2e.ti.com/support/development_tools/code_composer_studio/f/81/t/610504

Developed with CCS 7.2

Simple example which shows Segger J-Link under Linux causing CCS to crash when start a debug session.


TMS320F28379D_vla
=================

For https://e2e.ti.com/support/development_tools/compiler/f/343/t/618973

Developed with CCS 7.2


NIMU_emacExample_EVMK2H_armBiosExample
======================================

For https://e2e.ti.com/support/development_tools/code_composer_studio/f/81/t/619005 and
https://e2e.ti.com/support/development_tools/code_composer_studio/f/81/t/619132

Developed using CCS 7.2 and ti-processor-sdk-rtos-k2hk-evm-04.01.00.06

This is an unmodified version of the NIMU_emacExample_EVMK2H_armBiosExample example, which links to the source files
in the ti-processor-sdk-rtos-k2hk-evm.

From ti-processor-sdk-rtos-k2hk-evm-04.00.00.04 used:
- SYS/BIOS 6.46.5.55
- k2hk PDK 4.0.7
- NDK 2.25.01.11
- XDCtools 3.32.1.22

For testing the EVMK2H was set to "DSP no boot mode" and the ..\..\emulation\boards\xtcievmk2x\gel\xtcievmk2x_arm.gel script
used to configure the hardware.

The device in the target confguration has been set to TCI6638K2K due to the 66AK2H12 device file not containing
all required entries for tracing (https://e2e.ti.com/support/development_tools/code_composer_studio/f/81/t/511744)

Running the testudp program reports a failure on size 1455:
C:\ti\ti-processor-sdk-rtos-k2hk-evm-04.01.00.06\ndk_2_25_01_11\packages\ti\ndk\winapps>testudp.exe 192.168.1.4
IPv4 address

Testing target client at 192.168.1.4:7
Testing UDP packet payloads from 1 to 1472 bytes...
testudp.exe: failed on size 1455

When the testudp test fails the Oversize Receive Frames Register (RXOVERSIZEDFRAMES) at address 0x02090C18
is incrementing.


NIMU_emacExample_EVMK2HC66BiosExampleProject
============================================

Developed using CCS 7.2 and ti-processor-sdk-rtos-k2hk-evm-04.01.00.06

This is a modified version of the NIMU_emacExample_EVMK2HC66BiosExampleProject example, which links to the source files
in the ti-processor-sdk-rtos-k2hk-evm.

From ti-processor-sdk-rtos-k2hk-evm-04.00.00.04 used:
- SYS/BIOS 6.46.5.55
- k2hk PDK 4.0.7
- NDK 2.25.01.11
- XDCtools 3.32.1.22

For testing the EVMK2H was set to "DSP no boot mode" and the ..\..\emulation\boards\xtcievmk2x\gel\xtcievmk2x_arm.gel script
used to configure the hardware.

The modifications:
1) Added the following to the .cfg file to suppress "creating output section "xxx" without a SECTIONS specification" warnings:

     Program.sectMap[".sharedGRL"] = new Program.SectionSpec();
     Program.sectMap[".sharedGRL"] = "L2SRAM";

     Program.sectMap[".sharedPolicy"] = new Program.SectionSpec();
     Program.sectMap[".sharedPolicy"] = "L2SRAM";

2) Added a modified version of pdk_k2hk_4_0_7\packages\ti\transport\ndk\nimu\src\v2\nimu_eth.c in which the Init_MAC()
   has been changed to set the receive maximum length to the correct maximum length of 1518 rather than 1500.

As a result of the the modification the testudp program now passes:
C:\ti\ti-processor-sdk-rtos-k2hk-evm-04.01.00.06\ndk_2_25_01_11\packages\ti\ndk\winapps>testudp.exe 192.168.1.4
IPv4 address

Testing target client at 192.168.1.4:7
Testing UDP packet payloads from 1 to 1472 bytes...
Test loop passed - resetting
Test loop passed - resetting
Test loop passed - resetting
Test loop passed - resetting
Test loop passed - resetting

And ping can now work up the maximum data length of 3012 (imposed by the value of MMALLOC_MAXSIZE in the NDK):
C:\ti\ti-processor-sdk-rtos-k2hk-evm-04.01.00.06\ndk_2_25_01_11\packages\ti\ndk\winapps>ping 192.168.1.4 -l 3012

Pinging 192.168.1.4 with 3012 bytes of data:
Reply from 192.168.1.4: bytes=3012 time=1ms TTL=255
Reply from 192.168.1.4: bytes=3012 time=1ms TTL=255
Reply from 192.168.1.4: bytes=3012 time=1ms TTL=255
Reply from 192.168.1.4: bytes=3012 time=1ms TTL=255

Ping statistics for 192.168.1.4:
    Packets: Sent = 4, Received = 4, Lost = 0 (0% loss),
Approximate round trip times in milli-seconds:
    Minimum = 1ms, Maximum = 1ms, Average = 1ms


NIMU_BasicExample_evmAM572x_armExampleproject
=============================================

Developed using CCS 7.2 and ti-processor-sdk-rtos-am57xx-evm-04.00.00.04

This is an unmodified version of the NIMU_BasicExample_evmAM572x_armExampleproject example, which links to the source files
in the ti-processor-sdk-rtos-am57xx-evm. This example is pingable, but doesn't have an echo server.

From ti-processor-sdk-rtos-am57xx-evm-04.00.00.04 used:
- SYS/BIOS 6.46.5.55
- am5728xx PDK 1.0.7
- NDK 2.25.01.11
- XDCtools 3.32.1.22

For testing halt U-boot and GEL scripts are used to configure the target.


CC2650F128_ccs_hello_world
==========================

For https://e2e.ti.com/support/development_tools/compiler/f/343/t/619549

Developed using CCS 7.2


AM3352_floating_point_printf
============================

For https://e2e.ti.com/support/development_tools/compiler/f/343/t/620465

Developed using CCS 7.2


TMS320C6678_main_with_arguments
===============================

For https://e2e.ti.com/support/development_tools/code_composer_studio/f/81/t/622142

Developed using CCS 7.2


66AK2H14_GCC_class_variables, 66AK2H14_C66_class_variables and AM3352_GCC_class_variables
=========================================================================================

For https://e2e.ti.com/support/development_tools/code_composer_studio/f/81/t/629959

Developed using CCS 7.3


AM3352_GCC_heap_overflow_test
=============================

Developed using CCS 7.3



MSP430FW423_right_shift
=======================

For https://e2e.ti.com/support/development_tools/compiler/f/343/t/639628

Developed using CCS 7.3


TM4C129_peripheral_poll_tight_loop
==================================

For https://e2e.ti.com/support/microcontrollers/tiva_arm/f/908/t/639575

Developed using CCS 7.3



66AK2H14_C66_max_sysbios_heap_size
AM5728_C66_max_sysbios_heap_size
==================================

For https://e2e.ti.com/support/development_tools/compiler/f/343/t/646784 and
https://e2e.ti.com/support/development_tools/code_composer_studio/f/81/t/646983

Developed using CCS 7.3 and SYS/BIOS 6.50.1.12


event_EK_TM4C1294XL_TI_TivaTM4C1294NCPDT
========================================

For https://e2e.ti.com/support/microcontrollers/tiva_arm/f/908/t/651797

Developed using tirtos_tivac_2_16_01_14(bios_6_45_02_31), xdctools_3_32_00_06_core and ti-cgt-arm_15.12.1.LTS


MSP430F5335_asm_absolute_address
================================

For https://e2e.ti.com/support/microcontrollers/msp430/f/166/t/652804

Devleoped using CCS 7.4 and TI MSP430 v16.9.6.LTS 

66AK2H14_A15_sys_bios_heap_track
================================

For https://e2e.ti.com/support/microcontrollers/tiva_arm/f/908/t/651797

Developed using:
- CCS 7.4
- SYS/BIOS 6.50.1.12
- XDCtools 3.50.4.43
- GNU v4.9.3


MSP430F6659_max_heap_size
=========================

For https://e2e.ti.com/support/development_tools/compiler/f/343/t/666255

Developed using CCS 7.4 and TI MSP430 v17.9.0 and v18.1.0


MSP430FR5994_max_heap_size
==========================

For https://e2e.ti.com/support/development_tools/compiler/f/343/t/666898

Developed using CCS 7.4 and TI MSP430 v17.9.0 and v18.1.0


tcpEcho_EK_TM4C1294XL_TI_TivaTM4C1294NCPDT
==========================================

For https://e2e.ti.com/support/microcontrollers/tiva_arm/f/908/t/666442

Developed using CCS 7.4 and tirtos_tivac_2_16_01_14


TM4C129_FreeRTOS_FlashFailureTest
=================================

For https://e2e.ti.com/support/microcontrollers/tiva_arm/f/908/t/671683

Developed using CCS 8.0, TivaWare_C_Series-2.1.4.178 and TI ARM v16.9.7.LTS


TM4C_find_rom_size
==================

For https://e2e.ti.com/support/microcontrollers/tiva_arm/f/908/t/671683

Developed using CCS 8.0, TivaWare_C_Series-2.1.4.178 and TI ARM v16.9.2.LTS


TM4C_read_rom_symbols and TM4C_rom_symbols
==========================================

For https://e2e.ti.com/support/microcontrollers/tiva_arm/f/908/t/671683 and
https://e2e.ti.com/support/development_tools/compiler/f/343/t/676981

Developed using CCS 8.0, TivaWare_C_Series-2.1.4.178 and TI ARM v18.1.1.LTS


TM4C129_max_heap_size
=====================

For https://e2e.ti.com/support/microcontrollers/tiva_arm/f/908/t/678113

Developed using CCS 8.0, TivaWare_C_Series-2.1.4.178 and TI ARM v18.1.1.LTS


FlashTestFailure_MSP_EXP432E401Y_freertos_ccs and freertos_builds_MSP_EXP432E401Y_release_ccs
=============================================================================================

For https://e2e.ti.com/support/microcontrollers/msp430/f/166/t/678603

Developed using:
- CCS 8.0
- TI ARM compiler v18.1.1.LTS
- simplelink_msp432e4_sdk_2_10_00_17
- FreeRTOSv10.0.1


MSP432_string_truncation
========================

For https://e2e.ti.com/support/development_tools/compiler/f/343/t/684878

Developed using:
- CCS 8.0
- TI ARM compiler v18.1.1.LTS


MSP432E401Y_virtual_inheritence
===============================

For https://e2e.ti.com/support/development_tools/code_composer_studio/f/81/t/682335

Developed using:
- CCS 8.0
- TI ARM compiler v18.1.1.LTS
- GNU ARM compiler v7.2.1


66AK2H14_A15_cpp_ctype
======================

For https://e2e.ti.com/support/development_tools/code_composer_studio/f/81/t/713517

Developed using:
- CCS 8.1
- Various GCC ARM compilers


MSP430FR5994_timer
==================

For https://e2e.ti.com/support/development_tools/code_composer_studio/f/81/t/717946

Developed using:
- CCS 8.1
- TI MSP430 compiler v18.1.3.LTS


TM4C_sprintf_stack_usage
========================

For https://e2e.ti.com/support/development_tools/code_composer_studio/f/81/t/716230
Developed using:
- CCS 8.1
- TI ARM compiler v18.1.3.LTS
- cg_xml 2.50.00


66AK2H14_C66_rts_multiple_files
===============================

For https://e2e.ti.com/support/tools/ccs/f/81/t/735807
Developed using:
- CCS 8.2
- TI C6000 compiler v8.2.4


66AK2H14_C66_BIOS_multiple_files
================================

For https://e2e.ti.com/support/tools/ccs/f/81/t/735807
Developed using:
- CCS 8.2
- TI C6000 compiler v8.2.4
- SYS/BIOS 6.45.01.29
- XDCtools 3.32.00.06 core


AM5728_PRU_debug and AM3359_PRU_debug
=====================================

For https://e2e.ti.com/support/tools/ccs/f/81/t/743346
Developed using:
- CCS 8.2
- TI PRU compiler v2.3.1


AM3359_PRU_led_toggle
=====================

For https://e2e.ti.com/support/tools/ccs/f/81/t/753813
Developed using:
- CCS 8.3
- TI PRU compiler v2.3.1


AM3359_struct_padding
=====================

For https://e2e.ti.com/support/tools/ccs/f/81/t/757939
Developed using:
- CCS 8.3
- TI ARM compiler v5.2.5


AM5728_GCC_class_variables
==========================

For https://e2e.ti.com/support/tools/ccs/f/81/t/758130
Developed using:
- CCS 8.3
- GCC ARM compiler v6.3.1


66AK2H14_C66_BIOS_binary_file_io
================================

For https://e2e.ti.com/support/tools/ccs/f/81/t/760355
Developed using:
- CCS 8.3
- TI C6000 compiler v8.2.5
- SYS/BIOS 6.73.1.01


66AK2H14_A15_BIOS_binary_file_io
================================

For https://e2e.ti.com/support/tools/ccs/f/81/t/760355
Developed using:
- CCS 8.3
- GCC ARM compiler v6.3.1
- SYS/BIOS 6.73.1.01


66AK2H14_A15_bare_metal_binary_file_io
======================================

For https://e2e.ti.com/support/tools/ccs/f/81/t/760355
Developed using:
- CCS 8.3
- GCC ARM compiler v7.2.1


TMS570LC43x_flash_erase and example_TI_Fee_Write_Read
=====================================================

For https://e2e.ti.com/support/tools/ccs/f/81/t/767284
Developed using:
- HALCoGen v04.07.00
- F021 Flash API v02.01.01
- TI ARM compiler v18.1.5
- CCS 8.3


AM5728_C66_SYSBIOS_1GB_heap
===========================

For https://e2e.ti.com/support/processors/f/791/t/770718
Developed using:
- CCS 8.3
- TI C6000 compiler v8.2.5
- SYS/BIOS v6.73.1.01
- XDCtools 3.51.1.18_core


66AK2H14_A15_3840M_heap
=======================

For https://e2e.ti.com/support/processors/f/791/t/744238
Developed using:
- CCS 8.3
- GNU ARM compiler v7.2.1
- SYS/BIOS 6.75.1.05
- XDCtools 3.51.1.18_core


66AK2H14_A15_gcc_abi_hard
=========================

For https://e2e.ti.com/support/tools/ccs/f/81/t/780727
Developed using:
- CCS 8.3
- GNU ARM compiler v7.2.1


66AK2H14_link_binary_blob
=========================

For https://e2e.ti.com/support/tools/ccs/f/81/t/792875
Developed using:
- CCS 9.0.1
- TI C6000 compiler v8.3.2
- GNU ARM compiler v7.2.1


TMS320C6678_clock_gettime
=========================

For https://e2e.ti.com/support/processors/f/791/t/796647
Developed using:
- CCS 8.3
- TI C6000 compiler v8.3.2
- SYS/BIOS 6.75.2.0
- XDCtools 3.55.0.11


TM4C123_freertos_demo_software_timers
=====================================

For https://e2e.ti.com/support/tools/ccs/f/81/t/801116
Developed using:
- CCS 9.0.1
- TI ARM compiler v5.2.6
- TivaWare_C_Series-2.1.4.178


TM4C129_GEL_exception_stack_unwind
==================================

For https://e2e.ti.com/support/tools/ccs/f/81/t/810598
Developed using:
- CCS 9.1.0
- TI ARM compiler v18.12.2.LTS


TMS320F28335_float_conversion
=============================

For https://e2e.ti.com/support/tools/ccs/f/81/t/835171
Developed using:
- CCS 9.1.0
- TI C2000 compiler v19.6.0.STS


TM4C123_cpp_exceptions
======================

For https://e2e.ti.com/support/tools/ccs/f/81/t/859583
Developed using:
- CCS 9.2.0
- TI ARM compiler 18.12.4


TMS570LC4357_emac_status
========================

For https://e2e.ti.com/support/microcontrollers/hercules/f/312/t/858377
Developed using:
- CCS 9.2.0
- TI ARM compiler 18.12.4


EK-TM4C123GXL_grlib_demo_no_touch_no_resistors_remove
=====================================================

For https://e2e.ti.com/support/microcontrollers/other/f/908/t/862746
Developed using:
- CCS 9.2.0
- TI ARM compiler v5.2.6


MSP430F5528_blinky_filled_flash
===============================

For https://e2e.ti.com/support/microcontrollers/msp430/f/166/t/867670
Developed using:
- CCS 9.3.0
- TI ARM compiler v18.12.4.LTS


MSP430L092_blinky_duty_cycle
============================

For https://e2e.ti.com/support/tools/ccs/f/81/t/869109
Developed using:
- CCS 9.3.0
- TI MSP430 compiler v18.12.4.LTS


MSP430L092_read_reset_source
============================

For https://e2e.ti.com/support/tools/ccs/f/81/t/866284
Developed using:
- CCS 9.3.0
- TI MSP430 compiler v18.12.4.LTS


CC430F5137_UART_echo_toggle_led
===============================

For https://e2e.ti.com/support/microcontrollers/msp430/f/166/t/863540
Developed using:
- CCS 9.3.0
- TI MSP430 compiler v18.12.4.LTS


MSP430_crash_on_enable_disable_timer_int
========================================

For https://e2e.ti.com/support/microcontrollers/msp430/f/166/t/895839
Developed using:
- CCS 10.0.0
- TI MSP compiler v20.2.1


MSP430F5438A_linker_variable_order
==================================

For https://e2e.ti.com/support/microcontrollers/msp430/f/166/t/901697
Developed using:
- CCS 10.0.0
- TI MSP compiler v18.12.5


MSP432P401R_link_binary_blob
============================

For https://e2e.ti.com/support/tools/ccs/f/81/t/901982
Developed using:
- CCS 10.0.0
- TI ARM compiler v20.2.1


MSP430FR5994_command_structure
==============================

For https://e2e.ti.com/support/tools/ccs/f/81/t/907757
Developed using:
- CCS 10.0.0
- TI MSP430 compiler v20.2.1


MSP432_coremark
===============

For https://e2e.ti.com/support/microcontrollers/msp430/f/166/t/910377
Developed using:
- CCS 10.0.0
- TI ARM compiler v20.2.1


RM48L952_rtiblinky
==================

For https://e2e.ti.com/support/tools/ccs/f/81/t/913701
Developed using:
- CCS 10.0.0
- TI ARM compiler v20.2.1
- HalCoGen 04.07.01


MSP430FR4133_lcd_driverlib_linked_folder
========================================

For https://e2e.ti.com/support/microcontrollers/msp430/f/166/t/914022
Developed using:
- CCS 10.0.0
- TI MSP430 compiler v20.2.1


MSP432_estimate_wait_state_cycles
=================================

For https://e2e.ti.com/support/microcontrollers/msp430/f/166/t/910377
Developed using:
- CCS 10.0.0
- TI ARM compiler v20.2.1

