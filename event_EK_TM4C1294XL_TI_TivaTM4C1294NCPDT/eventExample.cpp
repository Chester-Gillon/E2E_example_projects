/*
 * Copyright (c) 2015-2016, Texas Instruments Incorporated
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
 *  ======== event.c ========
 */

/* XDC module Headers */
#include <xdc/std.h>
#include <xdc/runtime/System.h>

/* BIOS module Headers */
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/knl/Event.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/knl/Mailbox.h>
#include <xdc/runtime/Assert.h>
#include <ti/sysbios/hal/Hwi.h> 

#include <string.h>
#include <stdlib.h>

/* Example/Board Header files */
#include "Board.h"

#define TIMEOUT         12      /* Timeout value */

#define TASKSTACKSIZE   4096

#define BUF_SIZE_MAX   1024

typedef unsigned long long uint64;
typedef unsigned int uint32;
typedef unsigned short uint16;
typedef unsigned char uint8;
typedef uint32 uint;

typedef struct MsgObj {
    Int         id;             /* Writer task id */
    Char        val;            /* Message value */
    uint        bufSize;        /* The number of bytes allocated for buf */
    uint8*   buf;
} MsgObj, *Msg;

Void clk0Fxn(UArg arg0);
Void clk1Fxn(UArg arg0);
Void readertask(UArg arg0, UArg arg1);
Void writertask(UArg arg0, UArg arg1);
Void writertask_high(UArg arg0, UArg arg1);

Task_Struct task0Struct, task1Struct, task2Struct;
Char task0Stack[TASKSTACKSIZE], task1Stack[TASKSTACKSIZE], task2Stack[TASKSTACKSIZE];
Event_Struct evtStruct;
Event_Handle evtHandle;
Clock_Struct clk0Struct, clk1Struct;
Clock_Handle clk0Handle, clk1Handle;
Mailbox_Struct mbxStruct;
Mailbox_Handle mbxHandle;

static void CreateMsg(MsgObj* msg, const uint i, const Bool allocate = TRUE)
{
  static uint count = 0;
  uint id;
  uint bufIndex;

  UInt hwiKey = Hwi_disable();

  id = count++;

  Hwi_restore(hwiKey);
  
  msg->id = id;
  msg->val = id + 'a';

  if(allocate)
  {
    uint bufSize = (uint64)rand()*(uint64)BUF_SIZE_MAX/RAND_MAX;

    Assert_isTrue(bufSize <= BUF_SIZE_MAX, bufSize);

    if(0 == bufSize)
    {
      bufSize = 1;
    }

    msg->bufSize = bufSize;
    msg->buf = new uint8[bufSize];

    if(msg->buf)
    {
      for (bufIndex = 0; bufIndex < bufSize; bufIndex++)
      {
        msg->buf[bufIndex] = bufIndex + bufSize;
      }
    }
  }
  else
  {
    msg->buf = NULL;
  }
}

/*
 *  ======== main ========
 */
Int main()
{
    /* Construct BIOS Objects */
    Task_Params taskParams;
    Semaphore_Params semParams;
    Clock_Params clkParams;
    Mailbox_Params mbxParams;

    /* Call board init functions */
    Board_initGeneral();

    /* Construct writer/reader Task threads */
    Task_Params_init(&taskParams);
    taskParams.arg0 = (UArg)mbxHandle;
    taskParams.stackSize = TASKSTACKSIZE;
    
    taskParams.stack = &task0Stack;
    taskParams.priority = 1;
    Task_construct(&task0Struct, (Task_FuncPtr)writertask, &taskParams, NULL);

    taskParams.stack = &task1Stack;
    taskParams.priority = 2;
    Task_construct(&task1Struct, (Task_FuncPtr)readertask, &taskParams, NULL);

    taskParams.stack = &task2Stack;
    taskParams.priority = 3;
    Task_construct(&task2Struct, (Task_FuncPtr)writertask_high, &taskParams, NULL);

    Event_construct(&evtStruct, NULL);

    /* Obtain event instance handle */
    evtHandle = Event_handle(&evtStruct);

    Clock_Params_init(&clkParams);
    clkParams.startFlag = TRUE;
    clkParams.period = 10;
    Clock_construct(&clk0Struct, (Clock_FuncPtr)clk0Fxn,
                    5, &clkParams);

    clkParams.period = 11;
    Clock_construct(&clk1Struct, (Clock_FuncPtr)clk1Fxn,
                    10, &clkParams);

    clk0Handle = Clock_handle(&clk0Struct);
    clk1Handle = Clock_handle(&clk1Struct);

    /* Construct a Mailbox Instance */
    Mailbox_Params_init(&mbxParams);
    mbxParams.readerEvent = evtHandle;
    mbxParams.readerEventId = Event_Id_02;
    Mailbox_construct(&mbxStruct,sizeof(MsgObj), 20, &mbxParams, NULL);
    mbxHandle = Mailbox_handle(&mbxStruct);

    BIOS_start();    /* Does not return */
    return(0);
}

/*
 *  ======== clk0Fxn =======
 */
Void clk0Fxn(UArg arg0)
{
    /* Explicit posting of Event_Id_00 by calling Event_post() */
    Event_post(evtHandle, Event_Id_00);
}

/*
 *  ======== clk1Fxn =======
 */
Void clk1Fxn(UArg arg0)
{  
    MsgObj      msg;
    Int i;

    for (i=0; i< 5; i++) {
    
        CreateMsg(&msg, i, FALSE);

        /* Enqueue message */
        Mailbox_post(mbxHandle, &msg, BIOS_NO_WAIT);
    }
}

/*
 *  ======== reader ========
 */
Void readertask(UArg arg0, UArg arg1)
{
    MsgObj msg;
    UInt posted;

    uint lastId;
    Bool lastIdValid = FALSE;
    uint numIncorrectDataBytes = 0;
    uint bufIndex;

    for (;;) {
        /* Wait for (Event_Id_00 & Event_Id_01) | Event_Id_02 */
        posted = Event_pend(evtHandle,
            0,  /* andMask */
            Event_Id_00 | Event_Id_01 | Event_Id_02,                /* orMask */
            BIOS_WAIT_FOREVER);

        if (posted == 0) {
            System_printf("Timeout expired for Event_pend()\n");
            break;
        }

        
        static UInt count = 0;
        
        Bool shoudPrint = (0 == (++count%10240));

        if (posted & Event_Id_00) 
        {
          if(shoudPrint)
          {
            System_printf("Explicit posting of Event_Id_00\n");
          }
        }
        else if (posted & Event_Id_02) 
        {
            if(shoudPrint)
            {
              System_printf("Implicit posting of Event_Id_02\n");
            }
            if (Mailbox_pend(mbxHandle, &msg, BIOS_NO_WAIT)) 
            {
                if(msg.buf)
                {
                  for (bufIndex = 0; bufIndex < msg.bufSize; bufIndex++)
                  {
                    if (msg.buf[bufIndex] != ((bufIndex + msg.bufSize) & 0xff))
                    {
                      numIncorrectDataBytes++;
                      shoudPrint = TRUE;
                    }
                  }
                  delete[] msg.buf;
                  
                  msg.buf = NULL;
                }

                if(lastIdValid)
                {
                  Assert_isTrue(lastId != msg.id, 0);
                }

                lastId = msg.id;
                lastIdValid = TRUE;
                
                if(shoudPrint)
                {
                  /* Print value */
                  System_printf("read id = %d (numIncorrectDataBytes=%u)\n",msg.id, numIncorrectDataBytes);
                }
            }
            else {
                //System_printf("Mailbox not available. count=%d, post=%d. Test failed!\n", count, posted);
                //break;
            }
        }
        else 
        {
            System_printf("Unknown Event. posted=%d\n", posted);
            break;
        }

        if(shoudPrint)
        {
          System_flush();
        }
    }
    System_flush();
    BIOS_exit(0);
}

/*
 *  ======== writer ========
 */
Void writertask(UArg arg0, UArg arg1)
{
    MsgObj      msg;
    Int i;

    for (i=0; 1; i++) {
        /* Fill in value */
        CreateMsg(&msg, i);

        /* Enqueue message */
        if(!Mailbox_post(mbxHandle, &msg, BIOS_NO_WAIT))
        {
          System_printf("writing message id = %d Failed\n", msg.id, msg.val);
          System_flush();
        }
        else
        {
          //System_printf("writing message id = %d val = '%c' OK\n", msg.id, msg.val);
        }


       // Task_sleep(1);
    }

    System_printf("writer done.\n");
    System_flush();
}

Void writertask_high(UArg arg0, UArg arg1)
{
    MsgObj      msg;
    Int i;

    while(1)
    {
      for (i=0; i< 5; i++)
      {
        CreateMsg(&msg, i);

        /* Enqueue message */
        if(!Mailbox_post(mbxHandle, &msg, BIOS_NO_WAIT))
        {
          System_printf("writing message id = %d Failed\n", msg.id, msg.val);
          System_flush();
        }
        else
        {
          //System_printf("writing message id = %d val = '%c' OK\n", msg.id, msg.val);
        }
      }
      
      Task_sleep(7);
    }

    System_printf("writer done.\n");
    System_flush();
}

