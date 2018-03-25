A modified version of the tirtos_tivac_2_16_01_14 tcpEcho_EK_TM4C1294XL_TI_TivaTM4C1294NCPDT example in which:
1) Uses the Legacy Non-BSD Sockets Interface, rather than NDK BSD support, to be able to use DNSGetHostByAddr().
2) When a connection is made reports the IP address of the client, and tries to resolve the hostname using DNS.
3) Sets a non-default hostname for the DHCP client.
4) Increase the TCP transmit and receive buffer sizes.
5) Use recvnc() and recvncfree() to remove uncessary copies on receive.
6) When the TCP echo task stops reports the total bytes echoed and the reason for termination.
7) Add modified EMACSnow.c to:
   a) Fix "TivaC NDK TCP: Can't receive large packets (>=1460 bytes)"
      https://e2e.ti.com/support/embedded/tirtos/f/355/t/497052/
   b) Change 'EMACSnow_private to record which types of abnormal interrupts occur.
   c) Rather that using a global variable to communication the pending interrupts from the Hwi to Swi a "trigger" can be used to pass
      the pending interrupts where Swi_or() can be used instead of Swi_post() to ensure if the Hwi gets called more than once before
      Swi runs then no pending interrupts are lost by:
      - Delete the g_ulStatus global variable.
      - Make EMACSnow_handlePackets() call Swi_getTrigger() to get the pending interrupts, rather than reading a global variable.
      - Make EMACSnow_hwiIntFxn() call Swi_or() to set the pending interrupts passed to the Swi.
      - Can also delete the disabling of the interrupts from EMACSnow_hwiIntFxn() and the re-enabling of interrupts from EMACSnow_handlePackets().
        This is because the use of the Swi trigger prevents pending interrupts from being lost.
      
      The above modifications for the communication between the Hwi and Swi are to prevent the test failing due to the Tiva NDK
      due to be being unable to transmit. See below 

   
Problem investigation into resolve RTOS/EK-TM4C1294XL: NDK in TI-RTOS for TivaC 2.16.1.14 can get into a state where unable to transmit packets
https://e2e.ti.com/support/microcontrollers/tiva_arm/f/908/t/674812
===============================================================================================================================================

When start four of the following
tcpSendReceive mytiva. 1000 1 -l4380 -s0

From C:\ti\tirtos_tivac_2_16_01_14\packages\examples\tools

This can be done with the test_traffic.bat batch script.

Then after a period of time the tcpSendReceive programs fail with "[id 1] stopping test. recv returned -1"

And the following errors are reported on the Console:
Starting the TCP Echo example
System provider is set to SysMin. Halt the target to view any SysMin contents in ROV.
Service Status: DHCPC    : Enabled  :          : 000
Service Status: DHCPC    : Enabled  : Running  : 000
Network Added: If-1:192.168.0.3
Service Status: DHCPC    : Enabled  : Running  : 017
tcpHandler: Creating thread clientfd = 537087020  client IP=192.168.0.117
tcpHandler: Connected hostname = DESKTOP-J3GTIS7
tcpWorker: start clientfd = 0x20034c2c
tcpHandler: Creating thread clientfd = 537087788  client IP=192.168.0.117
tcpHandler: Connected hostname = DESKTOP-J3GTIS7
tcpWorker: start clientfd = 0x20034f2c
tcpHandler: Creating thread clientfd = 537088556  client IP=192.168.0.117
tcpHandler: Connected hostname = DESKTOP-J3GTIS7
tcpWorker: start clientfd = 0x2003522c
tcpHandler: Creating thread clientfd = 537086764  client IP=192.168.0.117
tcpHandler: Connected hostname = DESKTOP-J3GTIS7
tcpWorker: start clientfd = 0x20034b2c
pTimeoutRexmt: Retransmit Timeout
tcpWorker stop clientfd=0x20034f2c errno=60 total_rx_bytes=142312040 total_tx_bytes=142312040
tcpWorker stop clientfd=0x20034c2c errno=60 total_rx_bytes=145115240 total_tx_bytes=145115240
pTimeoutRexmt: Retransmit Timeout
tcpWorker stop clientfd=0x2003522c errno=60 total_rx_bytes=139805220 total_tx_bytes=139805220
pTimeoutRexmt: Retransmit Timeout
tcpWorker stop clientfd=0x20034b2c errno=60 total_rx_bytes=137275040 total_tx_bytes=137275040

After the failure the Tiva is not responding to pings, and further attempts to connect fail.
Have to reset to get the networking working again.
ROV doesn't show any errors.


By adding 'EMACSnow.c'::EMACSnow_private to the CCS debug expressions view and selecting Contiuous Refresh the following is observed:
1) While the tcpSendReceive programs on the PC are successfully transfering data, at about 23 Mbps send and receive:
   - The rxCount, txSend and isrCount are increasing at a high rate
   - abnormalInts is increasing slowly. E.g. when test failed isrCounts=3290439 and abnormalInts=226
   - Other counts were zero
   
2) Once the tcpSendReceive stopped exchanging data the txDropped counter started increasing

3) Once the tcpWorker tasks had exited after "Retransmit Timeout" the board was not responding to pings.
   A ping causes the rxCount, txDropped and isrCount to increase.
   
   i.e. the NDK appears to still be able to receive packets but can't transmit.
   
   Example final counts in EMACSnow_private
      rxCount      unsigned int    2125433 0x2003BDC8  
      rxDropped    unsigned int          0 0x2003BDCC  
      txSent       unsigned int    2538585 0x2003BDD0  
      txDropped    unsigned int         92 0x2003BDD4  
      abnormalInts unsigned int        226 0x2003BDD8  
      isrCount     unsigned int    3290439 0x2003BDDC  
      linkUp       unsigned int          4 0x2003BDE0
      
   And the number of bytes transffered:
pTimeoutRexmt: Retransmit Timeout
tcpWorker stop clientfd=0x2003512c errno=60 total_rx_bytes=397565300 total_tx_bytes=397565300
pTimeoutRexmt: Retransmit Timeout
tcpWorker stop clientfd=0x20034f2c errno=60 total_rx_bytes=396566660 total_tx_bytes=396566660
tcpWorker stop clientfd=0x20034c2c errno=60 total_rx_bytes=395505240 total_tx_bytes=395505240
pTimeoutRexmt: Retransmit Timeout
tcpWorker stop clientfd=0x2003532c errno=60 total_rx_bytes=397315640 total_tx_bytes=397315640

4) By the time the tcpWorker had reported a "Retransmit Timeout" the Tiva IP address was no longer shown by the Windows arp command.
   The tests failed after approx 5 or 9 minutes.
   If capture the Ethernet traffic is there a specific pattern prior to the failure?

5) By capturing the traffic no immediate pattern. The PC gets into a state of performing TCP re-transmissions since the Tiva isn't ACKing previous transmissions.
   After 5 seconds of re-transmissions which don't result in an ACK the PC then starts sending ARP requests for the Tiva IP address.
   The first 3 ARP requests go to the Unicast MAC address of the TIVA.
   When those Unicast ARP requests fail to get a response the PC then broadcasts the ARP requests.
   
   Thus the Tiva IP address no longer shown by the Windows arp command is a result of recovery action taken by the Windows network stack after
   failed TCP re-transmissions.
   
6) The only type of abnormal interrupt which occurs is EMAC_INT_RX_NO_BUFFER, which is the "Receive Buffer Unavailable" bit in the
   Ethernet MAC DMA Interrupt Status (EMACDMARIS) register.
    
   "Receive Buffer Unavailable" only occurs while the TCP is still being transferred, and given that after the failure packets can still be
   received by the Tiva appears to be an indication of a temporary lack of receive buffers rather than the cause of the eventual failure
   when the Tiva can't transmit.
   
7) EMACSnow.c is configured with 4 transmit descriptors.
   After the failure condition, where there is no transmission from the Tiva and txDropped is increasing, the state of the transmit descriptors was:
'EMACSnow.c'::EMACSnow_private.pTxDescList->pDescriptors[0].Desc.ui32CtrlStatus unsigned int    0x70100000 (Hex)    0x2003BAF4  
'EMACSnow.c'::EMACSnow_private.pTxDescList->pDescriptors[1].Desc.ui32CtrlStatus unsigned int    0x70100000 (Hex)    0x2003BB18  
'EMACSnow.c'::EMACSnow_private.pTxDescList->pDescriptors[2].Desc.ui32CtrlStatus unsigned int    0x70100000 (Hex)    0x2003BB3C  
'EMACSnow.c'::EMACSnow_private.pTxDescList->pDescriptors[3].Desc.ui32CtrlStatus unsigned int    0x70100000 (Hex)    0x2003BB60  
'EMACSnow.c'::EMACSnow_private.pTxDescList->pDescriptors[0].hPkt    void *  0x2003A9FC  0x2003BB14  
'EMACSnow.c'::EMACSnow_private.pTxDescList->pDescriptors[1].hPkt    void *  0x2003A964  0x2003BB38  
'EMACSnow.c'::EMACSnow_private.pTxDescList->pDescriptors[2].hPkt    void *  0x2003AB2C  0x2003BB5C  
'EMACSnow.c'::EMACSnow_private.pTxDescList->pDescriptors[3].hPkt    void *  0x2003A918  0x2003BB80  

   The ui32CtrlStatus value of 0x70100000 means the descriptor is owned by the host, and is the value when the descriptors
   are idle at the start of the test.
   However, the non-NULL hPkt field means the EMAC driver thinks the descriptor is in use by the DMA.
   With the test running and data being transmitted, a continuous refresh of the descriptors show between 0 and 2 descriptors
   at use at one time, until the failure occurs when all are in use.
   i.e. doesn't appear a gradual resource leak.
   
8) After a failure the contents of the 'EMACSnow.c'::EMACSnow_private.pTxDescList->pDescriptors[].pvBuffer1 buffers match the
   last 4 packets transmitted by the TIVA before the failure.
   
9) After a failure the following can be used to make the Tiva network stack active again:
   a) Set a breakpoint in the EMACSnow_hwiIntFxn() function after has written to g_ulStatus with the interrupt status.
   b) Cause the Tiva to receive an Ethernet packet, e.g. try and ping the Tiva.
   c) Set the least significant bit in g_ulStatus (EMAC_INT_TRANSMIT)
   d) Disable the breakpoint and continue.
   e) Setting the EMAC_INT_TRANSMIT bit in g_ulStatus causes EMACSnow_processTransmitted() to be called.
   f) EMACSnow_processTransmitted() detects that all transmit descriptors have completed transmission, and marks the transmit descriptors as free
      by freeing the pbuf and setting hPkt to NULL.
      
   Therefore, the problem appear to be that a transmit interrupt gets "lost".

10) Use Data Variable Tracing to watch acceses to g_ulStatus, with a breakpoint set when EMACSnow_private.txDropped is incremented.

    The normal pattern for for g_ulStatus to be written in EMACSnow_hwiIntFxn() to give the interrupt mask and read twice in EMACSnow_handlePackets().
    E.g. for a transmit interrupt which is handled:
33800433840,Data_WP:Write:Comp0,Data value,0x10001,,,,,,
33800433840,Data_WP Address Offset:Comp0,Value,0x2003BF8C,,,,,,
33800434228,Data_WP:Read:Comp0,Data value,0x10001,,,,,,
33800434228,Data_WP Address Offset:Comp0,Value,0x2003BF8C,,,,,,
33800434720,Data_WP:Read:Comp0,Data value,0x10001,,,,,,
33800434720,Data_WP Address Offset:Comp0,Value,0x2003BF8C,,,,,,

    In the failure case g_ul_Status written the the value 0x10001 which means a transmit interurpt has occurred,
    but is followed by a write of zero meaning no interrupts have occurred.
    EMACSnow_handlePackets() reads g_ulStatus as zero, resulting in no transmit interrupt processing occurring:
33800476528,Data_WP:Write:Comp0,Data value,0x10001,,,,,,
33800476528,Data_WP Address Offset:Comp0,Value,0x2003BF8C,,,,,,
33800481204,Data_WP:Write:Comp0,Data value,0x0,,,,,,                <--- transmit interrupt flag overwritten before read
33800481204,Data_WP Address Offset:Comp0,Value,0x2003BF8C,,,,,,
33800481708,Data_WP:Read:Comp0,Data value,0x0,,,,,,
33800481708,Data_WP Address Offset:Comp0,Value,0x2003BF8C,,,,,,
33800482084,Data_WP:Read:Comp0,Data value,0x0,,,,,,
33800482084,Data_WP Address Offset:Comp0,Value,0x2003BF8C,,,,,,

   Not sure why EMACSnow_hwiIntFxn() gets re-called with no interrupts pending, but this does show a timing condition under
   which the history of pending interrupts in g_ulStatus get lost.
   
11) As an experiment, commented out the EMACIntDisable() in EMACSnow_hwiIntFxn() and the EMACIntEnable() in EMACSnow_handlePackets().
    The test still failed with the Tiva unable to transmit due to all transmit descriptors being in use.
    0x10001 was written to g_ulStatus meaning a transmit interrupt, but was overwritten by 0x10040() meaning a receive interrupt before being processed:
8299507324,Data_WP:Write:Comp2,Data value,0x10001,,,,,,
8299507324,Data_WP Address Offset:Comp2,Value,0x2003BF8C,,,,,,
8299511972,Data_WP:Write:Comp2,Data value,0x10040,,,,,,                <--- transmit interrupt flag overwritten before read
8299511972,Data_WP Address Offset:Comp2,Value,0x2003BF8C,,,,,,
8299512504,Data_WP:Read:Comp2,Data value,0x10040,,,,,,
8299512504,Data_WP Address Offset:Comp2,Value,0x2003BF8C,,,,,,
8299512936,Data_WP:Read:Comp2,Data value,0x10040,,,,,,
8299512936,Data_WP Address Offset:Comp2,Value,0x2003BF8C,,,,,,

12) An unmodified tcpEcho from TI-RTOS for TivaC 2.16.1.14 was run with a hardware watchpoint triggered onto a write to g_ulStatus with a value of zero.
    The watchpoint was hit when tcpSendReceive was run with:
        ./tcpSendReceive tisoc 1000 1 -s0
        
    This shows that the unmodified example can show the condition where EMACSnow_hwiIntFxn() zeros g_ulStatus before the pending interrupts have been processed.
