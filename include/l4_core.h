#ifndef __L4_CORE_H__
#define __L4_CORE_H__

#define L4_Core                 0x48000000 
#define L4_CORE_SIZE            SIZE_16M
#define Reserved              
#define RESERVED_SPACE_OFFSET_6 0x48000000
#define RESERVED_SPACE_SIZE_7   SIZE_8K

#define System_control_module   0x48002000 0x48002FFF 4KB
#define SCM_L4                  0x48003000 0x48003FFF 4KB

#endif __L4_CORE_H__
