#ifndef __L3_H__
#define __L3_H__

#define L3_RT          0x68000000 /* L3 configuration registers */
#define L3_SI          0x68000400 /* Sideband signals configuration */
#define Reserved       0x68000800 /* Reserved */
#define MPU_SS_IA      0x68001400 /* MPU subsystem instruction port agent configuration */
#define Unused         0x68001800 /* Unused */
#define SGX_SS_IA      0x68001C00 /* SGX subsystem initiator port agent configuration */
#define SMS_TA         0x68002000 /* SMS target port agent configuration */
#define GPMC_TA        0x68002400 /* GPMC target port agent configuration */
#define OCM_RAM_TA     0x68002800 /* OCM RAM target port agent configuration */
#define OCM_ROM_TA     0x68002C00 /* OCM ROM target port agent configuration */
#define Reserved       0x68003000 /* Reserved */
#define HS_USB_HOST_IA 0x68004000 /* HS USB HOST initiator port agent configuration */
#define IPSS_IA        0x68004400 /* IPSS */
#define Reserved       0x68004800 /* Reserved */
#define sDMA_RD_IA     0x68004C00 /* sDMA RD initiator port agent configuration */
#define sDMA_WR_IA     0x68005000 /* sDMA WR initiator port agent configuration */
#define Display_SS_IA  0x68005400 /* Display subsystem initiator port agent configuration */
#define Unused         0x68005800 /* Unused */
#define DAP_IA         0x68005C00 /* Debug access port initiator port agent configuration */
#define IPSS_TA        0x68006000 /* IPSS Target Port agent configuration */
#define SGX_SS_TA      0x68006400 /* SGX subsystem target port agent configuration */
#define L4_Core_TA     0x68006800 /* L4-Core target port agent configuration */
#define L4_Per_TA      0x68006C00 /* L4-Per target port agent configuration */
#define Reserved       0x68007000 /* Reserved */
#define RT_PM          0x68010000 /* Register target port protection */
#define Reserved       0x68010400 /* Reserved */
#define GPMC_PM        0x68012400 /* GPMC target port protection */
#define OCM_RAM_PM     0x68012800 /* OCM RAM target port protection */
#define OCM_ROM_PM     0x68012C00 /* OCM ROM target port protection */
#define Reserved       0x68013000 /* Reserved */
#define IPSS_PM        0x68014000 /* IPSS */
#define Reserved       0x68014400 /* Reserved */

#endif /* __L3_H__ */
