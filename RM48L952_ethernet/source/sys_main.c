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
#include "emac.h"
#include "rti.h"
#include "hw_reg_access.h"
/* USER CODE END */

/** @fn void main(void)
*   @brief Application main function
*   @note This function is empty by default.
*
*   This function is called after startup.
*   The user can use this function to implement the application.
*/

/* USER CODE BEGIN (2) */
extern hdkif_t hdkif_data[1];
static uint8 EthernetTestData[1514];
static pbuf_t MyPacket;

static volatile bool tx_complete;
void emacTxNotification(hdkif_t *hdkif)
{
    tx_complete = true;
}

static volatile uint32 compare0_count;
void rtiNotification(uint32 notification)
{
    if (notification == rtiNOTIFICATION_COMPARE0)
    {
        compare0_count++;
    }
}

/* USER CODE END */

uint8	emacAddress[6U] = 	{0xc4U, 0xffU, 0x87U, 0xf6U, 0x66U, 0x64U};
uint32 	emacPhyAddress	=	1U;

int main(void)
{
/* USER CODE BEGIN (3) */
    int i;

    /* Initialize RTI driver */
    rtiInit();

    /* Enable RTI Compare 0 interrupt notification */
    rtiEnableNotification(rtiNOTIFICATION_COMPARE0);

    _enable_IRQ();
    EMACHWInit(emacAddress);

    /* Start RTI Counter Block 0 */
    rtiStartCounter(rtiCOUNTER_BLOCK0);

    //Destination Broadcast MAC address
    for(i=0;i<6;i++)
    EthernetTestData[i]=0xFF;

    //Source MAC address, which is Unicast.
    //A D-Link DES-3526 doesn't forward packets with a broadcast MAC address, but the 4 port switch in a Plusnet HUB one did.
    //Think a Multicast or Broadcast MAC address is undefined behaviour for if a switch will forward the packet.
    for(i=6;i<12;i++)
         EthernetTestData[i]=emacAddress[i-6];

    //LEN field = 1500 bytes

    EthernetTestData[12]=0x05;
    EthernetTestData[13]=0xDC;

    for(i=14;i<1514;i++)
        EthernetTestData[i]=0x33;


    MyPacket.next = NULL_PTR;
    MyPacket.payload = &EthernetTestData[0];
    MyPacket.tot_len = 1514;
    MyPacket.len = 1514;

    //Transmit 100 frames, 1ms apart

    uint32 tx_count;
    uint32 previous_compare_count = compare0_count;
    uint32 current_compare_count = previous_compare_count;
    for (tx_count = 0; tx_count < 100; tx_count++)
    {
        /* Wait for next 1ms tick */
        do
        {
            current_compare_count = compare0_count;
        } while (current_compare_count == previous_compare_count);
        previous_compare_count = current_compare_count;

       EMACTransmit(hdkif_data, &MyPacket);

       /* Wait for packet to complete transmission before trying again.
        * Without this back-to-back transmissions can fail. */
       while (!tx_complete)
       {
       }
       tx_complete = false;
    }

    while(1)
    {
    }

/* USER CODE END */

    return 0;
}


/* USER CODE BEGIN (4) */
/* USER CODE END */
