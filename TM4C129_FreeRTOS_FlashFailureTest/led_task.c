//*****************************************************************************
//
// led_task.c - A simple flashing LED task.
//
// Copyright (c) 2009-2015 Texas Instruments Incorporated.  All rights reserved.
// Software License Agreement
// 
// Texas Instruments (TI) is supplying this software for use solely and
// exclusively on TI's microcontroller products. The software is owned by
// TI and/or its suppliers, and is protected under applicable copyright
// laws. You may not combine this software with "viral" open-source
// software in order to form a larger program.
// 
// THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
// NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
// NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. TI SHALL NOT, UNDER ANY
// CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
// DAMAGES, FOR ANY REASON WHATSOEVER.
// 
// This is part of revision 2.1.1.71 of the DK-TM4C129X Firmware Package.
//
//*****************************************************************************

#include <stdint.h>
#include <stdbool.h>
#include "inc/hw_memmap.h"
#include "inc/hw_types.h"
#include "driverlib/gpio.h"
#include "driverlib/rom.h"
#include "utils/uartstdio.h"
#include "idle_task.h"
#include "led_task.h"
#include "priorities.h"
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "semphr.h"
#include "drivers/pinout.h"

#ifdef WDT_ENABLED
#include "watchdog.h"
#endif

//*****************************************************************************
//
// The amount of time to delay between toggles of the LED.
//
//*****************************************************************************
typedef struct
{
	uint32_t 	LED;
	uint32_t	LEDDelay;
}g_tLED;

g_tLED g_LED[3] = {LED1, 1000, LED_ETH_ORANGE, 500, LED_ETH_GREEN, 250};

//*****************************************************************************
// array of LEDs.
//*****************************************************************************
uint32_t g_ui32LED[3] = {0,1,2};
//*****************************************************************************
// bitmap of active LEDs.
//*****************************************************************************
uint32_t g_ui32LEDActive = 0;

TaskHandle_t    __led1_taskhdl;


//*****************************************************************************
//
// This task simply toggles the user LED at a 1 Hz rate.
//
//*****************************************************************************
static void
LEDTask(void *pvParameters)
{
    TickType_t ui32LastTime;
    int32_t i32LedDelay, i32Led;
    static uint32_t led_state = 0;

    //
    // Get the LED number from the parameter.
    //
    i32Led = g_LED[(*(int32_t*)pvParameters)].LED;
    //
    // Get the current tick count.
    //
    ui32LastTime = xTaskGetTickCount();

    i32LedDelay = g_LED[(*(int32_t*)pvParameters)].LEDDelay;
    //
    // Loop forever.
    //
    while(1)
    {
#ifdef WDT_ENABLED
        wd_alive(LED_ALIVE);
#endif
        //
    	if (LED1 == i32Led)
    	{
    	    i32LedDelay = g_LED[(*(int32_t*)pvParameters)].LEDDelay;
    	}
        // Turn on/off the user LED.
        //
    	if (led_state)
    	{
			LEDWrite(i32Led, i32Led);
    		led_state = 0;
    	}
    	else
    	{
			LEDWrite(i32Led, 0);
    		led_state = 1;
    	}
        //
        // Wait for the required amount of time.
        //
#ifdef WDT_ENABLED
        vTaskDelayUntil(&ui32LastTime, i32LedDelay / 2 / portTICK_RATE_MS);
        wd_alive(LED_ALIVE);
        vTaskDelayUntil(&ui32LastTime, i32LedDelay / 2 / portTICK_RATE_MS);
#else
        vTaskDelayUntil(&ui32LastTime, i32LedDelay / portTICK_RATE_MS);
#endif

        //
        // Turn off the user LED.
        //
        //LEDWrite(i32Led, 0);

        //
        // Wait for the required amount of time.
        //
        //vTaskDelayUntil(&ui32LastTime, i32LedDelay / portTICK_RATE_MS);
    }
}

//*****************************************************************************
//
// Initializes the LED task.
//
//*****************************************************************************
void
LEDTaskInit(void)
{
    //
    // Create the LED task.
    //

    xTaskCreate(LEDTask, "LED1", LEDTASK_STACK_SIZE, &g_ui32LED[0],
                   tskIDLE_PRIORITY + PRIORITY_LED_TASK, &__led1_taskhdl);
    configASSERT( __led1_taskhdl );
}

void
LEDTaskDelete(void)
{
    if (__led1_taskhdl != NULL)
    {
        vTaskDelete(__led1_taskhdl);
    }
}
