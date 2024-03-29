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
/* USER CODE END */

/* Include Files */

#include "sys_common.h"

/* USER CODE BEGIN (1) */
#include "rti.h"
#include "het.h"
#include "gio.h"
/* USER CODE END */

/** @fn void main(void)
*   @brief Application main function
*   @note This function is empty by default.
*
*   This function is called after startup.
*   The user can use this function to implement the application.
*/

/* USER CODE BEGIN (2) */

unsigned int num_interrupts_public;
static unsigned int num_interrupts_static;
#define CV_LENGTH 54
unsigned short cv[CV_LENGTH];
int cv_index;

/* USER CODE END */

int main(void)
{
/* USER CODE BEGIN (3) */

    /* Initialize RTI driver */
    rtiInit();

    /* Set high end timer GIO port hetPort pin direction to all output */
    gioSetDirection(hetPORT1, 0xFFFFFFFF);

    /* Enable RTI Compare 0 interrupt notification */
    rtiEnableNotification(rtiNOTIFICATION_COMPARE0);

    /* Enable IRQ - Clear I flag in CPS register */
    /* Note: This is usually done by the OS or in an svc dispatcher */
#ifdef __clang__
    /* Work-around https://e2e.ti.com/support/tools/code-composer-studio-group/ccs/f/code-composer-studio-forum/1001588/arm-cgt-clang-1_1-3-0-beta-1-_enable_irq-in-ti_compatibility-h-is-a-non-op-for-a-cortex-r4
     * where _enable_IRQ() in ti_compatibility.h is a no-op on Cortex-R. */
    asm (" cpsie i");
#else
    _enable_IRQ();
#endif

    /* Start RTI Counter Block 0 */
    rtiStartCounter(rtiCOUNTER_BLOCK0);

    /* Run forever */
    int index;
    volatile int total_sum = 0;
    int current_sum;
    for (;;)
    {
        current_sum = 0;
        for (index = 0; index < CV_LENGTH; index++)
        {
            current_sum += cv[index];
        }
        total_sum += current_sum;
    }

/* USER CODE END */

    return 0;
}


/* USER CODE BEGIN (4) */
/* Note-You need to remove rtiNotification from notification.c to avoid redefinition */
void rtiNotification(uint32 notification)
{
/*  enter user code between the USER CODE BEGIN and USER CODE END. */
    /* Toggle HET pin 0 */
    gioSetPort(hetPORT1, gioGetPort(hetPORT1) ^ 0x00000001);
    num_interrupts_public++;
    num_interrupts_static++;
    cv[cv_index] += rtiGetCurrentTick (rtiCOMPARE0);
    cv_index = (cv_index + 1) % CV_LENGTH;
}
/* USER CODE END */
