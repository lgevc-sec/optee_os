/* SPDX-License-Identifier: BSD-2-Clause */
/*
 * Copyright 2017 NXP
 *
 */
#ifndef __IMX7_GPC_REGS_H__
#define __IMX7_GPC_REGS_H__

#define GPC_REGISTER_OFFSET_MASK	0xFFF

/*
 * GPC Registers - GPC
 */
#define	GPC_IMR_NUM			(4)
#define GPC_SLOT_NUM			(10)

#define GPC_LPCR_A7_BSC			0x000
#define GPC_LPCR_A7_AD			0x004
#define GPC_LPCR_M4			0x008
#define GPC_SLPCR			0x014
#define GPC_MLPCR			0x020
#define GPC_PGC_ACK_SEL_A7		0x024
#define GPC_IMR1_CORE0_A7		0x030
#define GPC_IMR2_CORE0_A7		0x034
#define GPC_IMR3_CORE0_A7		0x038
#define GPC_IMR4_CORE0_A7		0x03C
#define GPC_IMR1_CORE1_A7		0x040
#define GPC_IMR2_CORE1_A7		0x044
#define GPC_IMR3_CORE1_A7		0x048
#define GPC_IMR4_CORE1_A7		0x04C
#define GPC_SLT0_CFG			0x0B0
#define GPC_SLT1_CFG			0x0B4
#define GPC_SLT2_CFG			0x0B8
#define GPC_SLT3_CFG			0x0BC
#define GPC_SLT4_CFG			0x0C0
#define GPC_SLT5_CFG			0x0C4
#define GPC_SLT6_CFG			0x0C8
#define GPC_SLT7_CFG			0x0CC
#define GPC_SLT8_CFG			0x0D0
#define GPC_SLT9_CFG			0x0D4
#define GPC_PGC_CPU_MAPPING		0x0EC
#define GPC_CPU_PGC_SW_PUP_REQ		0x0F0
#define GPC_PU_PGC_SW_PUP_REQ		0x0F8
#define GPC_CPU_PGC_SW_PDN_REQ		0x0FC
#define GPC_PU_PGC_SW_PDN_REQ		0x104
#define GPC_CPU_PGC_SW_PUP_STATUS	0x130
#define GPC_CPU_PGC_SW_PDN_STATUS	0x170


#define BP_GPC_LPCR_A7_BSC_LPM0			(0)
#define BM_GPC_LPCR_A7_BSC_LPM0			\
			(0x3 << BP_GPC_LPCR_A7_BSC_LPM0)
#define BM_GPC_LPCR_A7_DSC_LPM_RUN		(0x0)
#define BM_GPC_LPCR_A7_DSC_LPM_WAIT		(0x1)
#define BM_GPC_LPCR_A7_DSC_LPM_STOP		(0x2)
#define BP_GPC_LPCR_A7_BSC_LPM1			(2)
#define BM_GPC_LPCR_A7_BSC_LPM1			\
			(0x3 << BP_GPC_LPCR_A7_BSC_LPM1)
#define BP_GPC_LPCR_A7_BSC_CPU_CLK_ON_LPM	(14)
#define BM_GPC_LPCR_A7_BSC_CPU_CLK_ON_LPM	\
			(0x1 << BP_GPC_LPCR_A7_BSC_CPU_CLK_ON_LPM)
#define BP_GPC_LPCR_A7_BSC_MASK_CORE0_WFI	(16)
#define BM_GPC_LPCR_A7_BSC_MASK_CORE0_WFI	\
			(0x1 << BP_GPC_LPCR_A7_BSC_MASK_CORE0_WFI)
#define BP_GPC_LPCR_A7_BSC_MASK_CORE1_WFI	(17)
#define BM_GPC_LPCR_A7_BSC_MASK_CORE1_WFI	\
			(0x1 << BP_GPC_LPCR_A7_BSC_MASK_CORE1_WFI)
#define BP_GPC_LPCR_A7_BSC_MASK_L2CC_WFI	(26)
#define BM_GPC_LPCR_A7_BSC_MASK_L2CC_WFI	\
			(0x1 << BP_GPC_LPCR_A7_BSC_MASK_L2CC_WFI)
#define BP_GPC_LPCR_A7_BSC_IRQ_SRC_C0		(28)
#define BM_GPC_LPCR_A7_BSC_IRQ_SRC_C0		\
			(0x1 << BP_GPC_LPCR_A7_BSC_IRQ_SRC_C0)
#define BP_GPC_LPCR_A7_BSC_IRQ_SRC_C1		(29)
#define BM_GPC_LPCR_A7_BSC_IRQ_SRC_C1		\
			(0x1 << BP_GPC_LPCR_A7_BSC_IRQ_SRC_C1)
#define BP_GPC_LPCR_A7_BSC_IRQ_SRC_A7_WUP	(30)
#define BM_GPC_LPCR_A7_BSC_IRQ_SRC_A7_WUP	\
			(0x1 << BP_GPC_LPCR_A7_BSC_IRQ_SRC_A7_WUP)
#define BP_GPC_LPCR_GPC_CPU_PGC_SW_PUP_STATUSA7_BSC_MASK_DSM_TRIGGER	(31)
#define BM_GPC_LPCR_A7_BSC_MASK_DSM_TRIGGER	\
			(0x1 << BP_GPC_LPCR_A7_BSC_MASK_DSM_TRIGGER)

#define BP_GPC_LPCR_A7_AD_EN_C0_WFI_PDN		(0)
#define BM_GPC_LPCR_A7_AD_EN_C0_WFI_PDN		\
			(1 << BP_GPC_LPCR_A7_AD_EN_C0_WFI_PDN)
#define BP_GPC_LPCR_A7_AD_EN_C0_PDN		(1)
#define BM_GPC_LPCR_A7_AD_EN_C0_PDN		\
			(1 << BP_GPC_LPCR_A7_AD_EN_C0_PDN)
#define BP_GPC_LPCR_A7_AD_EN_C1_WFI_PDN		(2)
#define BM_GPC_LPCR_A7_AD_EN_C1_WFI_PDN		\
			(1 << BP_GPC_LPCR_A7_AD_EN_C1_WFI_PDN)
#define BP_GPC_LPCR_A7_AD_EN_C1_PDN		(3)
#define BM_GPC_LPCR_A7_AD_EN_C1_PDN		\
			(1 << BP_GPC_LPCR_A7_AD_EN_C1_PDN)
#define BP_GPC_LPCR_A7_AD_EN_PLAT_PDN		(4)
#define BM_GPC_LPCR_A7_AD_EN_PLAT_PDN		\
			(1 << BP_GPC_LPCR_A7_AD_EN_PLAT_PDN)
#define BP_GPC_LPCR_A7_AD_EN_C0_IRQ_PUP		(8)
#define BM_GPC_LPCR_A7_AD_EN_C0_IRQ_PUP		\
			(1 << BP_GPC_LPCR_A7_AD_EN_C0_IRQ_PUP)
#define BP_GPC_LPCR_A7_AD_EN_C0_PUP		(9)
#define BM_GPC_LPCR_A7_AD_EN_C0_PUP		\
			(1 << BP_GPC_LPCR_A7_AD_EN_C0_PUP)
#define BP_GPC_LPCR_A7_AD_EN_C1_IRQ_PUP		(10)
#define BM_GPC_LPCR_A7_AD_EN_C1_IRQ_PUP		\
			(1 << BP_GPC_LPCR_A7_AD_EN_C1_IRQ_PUP)
#define BP_GPC_LPCR_A7_AD_EN_C1_PUP		(11)
#define BM_GPC_LPCR_A7_AD_EN_C1_PUP		\
			(1 << BP_GPC_LPCR_A7_AD_EN_C1_PUP)
#define BP_GPC_LPCR_A7_AD_L2_PGE		(16)
#define BM_GPC_LPCR_A7_AD_L2_PGE		\
			(1 << BP_GPC_LPCR_A7_AD_L2_PGE)

#define BP_GPC_LPCR_M4_MASK_DSM_TRIGGER		(31)
#define BM_GPC_LPCR_M4_MASK_DSM_TRIGGER		\
			(1 << BP_GPC_LPCR_M4_MASK_DSM_TRIGGER)

#define BP_GPC_SLPCR_BYPASS_PMIC_READY		(0)
#define BM_GPC_SLPCR_BYPASS_PMIC_READY		\
			(0x1 << BP_GPC_SLPCR_BYPASS_PMIC_READY)
#define BP_GPC_SLPCR_SBYOS			(1)
#define BM_GPC_SLPCR_SBYOS			\
			(0x1 << BP_GPC_SLPCR_SBYOS)
#define BP_GPC_SLPCR_VSTBY			(2)
#define BM_GPC_SLPCR_VSTBY			\
			(0x1 << BP_GPC_SLPCR_VSTBY)
#define BP_GPC_SLPCR_STBY_COUNT			(3)
#define BM_GPC_SLPCR_STBY_COUNT			\
			(0x7 << BP_GPC_SLPCR_STBY_COUNT)
#define BP_GPC_SLPCR_COSC_PWRDOWN		(6)
#define BM_GPC_SLPCR_COSC_PWRDOWN		\
			(0x1 << BP_GPC_SLPCR_COSC_PWRDOWN)
#define BP_GPC_SLPCR_COSC_EN			(7)
#define BM_GPC_SLPCR_COSC_EN			\
			(0x1 << BP_GPC_SLPCR_COSC_EN)
#define BP_GPC_SLPCR_OSCCNT			(8)
#define BM_GPC_SLPCR_OSCCNT			\
			(0xFF << BP_GPC_SLPCR_OSCCNT)
#define BP_GPC_SLPCR_EN_A7_FASTWUP_WAIT_MODE	(16)
#define BM_GPC_SLPCR_EN_A7_FASTWUP_WAIT_MODE	\
			(0x1 << BP_GPC_SLPCR_EN_A7_FASTWUP_WAIT_MODE)
#define BP_GPC_SLPCR_EN_A7_FASTWUP_STOP_MODE	(17)
#define BM_GPC_SLPCR_EN_A7_FASTWUP_STOP_MODE	\
			(0x1 << BP_GPC_SLPCR_EN_A7_FASTWUP_STOP_MODE)
#define BP_GPC_SLPCR_EN_M4_FASTWUP_WAIT_MODE	(18)
#define BM_GPC_SLPCR_EN_M4_FASTWUP_WAIT_MODE	\
			(0x1 << BP_GPC_SLPCR_EN_M4_FASTWUP_WAIT_MODE)
#define BP_GPC_SLPCR_EN_M4_FASTWUP_STOP_MODE	(19)
#define BM_GPC_SLPCR_EN_M4_FASTWUP_STOP_MODE	\
			(0x1 << BP_GPC_SLPCR_EN_M4_FASTWUP_STOP_MODE)
#define BP_GPC_SLPCR_DISABLE_A7_IS_DSM		(23)
#define BM_GPC_SLPCR_DISABLE_A7_IS_DSM		\
			(0x1 << BP_GPC_SLPCR_DISABLE_A7_IS_DSM)
#define BP_GPC_SLPCR_REG_BYPASS_COUNT		(24)
#define BM_GPC_SLPCR_REG_BYPASS_COUNT		\
			(0x3F << BP_GPC_SLPCR_REG_BYPASS_COUNT)
#define BP_GPC_SLPCR_RBC_EN			(30)
#define BM_GPC_SLPCR_RBC_EN			(0x1 << BP_GPC_SLPCR_RBC_EN)
#define BP_GPC_SLPCR_EN_DSM			(31)
#define BM_GPC_SLPCR_EN_DSM			(0x1 << BP_GPC_SLPCR_EN_DSM)

#define BP_GPC_MLPCR_MEMLP_CTL_DIS		(0)
#define BM_GPC_MLPCR_MEMLP_CTL_DIS		\
			(1 << BP_GPC_MLPCR_MEMLP_CTL_DIS)
#define BP_GPC_MLPCR_MEMLP_RET_SEL		(1)
#define BM_GPC_MLPCR_MEMLP_RET_SEL		\
			(1 << BP_GPC_MLPCR_MEMLP_RET_SEL)
#define BP_GPC_MLPCR_ROMLP_PDN_DIS		(2)
#define BM_GPC_MLPCR_ROMLP_PDN_DIS		\
			(1 << BP_GPC_MLPCR_ROMLP_PDN_DIS)
#define BP_GPC_MLPCR_MEMLP_ENT_CNT		(8)
#define BM_GPC_MLPCR_MEMLP_ENT_CNT		\
			(0xFF << BP_GPC_MLPCR_MEMLP_ENT_CNT)
#define BP_GPC_MLPCR_MEM_EXT_CNT		(16)
#define BM_GPC_MLPCR_MEM_EXT_CNT		\
			(0xF << BP_GPC_MLPCR_MEM_EXT_CNT)
#define BP_GPC_MLPCR_MEMLP_RET_PGEN		(24)
#define BM_GPC_MLPCR_MEMLP_RET_PGEN		\
			(0xF << BP_GPC_MLPCR_MEMLP_RET_PGEN)

#define BP_GPC_PGC_ACK_SEL_A7_A7_C0_PGC_PDN_ACK		(0)
#define BM_GPC_PGC_ACK_SEL_A7_A7_C0_PGC_PDN_ACK		\
			(1 << BP_GPC_PGC_ACK_SEL_A7_A7_C0_PGC_PDN_ACK)
#define BP_GPC_PGC_ACK_SEL_A7_A7_C1_PGC_PDN_ACK		(1)
#define BM_GPC_PGC_ACK_SEL_A7_A7_C1_PGC_PDN_ACK		\
			(1 << BP_GPC_PGC_ACK_SEL_A7_A7_C1_PGC_PDN_ACK)
#define BP_GPC_PGC_ACK_SEL_A7_A7_PLAT_PGC_PDN_ACK	(2)
#define BM_GPC_PGC_ACK_SEL_A7_A7_PLAT_PGC_PDN_ACK	\
			(1 << BP_GPC_PGC_ACK_SEL_A7_A7_PLAT_PGC_PDN_ACK)
#define BP_GPC_PGC_ACK_SEL_A7_MF_PGC_PDN_ACK		(3)
#define BM_GPC_PGC_ACK_SEL_A7_MF_PGC_PDN_ACK		\
			(1 << BP_GPC_PGC_ACK_SEL_A7_MF_PGC_PDN_ACK)
#define BP_GPC_PGC_ACK_SEL_A7_MIPI_PGC_PDN_ACK		(4)
#define BM_GPC_PGC_ACK_SEL_A7_MIPI_PGC_PDN_ACK		\
			(1 << BP_GPC_PGC_ACK_SEL_A7_MIPI_PGC_PDN_ACK)
#define BP_GPC_PGC_ACK_SEL_A7_PCIE_PGC_PDN_ACK		(5)
#define BM_GPC_PGC_ACK_SEL_A7_PCIE_PGC_PDN_ACK		\
			(1 << BP_GPC_PGC_ACK_SEL_A7_PCIE_PGC_PDN_ACK)
#define BP_GPC_PGC_ACK_SEL_A7_USB_OTG1_PGC_PDN_ACK	(6)
#define BM_GPC_PGC_ACK_SEL_A7_USB_OTG1_PGC_PDN_ACK	\
			(1 << BP_GPC_PGC_ACK_SEL_A7_USB_OTG1_PGC_PDN_ACK)
#define BP_GPC_PGC_ACK_SEL_A7_USB_OTG2_PGC_PDN_ACK	(7)
#define BM_GPC_PGC_ACK_SEL_A7_USB_OTG2_PGC_PDN_ACK	\
			(1 << BP_GPC_PGC_ACK_SEL_A7_USB_OTG2_PGC_PDN_ACK)
#define BP_GPC_PGC_ACK_SEL_A7_HSIC_PGC_PDN_ACK		(8)
#define BM_GPC_PGC_ACK_SEL_A7_HSIC_PGC_PDN_ACK		\
			(1 << BP_GPC_PGC_ACK_SEL_A7_HSIC_PGC_PDN_ACK)
#define BP_GPC_PGC_ACK_SEL_A7_A7_PGC_PDN_ACK		(15)
#define BM_GPC_PGC_ACK_SEL_A7_A7_PGC_PDN_ACK		\
			(1 << BP_GPC_PGC_ACK_SEL_A7_A7_PGC_PDN_ACK)
#define BP_GPC_PGC_ACK_SEL_A7_A7_C0_PGC_PUP_ACK		(16)
#define BM_GPC_PGC_ACK_SEL_A7_A7_C0_PGC_PUP_ACK		\
			(1 << BP_GPC_PGC_ACK_SEL_A7_A7_C0_PGC_PUP_ACK)
#define BP_GPC_PGC_ACK_SEL_A7_A7_C1_PGC_PUP_ACK		(17)
#define BM_GPC_PGC_ACK_SEL_A7_A7_C1_PGC_PUP_ACK		\
			(1 << BP_GPC_PGC_ACK_SEL_A7_A7_C1_PGC_PUP_ACK)
#define BP_GPC_PGC_ACK_SEL_A7_A7_PLAT_PGC_PUP_ACK	(18)
#define BM_GPC_PGC_ACK_SEL_A7_A7_PLAT_PGC_PUP_ACK	\
			(1 << BP_GPC_PGC_ACK_SEL_A7_A7_PLAT_PGC_PUP_ACK)
#define BP_GPC_PGC_ACK_SEL_A7_MF_PGC_PUP_ACK		(19)
#define BM_GPC_PGC_ACK_SEL_A7_MF_PGC_PUP_ACK		\
			(1 << BP_GPC_PGC_ACK_SEL_A7_A7_MF_PGC_PUP_ACK)
#define BP_GPC_PGC_ACK_SEL_A7_MIPI_PGC_PUP_ACK		(20)
#define BM_GPC_PGC_ACK_SEL_A7_MIPI_PGC_PUP_ACK		\
			(1 << BP_GPC_PGC_ACK_SEL_A7_A7_MIPI_PGC_PUP_ACK)
#define BP_GPC_PGC_ACK_SEL_A7_PCIE_PGC_PUP_ACK		(21)
#define BM_GPC_PGC_ACK_SEL_A7_PCIE_PGC_PUP_ACK		\
			(1 << BP_GPC_PGC_ACK_SEL_A7_A7_PCIE_PGC_PUP_ACK)
#define BP_GPC_PGC_ACK_SEL_A7_USB_OTG1_PGC_PUP_ACK	(22)
#define BM_GPC_PGC_ACK_SEL_A7_USB_OTG1_PGC_PUP_ACK	\
			(1 << BP_GPC_PGC_ACK_SEL_A7_A7_USB_OTG1_PGC_PUP_ACK)
#define BP_GPC_PGC_ACK_SEL_A7_USB_OTG2_PGC_PUP_ACK	(23)
#define BM_GPC_PGC_ACK_SEL_A7_USB_OTG2_PGC_PUP_ACK	\
			(1 << BP_GPC_PGC_ACK_SEL_A7_A7_USB_OTG2_PGC_PUP_ACK)
#define BP_GPC_PGC_ACK_SEL_A7_HSIC_PGC_PUP_ACK		(24)
#define BM_GPC_PGC_ACK_SEL_A7_HSIC_PGC_PUP_ACK		\
			(1 << BP_GPC_PGC_ACK_SEL_A7_A7_HSIC_PGC_PUP_ACK)
#define BP_GPC_PGC_ACK_SEL_A7_A7_PGC_PUP_ACK		(31)
#define BM_GPC_PGC_ACK_SEL_A7_A7_PGC_PUP_ACK		\
			(1 << BP_GPC_PGC_ACK_SEL_A7_A7_PGC_PUP_ACK)

#define BP_GPC_PGC_CPU_MAPPING_FASTMEGA_A7_DOMAIN	(0)
#define BM_GPC_PGC_CPU_MAPPING_FASTMEGA_A7_DOMAIN	\
			(1 << BP_GPC_PGC_CPU_MAPPING_FASTMEGA_A7_DOMAIN)

#define BP_GPC_CPU_PGC_SW_PUP_REQ_CORE0_A7_SW_PUP_REQ	(0)
#define BM_GPC_CPU_PGC_SW_PUP_REQ_CORE0_A7_SW_PUP_REQ	\
			(1 << BP_GPC_CPU_PGC_SW_PUP_REQ_CORE0_A7_SW_PUP_REQ)
#define BP_GPC_CPU_PGC_SW_PUP_REQ_CORE1_A7_SW_PUP_REQ	(1)
#define BM_GPC_CPU_PGC_SW_PUP_REQ_CORE1_A7_SW_PUP_REQ	\
			(1 << BP_GPC_CPU_PGC_SW_PUP_REQ_CORE1_A7_SW_PUP_REQ)
#define BP_GPC_CPU_PGC_SW_PUP_REQ_SCU_A7_SW_PUP_REQ	(2)
#define BM_GPC_CPU_PGC_SW_PUP_REQ_SCU_A7_SW_PUP_REQ	\
			(1 << BP_GPC_CPU_PGC_SW_PUP_REQ_SCU_A7_SW_PUP_REQ)

#define BP_GPC_PU_PGC_SW_PUP_REQ_MIPI_PHY_SW_PUP_REQ	(0)
#define BM_GPC_PU_PGC_SW_PUP_REQ_MIPI_PHY_SW_PUP_REQ	\
			(1 << BP_GPC_PU_PGC_SW_PUP_REQ_MIPI_PHY_SW_PUP_REQ)
#define BP_GPC_PU_PGC_SW_PUP_REQ_PCIE_PHY_SW_PUP_REQ	(1)
#define BM_GPC_PU_PGC_SW_PUP_REQ_PCIE_PHY_SW_PUP_REQ	\
			(1 << BP_GPC_PU_PGC_SW_PUP_REQ_PCIE_PHY_SW_PUP_REQ)
#define BP_GPC_PU_PGC_SW_PUP_REQ_USB_OTG1_PHY_SW_PUP_REQ	(2)
#define BM_GPC_PU_PGC_SW_PUP_REQ_USB_OTG1_PHY_SW_PUP_REQ	\
			(1 << BP_GPC_PU_PGC_SW_PUP_REQ_USB_OTG1_PHY_SW_PUP_REQ)
#define BP_GPC_PU_PGC_SW_PUP_REQ_USB_OTG2_PHY_SW_PUP_REQ	(3)
#define BM_GPC_PU_PGC_SW_PUP_REQ_USB_OTG2_PHY_SW_PUP_REQ	\
			(1 << BP_GPC_PU_PGC_SW_PUP_REQ_USB_OTG2_PHY_SW_PUP_REQ)
#define BP_GPC_PU_PGC_SW_PUP_REQ_USB_HSIC_PHY_SW_PUP_REQ	(4)
#define BM_GPC_PU_PGC_SW_PUP_REQ_USB_HSIC_PHY_SW_PUP_REQ	\
			(1 << BP_GPC_PU_PGC_SW_PUP_REQ_USB_HSIC_PHY_SW_PUP_REQ)

#define BP_GPC_CPU_PGC_SW_PDN_REQ_CORE0_A7_SW_PDN_REQ	(0)
#define BM_GPC_CPU_PGC_SW_PDN_REQ_CORE0_A7_SW_PDN_REQ	\
			(1 << BP_GPC_CPU_PGC_SW_PDN_REQ_CORE0_A7_SW_PDN_REQ)
#define BP_GPC_CPU_PGC_SW_PDN_REQ_CORE1_A7_SW_PDN_REQ	(1)
#define BM_GPC_CPU_PGC_SW_PDN_REQ_CORE1_A7_SW_PDN_REQ	\
			(1 << BP_GPC_CPU_PGC_SW_PDN_REQ_CORE1_A7_SW_PDN_REQ)
#define BP_GPC_CPU_PGC_SW_PDN_REQ_SCU_A7_SW_PDN_REQ	(2)
#define BM_GPC_CPU_PGC_SW_PDN_REQ_SCU_A7_SW_PDN_REQ	\
			(1 << BP_GPC_CPU_PGC_SW_PDN_REQ_SCU_A7_SW_PDN_REQ)

#define BP_GPC_PU_PGC_SW_PDN_REQ_MIPI_PHY_SW_PDN_REQ		(0)
#define BM_GPC_PU_PGC_SW_PDN_REQ_MIPI_PHY_SW_PDN_REQ		\
			(1 << BP_GPC_PU_PGC_SW_PDN_REQ_MIPI_PHY_SW_PDN_REQ)
#define BP_GPC_PU_PGC_SW_PDN_REQ_PCIE_PHY_SW_PDN_REQ		(1)
#define BM_GPC_PU_PGC_SW_PDN_REQ_PCIE_PHY_SW_PDN_REQ		\
			(1 << BP_GPC_PU_PGC_SW_PDN_REQ_PCIE_PHY_SW_PDN_REQ)
#define BP_GPC_PU_PGC_SW_PDN_REQ_USB_OTG1_PHY_SW_PDN_REQ	(2)
#define BM_GPC_PU_PGC_SW_PDN_REQ_USB_OTG1_PHY_SW_PDN_REQ	\
			(1 << BP_GPC_PU_PGC_SW_PDN_REQ_USB_OTG1_PHY_SW_PDN_REQ)
#define BP_GPC_PU_PGC_SW_PDN_REQ_USB_OTG2_PHY_SW_PDN_REQ	(3)
#define BM_GPC_PU_PGC_SW_PDN_REQ_USB_OTG2_PHY_SW_PDN_REQ	\
			(1 << BP_GPC_PU_PGC_SW_PDN_REQ_USB_OTG2_PHY_SW_PDN_REQ)
#define BP_GPC_PU_PGC_SW_PDN_REQ_USB_HSIC_PHY_SW_PDN_REQ	(4)
#define BM_GPC_PU_PGC_SW_PDN_REQ_USB_HSIC_PHY_SW_PDN_REQ	\
			(1 << BP_GPC_PU_PGC_SW_PDN_REQ_USB_HSIC_PHY_SW_PDN_REQ)

#define BP_GPC_CPU_PGC_SW_PUP_STATUS_CORE0_A7_SW_PUP_STATUS	(0)
#define BM_GPC_CPU_PGC_SW_PUP_STATUS_CORE0_A7_SW_PUP_STATUS	\
		(1 << BP_GPC_CPU_PGC_SW_PUP_STATUS_CORE0_A7_SW_PUP_STATUS)
#define BP_GPC_CPU_PGC_SW_PUP_STATUS_CORE1_A7_SW_PUP_STATUS	(1)
#define BM_GPC_CPU_PGC_SW_PUP_STATUS_CORE1_A7_SW_PUP_STATUS	\
		(1 << BP_GPC_CPU_PGC_SW_PUP_STATUS_CORE1_A7_SW_PUP_STATUS)
#define BP_GPC_CPU_PGC_SW_PUP_STATUS_SCU_A7_SW_PUP_STATUS	(2)
#define BM_GPC_CPU_PGC_SW_PUP_STATUS_SCU_A7_SW_PUP_STATUS	\
		(1 << BP_GPC_CPU_PGC_SW_PUP_STATUS_SCU_A7_SW_PUP_STATUS)

#define BP_GPC_CPU_PGC_SW_PDN_STATUS_CORE0_A7_SW_PDN_STATUS	(0)
#define BM_GPC_CPU_PGC_SW_PDN_STATUS_CORE0_A7_SW_PDN_STATUS	\
		(1 << BP_GPC_CPU_PGC_SW_PDN_STATUS_CORE0_A7_SW_PDN_STATUS)
#define BP_GPC_CPU_PGC_SW_PDN_STATUS_CORE1_A7_SW_PDN_STATUS	(1)
#define BM_GPC_CPU_PGC_SW_PDN_STATUS_CORE1_A7_SW_PDN_STATUS	\
		(1 << BP_GPC_CPU_PGC_SW_PDN_STATUS_CORE1_A7_SW_PDN_STATUS)
#define BP_GPC_CPU_PGC_SW_PDN_STATUS_SCU_A7_SW_PDN_STATUS	(2)
#define BM_GPC_CPU_PGC_SW_PDN_STATUS_SCU_A7_SW_PDN_STATUS	\
		(1 << BP_GPC_CPU_PGC_SW_PDN_STATUS_SCU_A7_SW_PDN_STATUS)


/*
 * GPC Registers - PGC
 */
#define GPC_PGC_A7CORE0_CTRL	0x800
#define GPC_PGC_A7CORE0_PUPSCR	0x804
#define GPC_PGC_A7CORE0_PDNSCR	0x808
#define GPC_PGC_A7CORE1_CTRL	0x840
#define GPC_PGC_A7CORE1_PUPSCR	0x844
#define GPC_PGC_A7CORE1_PDNSCR	0x848
#define GPC_PGC_A7SCU_CTRL	0x880
#define GPC_PGC_SCU_AUX_SW	0x890
#define GPC_PGC_FASTMEGA_MIX	0xA00


#define BP_GPC_PGC_nCTRL_PCR	(0)
#define BM_GPC_PGC_nCTRL_PCR	(1 << BP_GPC_PGC_nCTRL_PCR)

#define BP_GPC_PGC_nPUPSCR_SW	(1)
#define BM_GPC_PGC_nPUPSCR_SW	(0x3F << BP_GPC_PGC_nPUPSCR_SW)
#define BP_GPC_PGC_nPUPSCR_PUP_WAIT_SCALL_OUT		(6)
#define BM_GPC_PGC_nPUPSCR_PUP_WAIT_SCALL_OUT		\
		(1 << BP_GPC_PGC_nPUPSCR_PUP_WAIT_SCALL_OUT)
#define BP_GPC_PGC_nPUPSCR_SW2ISO			(7)
#define BM_GPC_PGC_nPUPSCR_SW2ISO			\
		(0xFFFF << BP_GPC_PGC_nPUPSCR_SW2ISO)
#define BP_GPC_PGC_nPUPSRC_SCALL_SCALLOUT_CNT		(23)
#define BM_GPC_PGC_nPUPSCR_PUP_SCALL_SCALLOUT_CNT	\
		(0x1FF << BP_GPC_PGC_nPUPSCR_PUP_SCALL_SCALLOUT_CNT)

#define BP_GPC_PGC_SCU_AUX_SW_DFTRAM_TRC1_TMC_TMR_TCD2	(0)
#define BP_GPC_PGC_SCU_AUX_SW_L2RETN_TRC1_TMC_TMR	(10)
#define BP_GPC_PGC_SCU_AUX_SW_MEMPWR_TRC1_TMC_TMR	(20)

#endif /* __IMX7_GPC_REGS_H__ */
