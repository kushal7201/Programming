.ORIG x3000

        LD R0, VALUE         ; Load the value from memory into R0
        BRz ZERO             ; Branch if zero
        ADD R1, R0, #0        ; Copy R0 to R1
        NOT R1, R1            ; Negate the value in R1
        BRn NEGATIVE         ; Branch if negative
        ; If execution reaches here, the value is positive or zero
        ; Code for positive case goes here
        ; ...

ZERO:   ; Handle zero case
        ; Code for zero case goes here
        ; ...

NEGATIVE:   ; Handle negative case
        ; Code for negative case goes here
        ; ...

VALUE   .FILL #0             ; Address and value to be loaded (can be changed)

.END
