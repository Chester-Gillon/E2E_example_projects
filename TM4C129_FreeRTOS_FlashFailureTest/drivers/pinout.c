//*****************************************************************************
//
// pinout.c - Function to configure the device pins on the EK-TM4C1294XL.
//
// Copyright (c) 2013-2015 Texas Instruments Incorporated.  All rights reserved.
// Software License Agreement
// 
// Texas Instruments (TI) is supplying this software for use solely and
// exclusively on TI's microcontroller products. The software is owned by
// TI and/or its suppliers, and is protected under applicable copyright
// laws. You may not combine this software with "viral" open-source
// software in order to form a larger program.
// 
// THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
// NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
// NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. TI SHALL NOT, UNDER ANY
// CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
// DAMAGES, FOR ANY REASON WHATSOEVER.
// 
// This is part of revision 2.1.1.71 of the EK-TM4C1294XL Firmware Package.
//
//*****************************************************************************

#include <stdbool.h>
#include <stdint.h>
#include "inc/hw_gpio.h"
#include "inc/hw_memmap.h"
#include "inc/hw_types.h"
#include "driverlib/gpio.h"
#include "driverlib/pin_map.h"
#include "driverlib/rom.h"
#include "driverlib/rom_map.h"
#include "driverlib/sysctl.h"
#include "pinout.h"

//*****************************************************************************
//
//! \addtogroup pinout_api
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
//! Configures the device pins for the standard usages on the EK-TM4C1294XL.
//!
//! \param bEthernet is a boolean used to determine function of Ethernet pins.
//! If true Ethernet pins are  configured as Ethernet LEDs.  If false GPIO are
//! available for application use.
//! \param bUSB is a boolean used to determine function of USB pins. If true USB
//! pins are configured for USB use.  If false then USB pins are available for
//! application use as GPIO.
//!
//! This function enables the GPIO modules and configures the device pins for
//! the default, standard usages on the EK-TM4C1294XL.  Applications that
//! require alternate configurations of the device pins can either not call
//! this function and take full responsibility for configuring all the device
//! pins, or can reconfigure the required device pins after calling this
//! function.
//!
//! \return None.
//
//*****************************************************************************
void
PinoutSet(bool bEthernet, bool bUSB)
{
    //
    // Disable all the GPIO peripherals.
    //
    ROM_SysCtlPeripheralDisable(SYSCTL_PERIPH_GPIOA);
    ROM_SysCtlPeripheralDisable(SYSCTL_PERIPH_GPIOB);
    ROM_SysCtlPeripheralDisable(SYSCTL_PERIPH_GPIOC);
    ROM_SysCtlPeripheralDisable(SYSCTL_PERIPH_GPIOD);
    ROM_SysCtlPeripheralDisable(SYSCTL_PERIPH_GPIOE);
    ROM_SysCtlPeripheralDisable(SYSCTL_PERIPH_GPIOF);
    ROM_SysCtlPeripheralDisable(SYSCTL_PERIPH_GPIOG);
    ROM_SysCtlPeripheralDisable(SYSCTL_PERIPH_GPIOH);
    ROM_SysCtlPeripheralDisable(SYSCTL_PERIPH_GPIOJ);
    ROM_SysCtlPeripheralDisable(SYSCTL_PERIPH_GPIOK);
    ROM_SysCtlPeripheralDisable(SYSCTL_PERIPH_GPIOL);
    ROM_SysCtlPeripheralDisable(SYSCTL_PERIPH_GPIOM);
    ROM_SysCtlPeripheralDisable(SYSCTL_PERIPH_GPION);
    ROM_SysCtlPeripheralDisable(SYSCTL_PERIPH_GPIOP);
    ROM_SysCtlPeripheralDisable(SYSCTL_PERIPH_GPIOQ);

    //
    // Enable all the GPIO peripherals.
    //
    ROM_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOA);
    ROM_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOB);
    ROM_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOC);
    ROM_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOD);
    ROM_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOE);
    ROM_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
    ROM_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOG);
    ROM_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOH);
    ROM_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOJ);
    ROM_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOK);
    ROM_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOL);
    ROM_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOM);
    ROM_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPION);
    ROM_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOP);
    ROM_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOQ);

    //
    // PA2-3 are used for UART4.
    //
    ROM_GPIOPinConfigure(GPIO_PA0_U0RX);
    ROM_GPIOPinConfigure(GPIO_PA1_U0TX);
    ROM_GPIOPinTypeUART(GPIO_PORTA_BASE, GPIO_PIN_0 | GPIO_PIN_1);

    //
    // PB0-1/PD6/PL6-7 are used for USB.
    // PQ4 can be used as a power fault detect on this board but it is not
    // the hardware peripheral power fault input pin.
    //
    if(bUSB)
    {
        ROM_GPIOPinTypeUSBAnalog(GPIO_PORTL_BASE, GPIO_PIN_6 | GPIO_PIN_7);
        ROM_GPIOPinTypeGPIOInput(GPIO_PORTL_BASE, GPIO_PIN_5);
    }
    else
    {
        //
        // Keep the default config for most pins used by USB.
        // Add a pull down to PD6 to turn off the TPS2052 switch
        //
        ROM_GPIOPinTypeGPIOInput(GPIO_PORTD_BASE, GPIO_PIN_6);
        MAP_GPIOPadConfigSet(GPIO_PORTD_BASE, GPIO_PIN_6, GPIO_STRENGTH_2MA,
                             GPIO_PIN_TYPE_STD_WPD);

    }

    //
    // PF0/PF4 are used for Ethernet LEDs.
    //
    if(bEthernet)
    {
        //
        // this app wants to configure for ethernet LED function.
        //
        ROM_GPIOPinConfigure(GPIO_PK5_EN0LED2);
        ROM_GPIOPinConfigure(GPIO_PK6_EN0LED1);

        GPIOPinTypeEthernetLED(GPIO_PORTK_BASE, GPIO_PIN_5 | GPIO_PIN_6);

    }
    else
    {

        //
        // This app does not want Ethernet LED function so configure as
        // standard outputs for LED driving.
        //
        ROM_GPIOPinTypeGPIOOutput(GPIO_PORTK_BASE, GPIO_PIN_5 | GPIO_PIN_6);

        //
        // Default the LEDs to OFF.
        //
        ROM_GPIOPinWrite(GPIO_PORTK_BASE, GPIO_PIN_5 | GPIO_PIN_6, GPIO_PIN_5 | GPIO_PIN_6);
        MAP_GPIOPadConfigSet(GPIO_PORTK_BASE, GPIO_PIN_5 | GPIO_PIN_6,
                             GPIO_STRENGTH_12MA, GPIO_PIN_TYPE_STD);


    }

    //
    // PA5 is used for LK2 switch
    //
    ROM_GPIOPinTypeGPIOInput(GPIO_PORTA_BASE, GPIO_PIN_5);
    ROM_GPIOPinWrite(GPIO_PORTA_BASE, GPIO_PIN_5, GPIO_PIN_5);

    //
    // PN0 is used for USER LED1.
    //
    ROM_GPIOPinTypeGPIOOutput(GPIO_PORTN_BASE, GPIO_PIN_0);
    MAP_GPIOPadConfigSet(GPIO_PORTN_BASE, GPIO_PIN_0,
                             GPIO_STRENGTH_12MA, GPIO_PIN_TYPE_STD);

    //
    // Default the LED1 to ON.
    //
    ROM_GPIOPinWrite(GPIO_PORTN_BASE, GPIO_PIN_0, 0);

    //
    // PQ0-3 are used for SD card.
    //
    ROM_GPIOPinConfigure(GPIO_PQ0_SSI3CLK);
    ROM_GPIOPinConfigure(GPIO_PQ2_SSI3XDAT0);
    ROM_GPIOPinConfigure(GPIO_PQ3_SSI3XDAT1);

    ROM_GPIOPinTypeSSI(GPIO_PORTQ_BASE, GPIO_PIN_0 | GPIO_PIN_2 | GPIO_PIN_3);
    ROM_GPIOPinTypeGPIOOutput(GPIO_PORTQ_BASE, GPIO_PIN_1);	//SD CS
    ROM_GPIOPinTypeGPIOInput(GPIO_PORTL_BASE, GPIO_PIN_4);	//SD Detect
    ROM_GPIOPinWrite(GPIO_PORTQ_BASE, GPIO_PIN_1, GPIO_PIN_1);
    ROM_GPIOPinWrite(GPIO_PORTL_BASE, GPIO_PIN_4, GPIO_PIN_4);

}

//*****************************************************************************
//
//! This function writes a state to the LED bank.
//!
//! \param ui32LEDMask is a bit mask for which GPIO should be changed by this
//! call.
//! \param ui32LEDValue is the new value to be applied to the LEDs after the
//! ui32LEDMask is applied.
//!
//! The first parameter acts as a mask.  Only bits in the mask that are set
//! will correspond to LEDs that may change.  LEDs with a mask that is not set
//! will not change. This works the same as GPIOPinWrite. After applying the
//! mask the setting for each unmasked LED is written to the corresponding
//! LED port pin via GPIOPinWrite.
//!
//! \return None.
//
//*****************************************************************************
void
LEDWrite(uint32_t ui32LEDMask, uint32_t ui32LEDValue)
{

    //
    // Check the mask and set or clear the LED as directed.
    //
    if(ui32LEDMask & LED_ETH_ORANGE)
    {
        if(ui32LEDValue & LED_ETH_ORANGE)
        {
            GPIOPinWrite(LED_ETH_ORANGE_PORT, LED_ETH_ORANGE_PIN, LED_ETH_ORANGE_PIN);
        }
        else
        {
            GPIOPinWrite(LED_ETH_ORANGE_PORT, LED_ETH_ORANGE_PIN, 0);
        }
    }

    if(ui32LEDMask & LED_ETH_GREEN)
    {
        if(ui32LEDValue & LED_ETH_GREEN)
        {
            GPIOPinWrite(LED_ETH_GREEN_PORT, LED_ETH_GREEN_PIN, LED_ETH_GREEN_PIN);
        }
        else
        {
            GPIOPinWrite(LED_ETH_GREEN_PORT, LED_ETH_GREEN_PIN, 0);
        }
    }

    if(ui32LEDMask & LED1)
    {
        if(ui32LEDValue & LED1)
        {
            GPIOPinWrite(LED1_PORT, LED1_PIN, LED1_PIN);
        }
        else
        {
            GPIOPinWrite(LED1_PORT, LED1_PIN, 0);
        }
    }

}

//*****************************************************************************
//
//! This function reads the state to the LED bank.
//!
//! \param pui32LEDValue is a pointer to where the LED value will be stored.
//!
//! This function reads the state of the CLP LEDs and stores that state
//! information into the variable pointed to by pui32LEDValue.
//!
//! \return None.
//
//*****************************************************************************
void LEDRead(uint32_t *pui32LEDValue)
{
    *pui32LEDValue = 0;

    //
    // Read the pin state and set the variable bit if needed.
    //
    if(GPIOPinRead(LED1_PORT, LED1_PIN))
    {
        *pui32LEDValue |= LED1;
    }

    //
    // Read the pin state and set the variable bit if needed.
    //
    if(GPIOPinRead(LED_ETH_GREEN_PORT, LED_ETH_GREEN_PIN))
    {
        *pui32LEDValue |= LED_ETH_GREEN;
    }

    //
    // Read the pin state and set the variable bit if needed.
    //
    if(GPIOPinRead(LED_ETH_ORANGE_PORT, LED_ETH_ORANGE_PIN))
    {
        *pui32LEDValue |= LED_ETH_ORANGE;
    }
}

//*****************************************************************************
//
// Close the Doxygen group.
//! @}
//
//*****************************************************************************
