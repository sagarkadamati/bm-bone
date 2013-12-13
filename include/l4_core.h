#ifndef __L4_CORE_H__
#define __L4_CORE_H__

#define L4_CORE                    0x48000000 
// #define RESERVED                0x48000000

/* System Control module */
#define SYSTEM_CONTROL_MODULE      0x48002000 /* Module */
#define SYSTEM_CONTROL_MODULE_L4   0x48003000 /* L4 interconnect */

/* Clock Manager */
#define DPLL                       0x48004000 /* Module Region A */
#define CLOCK_MANAGER              0x48006000 /* Module Region B */
// #define RESERVED                0x48006800 /* Reserved */
#define CLOCK_MANAGER_L4           0x48007000 /* L4 interconnect */

// #define RESERVED                0x48008000
// #define RESERVED                0x48024000
// #define RESERVED                0x48025000
// #define RESERVED                0x48026000

/* L4-Core configuration */
#define ADDRESS_PROTECTION         0x48040000
#define INITITIATOR_PORT           0x48040800
#define LINK_AGENT                 0x48041000

// #define RESERVED                0x48042000
// #define RESERVED                0x4804FC00

/* Display Subsystem */
#define DISPLAY_SUBSYSTEM_TOP      0x48050000
#define DISPLAY_CONTROL            0x48050400
#define RFBI                       0x48050800
#define VIDEO_ENCODER              0x48050C00
#define DISPLAY_SUBSYSTEM_L4       0x48051000

// #define RESERVED                0x48052000

/* sDMA */
#define SDMA                       0x48056000
#define SDMA_L4                    0x48057000

// #define RESERVED                0x48058000

/* I2C 3 */
#define I2C3                       0x48060000
#define I2C3_L4                    0x48061000

/* USBTLL module */
#define USBTLL                     0x48062000
#define USBTLL_L4                  0x48063000

/* HS USB HOST */
#define HS_USB_HOST                0x48064000
#define HS_USB_HOST_L4             0x48065000

// #define RESERVED                0x48066000

/* UART 1 */
#define UART1                      0x4806A000
#define UART1_L4                   0x4806B000

/* UART 2 */
#define UART2                      0x4806C000
#define UART2_L4                   0x4806D000

// #define RESERVED                0x4806E000

/* I2C 1 */
#define I2C1                       0x48070000
#define I2C1_L4                    0x48071000 

/* I2C 2 */
#define I2C2                       0x48072000 
#define I2C2_L4                    0x48073000 

/* McBSP1 (Digital baseband data) */
#define MCBSP1                     0x48074000
#define MCBSP1_L4                  0x48075000

// #define RESERVED                0x48076000

/* GPTIMER 10 */
#define GPTIMER10                  0x48086000
#define GPTIMER10_L4               0x48087000

/* GPTIMER 11 */
#define GPTIMER11                  0x48088000
#define GPTIMER11_L4               0x48089000

// #define Reserved                0x4808A000
// #define UNUSED                  0x48094000

/* McBSP5 (MIDI data) */
#define MCBSP5                     0x48096000
#define MCBSP5_L4                  0x48097000

/* McSP1 */
#define MCSPI1                     0x48098000
#define MCSPI1_L4                  0x48099000

/* McSP2 */
#define MCSPI2                     0x4809A000
#define MCSPI2_L4                  0x4809B000

/* MMC/SD/SDIO1 */
#define MMC_SD_SDIO1               0x4809C000
#define MMC_SD_SDIO1_L4            0x4809D000

/* UART 4 */
#define UART4                      0x4809E000
#define UART4_L4                   0x4809F000

/* RNG */
#define RNG                        0x480A0000
#define RNG_L4                     0x480A1000

/* DES3DES1 */
#define DES3DES1                   0x480A2000
#define DES3DES1_L4                0x480A3000

/* SHA2MD5 */
#define SHA2MD5                    0x480A4000
#define SHA2MD5_L4                 0x480A5000

/* AES1 */
#define AES1                       0x480A6000
#define AES1_L4                    0x480A7000

/* Fast PKA */
#define FAST_PKA                   0x480A8000
#define FAST_PKA_L4                0x480A9000

/* USB High Speed 2.0 */
#define USB_HS_2_0                 0x480AB000
#define USB_HS_2_0_L4              0x480AC000

/* MMC/SD/SDIO3 */
#define MMC_SD_SDIO3               0x480AD000
#define MMC_SD_SDIO3_L4            0x480AE000

// #define RESERVED                0x480AF000
// #define RESERVED                0x480B0000
// #define RESERVED                0x480B1000

/* HDQ/1-wire */
#define HDQ_1_WIRE                 0x480B2000
#define HDQ_1_WIRE_L4              0x480B3000

/* MMC/SD/SDIO2 */
#define MMC_SD_SDIO2               0x480B4000
#define MMC_SD_SDIO2_L4            0x480B5000

// #define UNUSED                  0x480B6000

/* McSPI3 */
#define MCSPI3                     0x480B8000
#define MCSPI3_L4                  0x480B9000

/* McSPI4 */
#define MCSPI4                     0x480BA000
#define MCSPI4_L4                  0x480BB000

// #define UNUSED                  0x480BC000

/* DES3DES2 */
#define DES3DES2                   0x480C1000
#define DES3DES2_L4                0x480C2000

/* SHA1MD5 2 */
#define SHA1MD5_2                  0x480C3000
#define SHA1MD5_2_L4               0x480C4000

/* AES2 */
#define AES2                       0x480C5000
#define AES2_L4                    0x480C6000

// #define UNUSED                  0x480C7000

/* SR2 */
#define SR2                        0x480CC000
#define SR2_L4                     0x480CB000

// #define UNUSED                  0x480C D000 

/* CPFROM */
#define CPFROM                     0x480CF000
#define CPFROM_L4                  0x480D0000

// #define RESERVED                0x480D1000

/* Interrupt controller 1 */
#define IC_1                       0x48200000

// #define RESERVED                0x42010000

/* S.M. */
#define S_M                        0x48280000

// #define RESERVED                0x48281000

/* L4-Wakeup interconnect (region A) */
#define L4_WAKE_UP_INTERCONNECT_A  0x48300000

/* Control module ID code */
#define CONTROL_MODULE_ID_CODE     0x4830A000
#define CONTROL_MODULE_ID_CODE_L4  0x4830B000

/* L4-Wakeup interconnect (Region B) */
#define L4_WAKE_UP_INTERCONNECT_B  0x4830C000
#define L4_WAKE_UP_INTERCONNECT_B_L4 0x48340000

// #define RESERVED                0x48341000

#endif __L4_CORE_H__
