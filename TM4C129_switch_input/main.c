
#include <stdbool.h>
#include <stdint.h>

#include <hw_memmap.h>
#include <sysctl.h>
#include <gpio.h>

uint32_t switch_inputs;

void main(void)
{
    SysCtlPeripheralEnable (SYSCTL_PERIPH_GPIOJ);
    while (!SysCtlPeripheralReady (SYSCTL_PERIPH_GPIOJ))
    {
    }
    GPIOPinTypeGPIOInput (GPIO_PORTJ_BASE, GPIO_PIN_0 | GPIO_PIN_1);
    GPIOPadConfigSet (GPIO_PORTJ_BASE, GPIO_PIN_0 | GPIO_PIN_1, GPIO_STRENGTH_2MA, GPIO_PIN_TYPE_STD_WPU);
    switch_inputs = GPIOPinRead (GPIO_PORTJ_BASE, GPIO_PIN_0 | GPIO_PIN_1);
}
