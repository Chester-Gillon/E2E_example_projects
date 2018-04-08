/*
 * @file led_thread.c
 * @date 8 Apr 2018
 * @author Chester Gillon
 * @brief Thread which flashes LED0 at 1Hz
 */

#include <stdint.h>
#include <stddef.h>

#include <unistd.h>

/* Driver Header files */
#include <ti/drivers/GPIO.h>

/* Example/Board Header files */
#include "Board.h"

#include "test_interface.h"

void *ledThread (void *arg0)
{
   /* Call driver init functions */
    GPIO_init();

    /* Configure the LED pin */
    GPIO_setConfig(Board_GPIO_LED0, GPIO_CFG_OUT_STD | GPIO_CFG_OUT_LOW);

    for (;;)
    {
        /* Turn on user LED */
        GPIO_write(Board_GPIO_LED0, Board_GPIO_LED_ON);
        usleep (500000);

        /* Turn off user LED */
        GPIO_write(Board_GPIO_LED0, Board_GPIO_LED_OFF);
        usleep (500000);
    }
}


