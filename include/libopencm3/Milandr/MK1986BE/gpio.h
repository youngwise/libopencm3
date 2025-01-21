/*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2015 Kuldeep Singh Dhaka <kuldeepdhaka9@gmail.com>
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LIBOPENCM3_MK1986BE_GPIO_H
#define LIBOPENCM3_MK1986BE_GPIO_H

#include <libopencm3/Milandr/memorymap.h>
#include <libopencm3/cm3/common.h>

#define GPIO1				GPIO_PORT_A_BASE
#define GPIO2				GPIO_PORT_B_BASE
#define GPIO3				GPIO_PORT_C_BASE
#define GPIO4				GPIO_PORT_D_BASE
#define GPIO5				GPIO_PORT_E_BASE
#define GPIO6				GPIO_PORT_F_BASE

/* Port data (GPIOx_RXTX) */
#define GPIO_RXTX(port)		MMIO16((port) + 0x00)
#define GPIO1_RXTX			GPIO_RXTX(GPIO1)
#define GPIO2_RXTX			GPIO_RXTX(GPIO2)
#define GPIO3_RXTX			GPIO_RXTX(GPIO3)
#define GPIO4_RXTX			GPIO_RXTX(GPIO4)
#define GPIO5_RXTX			GPIO_RXTX(GPIO5)
#define GPIO6_RXTX			GPIO_RXTX(GPIO6)

/* Port direction (GPIOx_OE) */
#define GPIO_OE(port)		MMIO16((port) + 0x04)
#define GPIO1_OE			GPIO_OE(GPIO1)
#define GPIO2_OE			GPIO_OE(GPIO2)
#define GPIO3_OE			GPIO_OE(GPIO3)
#define GPIO4_OE			GPIO_OE(GPIO4)
#define GPIO5_OE			GPIO_OE(GPIO5)
#define GPIO6_OE			GPIO_OE(GPIO6)

/* Values port direction */
#define PORT_OE_MODE_INPUT 	(0)
#define PORT_OE_MODE_OUTPUT (1)

/* Port operation mode (GPIOx_FUNC) */
#define GPIO_FUNC(port)		MMIO32((port) + 0x08)
#define GPIO1_FUNC			GPIO_FUNC(GPIO1)
#define GPIO2_FUNC		 	GPIO_FUNC(GPIO2)
#define GPIO3_FUNC		 	GPIO_FUNC(GPIO3)
#define GPIO4_FUNC		 	GPIO_FUNC(GPIO4)
#define GPIO5_FUNC		 	GPIO_FUNC(GPIO5)
#define GPIO6_FUNC		 	GPIO_FUNC(GPIO6)

/* Values port operation mode*/
#define PORT_FUNC_MODE_PORT 	 (0b00)
#define PORT_FUNC_MODE_MAIN_FUNC (0b01)
#define PORT_FUNC_MODE_ALT_FUNC  (0b10)
#define PORT_FUNC_MODE_OVR_FUNC  (0b11)

/* Port pin operation mode (analog/digital) (GPIOx_ANALOG) */
#define GPIO_ANALOG(port)	MMIO16((port) + 0x0C)
#define GPIO1_ANALOG		GPIO_ANALOG(GPIO1)
#define GPIO2_ANALOG		GPIO_ANALOG(GPIO2)
#define GPIO3_ANALOG		GPIO_ANALOG(GPIO3)
#define GPIO4_ANALOG		GPIO_ANALOG(GPIO4)
#define GPIO5_ANALOG		GPIO_ANALOG(GPIO5)
#define GPIO6_ANALOG		GPIO_ANALOG(GPIO6)

/* Values port operation mode*/
#define PORT_ANALOG_MODE_ANALOG 	 (0)
#define PORT_ANALOG_MODE_DIGITAL 	 (1)

/* Port pull-up (GPIOx_PULL) */
#define GPIO_PULL(port)		MMIO32((port) + 0x10)
#define GPIO1_PULL			GPIO_PULL(GPIO1)
#define GPIO2_PULL			GPIO_PULL(GPIO2)
#define GPIO3_PULL			GPIO_PULL(GPIO3)
#define GPIO4_PULL			GPIO_PULL(GPIO4)
#define GPIO5_PULL			GPIO_PULL(GPIO5)
#define GPIO6_PULL			GPIO_PULL(GPIO6)

#define GPIO_PULL_UP(port)	MMIO16(((port) + 0x10) >> 16)
#define GPIO1_PULL_UP		GPIO_PULL_UP(GPIO1)
#define GPIO2_PULL_UP		GPIO_PULL_UP(GPIO2)
#define GPIO3_PULL_UP		GPIO_PULL_UP(GPIO3)
#define GPIO4_PULL_UP		GPIO_PULL_UP(GPIO4)
#define GPIO5_PULL_UP		GPIO_PULL_UP(GPIO5)
#define GPIO6_PULL_UP		GPIO_PULL_UP(GPIO6)

#define GPIO_PULL_DOWW(port) MMIO16(((port) + 0x10))
#define GPIO1_PULL_DOWW		 GPIO_PULL_DOWW(GPIO1)
#define GPIO2_PULL_DOWW		 GPIO_PULL_DOWW(GPIO2)
#define GPIO3_PULL_DOWW		 GPIO_PULL_DOWW(GPIO3)
#define GPIO4_PULL_DOWW		 GPIO_PULL_DOWW(GPIO4)
#define GPIO5_PULL_DOWW		 GPIO_PULL_DOWW(GPIO5)
#define GPIO6_PULL_DOWW		 GPIO_PULL_DOWW(GPIO6)

/* Values port pull */
#define PORT_PULL_OFF 	 (0)
#define PORT_PULL_ON 	 (1)

/* Output driver operation mode (GPIOx_PD) */
#define GPIO_PD(port)		MMIO16((port) + 0x14)
#define GPIO1_PD			GPIO_PD(GPIO1)
#define GPIO2_PD			GPIO_PD(GPIO2)
#define GPIO3_PD			GPIO_PD(GPIO3)
#define GPIO4_PD			GPIO_PD(GPIO4)
#define GPIO5_PD			GPIO_PD(GPIO5)
#define GPIO6_PD			GPIO_PD(GPIO6)

/* Values output driver operation mode */
#define PORT_PD_MANAGED_DRIVER (0)
#define PORT_PD_OPEN_DRAIN     (1)

/* Input driver operation mode (GPIOx_SHM) */
#define GPIO_SHM(port)		MMIO16(((port) + 0x14) >> 16)
#define GPIO1_SHM			GPIO_SHM(GPIO1)
#define GPIO2_SHM			GPIO_SHM(GPIO2)
#define GPIO3_SHM			GPIO_SHM(GPIO3)
#define GPIO4_SHM			GPIO_SHM(GPIO4)
#define GPIO5_SHM			GPIO_SHM(GPIO5)
#define GPIO6_SHM			GPIO_SHM(GPIO6)

/* Values output driver operation mode */
/* hysteresis 200 mV */
#define PORT_SHM_OFF 		(0)
/* hysteresis 400 mV */
#define PORT_SHM_ON     	(1)

/* Transmitter power mode (GPIOx_PWR) */
#define GPIO_PWR(port)		MMIO32((port) + 0x18)
#define GPIO1_PWR			GPIO_PWR(GPIO1)
#define GPIO2_PWR			GPIO_PWR(GPIO2)
#define GPIO3_PWR			GPIO_PWR(GPIO3)
#define GPIO4_PWR			GPIO_PWR(GPIO4)
#define GPIO5_PWR			GPIO_PWR(GPIO5)
#define GPIO6_PWR			GPIO_PWR(GPIO6)

/* Values transmitter power mode */
#define PORT_PWR_MODE_SLOW_FRONT	(0b01)
#define PORT_PWR_MODE_FAST_FRONT	(0b01)
#define PORT_PWR_MODE_MAX_FRONT		(0b11)

/* Input filter operation mode (GPIOx_GFEN) */
#define GPIO_GFEN(port)		MMIO16((port) + 0x1C)
#define GPIO1_GFEN			GPIO_GFEN(GPIO1)
#define GPIO2_GFEN			GPIO_GFEN(GPIO2)
#define GPIO3_GFEN			GPIO_GFEN(GPIO3)
#define GPIO4_GFEN			GPIO_GFEN(GPIO4)
#define GPIO5_GFEN			GPIO_GFEN(GPIO5)
#define GPIO6_GFEN			GPIO_GFEN(GPIO6)

/* Values input filter operation mode */
#define PORT_GFEN_OFF	(0)
#define PORT_GFEN_ON	(1)

/* The SET_TX register sets “1” in the PORT_RXTX register by writing 1 (GPIOx_SETTX) */
#define GPIO_SETTX(port)	MMIO16((port) + 0x20)
#define GPIO1_SETTX			GPIO_SETTX(GPIO1)
#define GPIO2_SETTX			GPIO_SETTX(GPIO2)
#define GPIO3_SETTX			GPIO_SETTX(GPIO3)
#define GPIO4_SETTX			GPIO_SETTX(GPIO4)
#define GPIO5_SETTX			GPIO_SETTX(GPIO5)
#define GPIO6_SETTX			GPIO_SETTX(GPIO6)

/* The SET_TX register sets “0” in the PORT_RXTX register by writing 1 (GPIOx_CLRTX) */
#define GPIO_CLRTX(port)	MMIO16((port) + 0x24)
#define GPIO1_CLRTX			GPIO_CLRTX(GPIO1)
#define GPIO2_CLRTX			GPIO_CLRTX(GPIO2)
#define GPIO3_CLRTX			GPIO_CLRTX(GPIO3)
#define GPIO4_CLRTX			GPIO_CLRTX(GPIO4)
#define GPIO5_CLRTX			GPIO_CLRTX(GPIO5)
#define GPIO6_CLRTX			GPIO_CLRTX(GPIO6)

/* The register allows you to read what is written to the output port register (GPIOx_RDTX) */
#define GPIO_RDTX(port)	((port) + 0x28)
#define GPIO1_RDTX		GPIO_RDTX(GPIO1)
#define GPIO2_RDTX		GPIO_RDTX(GPIO2)
#define GPIO3_RDTX		GPIO_RDTX(GPIO3)
#define GPIO4_RDTX		GPIO_RDTX(GPIO4)
#define GPIO5_RDTX		GPIO_RDTX(GPIO5)
#define GPIO6_RDTX		GPIO_RDTX(GPIO6)

#endif

