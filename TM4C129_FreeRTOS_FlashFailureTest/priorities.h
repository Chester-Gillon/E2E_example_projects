//*****************************************************************************
//
// priorities.h - Priorities for the various FreeRTOS tasks.
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

#ifndef __PRIORITIES_H__
#define __PRIORITIES_H__

//*****************************************************************************
//
// The priorities of the various tasks.
//
//*****************************************************************************
#define WATCHDOG_TASK_PRIORITY      ( tskIDLE_PRIORITY + 5 )
#define PRIORITY_DIAG_TASK          ( tskIDLE_PRIORITY + 4 )
#define PRIORITY_DIN_TASK	        ( tskIDLE_PRIORITY + 4 )
#define PRIORITY_PLUGINMNG_TASK	    ( tskIDLE_PRIORITY + 4 )
#define PRIORITY_CKCITY_TASK        ( tskIDLE_PRIORITY + 4 )
#define PRIORITY_LED_TASK	  	    ( tskIDLE_PRIORITY + 4 )

#define UART_INT_PRIORITY		(1 << 5)
#define CAN_INT_PRIORITY		(1 << 5)
#define DIN_INT_PRIORITY		(1 << 5)
#define TIMER0A_INT_PRIORITY	(1 << 5)
#define SSI3_INT_PRIORITY		(1 << 5)

#endif // __PRIORITIES_H__
