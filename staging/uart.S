	PUBLIC  __iar_program_start
	SECTION .intvec : CODE
	DATA 
	DC32    0x20008000
	DC32    __iar_program_start
	CODE

__iar_program_start:
	LDR     R0, uart0
	LDR     R4, rom         ; rom address
	LDR     R5, [R4, #0x30]
	LDR     R6, [R5, #0x18]
	BLX     R6              ;Enable
	                         uart0
	LDR     R0, gpioA
	BLX     R6              ;Enable
	                         gpioA
	MOV.W   R0, #0x40004000 ;baseA
	MOVS    R1, #0x03       ;bit1
	                         +bit0

	LDR     R6, [R4, #0x0C]
	LDR     R6, [R6, #0x54]
	BLX     R6              ;pin type
	LDR     R6, [R5, #0x60]
	BLX     R6              ;get clock
	                         frequency

	MOV     R1, R0
	LDR     R0, uart0D
	MOV     R2, #115200
	MOV     R3, #0x60
	LDR     R5, [R4]
	MOV     R4, R0
	LDR     R6, [R5, #0x14]
	BLX     R6              ;115200,
	                         8N1
	LDR     R6, [R5, #0x38]
	LDR     R5, [R5]
	BLX     R6              ;wait for
	                         RXD
	CMP     R0, #0x0D       ;<CR>?
	BEQ     gotCR
	UXTB    R1, R0
	MOV     R0, R4
	BLX     R5              ;send to
	                         TXD
	B       main
	MOVS    R7, #0x70       ;the snake
	LDRB    R1, [R7]
	ADDS    R7, #1
	CMP     R1, #0
	BEQ     main
	MOV     R0, R4
	BLX     R5
	B       next
	DATA
	DC32    0x10000001
	DC32    0x01000014
	DC32    0x20000001
	DC32    0x4000452C
	DC32    0x4000C000
	DC8     "\r\nMy snake is mightier than
	         yours. Mine has legs!\r\n"
	        E616B65206973
	        206D696768746
	        9657220746861
	        6E20796F75727
	        32E204D696E65
	        20686173206C6
	        56773210D0A00
	END
