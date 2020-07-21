/*
    ChibiOS - Copyright (C) 2006..2015 Giovanni Di Sirio

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

#ifndef _MCUCONF_H_
#define _MCUCONF_H_

//#define K20x_MCUCONF

/*
 * HAL driver system settings.
 */

// TODO : certainly only need one of thoses two
#define PAL_USE_WAIT        TRUE
#define PAL_USE_CALLBACKS   TRUE


// This one is used in the USB lib
//#define K20x7

/* Select the MCU clocking mode below by enabling the appropriate block. */

//#define KINETIS_NO_INIT             FALSE

/* PEE mode - 48MHz system clock driven by external crystal. */
/*#define KINETIS_MCG_MODE            KINETIS_MCG_MODE_PEE
#define KINETIS_PLLCLK_FREQUENCY    72000000UL
#define KINETIS_SYSCLK_FREQUENCY    72000000UL
#define KINETIS_BUSCLK_FREQUENCY    36000000UL
#define KINETIS_FLASHCLK_FREQUENCY  24000000UL*/


/*#define NRF5_SOFTDEVICE_THREAD_WA_SIZE 128

#define SHELL_CMD_TEST_ENABLED FALSE
#define SHELL_CMD_ECHO_ENABLED FALSE
#define SHELL_CMD_INFO_ENABLED FALSE

#define NRF5_SOFTDEVICE_LFCLK_SOURCE   NRF_CLOCK_LF_SRC_XTAL
#define NRF5_SOFTDEVICE_LFCLK_ACCURACY NRF_CLOCK_LF_XTAL_ACCURACY_20_PPM*/




#if 0
/* FEI mode - 48 MHz with internal 32.768 kHz crystal */
#define KINETIS_MCG_MODE            KINETIS_MCG_MODE_FEI
#define KINETIS_MCG_FLL_DMX32       1           /* Fine-tune for 32.768 kHz */
#define KINETIS_MCG_FLL_DRS         1           /* 1464x FLL factor */
#define KINETIS_SYSCLK_FREQUENCY    47972352UL  /* 32.768 kHz * 1464 (~48 MHz) */
#define KINETIS_CLKDIV1_OUTDIV1     1
#define KINETIS_CLKDIV1_OUTDIV2     1
#define KINETIS_CLKDIV1_OUTDIV4     2
#define KINETIS_BUSCLK_FREQUENCY    KINETIS_SYSCLK_FREQUENCY
#define KINETIS_FLASHCLK_FREQUENCY  KINETIS_SYSCLK_FREQUENCY/2
#endif

/*
 * SERIAL driver system settings.
 */
#define NRF5_SERIAL_USE_UART0            TRUE
#define NRF5_SERIAL_USE_UART1            TRUE
//#define NRF5_SERIAL_USE_HWFLOWCTRL     FALSE

/*
 * I2C driver system settings.
 */
#define NRF5_I2C_USE_I2C0               FALSE
#define NRF5_I2C_USE_I2C1               FALSE


/*
 * USB driver settings
 */
#define NRF5_HAS_USB                    TRUE
#define NRF5_USB_IRQ_VECTOR             VectorCC
#define NRF5_USB0_IS_USBOTG             TRUE
#define NRF5_HAS_USB_CLOCK_RECOVERY     FALSE


#define NRF5_USB_USE_USB0                TRUE
/* Need to redefine this, since the default is for K20x */
/* This is for Teensy LC; you should comment it out (or change to 5)
 * for Teensy 3.x */
#define NRF5_USB_USB0_IRQ_PRIORITY       2

/*
 * SPI driver system settings.
 */
#define NRF5_SPI_USE_SPI0                TRUE
#define NRF5_SPI_USE_SPI1                TRUE


/*#define NRF5_RNG_USE_RNG0          TRUE
#define NRF5_GPT_USE_TIMER0            TRUE

#define NRF5_QEI_USE_QDEC0 TRUE
#define NRF5_QEI_USE_LED   FALSE

#define WDG_USE_TIMEOUT_CALLBACK    TRUE*/


#endif /* _MCUCONF_H_ */
