MVI B, 00H     ; Initialize the quotient (B register)
MVI D, 00H     ; Initialize the remainder (D register)

MOV E, 02H     ; Copy the dividend to E register for manipulation
MOV C, 02H     ; Store divisor in C register

START:         
    MOV A, E   ; Copy current remainder value (E register) into A
    CMP C       ; Compare A (remainder) with divisor (C)
    JC END      ; If A < C, end the division (remainder < divisor)

    SUB C       ; Subtract divisor (C) from remainder (A)
    MOV E, A    ; Store the result back in the remainder (E register)

    INX B       ; Increment the quotient (B register)
    JMP START   ; Repeat the subtraction

END:
    MOV 2002H, B ; Store the quotient in memory location 2002H
    MOV 2003H, E ; Store the remainder in memory location 2003H

HLT            ; End of the program
