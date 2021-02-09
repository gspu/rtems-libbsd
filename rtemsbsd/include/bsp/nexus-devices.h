/*
 * Copyright (c) 2013, 2018 embedded brains GmbH.  All rights reserved.
 *
 *  embedded brains GmbH
 *  Dornierstr. 4
 *  82178 Puchheim
 *  Germany
 *  <rtems@embedded-brains.de>
 *
 * Copyright (c) 2016 Chris Johns <chrisj@rtems.org> All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#if !defined(BSP_NEXUS_DEVICES_h)
#define BSP_NEXUS_DEVICES_h

#include <bsp.h>

#include <rtems/bsd/bsd.h>
#include <rtems/bsd/modules.h>
#include <machine/rtems-bsd-nexus-bus.h>


#if defined(LIBBSP_ARM_REALVIEW_PBX_A9_BSP_H)

#include <bsp/irq.h>

RTEMS_BSD_DRIVER_SMC0(0x4e000000,  RVPBXA9_IRQ_ETHERNET);

#elif defined(LIBBSP_ARM_BEAGLE_BSP_H)

#include <bsp/irq.h>

RTEMS_BSD_DEFINE_NEXUS_DEVICE(ofwbus, 0, 0, NULL);
SYSINIT_DRIVER_REFERENCE(simplebus, ofwbus);
SYSINIT_DRIVER_REFERENCE(ti_scm, simplebus);
SYSINIT_DRIVER_REFERENCE(am335x_prcm, simplebus);
SYSINIT_DRIVER_REFERENCE(usbss, simplebus);
SYSINIT_DRIVER_REFERENCE(musbotg, usbss);
SYSINIT_DRIVER_REFERENCE(sdhci_ti, simplebus);
SYSINIT_DRIVER_REFERENCE(mmcsd, mmc);
SYSINIT_DRIVER_REFERENCE(cpsw, cpswss);
SYSINIT_DRIVER_REFERENCE(ukphy, miibus);
#ifdef RTEMS_BSD_MODULE_NET80211
SYSINIT_DRIVER_REFERENCE(rtwn_usb, uhub);
SYSINIT_MODULE_REFERENCE(wlan_ratectl_none);
SYSINIT_MODULE_REFERENCE(wlan_sta);
SYSINIT_MODULE_REFERENCE(wlan_amrr);
SYSINIT_MODULE_REFERENCE(wlan_wep);
SYSINIT_MODULE_REFERENCE(wlan_tkip);
SYSINIT_MODULE_REFERENCE(wlan_ccmp);
SYSINIT_REFERENCE(rtwn_rtl8188eufw);
#endif /* RTEMS_BSD_MODULE_NET80211 */

RTEMS_BSD_DRIVER_USB;
RTEMS_BSD_DRIVER_USB_MASS;

#elif defined(LIBBSP_ARM_LPC32XX_BSP_H)

#include <bsp/irq.h>

RTEMS_BSD_DRIVER_LPC32XX_PWR;
RTEMS_BSD_DRIVER_LPC32XX_LPE;
RTEMS_BSD_DRIVER_LPC32XX_TSC;
RTEMS_BSD_DRIVER_ICSPHY;
RTEMS_BSD_DRIVER_LPC32XX_OHCI;
SYSINIT_DRIVER_REFERENCE(usbus, ohci);
RTEMS_BSD_DRIVER_USB;
RTEMS_BSD_DRIVER_USB_MASS;

#elif defined(LIBBSP_M68K_GENMCF548X_BSP_H)

RTEMS_BSD_DRIVER_FEC;

#elif defined(LIBBSP_ARM_XILINX_ZYNQ_BSP_H)

#include <bsp/irq.h>

RTEMS_BSD_DRIVER_XILINX_ZYNQ_SLCR;
RTEMS_BSD_DRIVER_XILINX_ZYNQ_SDHCI0;
RTEMS_BSD_DRIVER_XILINX_ZYNQ_SDHCI1;
RTEMS_BSD_DRIVER_XILINX_ZYNQ_CGEM0(ZYNQ_IRQ_ETHERNET_0);
RTEMS_BSD_DRIVER_E1000PHY;
RTEMS_BSD_DRIVER_MMC;

#elif defined(LIBBSP_AARCH64_XILINX_ZYNQMP_BSP_H)

#include <bsp/irq.h>

RTEMS_BSD_DRIVER_XILINX_ZYNQMP_SLCR;
/* Qemu only applies user-mode networking to the first interface by default, so
 * all 4 CGEM instances must be configured in the Qemu arguments using
 * "-nic user,model=cadence_gem" for each nic.
 *
 * CGEM3 is used for LibBSD because all Zynq Ultrascale+ MPSoC dev boards treat
 * the highest-mapped CGEM as the primary interface.
 */
RTEMS_BSD_DRIVER_XILINX_ZYNQMP_CGEM3(ZYNQMP_IRQ_ETHERNET_3);
RTEMS_BSD_DRIVER_E1000PHY;

#elif defined(LIBBSP_ARM_ATSAM_BSP_H)

RTEMS_BSD_DRIVER_USB;
RTEMS_BSD_DRIVER_USB_MASS;
RTEMS_BSD_DRIVER_IF_ATSAM;
SYSINIT_DRIVER_REFERENCE(ukphy, miibus);

#elif defined(LIBBSP_ARM_ALTERA_CYCLONE_V_BSP_H)

RTEMS_BSD_DEFINE_NEXUS_DEVICE(ofwbus, 0, 0, NULL);
SYSINIT_DRIVER_REFERENCE(simplebus, ofwbus);

RTEMS_BSD_DRIVER_DW_ETH;
RTEMS_BSD_DRIVER_PHY_MIC;

RTEMS_BSD_DRIVER_DW_OTG;
RTEMS_BSD_DRIVER_USB;
RTEMS_BSD_DRIVER_USB_MASS;

RTEMS_BSD_DRIVER_DW_MMC;
RTEMS_BSD_DRIVER_MMC;

#elif defined(LIBBSP_ARM_IMX_BSP_H)

RTEMS_BSD_DEFINE_NEXUS_DEVICE(ofwbus, 0, 0, NULL);
SYSINIT_DRIVER_REFERENCE(simplebus, ofwbus);

SYSINIT_DRIVER_REFERENCE(ccm, simplebus);
SYSINIT_DRIVER_REFERENCE(ehci, simplebus);
SYSINIT_DRIVER_REFERENCE(usbphy, simplebus);
SYSINIT_DRIVER_REFERENCE(usbus, ehci);
RTEMS_BSD_DRIVER_USB;
RTEMS_BSD_DRIVER_USB_MASS;

SYSINIT_DRIVER_REFERENCE(ffec, simplebus);
SYSINIT_DRIVER_REFERENCE(ukphy, miibus);

SYSINIT_DRIVER_REFERENCE(imx_rtems_gpio, simplebus);
SYSINIT_DRIVER_REFERENCE(sdhci_fsl, simplebus);
RTEMS_BSD_DRIVER_MMC;

SYSINIT_DRIVER_REFERENCE(ofw_regulator_bus, simplebus);

#elif defined(LIBBSP_ARM_IMXRT_BSP_H)

RTEMS_BSD_DEFINE_NEXUS_DEVICE(ofwbus, 0, 0, NULL);
SYSINIT_DRIVER_REFERENCE(simplebus, ofwbus);

SYSINIT_DRIVER_REFERENCE(ffec, simplebus);
SYSINIT_DRIVER_REFERENCE(ksz8091rnb, miibus);

#elif defined(LIBBSP_ARM_LPC24XX_BSP_H)

RTEMS_BSD_DEFINE_NEXUS_DEVICE(ohci, 0, 0, NULL);
SYSINIT_DRIVER_REFERENCE(usbus, ohci);
RTEMS_BSD_DRIVER_USB;
RTEMS_BSD_DRIVER_USB_MASS;

#elif defined(LIBBSP_ARM_STM32H7_BSP_H)

#include <stm32h7xx.h>

RTEMS_BSD_DEFINE_NEXUS_DEVICE(stmac, 0, 0, NULL);
SYSINIT_DRIVER_REFERENCE(ukphy, miibus);

static const rtems_bsd_device_resource dwcotg_res[] = {
	{
		.type = RTEMS_BSD_RES_MEMORY,
		.start_request = 0,
		.start_actual = USB2_OTG_FS_PERIPH_BASE
	}, {
		.type = RTEMS_BSD_RES_IRQ,
		.start_request = 0,
		.start_actual = OTG_FS_IRQn
	}
};
RTEMS_BSD_DEFINE_NEXUS_DEVICE(dwcotg, 0, RTEMS_ARRAY_SIZE(dwcotg_res),
    dwcotg_res);
RTEMS_BSD_DRIVER_USB;
RTEMS_BSD_DRIVER_USB_MASS;

#elif defined(LIBBSP_I386_PC386_BSP_H)

RTEMS_BSD_DRIVER_PC_LEGACY;
RTEMS_BSD_DRIVER_PCI_LEM;
RTEMS_BSD_DRIVER_PCI_IGB;
RTEMS_BSD_DRIVER_PCI_EM;
RTEMS_BSD_DRIVER_PCI_RE;
RTEMS_BSD_DRIVER_REPHY;

#elif defined(LIBBSP_POWERPC_QORIQ_BSP_H)

#if QORIQ_CHIP_IS_T_VARIANT(QORIQ_CHIP_VARIANT)

#include <bsp/irq.h>

#ifdef QORIQ_IS_HYPERVISOR_GUEST

RTEMS_BSD_DEFINE_NEXUS_DEVICE(dpaa_ml, 0, 0, NULL);

#else /* !QORIQ_IS_HYPERVISOR_GUEST */

RTEMS_BSD_DEFINE_NEXUS_DEVICE(fman, 0, 0, NULL);
RTEMS_BSD_DEFINE_NEXUS_DEVICE(fman, 1, 0, NULL);

SYSINIT_DRIVER_REFERENCE(fman_mac, fman);
SYSINIT_DRIVER_REFERENCE(fman_port, fman_mac);
SYSINIT_DRIVER_REFERENCE(ukphy, miibus);

#endif /* QORIQ_IS_HYPERVISOR_GUEST */

#else /* QORIQ_CHIP_IS_T_VARIANT(QORIQ_CHIP_VARIANT) */

#include <bsp/irq.h>

RTEMS_BSD_DEFINE_NEXUS_DEVICE(ofwbus, 0, 0, NULL);
SYSINIT_DRIVER_REFERENCE(simplebus, ofwbus);
SYSINIT_DRIVER_REFERENCE(tsec, simplebus);
SYSINIT_DRIVER_REFERENCE(ukphy, miibus);

#endif /* QORIQ_CHIP_IS_T_VARIANT(QORIQ_CHIP_VARIANT) */

#elif defined(LIBBSP_POWERPC_TQM8XX_BSP_H)

RTEMS_BSD_DEFINE_NEXUS_DEVICE(fec, 0, 0, NULL);
SYSINIT_DRIVER_REFERENCE(ukphy, miibus);

#elif defined(LIBBSP_POWERPC_MOTOROLA_POWERPC_BSP_H)

RTEMS_BSD_DRIVER_PC_LEGACY;

#endif /* LIBBSP_POWERPC_MOTOROLA_POWERPC_BSP_H */

#endif
