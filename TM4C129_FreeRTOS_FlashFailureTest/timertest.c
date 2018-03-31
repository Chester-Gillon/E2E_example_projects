/*
    FreeRTOS V6.1.1 - Copyright (C) 2011 Real Time Engineers Ltd.

    ***************************************************************************
    *                                                                         *
    * If you are:                                                             *
    *                                                                         *
    *    + New to FreeRTOS,                                                   *
    *    + Wanting to learn FreeRTOS or multitasking in general quickly       *
    *    + Looking for basic training,                                        *
    *    + Wanting to improve your FreeRTOS skills and productivity           *
    *                                                                         *
    * then take a look at the FreeRTOS books - available as PDF or paperback  *
    *                                                                         *
    *        "Using the FreeRTOS Real Time Kernel - a Practical Guide"        *
    *                  http://www.FreeRTOS.org/Documentation                  *
    *                                                                         *
    * A pdf reference manual is also available.  Both are usually delivered   *
    * to your inbox within 20 minutes to two hours when purchased between 8am *
    * and 8pm GMT (although please allow up to 24 hours in case of            *
    * exceptional circumstances).  Thank you for your support!                *
    *                                                                         *
    ***************************************************************************

    This file is part of the FreeRTOS distribution.

    FreeRTOS is free software; you can redistribute it and/or modify it under
    the terms of the GNU General Public License (version 2) as published by the
    Free Software Foundation AND MODIFIED BY the FreeRTOS exception.
    ***NOTE*** The exception to the GPL is included to allow you to distribute
    a combined work that includes FreeRTOS without being obliged to provide the
    source code for proprietary components outside of the FreeRTOS kernel.
    FreeRTOS is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
    more details. You should have received a copy of the GNU General Public 
    License and the FreeRTOS license exception along with FreeRTOS; if not it 
    can be viewed here: http://www.freertos.org/a00114.html and also obtained 
    by writing to Richard Barry, contact details for whom are available on the
    FreeRTOS WEB site.

    1 tab == 4 spaces!

    http://www.FreeRTOS.org - Documentation, latest information, license and
    contact details.

    http://www.SafeRTOS.com - A version that is certified for use in safety
    critical systems.

    http://www.OpenRTOS.com - Commercial support, development, porting,
    licensing and training services.
*/

/* High speed timer test as described in main.c. */

#include <stdbool.h>
#include <stdint.h>
/* Scheduler includes. */
#include "FreeRTOS.h"
/* Library includes. */
#include "inc/hw_ints.h"
#include "inc/hw_memmap.h"
#include "inc/hw_types.h"
#include "driverlib/interrupt.h"
#include "driverlib/sysctl.h"
#include "driverlib/timer.h"
#include "driverlib/rom.h"
#include "driverlib/rom_map.h"

/* The set frequency of the interrupt.  Deviations from this are measured as
the jitter. */
#define timerINTERRUPT_FREQUENCY		( 20000UL )

/* The expected time between each of the timer interrupts - if the jitter was
zero. */
#define timerEXPECTED_DIFFERENCE_VALUE	( configCPU_CLOCK_HZ / timerINTERRUPT_FREQUENCY )

/* The highest available interrupt priority. */
#define timerHIGHEST_PRIORITY			( 0 )

/* Misc defines. */
#define timerMAX_32BIT_VALUE			( 0xffffffffUL )


#define TIMER_NO    3
#define TIMER_BASE  TIMER3_BASE
#define TIMER_INT   INT_TIMER3A
/*-----------------------------------------------------------*/

/* Interrupt handler in which the jitter is measured. */
void TimerTestIntHandler( void );

/* Stores the value of the maximum recorded jitter between interrupts. */
volatile unsigned portLONG ulMaxJitter = 0UL;

/* Counts the total number of times that the high frequency timer has 'ticked'.
This value is used by the run time stats function to work out what percentage
of CPU time each task is taking. */
volatile unsigned portLONG ulHighFrequencyTimerTicks = 0UL;
/*-----------------------------------------------------------*/

void vSetupHighFrequencyTimer( void )
{
    unsigned long ulFrequency;

	/* Timer zero is used to generate the interrupts, and timer 1 is used
	to measure the jitter. */
	MAP_SysCtlPeripheralEnable( SYSCTL_PERIPH_TIMER3 );
	MAP_TimerConfigure( TIMER_BASE, TIMER_CFG_PERIODIC );

	/* Set the timer interrupt to be above the kernel - highest. */
	MAP_IntPrioritySet( TIMER_INT, timerHIGHEST_PRIORITY );

	/* Ensure interrupts do not start until the scheduler is running. */
	portDISABLE_INTERRUPTS();

	/* The rate at which the timer will interrupt. */
	ulFrequency = configCPU_CLOCK_HZ / timerINTERRUPT_FREQUENCY;
	MAP_TimerLoadSet( TIMER_BASE, TIMER_A, ulFrequency );
	MAP_TimerIntDisable(TIMER_BASE, TIMER_TIMA_TIMEOUT);
	MAP_TimerIntClear(TIMER_BASE, TIMER_TIMA_TIMEOUT);
	TimerIntRegister(TIMER_BASE, TIMER_A, TimerTestIntHandler);
	//MAP_IntEnable( TIMER_INT ); //Already done in TimerIntRegister
    MAP_TimerIntEnable( TIMER_BASE, TIMER_TIMA_TIMEOUT );

	/* Enable timer. */
    MAP_TimerEnable( TIMER_BASE, TIMER_A );
}
/*-----------------------------------------------------------*/

void TimerTestIntHandler( void )
{
    TimerIntClear( TIMER_BASE, TIMER_TIMA_TIMEOUT );
	/* Keep a count of the total number of 20KHz ticks.  This is used by the
	run time stats functionality to calculate how much CPU time is used by
	each task. */
	ulHighFrequencyTimerTicks++;
}





