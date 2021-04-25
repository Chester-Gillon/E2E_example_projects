#include <msp430.h> 

#include <stdint.h>
#include <stdio.h>
#include <time.h>
#include <inttypes.h>

/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	
	struct tm calendarTime;
	calendarTime.tm_year = RTCYEAR - 1970;
	calendarTime.tm_mon = RTCMON - 1;
	calendarTime.tm_mday = RTCDAY;
	calendarTime.tm_hour = RTCHOUR;
	calendarTime.tm_min = RTCMIN;
	calendarTime.tm_sec = RTCSEC;
	time_t seconds = mktime(&calendarTime);
	char debugInfo[48];
#ifdef __TI_TIME_USES_64
#define TIME_T_FMT PRIu64
#else
#define TIME_T_FMT PRIu32
#endif
	snprintf(debugInfo, sizeof (debugInfo), "time_t size = %u, seconds = %010" TIME_T_FMT, sizeof(time_t), seconds);
	printf ("%s\n", debugInfo);

	return 0;
}
