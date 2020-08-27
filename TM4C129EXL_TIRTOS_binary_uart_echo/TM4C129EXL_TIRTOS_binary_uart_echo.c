/*
 * Copyright (c) 2015, Texas Instruments Incorporated
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
 *  ======== uartecho.c ========
 */

/* XDCtools Header files */
#include <xdc/std.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Assert.h>

/* BIOS Header files */
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Task.h>

/* TI-RTOS Header files */
#include <ti/drivers/GPIO.h>
#include <ti/drivers/UART.h>

/* Example/Board Header files */
#include "Board.h"

#include <stdint.h>

#define TASKSTACKSIZE     768

Task_Struct task0Struct;
Char task0Stack[TASKSTACKSIZE];
/*
 *  ======== echoFxn ========
 *  Task for this function is created statically. See the project's .cfg file.
 *  This uses UART 2 Tx to UUART 6 Rx looped backed externally on a EK-TM4C1294XL with a wire between
 *  booster pack A2 pins 6 (PD5) and 3 (PP0).
 */
#define BUFFER_LEN 12
int total_rx_bytes;
Void echoFxn(UArg arg0, UArg arg1)
{
    UART_Handle tx_uart;
    UART_Handle rx_uart;
    UART_Params uartParams;
    Uint8 tx_buffer[BUFFER_LEN];
    Uint8 rx_buffer[BUFFER_LEN];
    Uint8 tx_pattern = 1;
    Uint8 rx_pattern = tx_pattern;
    int rc;
    int index;

    /* Create a UART with data processing off. */
    UART_Params_init(&uartParams);
    uartParams.readTimeout = 5000u;
    uartParams.writeDataMode = UART_DATA_BINARY;
    uartParams.readDataMode = UART_DATA_BINARY;
    uartParams.readReturnMode = UART_RETURN_FULL;
    uartParams.readEcho = UART_ECHO_OFF;
    uartParams.baudRate = 115200;
    uartParams.dataLength = UART_LEN_8;
    uartParams.parityType = UART_PAR_EVEN;
    tx_uart = UART_open(Board_UART2, &uartParams);

    if (tx_uart == NULL) {
        System_abort("Error opening the UART");
    }

    rx_uart = UART_open(Board_UART6, &uartParams);

    if (rx_uart == NULL) {
        System_abort("Error opening the UART");
    }

    /* Loop forever echoing */
    while (1) {
        for (index = 0; index < BUFFER_LEN; index++)
        {
            tx_buffer[index] = tx_pattern++;
        }
        rc = UART_write (tx_uart, tx_buffer, BUFFER_LEN);
        Assert_isTrue (rc == BUFFER_LEN, NULL);
        rc = UART_read (rx_uart, rx_buffer, BUFFER_LEN);
        Assert_isTrue (rc == BUFFER_LEN, NULL);
        for (index = 0; index < BUFFER_LEN; index++)
        {
            Assert_isTrue (rx_buffer[index] == rx_pattern, NULL);
            rx_pattern++;
        }
        total_rx_bytes += rc;
    }
}

/*
 *  ======== main ========
 */
int main(void)
{
    /* Call board init functions */
    Board_initGeneral();
    Board_initGPIO();
    Board_initUART();

    /* Construct BIOS objects */
    Task_Params taskParams;

    Task_Params_init(&taskParams);
    taskParams.stackSize = TASKSTACKSIZE;
    taskParams.stack = &task0Stack;
    taskParams.instance->name = "echo";
    Task_construct(&task0Struct, (Task_FuncPtr)echoFxn, &taskParams, NULL);

    /* Turn on user LED */
    GPIO_write(Board_LED0, Board_LED_ON);

    /* This example has logging and many other debug capabilities enabled */
    System_printf("This example does not attempt to minimize code or data "
                  "footprint\n");
    System_flush();

    System_printf("Starting the UART Echo example\nSystem provider is set to "
                  "SysMin. Halt the target to view any SysMin contents in "
                  "ROV.\n");
    /* SysMin will only print to the console when you call flush or exit */
    System_flush();

    /* Start BIOS */
    BIOS_start();

    return (0);
}
