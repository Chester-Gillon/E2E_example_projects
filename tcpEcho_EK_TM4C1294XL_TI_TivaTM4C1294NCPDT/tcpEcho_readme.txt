A modified version of the tirtos_tivac_2_16_01_14 tcpEcho_EK_TM4C1294XL_TI_TivaTM4C1294NCPDT example in which:
1) Uses the Legacy Non-BSD Sockets Interface, rather than NDK BSD support, to be able to use DNSGetHostByAddr().
2) When a connection is made reports the IP address of the client, and tries to resolve the hostname using DNS.
3) Sets a non-default hostname for the DHCP client.
4) Increase the TCP transmit and receive buffer sizes.
5) Use recvnc() and recvncfree() to remove uncessary copies on receive.
6) When the TCP echo task stops reports the total bytes echoed and the reason for termination.
7) Add modified EMACSnow.c to fix "TivaC NDK TCP: Can't receive large packets (>=1460 bytes)"
   https://e2e.ti.com/support/embedded/tirtos/f/355/t/497052/
   
@todo
When start four of the following
tcpSendReceive mytiva. 1000 1 -l4380 -s0

From C:\ti\tirtos_tivac_2_16_01_14\packages\examples\tools

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
