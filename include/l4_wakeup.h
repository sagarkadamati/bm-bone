#ifndef __L4_WAKE_UP_H__
#define __L4_WAKE_UP_H__

#define L4_WAKEUP                  0x48300000

// #define RESERVED                0x48300000

#define GPTIMER_12                 0x48304000
#define GPTIMER_12_L4              0x48305000

/* Power and reset manager */
#define POWER_MANAGER              0x48306000 /* Module region A */
#define RESET_MANAGER              0x48308000 /* Module region B */
// #define RESERVED                0x48308800
#define POWER_RESET_MANAGER_L4     0x48309000

// #define RESERVED                0x4830A000

/* WDTIMER 1 */
#define WDTIMER_1                  0x4830C000
#define WDTIMER_1_L4               0x4830D000

/* GPIO 1 */
#define GPIO_1                     0x48310000
#define GPIO_1_L4                  0x48311000

// #define RESERVED                0x48312000

/* WDTIMER 2 */
#define WDTIMER_2                  0x48314000
#define WDTIMER_2_L4               0x48315000

// #define RESERVED                0x48316000

/* GPTIMER 1 */
#define GPTIMER_1                  0x48318000
#define GPTIMER_1_L4               0x48319000

// #define RESERVED                0x4831A000

/* 32K timer */
#define TIMER_32K                  0x48320000
#define TIMER_32K_L4               0x48321000

// #define RESERVED                0x48322000

/* L4-Wakeup configuration */
#define ADDRESS_PROTECTION         0x48328000
#define INITITIATOR_PORT_L4_POART  0x48328800
#define LINK_AGENT                 0x48329000
#define INITITIATOR_PORT_L4_EMU    0x4832A000

// #define RESERVED                0x4832A800

#endif /* __L4_WAKE_UP_H__ */
