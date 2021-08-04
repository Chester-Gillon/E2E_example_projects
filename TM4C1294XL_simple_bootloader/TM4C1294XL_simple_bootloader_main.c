/*
 * @brief A simple bootloader to demonstrate transferring control a TI-RTOS based application
 * @details This doesn't actually have a mechanism to update the application, nor select the application to run.
 *          Rather it is just a minimal example to transfer control to a TI-RTOS based application which has been placed
 *          in flash with a reset-vector configured with the non-zero address specified in APP_RESET_VECTOR_ADDR.
 *
 *          The mechanism to transfer control to the application is that suggested in:
 *          https://e2e.ti.com/support/legacy_forums/embedded/tirtos/f/ti-rtos-forum-read-only-archived/442971/bootloader-for-sys-bios-app-and-how-to-debug-it/1590218#1590218
 */


#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>

/* driverlib header files */
#include <inc/hw_memmap.h>
#include <driverlib/uart.h>
#include <inc/hw_types.h>
#include <driverlib/sysctl.h>
#include <driverlib/gpio.h>
#include <driverlib/pin_map.h>
#include <inc/hw_nvic.h>

static char message_buffer[128];

/* Address of the reset vector of the application control is transferred to */
#define APP_RESET_VECTOR_ADDR 0x8100
const uint32_t *const app_reset_vector = (const uint32_t *) APP_RESET_VECTOR_ADDR;

/*
 * Transfer control to application in flash, given a pointer to the reset vector which gives the initial stack pointer
 * and the program counter to transfer to.
 *
 * Defined as a naked function as doesn't return and uses inline assembler assuming the reset_vector argument is passed in r0
 */
__attribute__((naked)) static void transfer_to_app (const uint32_t *const reset_vector)
{
    asm (" ldr r1,[r0]");      /* Initial stack pointer */
    asm (" mov sp,r1");
    asm (" ldr r0, [r0, #4]"); /* Initial program counter */
    asm (" bx r0");
}


int main(void)
{
    uint32_t SysClock = SysCtlClockFreqSet((SYSCTL_XTAL_25MHZ |SYSCTL_OSC_MAIN | SYSCTL_USE_PLL |SYSCTL_CFG_VCO_480), 120000000);

    /* Enable UART to allow an indication that the boot loader is running */
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOA);
    while (!SysCtlPeripheralReady (SYSCTL_PERIPH_GPIOA))
    {
    }
    SysCtlPeripheralEnable(SYSCTL_PERIPH_UART0);
    while (!SysCtlPeripheralReady (SYSCTL_PERIPH_UART0))
    {
    }
    SysCtlPeripheralEnable(SYSCTL_PERIPH_UART0);
    GPIOPinConfigure(GPIO_PA0_U0RX);
    GPIOPinConfigure(GPIO_PA1_U0TX);
    GPIOPinTypeUART(GPIO_PORTA_BASE, GPIO_PIN_0 | GPIO_PIN_1);
    UARTConfigSetExpClk(UART0_BASE, SysClock, 115200,
                        UART_CONFIG_WLEN_8 | UART_CONFIG_STOP_ONE | UART_CONFIG_PAR_NONE);

    /* Report that the bootloader is running */
    snprintf (message_buffer, sizeof (message_buffer),
              "\n\rBootloader running\n\rTransfering to application with SP=0x%08x PC=0x%08x\n\r",
              app_reset_vector[0], app_reset_vector[1]);
    const size_t message_len = strlen (message_buffer);
    size_t message_index;
    for (message_index = 0; message_index < message_len; message_index++)
    {
        UARTCharPut (UART0_BASE, message_buffer[message_index]);
    }

    /* Wait until all the message has completed transmission before resetting the UART */
    while (UARTBusy (UART0_BASE))
    {
    }

    /* Reset the peripherals used to output the above message */
    SysCtlPeripheralReset (SYSCTL_PERIPH_UART0);
    SysCtlPeripheralDisable (SYSCTL_PERIPH_UART0);
    SysCtlPeripheralReset (SYSCTL_PERIPH_GPIOA);
    SysCtlPeripheralDisable (SYSCTL_PERIPH_GPIOA);

    /* Set the vector table to the beginning of the application in flash.
     * For the TI-RTOS based application this doesn't seem necessary for the application to run, since TI-RTOS
     * defaults to a minimum set of exception vectors in flash before moving the vector table to RAM and installing
     * device specific interrupt handlers. */
    HWREG(NVIC_VTABLE) = (int32_t) app_reset_vector;

    /* Transfer control to the application - doesn't return */
    transfer_to_app (app_reset_vector);

	return 0;
}
