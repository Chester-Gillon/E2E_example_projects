/** @file sys_main.c 
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

#include "sys_common.h"

/* USER CODE BEGIN (1) */
#include "sci.h"
#include "sys_pmu.h"

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
        sciSendByte(scilinREG,*bytes++);      /* send out text   */
    };
}

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
    tic = _pmuGetCycleCount_ ();
    toc = _pmuGetCycleCount_ ();
    snprintf (text, sizeof (text), "Cycle count overhead = %u\n\r", toc - tic);
    sciDisplayText (text);

    /* Time standard library math.h functions */
    tic = _pmuGetCycleCount_ ();
    output = sinf (input_rads);
    toc = _pmuGetCycleCount_ ();
    snprintf (text, sizeof (text), "sinf(%f)=%f, took %u cycles\n\r", input_rads, output, toc - tic);
    sciDisplayText (text);

    tic = _pmuGetCycleCount_ ();
    output = cosf (input_rads);
    toc = _pmuGetCycleCount_ ();
    snprintf (text, sizeof (text), "cosf(%f)=%f, took %u cycles\n\r", input_rads, output, toc - tic);
    sciDisplayText (text);

    /* Time CMSIS DSP Fast Math Functions */
    tic = _pmuGetCycleCount_ ();
    output = arm_sin_f32 (input_rads);
    toc = _pmuGetCycleCount_ ();
    snprintf (text, sizeof (text), "arm_sin_f32(%f)=%f, took %u cycles\n\r", input_rads, output, toc - tic);
    sciDisplayText (text);

    tic = _pmuGetCycleCount_ ();
    output = arm_cos_f32 (input_rads);
    toc = _pmuGetCycleCount_ ();
    snprintf (text, sizeof (text), "arm_cos_f32(%f)=%f, took %u cycles\n\r", input_rads, output, toc - tic);
    sciDisplayText (text);

    /* Time CMSIS DSP Controller Math Function */
    tic = _pmuGetCycleCount_ ();
    arm_sin_cos_f32  (input_degs, &sin_val, &cos_val);
    toc = _pmuGetCycleCount_ ();
    snprintf (text, sizeof (text), "arm_sin_cos_f32(%f)=%f,%f, took %u cycles\n\r", input_degs, sin_val, cos_val, toc - tic);
    sciDisplayText (text);
}
/* USER CODE END */

int main(void)
{
/* USER CODE BEGIN (3) */
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
