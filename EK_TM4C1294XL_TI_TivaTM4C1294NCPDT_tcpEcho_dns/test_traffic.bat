set TIRTOS_ROOT=c:\ti\tirtos_tivac_2_16_01_14
set TEST_PROG=%TIRTOS_ROOT%\packages\examples\tools\tcpSendReceive

start %TEST_PROG% mytiva. 1000 1 -l4380 -s0
start %TEST_PROG% mytiva. 1000 2 -l4380 -s0
start %TEST_PROG% mytiva. 1000 3 -l4380 -s0
start %TEST_PROG% mytiva. 1000 4 -l4380 -s0
rem start %TEST_PROG% mytiva. 1000 5 -l4380 -s0