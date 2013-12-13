#ifndef __L4_PER_H__
#define __L4_PER_H__

#define L4_PER                     0x49000000

/* L4-Per configuration */
#define ADDRESS_PROTECTION         0x49000000
#define INITITIATOR_PORT           0x49000800
#define LINK_AGENT                 0x49001000

// #define RESERVED                0x49002000

/* UART3 (Infrared) */
#define UART3                      0x49020000
#define UART3_L4                   0x49021000

/* McBSP2 (Audio for codec) */
#define MCBSP2                     0x49022000
#define MCBSP2_L4                  0x49023000

/* McBSP3 (Bluetooth voice data) */
#define MCBSP3                     0x49024000
#define MCBSP3_L4                  0x49025000

/* McBSP4 (Digital baseband voice data) */
#define MCBSP4                     0x49026000
#define MCBSP4_L4                  0x49027000

/* McBSP2 (Sidetone) */
#define MCBSP2                     0x49028000
#define MCBSP2_L4                  0x49029000

/* McBSP3 (Sidetone) */
#define MCBSP3                     0x4902A000
#define MCBSP3_L4                  0x4902B000

// #define RESERVED                0x4902C000

/* WDTIMER3 */
#define WDTIMER3                   0x49030000
#define WDTIMER_3_L4               0x49031000

/* GPTIMER2 */
#define GPTIMER2                   0x49032000
#define GPTIMER2_L4                0x49033000

/* GPTIMER3 */
#define GPTIMER3                   0x49034000
#define GPTIMER3_L4                0x49035000

/* GPTIMER4 */
#define GPTIMER4                   0x4903 6000
#define GPTIMER4_L4                0x4903 7000

/* GPTIMER5 */
#define GPTIMER5                   0x49038000
#define GPTIMER5_L4                0x49039000

/* GPTIMER6 */
#define GPTIMER6                   0x4903A000
#define GPTIMER6_L4                0x4903B000

/* GPTIMER7 */
#define GPTIMER7                   0x4903C000
#define GPTIMER7_L4                0x4903D000

/* GPTIMER8 */
#define GPTIMER8                   0x4903E000
#define GPTIMER8_L4                0x4903F000

/* GPTIMER9 */
#define GPTIMER9                   0x49040000
#define #define _L4                0x49041000

// #define RESERVED                0x49042000

/* GPIO2 */
#define GPIO2                      0x49050000
#define GPIO2_L4                   0x49051000

/* GPIO3 */
#define GPIO3                      0x49052000
#define GPIO3_L4                   0x49053000

/* GPIO4 */
#define GPIO4                      0x49054000
#define GPIO4_L4                   0x49055000

/* GPIO5 */
#define GPIO5                      0x49056000
#define GPIO5_L4                   0x49057000

/* GPIO6 */
#define GPIO6                      0x49058000
#define GPIO6_L4                   0x49059000

// #define RESERVED                0x4905A000

#endif /* __L4_PER_H__ */
