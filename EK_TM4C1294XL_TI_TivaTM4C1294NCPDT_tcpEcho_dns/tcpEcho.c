/*
 * Copyright (c) 2014-2015, Texas Instruments Incorporated
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
 *    ======== tcpEcho.c ========
 *    Contains BSD sockets code.
 */

#include <string.h>
#include <stdio.h>

#include <xdc/std.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/System.h>

#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/drivers/GPIO.h>

/* */
/* Legacy Non-BSD Sockets Interface to be able to use DNSGetHostByAddr() */
#include <ti/ndk/inc/netmain.h>
#include <ti/ndk/inc/_stack.h>

#include <ti/ndk/inc/stack/inc/routeif.h>

/* Example/Board Header file */
#include "Board.h"

#define NUMTCPWORKERS 3

#define MAC_ADDR_LEN 6

/*
 *  ======== tcpWorker ========
 *  Task to handle TCP connection. Can be multiple Tasks running
 *  this function.
 */
Void tcpWorker(UArg arg0, UArg arg1)
{
    SOCKET  clientfd = (SOCKET)arg0;
    int  bytesRcvd;
    int  bytesSent;
    void *buffer;
    HANDLE handle;
    Bits64 total_rx_bytes = 0;
    Bits64 total_tx_bytes = 0;
    char summary_text[128];

    System_printf("tcpWorker: start clientfd = 0x%x\n", clientfd);
    System_flush ();

    while ((bytesRcvd = recvnc(clientfd, &buffer, 0, &handle)) > 0)
    {
        total_rx_bytes += bytesRcvd;
        bytesSent = send(clientfd, buffer, bytesRcvd, 0);
        recvncfree (handle);
        if (bytesSent < 0 || bytesSent != bytesRcvd) {
            System_printf("Error: send failed.\n");
            break;
        }
        total_tx_bytes += bytesSent;
    }
    snprintf (summary_text, sizeof (summary_text),
            "tcpWorker stop clientfd=0x%x errno=%d total_rx_bytes=%llu total_tx_bytes=%llu\n",
            clientfd, fdError (), total_rx_bytes, total_tx_bytes);
    System_printf("%s", summary_text);
    System_flush ();

    fdClose(clientfd);
}

/*
 *  ======== tcpHandler ========
 *  Creates new Task to handle new TCP connections.
 */
Void tcpHandler(UArg arg0, UArg arg1)
{
    int                status;
    SOCKET             clientfd;
    SOCKET             server;
    struct sockaddr_in localAddr;
    struct sockaddr_in clientAddr;
    int                optval;
    int                optlen = sizeof(optval);
    int                addrlen = sizeof(clientAddr);
    Task_Handle        taskHandle;
    Task_Params        taskParams;
    Error_Block        eb;
    char               client_ip_str[20];
    int                dns_rc;
    char               dns_buffer[512];
    HANDLE             route_handle;
    HANDLE             lli_handle;
    unsigned char      mac_addr[MAC_ADDR_LEN];
    uint32_t           lli_status;
    uint32_t           mac_addr_index;

    server = socket(AF_INET, SOCK_STREAMNC, IPPROTO_TCP);
    if (server == INVALID_SOCKET) {
        System_printf("Error: socket not created.\n");
        goto shutdown;
    }


    memset(&localAddr, 0, sizeof(localAddr));
    localAddr.sin_family = AF_INET;
    localAddr.sin_addr.s_addr = htonl(INADDR_ANY);
    localAddr.sin_port = htons(arg0);

    status = bind(server, (struct sockaddr *)&localAddr, sizeof(localAddr));
    if (status == -1) {
        System_printf("Error: bind failed.\n");
        goto shutdown;
    }

    status = listen(server, NUMTCPWORKERS);
    if (status == -1) {
        System_printf("Error: listen failed.\n");
        goto shutdown;
    }

    optval = 1;
    if (setsockopt(server, SOL_SOCKET, SO_KEEPALIVE, &optval, optlen) < 0) {
        System_printf("Error: setsockopt failed\n");
        goto shutdown;
    }

    while ((clientfd =
            accept(server, (struct sockaddr *)&clientAddr, &addrlen)) != INVALID_SOCKET) {

        System_printf("tcpHandler: Creating thread clientfd = %d  client IP=%s\n", clientfd,
                inet_ntop (AF_INET, &clientAddr.sin_addr, client_ip_str, sizeof (client_ip_str)));
        System_flush ();

        /* Since want to find the route to obtain the client MAC address find only host routes (i.e. non gateway routes) */
        route_handle = RtFind (FLG_RTF_HOST, clientAddr.sin_addr.s_addr);
        if (route_handle != NULL)
        {
            /* Lookup the client MAC address Link Layer Information (LLI) Object associated with the link to the host */
            lli_handle = RtGetLLI (route_handle);
            if (lli_handle != NULL)
            {
                lli_status = LLIGetMacAddr (lli_handle, mac_addr, sizeof (mac_addr));
                if (lli_status == 1)
                {
                    System_printf ("client MAC address=");
                    for (mac_addr_index = 0; mac_addr_index < MAC_ADDR_LEN; mac_addr_index++)
                    {
                        System_printf ("%02x%c", mac_addr[mac_addr_index], (mac_addr_index < (MAC_ADDR_LEN - 1)) ? ':' : '\n');
                    }
                    System_flush ();
                }
            }
        }

        dns_rc = DNSGetHostByAddr (clientAddr.sin_addr.s_addr, dns_buffer, sizeof (dns_buffer));
        if (dns_rc == 0)
        {
            const HOSTENT *const dns_info = (const HOSTENT *) dns_buffer;

            System_printf ("tcpHandler: Connected hostname = %s\n", dns_info->h_name);
            System_flush ();
        }

        /* Init the Error_Block */
        Error_init(&eb);

        /* Initialize the defaults and set the parameters. */
        Task_Params_init(&taskParams);
        taskParams.arg0 = (UArg)clientfd;
        taskParams.stackSize = 1280;
        taskHandle = Task_create((Task_FuncPtr)tcpWorker, &taskParams, &eb);
        if (taskHandle == NULL) {
            System_printf("Error: Failed to create new Task\n");
            System_flush ();
            fdClose(clientfd);
        }

        /* addrlen is a value-result param, must reset for next accept call */
        addrlen = sizeof(clientAddr);
    }

    System_printf("Error: accept failed.\n");

shutdown:
    if (server != INVALID_SOCKET) {
        fdClose(server);
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
    Board_initEMAC();

    System_printf("Starting the TCP Echo example\nSystem provider is set to "
                  "SysMin. Halt the target to view any SysMin contents in"
                  " ROV.\n");
    /* SysMin will only print to the console when you call flush or exit */
    System_flush();

    /* Start BIOS */
    BIOS_start();

    return (0);
}
