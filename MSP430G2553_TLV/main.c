#include <msp430.h>
#include <stdint.h>

/*
  Compute a checksum on the TLV data area and compare it to the value
  stored there. If they match, return true. Checked before using
  the ADC calibration data and DCO settings stored there.
 */
int tlv_good(void)
{
    int *p, chk, i;

    chk = 0;
    p = (int *)(&TLV_CHECKSUM + 1);
    for(i = 0; i < 31; i++)
        chk ^= *p++;

    chk += TLV_CHECKSUM;
    return ~chk;
}


/*
  Use factory calibration data to correct ADC readings.

  Starts with filtered Q4 fixed point numbers but just throws away the
  fractional bits.

  Remembers if the TLV structure checksum has checked out previously.
 */

uint16_t corrected(int val)
{

    int32_t tmp;
    static int *volatile p = 0;

    if(p || tlv_good())
    {
        p = (int *)&TLV_ADC10_1_TAG;
        tmp = val >> 3;
        tmp *= *(p + CAL_ADC_25VREF_FACTOR/2);
        tmp >>= 16;
        tmp *= *(p+CAL_ADC_GAIN_FACTOR/2);
        tmp >>= 16;
        tmp += *(p+CAL_ADC_OFFSET/2);
        return tmp;
    }
    else
        return val >> 4;

}

/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	
	return corrected (WDTCTL);
}
