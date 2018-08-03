/* SPDX-License-Identifier: BSD-2-Clause */
/*
 * Copyright 2017 NXP
 *
 */

#ifndef PLATFORM_CONFIG_IMX6UL_H
#define PLATFORM_CONFIG_IMX6UL_H

#ifdef CFG_WITH_PAGER
#error "Pager not supported for platform mx6ulevk"
#endif
#ifdef CFG_WITH_LPAE
#error "LPAE not supported for now"
#endif

#define DRAM0_SIZE		CFG_DDR_SIZE

#define CONSOLE_UART_BASE	(UART1_BASE)
#endif
