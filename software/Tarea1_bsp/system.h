/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'nios_tec' in SOPC Builder design 'platform'
 * SOPC Builder design path: ../../platform.sopcinfo
 *
 * Generated: Sun Aug 20 01:45:34 CST 2023
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x000e0020
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0x14
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x00000020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0x14
#define ALT_CPU_NAME "nios_tec"
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x00000000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x000e0020
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0x14
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x00000020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0x14
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x00000000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_TIMER
#define __ALTERA_NIOS2_GEN2


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone V"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag_uart_0"
#define ALT_STDERR_BASE 0x20000
#define ALT_STDERR_DEV jtag_uart_0
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart_0"
#define ALT_STDIN_BASE 0x20000
#define ALT_STDIN_DEV jtag_uart_0
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart_0"
#define ALT_STDOUT_BASE 0x20000
#define ALT_STDOUT_DEV jtag_uart_0
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "platform"


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 4
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none


/*
 * jtag_uart_0 configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart_0 altera_avalon_jtag_uart
#define JTAG_UART_0_BASE 0x20000
#define JTAG_UART_0_IRQ 0
#define JTAG_UART_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_0_NAME "/dev/jtag_uart_0"
#define JTAG_UART_0_READ_DEPTH 64
#define JTAG_UART_0_READ_THRESHOLD 8
#define JTAG_UART_0_SPAN 8
#define JTAG_UART_0_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_0_WRITE_DEPTH 64
#define JTAG_UART_0_WRITE_THRESHOLD 8


/*
 * pio_7seg configuration
 *
 */

#define ALT_MODULE_CLASS_pio_7seg altera_avalon_pio
#define PIO_7SEG_BASE 0x50000
#define PIO_7SEG_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_7SEG_BIT_MODIFYING_OUTPUT_REGISTER 1
#define PIO_7SEG_CAPTURE 0
#define PIO_7SEG_DATA_WIDTH 24
#define PIO_7SEG_DO_TEST_BENCH_WIRING 0
#define PIO_7SEG_DRIVEN_SIM_VALUE 0
#define PIO_7SEG_EDGE_TYPE "NONE"
#define PIO_7SEG_FREQ 50000000
#define PIO_7SEG_HAS_IN 0
#define PIO_7SEG_HAS_OUT 1
#define PIO_7SEG_HAS_TRI 0
#define PIO_7SEG_IRQ -1
#define PIO_7SEG_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_7SEG_IRQ_TYPE "NONE"
#define PIO_7SEG_NAME "/dev/pio_7seg"
#define PIO_7SEG_RESET_VALUE 0
#define PIO_7SEG_SPAN 32
#define PIO_7SEG_TYPE "altera_avalon_pio"


/*
 * pio_btn_sw configuration
 *
 */

#define ALT_MODULE_CLASS_pio_btn_sw altera_avalon_pio
#define PIO_BTN_SW_BASE 0x40000
#define PIO_BTN_SW_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_BTN_SW_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_BTN_SW_CAPTURE 1
#define PIO_BTN_SW_DATA_WIDTH 4
#define PIO_BTN_SW_DO_TEST_BENCH_WIRING 1
#define PIO_BTN_SW_DRIVEN_SIM_VALUE 0
#define PIO_BTN_SW_EDGE_TYPE "FALLING"
#define PIO_BTN_SW_FREQ 50000000
#define PIO_BTN_SW_HAS_IN 1
#define PIO_BTN_SW_HAS_OUT 0
#define PIO_BTN_SW_HAS_TRI 0
#define PIO_BTN_SW_IRQ 2
#define PIO_BTN_SW_IRQ_INTERRUPT_CONTROLLER_ID 0
#define PIO_BTN_SW_IRQ_TYPE "EDGE"
#define PIO_BTN_SW_NAME "/dev/pio_btn_sw"
#define PIO_BTN_SW_RESET_VALUE 0
#define PIO_BTN_SW_SPAN 16
#define PIO_BTN_SW_TYPE "altera_avalon_pio"


/*
 * ram0 configuration
 *
 */

#define ALT_MODULE_CLASS_ram0 altera_avalon_onchip_memory2
#define RAM0_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define RAM0_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define RAM0_BASE 0x10000
#define RAM0_CONTENTS_INFO ""
#define RAM0_DUAL_PORT 0
#define RAM0_GUI_RAM_BLOCK_TYPE "AUTO"
#define RAM0_INIT_CONTENTS_FILE "platform_ram0"
#define RAM0_INIT_MEM_CONTENT 1
#define RAM0_INSTANCE_ID "NONE"
#define RAM0_IRQ -1
#define RAM0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define RAM0_NAME "/dev/ram0"
#define RAM0_NON_DEFAULT_INIT_FILE_ENABLED 0
#define RAM0_RAM_BLOCK_TYPE "AUTO"
#define RAM0_READ_DURING_WRITE_MODE "DONT_CARE"
#define RAM0_SINGLE_CLOCK_OP 0
#define RAM0_SIZE_MULTIPLE 1
#define RAM0_SIZE_VALUE 16384
#define RAM0_SPAN 16384
#define RAM0_TYPE "altera_avalon_onchip_memory2"
#define RAM0_WRITABLE 1


/*
 * rom0 configuration
 *
 */

#define ALT_MODULE_CLASS_rom0 altera_avalon_onchip_memory2
#define ROM0_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define ROM0_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define ROM0_BASE 0x0
#define ROM0_CONTENTS_INFO ""
#define ROM0_DUAL_PORT 0
#define ROM0_GUI_RAM_BLOCK_TYPE "AUTO"
#define ROM0_INIT_CONTENTS_FILE "platform_rom0"
#define ROM0_INIT_MEM_CONTENT 1
#define ROM0_INSTANCE_ID "NONE"
#define ROM0_IRQ -1
#define ROM0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ROM0_NAME "/dev/rom0"
#define ROM0_NON_DEFAULT_INIT_FILE_ENABLED 0
#define ROM0_RAM_BLOCK_TYPE "AUTO"
#define ROM0_READ_DURING_WRITE_MODE "DONT_CARE"
#define ROM0_SINGLE_CLOCK_OP 0
#define ROM0_SIZE_MULTIPLE 1
#define ROM0_SIZE_VALUE 4096
#define ROM0_SPAN 4096
#define ROM0_TYPE "altera_avalon_onchip_memory2"
#define ROM0_WRITABLE 1


/*
 * timer_0_ms configuration
 *
 */

#define ALT_MODULE_CLASS_timer_0_ms altera_avalon_timer
#define TIMER_0_MS_ALWAYS_RUN 0
#define TIMER_0_MS_BASE 0x30000
#define TIMER_0_MS_COUNTER_SIZE 32
#define TIMER_0_MS_FIXED_PERIOD 1
#define TIMER_0_MS_FREQ 50000000
#define TIMER_0_MS_IRQ 1
#define TIMER_0_MS_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_0_MS_LOAD_VALUE 49999
#define TIMER_0_MS_MULT 0.001
#define TIMER_0_MS_NAME "/dev/timer_0_ms"
#define TIMER_0_MS_PERIOD 1
#define TIMER_0_MS_PERIOD_UNITS "ms"
#define TIMER_0_MS_RESET_OUTPUT 0
#define TIMER_0_MS_SNAPSHOT 0
#define TIMER_0_MS_SPAN 32
#define TIMER_0_MS_TICKS_PER_SEC 1000
#define TIMER_0_MS_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_0_MS_TYPE "altera_avalon_timer"

#endif /* __SYSTEM_H_ */
