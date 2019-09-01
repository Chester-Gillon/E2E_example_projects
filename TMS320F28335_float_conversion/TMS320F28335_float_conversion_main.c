

/**
 * main.c
 */

int ADC_samples[10] =
{
    1522,
    1812,
    2177,
    2488,
    2472,
    0,
    512,
    1024,
    2048,
    4095
};

int main(void)
{
    int *ADC_Buffer = ADC_samples;
    float OutBuff[10];
    int i;

    for(i=0; i < 10; i++)
    {
        OutBuff[i] = ( ( ( (float) *ADC_Buffer ) / 4096 ) * 3.0 ) - 1.5;  // convert ADC data into volts and remove DC offset
        ADC_Buffer++;
    }

	return OutBuff[0];
}
