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
/* Include FreeRTOS scheduler files */
#include "FreeRTOS.h"
#include "os_task.h"

/* Include HET header file - types, definitions and function declarations for system driver */
#include "HL_het.h"
#include "HL_gio.h"

static uint32_t RTOS_RunTimeCounter; /* runtime counter, used for configGENERATE_RUNTIME_STATS */


/* This is a variation of the suggestion in
 * https://e2e.ti.com/support/microcontrollers/arm-based-microcontrollers-group/arm-based-microcontrollers/f/arm-based-microcontrollers-forum/1078724/tms570lc4357-configgenerate_run_time_stats/3993182#3993182
 * which configures RTI compare 1 compare register and compare 1 update compare register to use 10*configTICK_RATE_HZ
 * for run time counter.
 *
 * The suggestion in the thread was to modify the HALGoGen modified prvSetupTimerInterrupt function in os_port.c.
 * However, the suggested modification would be overwritten when HALCoGen re-generates the code as there are no
 * USER CODE blocks in the generated prvSetupTimerInterrupt().
 *
 * The split is:
 * a. RTOS_AppConfigureTimerForRuntimeStats() set the RTI1 compare registers.
 *    This is called prior to prvSetupTimerInterrupt() which initialises the portRTI_SETINTENA_REG register with a fixed value.
 *    Therefore, any change to portRTI_SETINTENA_REG in RTOS_AppConfigureTimerForRuntimeStats() gets overwritten when
 *    prvSetupTimerInterrupt runs ()
 * b. RTOS_AppGetRuntimeCounterValueFromISR() enables the RTI1 compare interrupt on the first call.
 *
 * @todo Add the RTI driver to the HALCoGen project so can use it's register definitions rather than the following #defines taken
 *       from the thread.
 */
#define portRTI_CNT0_COMP1_REG  ( * ( ( volatile uint32_t * ) 0xFFFFFC5C ) )
#define portRTI_CNT0_UDCP1_REG  ( * ( ( volatile uint32_t * ) 0xFFFFFC60 ) )
#define portRTI_SETINTENA_REG   ( * ( ( volatile uint32_t * ) 0xFFFFFC80 ) )

void RTOS_AppConfigureTimerForRuntimeStats(void)
{
    RTOS_RunTimeCounter = 0;
    portRTI_CNT0_COMP1_REG = ( configCPU_CLOCK_HZ / 2 ) / configTICK_RATE_HZ / 10; //QJ
    portRTI_CNT0_UDCP1_REG = ( configCPU_CLOCK_HZ / 2 ) / configTICK_RATE_HZ / 10; //QJ
}

#pragma INTERRUPT(vPortRTOSRunTimeISR, IRQ)
void vPortRTOSRunTimeISR(void)
{
    /* Clear interrupt flag.*/
    //rtiREG1->INTFLAG = 2U;
    *((volatile uint32_t *) 0xFFFFFC88) = 2U;
    RTOS_RunTimeCounter++;    /* increment runtime counter */
}

uint32_t RTOS_AppGetRuntimeCounterValueFromISR(void)
{
    if ((portRTI_SETINTENA_REG & 2) == 0)
    {
        portRTI_SETINTENA_REG |= 0x00000002U; //QJ
    }

    return RTOS_RunTimeCounter;
}

/* Define Task Handles */
xTaskHandle xTask1Handle;

/* Task1 */
void vTask1(void *pvParameters)
{
    for(;;)
    {
        /* Taggle HET[1] with timer tick */
        gioSetBit(hetPORT1, 17, gioGetBit(hetPORT1, 17) ^ 1);
        vTaskDelay(100);
    }
}
/* USER CODE END */

/** @fn void main(void)
*   @brief Application main function
*   @note This function is empty by default.
*
*   This function is called after startup.
*   The user can use this function to implement the application.
*/

/* USER CODE BEGIN (2) */
/* USER CODE END */

int main(void)
{
/* USER CODE BEGIN (3) */

    /* Set high end timer GIO port hetPort pin direction to outputs used by this program */
    gioSetDirection(hetPORT1, 1 << 17);


    /* Create Task 1 */
    if (xTaskCreate(vTask1,"Task1", configMINIMAL_STACK_SIZE, NULL, 1, &xTask1Handle) != pdTRUE)
    {
        /* Task could not be created */
        while(1);
    }

    /* Start Scheduler */
    vTaskStartScheduler();

    /* Run forever */
    while(1);
/* USER CODE END */

    return 0;
}


/* USER CODE BEGIN (4) */
/* USER CODE END */
