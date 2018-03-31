//*****************************************************************************
//
// idle_task.c - The FreeRTOS idle task.
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
#include "idle_task.h"
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "semphr.h"
//*****************************************************************************
//
// The stack for the idle task.
//
//*****************************************************************************
uint32_t g_pui32IdleTaskStack[128];

//*****************************************************************************
//
// The number of tasks that are running.
//
//*****************************************************************************
static uint32_t g_ui32Tasks;

//*****************************************************************************
//
// The number of tasks that existed the last time the display was updated (used
// to detect when the display should be updated again).
//
//*****************************************************************************
static uint32_t g_ui32PreviousTasks;

//*****************************************************************************
//
// The number of seconds that the application has been running.  This is
// initialized to -1 in order to get the initial display updated as soon as
// possible.
//
//*****************************************************************************
static uint32_t g_ui32Seconds = 0xffffffff;

//*****************************************************************************
//
// This hook is called by the FreeRTOS idle task when no other tasks are
// runnable.
//
//*****************************************************************************
void
vApplicationIdleHook(void)
{
    uint32_t ui32Temp;

    //
    // Get the number of seconds that the application has been running.
    //
    ui32Temp = xTaskGetTickCount() / (1000 / portTICK_RATE_MS);

    //
    // See if the number of seconds has changed.
    //
    if(ui32Temp != g_ui32Seconds)
    {
        //
        // Update the local copy of the run time.
        //
        g_ui32Seconds = ui32Temp;

    }

    //
    // Get the number of task that are running except idle task.
    //
    g_ui32Tasks = uxTaskGetNumberOfTasks() - 1;

    //
    // See if the number of tasks has changed.
    //
    if(g_ui32Tasks != g_ui32PreviousTasks)
    {
        //
        // Update the local copy of the number of tasks.
        //
        ui32Temp = g_ui32PreviousTasks = g_ui32Tasks;

    }
}
