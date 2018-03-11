A modified version of the tirtos_tivac_2_16_01_14 tcpEcho_EK_TM4C1294XL_TI_TivaTM4C1294NCPDT example in which:
1) Uses the Legacy Non-BSD Sockets Interface, rather than NDK BSD support, to be able to use DNSGetHostByAddr().
2) When a connection is made reports the IP address of the client, and tries to resolve the hostname using DNS.
3) Sets a non-default hostname for the DHCP client.
