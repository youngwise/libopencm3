/*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2013 Frantisek Burian <BuFran@seznam.cz>
 *
 *  .. based on file from MK1986BE.
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

#ifndef LIBOPENCM3_MEMORYMAP_H
#define LIBOPENCM3_MEMORYMAP_H

#include <libopencm3/cm3/memorymap.h>

/* --- Milandr specific peripheral definitions ------------------------------- */

/* Code */
#define CODE_BASE           (0x00000000U)
#define CODE_EXTERNAL_CODE  (CODE_BASE + 0x100000)

/* SRAM */
#define SRAM_BASE           (0x20000000U)
#define SRAM_AHB_LITE       (SRAM_BASE + 0x100000)
#define SRAM_ETHERNET_BASE  (0x30000000U)

/* Peripherial */
#define PERIPHERIAL_BASE        (0x40000000U)
#define PERIPHERIAL_EXTERNAL    (0x50000000U)

#define CAN1_BASE               (PERIPHERIAL_BASE)
#define CAN2_BASE               (PERIPHERIAL_BASE + 0x8000U)

#define USB_BASE                (PERIPHERIAL_BASE + 0x10000U)
#define CODE_CNTRL_BASE         (PERIPHERIAL_BASE + 0x18000U)
#define RST_CLK_BASE            (PERIPHERIAL_BASE + 0x20000U)   
#define DMA_BASE                (PERIPHERIAL_BASE + 0x28000U)

#define UART1_BASE              (PERIPHERIAL_BASE + 0x30000U)   
#define UART2_BASE              (PERIPHERIAL_BASE + 0x38000U)

#define SPI1_BASE               (PERIPHERIAL_BASE + 0x40000U)
#define SPI2_BASE               (PERIPHERIAL_BASE + 0xA0000U)
#define SPI3_BASE               (PERIPHERIAL_BASE + 0xF8000U)

#define MIL_STD_1553B1_BASE     (PERIPHERIAL_BASE + 0x48000U)
#define MIL_STD_1553B2_BASE     (PERIPHERIAL_BASE + 0x50000U)

#define POWER_BASE              (PERIPHERIAL_BASE + 0x58000U)

#define WWDT_BASE               (PERIPHERIAL_BASE + 0x60000U)
#define IWDT_BASE               (PERIPHERIAL_BASE + 0x68000U)

#define TIMER1_BASE             (PERIPHERIAL_BASE + 0x70000U)
#define TIMER2_BASE             (PERIPHERIAL_BASE + 0x78000U)
#define TIMER3_BASE             (PERIPHERIAL_BASE + 0x80000U)
#define TIMER5_BASE             (PERIPHERIAL_BASE + 0x98000U)

#define ADC_BASE                (PERIPHERIAL_BASE + 0x88000U)
#define DAC_BASE                (PERIPHERIAL_BASE + 0x90000U)

#define GPIO_PORT_A_BASE        (PERIPHERIAL_BASE + 0xA8000U)
#define GPIO_PORT_B_BASE        (PERIPHERIAL_BASE + 0xB0000U)
#define GPIO_PORT_C_BASE        (PERIPHERIAL_BASE + 0xB8000U)
#define GPIO_PORT_D_BASE        (PERIPHERIAL_BASE + 0xC0000U)
#define GPIO_PORT_E_BASE        (PERIPHERIAL_BASE + 0xC8000U)
#define GPIO_PORT_F_BASE        (PERIPHERIAL_BASE + 0xE8000U)

#define ARINC429R_BASE          (PERIPHERIAL_BASE + 0xD0000U)
#define ARINC429T_BASE          (PERIPHERIAL_BASE + 0xE0000U)

#define BKP_BASE                (PERIPHERIAL_BASE + 0xD8000U)
#define EXT_BUS_CNTRL_BASE      (PERIPHERIAL_BASE + 0xF0000U)

#endif
