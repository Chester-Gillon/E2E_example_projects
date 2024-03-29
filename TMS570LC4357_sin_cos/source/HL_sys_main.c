/** @file HL_sys_main.c 
*   @brief Application main file
*   @date 11-Dec-2018
*   @version 04.07.01
*
*   This file contains an empty main function,
*   which can be used for the application.
*/

/* 
* Copyright (C) 2009-2018 Texas Instruments Incorporated - www.ti.com  
* 
* 
*  Redistribution and use in source and binary forms, with or without 
*  modification, are permitted provided that the following conditions 
*  are met:
*
*    Redistributions of source code must retain the above copyright 
*    notice, this list of conditions and the following disclaimer.
*
*    Redistributions in binary form must reproduce the above copyright
*    notice, this list of conditions and the following disclaimer in the 
*    documentation and/or other materials provided with the   
*    distribution.
*
*    Neither the name of Texas Instruments Incorporated nor the names of
*    its contributors may be used to endorse or promote products derived
*    from this software without specific prior written permission.
*
*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
*  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
*  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
*  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
*/


/* USER CODE BEGIN (0) */
#include <arm_math.h>
/* USER CODE END */

/* Include Files */

#include "HL_sys_common.h"

/* USER CODE BEGIN (1) */
#include "HL_sci.h"
#include "HL_sys_pmu.h"

#include <string.h>
#include <stdio.h>
#include <math.h>

/* USER CODE END */

/** @fn void main(void)
*   @brief Application main function
*   @note This function is empty by default.
*
*   This function is called after startup.
*   The user can use this function to implement the application.
*/

/* USER CODE BEGIN (2) */
void sciDisplayText(const char *const text)
{
    size_t length = strlen (text);
    const uint8 *bytes = (const uint8 *) text;
    while(length--)
    {
        sciSendByte(sciREG1,*bytes++);      /* send out text   */
    };
}

// Clean the data cache.
// ARM Architecture Reference Manual
// B2.2.7 (B2-1286) Performing Cache Maintenance Operations
// From https://e2e.ti.com/support/microcontrollers/arm-based-microcontrollers-group/arm-based-microcontrollers/f/arm-based-microcontrollers-forum/485953/incorrect-cache-enable-disable-procedure-in-rm57-technical-reference-manual
asm("CONST_3FF  .word 0x3ff");
asm("CONST_7FFF .word 0x00007fff");

#define CACHE_CLEAN \
    asm(" MRC p15, #1, r0, c0, c0, #1");  \
    asm(" ANDS R3, R0, #0x07000000");     \
    asm(" MOV R3, R3, LSR #23");          \
    asm(" BEQ Finished");                 \
    asm(" MOV R10, #0");                  \
    asm("Loop1:");                        \
    asm(" ADD R2, R10, R10, LSR #1");     \
    asm(" MOV R1, R0, LSR R2");           \
    asm(" AND R1, R1, #7");               \
    asm(" CMP R1, #2");                   \
    asm(" BLT Skip");                     \
    asm(" MCR p15, #2, R10, c0, c0, #0"); \
    asm(" ISB");                          \
    asm(" MRC p15, #1, R1, c0, c0, #0");  \
    asm(" AND R2, R1, #7");               \
    asm(" ADD R2, R2, #4");               \
    asm(" LDR R4,  CONST_3FF");           \
    asm(" ANDS R4, R4, R1, LSR #3");      \
    asm(" CLZ R5, R4");                   \
    asm(" MOV R9, R4");                   \
    asm("Loop2:");                        \
    asm(" LDR R7, CONST_7FFF");           \
    asm(" ANDS R7, R7, R1, LSR #13");     \
    asm("Loop3:");                        \
    asm(" ORR R11, R10, R9, LSL R5");     \
    asm(" ORR R11, R11, R7, LSL R2");     \
    asm(" MCR p15, #0, R11, c7, c10, #2");\
    asm(" SUBS R7, R7, #1");              \
    asm(" BGE Loop3");                    \
    asm(" SUBS R9, R9, #1");              \
    asm(" BGE Loop2");                    \
    asm("Skip:");                         \
    asm(" ADD R10, R10, #2");             \
    asm(" CMP R3, R10");                  \
    asm(" BGT Loop1");                    \
    asm(" DSB");                          \
    asm("Finished:")

void cache_clean(void)
{
    CACHE_CLEAN;
}

/* A local copy of the _pmuGetCycleCount_() function from sys_pmu.asm, so that the local copy can be placed in SRAM
 * when the timing_tests() is in SRAM to avoid a linker trampoline to call _pmuGetCycleCount_() in flash.
 *
 * The _pmuGetCycleCount_() function can't be placec in SRAM via a ramfunc as that function is called from errata_PBIST_4()
 * during startup before runfunc's have been copied from FLASH to SRAM
 */
#ifdef USE_RAMFUNCS
__attribute__((ramfunc))
#endif
__attribute((naked)) uint32 get_pmu_cycle_count (void)
{
    asm (" mrc   p15, #0, r0, c9, c13, #0");
    asm (" bx    lr");
}

#ifdef USE_RAMFUNCS
__attribute__((ramfunc))
#endif
void timing_tests (void)
{
    char text[80];
    uint32 tic;
    uint32 toc;
    float32 input_rads = 1.2345f;
    float32 input_degs = 70.73163981f;
    float32 sin_val;
    float32 cos_val;
    float output;

    /* Get a measure of overhead of reading cycle counters */
    tic = get_pmu_cycle_count ();
    toc = get_pmu_cycle_count ();
    snprintf (text, sizeof (text), "Cycle count overhead = %u\n\r", toc - tic);
    sciDisplayText (text);

    /* Time standard library math.h functions */
    tic = get_pmu_cycle_count ();
    output = sinf (input_rads);
    toc = get_pmu_cycle_count ();
    snprintf (text, sizeof (text), "sinf(%f)=%f, took %u cycles\n\r", input_rads, output, toc - tic);
    sciDisplayText (text);

    tic = get_pmu_cycle_count ();
    output = cosf (input_rads);
    toc = get_pmu_cycle_count ();
    snprintf (text, sizeof (text), "cosf(%f)=%f, took %u cycles\n\r", input_rads, output, toc - tic);
    sciDisplayText (text);

    /* Time CMSIS DSP Fast Math Functions */
    tic = get_pmu_cycle_count ();
    output = arm_sin_f32 (input_rads);
    toc = get_pmu_cycle_count ();
    snprintf (text, sizeof (text), "arm_sin_f32(%f)=%f, took %u cycles\n\r", input_rads, output, toc - tic);
    sciDisplayText (text);

    tic = get_pmu_cycle_count ();
    output = arm_cos_f32 (input_rads);
    toc = get_pmu_cycle_count ();
    snprintf (text, sizeof (text), "arm_cos_f32(%f)=%f, took %u cycles\n\r", input_rads, output, toc - tic);
    sciDisplayText (text);

    /* Time CMSIS DSP Controller Math Function */
    tic = get_pmu_cycle_count ();
    arm_sin_cos_f32  (input_degs, &sin_val, &cos_val);
    toc = get_pmu_cycle_count ();
    snprintf (text, sizeof (text), "arm_sin_cos_f32(%f)=%f,%f, took %u cycles\n\r", input_degs, sin_val, cos_val, toc - tic);
    sciDisplayText (text);
}
/* USER CODE END */

int main(void)
{
/* USER CODE BEGIN (3) */
#ifdef USE_RAMFUNCS
    /* In _c_int00() _cacheEnable_() is called before __TI_auto_init().
     * I.e. the cache is enabled by the time ramfuncs are copied from FLASH to SRAM, which is effectively self-modifying code.
     * Therefore, need to clean the cache to write-back the ramfuncs into SRAM so that the correct contents is loaded into the
     * instruction cache when the functions are called.
     *
     * Without this cache clean attempting to call the ramfuncs resulted in a pre-fetch abort.
     */
    cache_clean ();
#endif

    sciInit();
    sciDisplayText ("\n\rStarting tests\n\r");

    /* Enable cycle counter */
    _pmuInit_();
    _pmuEnableCountersGlobal_();
    _pmuResetCounters_();
    _pmuStartCounters_(pmuCYCLE_COUNTER);

    uint32_t test_iter;
    for (test_iter = 0; test_iter < 3; test_iter++)
    {
        timing_tests ();
    }
/* USER CODE END */

    return 0;
}


/* USER CODE BEGIN (4) */
/* USER CODE END */
