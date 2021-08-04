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
/* USER CODE END */

/* Include Files */

#include "HL_sys_common.h"

/* USER CODE BEGIN (1) */
#include <stdio.h>
/* USER CODE END */

/** @fn void main(void)
*   @brief Application main function
*   @note This function is empty by default.
*
*   This function is called after startup.
*   The user can use this function to implement the application.
*/

/* USER CODE BEGIN (2) */
#pragma diag_push
#pragma diag_suppress 994 /* missing return statement at end of non-void function */
uint32_t get_fpscr (void)
{
    asm volatile (" VMRS r0, FPSCR");
}
#pragma diag_pop

void set_fpscr (const uint32_t new_fpscr)
{
    asm volatile (" VMSR FPSCR, r0");
}

/* Clear the FPSRC accumulated Divide-by-zero bit */
void clear_fpscr_dzc (void)
{
    const uint32_t dzc = 0x2;
    uint32_t fpscr = get_fpscr ();
    fpscr &= ~dzc;
    set_fpscr (fpscr);
}

/* USER CODE END */

int main(void)
{
/* USER CODE BEGIN (3) */
    bool first_pass = true;

    for (;;)
    {
        const volatile double a = 1023.4567;
        const volatile double b = 0.0;
        const volatile uint32_t fpscr_before = get_fpscr ();
        const volatile double c = a / b;
        const volatile uint32_t fpscr_after = get_fpscr ();

        printf ("%g/%g=%g\n", a, b, c);
        printf ("FPSCR before=0x%08x after=0x%08x\n", fpscr_before, fpscr_after);
        clear_fpscr_dzc ();

        if (first_pass)
        {
            /* Enable divide-by-zero exception */
            const uint32_t original_sctlr = __MRC (15, 0, 1, 0, 0);
            const uint32_t dz = 1 << 19;
            const uint32_t new_sctlr = original_sctlr | dz;
            __MCR (15, 0, new_sctlr, 1, 0, 0);
            printf ("Changed SCTLR 0x%08x -> 0x%08x\n", original_sctlr, new_sctlr);
            first_pass = false;
        }
    }
/* USER CODE END */

    return 0;
}


/* USER CODE BEGIN (4) */
/* USER CODE END */