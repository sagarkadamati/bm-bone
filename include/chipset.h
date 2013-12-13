#ifndef __CHIPSET_H__
#define __CHIPSET_H__

#include <config.h>

#ifdef CONFIG_AM3359
#include <am3359.h>
#endif /* CONFIG_AM3359 */

/* Quarters of the memory */
#define Quarter_BASE_0 0x00000000
#define Quarter_BASE_1 0x40000000
#define Quarter_BASE_2 0x80000000
#define Quarter_BASE_3 0xC0000000

/* Quarter 0 OFFSETS */
#define BOOT_SPACE_GPMC_OFFSET          0x00000000

/* Quarter 1 OFFSETS */
#define ON_CHIP_MEMORY_OFFSET           0x40000000    /* 128M */
#define L4_INTERCONNECTS_OFFSET         0x48000000    /* 128M */
#define SGX_OFFSET                      0x50000000    /* 128M */
#define L4_EMULATION_OFFSET             0x54000000    /* 128M */
// #define RESERVED                     0x58000000    /* 64M  */
#define IPSS_OFFSET                     0x5C000000    /* 128M */
// #define RESERVED                     0x60000000    /* 64M  */
#define L3_INTERCONNECT_OFFSET          0x68000000    /* 128M */
#define EMIF4_SMS_VAS_OFFSET_0          0x70000000    /* 256M */

/* Quarter 2 OFFSETS*/
#define EMIF4_SMS_SDRAM_OFFSET          0x80000000    /* 1G   */

/* Quarter 3 OFFSETS*/
// #define RESERVED                     0xC0000000    /* 512M */
#define EMIF4_SMS_VAS_OFFSET_1          0xE0000000    /* 512M */

/* GPMC OFFSETS */
#define GPMC_OFFSET                     0x00000000

/* ROM/SRAM Address Space OFFSETS */
#define BOOT_ROM_INTERNAL_SECURE_OFFSET 0x00000000
#define BOOT_ROM_INTERNAL_PUBLIC_OFFSET 0x00014000
// #define RESERVED                     0x0001C000
// #define RESERVED                     0x00100000
#define SRAM_INTERNAL_OFFSET            0x00200000
// #define RESERVED                     0x00210000
// #define RESERVED                     0x00250000

/* All System Peripherals OFFSETS */
#define L4_CORE_OFFSET                  0x08000000
#define L4_WAKE_UP_OFFSET               0x08300000
#define L4_PER_OFFSET                   0x09000000
// #define RESERVED                     0x09100000

/* Graphic accelerator slave port OFFSETS */
#define SGX_OFFSET                      0x10000000
// #define RESERVED                     0x10010000

/* Emulation OFFSETS */
#define L4_EMU_OFFSET                   0x14000000
// #define RESERVED                     0x14800000

/* IPSS OFFSETS */
#define IPSS_OFFSET                     0x1C000000
// #define RESERVED                     0x1F000000

/* Control Registers Offsets */
#define L3_CONTROL_REGISTERS_OFFSET     0x28000000
// #define RESERVED                     0x28000000
#define SMS_REGISTERS_OFFSET            0x2C000000
#define EMIF4_REGISTERS_OFFSET          0x2D000000
#define GPMC_REGISTERS_OFFSET           0x2E000000

/* SDRAM Main Address Space OFFSETS */
#define SDRAM_OFFSET                    EMIF4_SMS_SDRAM_OFFSET

#include <sizes.h>
/* GPMC SIZES */
#define GPMC_SIZE                       SIZE_1G

/* ROM/SRAM Address Space SIZES */
#define BOOT_ROM_INTERNAL_SECURE_SIZE   (80 * SIZE_1K)
#define BOOT_ROM_INTERNAL_PUBLIC_SIZE   SIZE_32K
// #define RESERVED                     (912 * SIZE_1K)
// #define RESERVED                     SIZE_1M
#define SRAM_INTERNAL_SIZE              SIZE_64K
// #define RESERVED                     SIZE_256K
// #define RESERVED                     (128704 * SIZE_1K)

/* All System Peripherals SIZES */
#define L4_CORE_SIZE                    SIZE_16M
#define L4_WAKE_UP_SIZE                 SIZE_256K
#define L4_PER_SIZE                     SIZE_1M
// #define RESERVED                     (111 * SIZE_1M)

/* Graphic accelerator slave port SIZES */
#define SGX_SIZE                        SIZE_64K
// #define RESERVED                     (65472 * SIZE_1K)

/* Emulation SIZES */
#define L4_EMU_SIZE                     SIZE_8M
// #define RESERVED                     (56 * SIZE_1M)

/* IPSS SIZES */
#define IPSS_SIZE                       (48 * SIZE_1M)
// #define RESERVED                     SIZE_16M

/* Control Registers Sizes */
#define L3_CONTROL_REGISTERS_SIZE       SIZE_16M
// #define RESERVED                     (48 * SIZE_1M)
#define SMS_REGISTERS_SIZE              SIZE_16M
#define EMIF4_REGISTERS_SIZE            SIZE_16M
#define GPMC_REGISTERS_SIZE             SIZE_16M

/* SDRAM Main Address Space SIZES */
#ifdef CONFIG_AM3359
#define SDRAM_SIZE                      AM335X_SDRAM_SIZE
#else
#define SDRAM_SIZE                      SIZE_1G /* Generic */
#endif /* CONFIG_AM3359 */

/* Boot Space SIZES */
#define GPMC_SIZE                       SIZE_1G

/* Peripherals Base */
#define CORE_BASE                       (L4_INTERCONNECTS_OFFSET + L4_CORE_OFFSET)
#define CORE_SIZE                       L4_CORE_SIZE

#define WAKE_UP_BASE                    (L4_INTERCONNECTS_OFFSET + L4_WAKE_UP_OFFSET)
#define WAKE_UP_SIZE                    L4_WAKE_UP_SIZE

#define PER_BASE                        (L4_INTERCONNECTS_OFFSET + L4_PER_OFFSET)
#define PER_SIZE                        L4_PER_SIZE

/* Control Base */
#define CONTROL_REGISTERS_BASE          (L3_INTERCONNECT_OFFSET + L3_CONTROL_REGISTERS_OFFSET)
#define CONTROL_REGISTERS_SIZE          L3_CONTROL_REGISTERS_SIZE

#define SMS_REGISTERS_BASE              (L3_INTERCONNECT_OFFSET + SMS_REGISTERS_OFFSET)
#define SMS_REGISTERS_SIZE              SMS_REGISTERS_SIZE

#define EMIF4_REGISTERS_BASE            (L3_INTERCONNECT_OFFSET + EMIF4_REGISTERS_OFFSET)
#define EMIF4_REGISTERS_SIZE            EMIF4_REGISTERS_SIZE

#define GPMC_REGISTERS_BASE             (L3_INTERCONNECT_OFFSET + GPMC_REGISTERS_OFFSET)
#define GPMC_REGISTERS_SIZE             GPMC_REGISTERS_SIZE

#endif /* __CHIPSET_H__ */
