#define CXD9225GG_INTC_CPU0_PHYS_BASE	0xEFFD0000
#define CXD9225GG_INTC_CPU0_VIRT_BASE	(CXD9225GG_INTC_CPU0_PHYS_BASE - \
					 CXD9225GG_1M_MAP_0_PHYS_BASE + \
					 CXD9225GG_1M_MAP_0_VIRT_BASE)

4 registers
CXD9225GG_INTC_ISL Interrupt Select (R/W)
CXD9225GG_INTC_IEN Interrupt Enable (R/W)

CXD9225GG_INTC_SWI Software Interrupt (R/W)

CXD9225GG_INTC_IEC Interrupt Enable Clear (W)
CXD9225GG_INTC_SWC Software Interrupt Clear (W)

CXD9225GG_INTC_PLS Pulse Select (R/W)
CXD9225GG_INTC_PIC Peripheral Identification

8 registers
CXD9225GG_INTC_EDGC Edge conrol (R/W)
CXD9225GG_INTC_LVLC Level control (R/W)

1 register
CXD9225GG_INTC_PRLC Priority Mask 
CXD9225GG_INTC_UEN User Mode
CXD9225GG_INTC_HVA 

128 registers
CXD9225GG_INTC_VADX Vector Address (R/W)
CXD9225GG_INTC_PRLX Vector Priority (R/W)

#define CXD9225GG_INTC_REG_OFFSET(n, r)	((r) + ((n) << 2))
