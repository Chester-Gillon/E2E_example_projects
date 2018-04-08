/*
 * Copyright (c) 2017, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
/*
 *  ======== MSP_EXP432E401Y_FREERTOS.cmd ========
 *  Define the memory block start/length for the MSP_EXP432P401R M4
 */

/* The starting address of the application.  Normally the interrupt vectors  */
/* must be located at the beginning of the application.                      */
#define RAM_BASE 0x20000000

--stack_size=1024
--heap_size=0       /* minimize heap since we're using heap_4.c */
--entry_point=resetISR

MEMORY
{
    FLASH (RX)           : origin = 0x00000000, length = 0x00090000
    FLASH_TEST_AREA (RX) : origin = 0x00090000, length = 0x00070000
    SRAM (RWX)           : origin = 0x20000000, length = 0x00040000
}

/* Section allocation in memory */

SECTIONS
{
    /* Place the code from portasm.obj which contains the FreeRTOS context switching assembler routines
       in a section with 32-byte alignment, which is one MSP432E4 flash prefetch buffer, and with an optional gap.
       This allows the instructions in xPortPendSVHandler to be adjusted relative to the flash prefetch buffer boundaries
       as this can make the program run or crash.

       As of compiling this program with the TI ARM v18.1.1.LTS compiler and FreeRTOSv10.0.1 a gap of 4 or 8 bytes
       can cause the program to crash when the flash prefetch buffer is enabled. */
    aligned: > FLASH, align(32)
    {
        .+= 4; /* Insert a gap to shift the instructions in portasm.obj relative to a flash prefetch boundary.
                  The gap must be a multiple of 4 bytes due to the .align 4 directives in freertos/portable/CCS/ARM_CM4F/portasm.asm */
        freertos_builds_MSP_EXP432E401Y_release_ccs.lib<portasm.obj>(.text)
    }

    .text   :   > FLASH
    .const  :   > FLASH
    .cinit  :   > FLASH
    .pinit  :   > FLASH
    .init_array : > FLASH

    .vtable :   > RAM_BASE
    .TI.ramfunc : {} load=FLASH, run=SRAM, table(BINIT)
    .data   :   > SRAM
    .bss    :   > SRAM
    .sysmem :   > SRAM
    .stack  :   > SRAM (HIGH)

    .intvecs :  > 0x00000000
}
