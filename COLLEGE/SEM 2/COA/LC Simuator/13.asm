.ORIG x3000

AND R4, R4, #0
AND R6, R6, #0

LEA R4, START_ADDRESS    ; Load the starting address of the data

LDR R3, R4, #0
LDR R4, R4, #-1

LD R4, N

ADD R5, R3, R4

BRp POS
BRn NEG
BRz EN

POS ADD R6, R6, #1
BRp EN

NEG ADD R6, R6, #-1

EN ADD R2, R2, #1

N .FILL #-9

HALT

START_ADDRESS .FILL x0FE

.END
