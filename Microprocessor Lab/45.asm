; Program to count even numbers from 1 to N
; N = 05H (changeable)
; Count stored in C

        MVI     B, 05H      ; B = N
        MVI     C, 00H      ; C = 0 (even count)

LOOP:   
        MOV     A, B
        ANI     01H         ; Check LSB
        JNZ     ODD         ; If LSB=1, number is odd

EVEN:   
        INR     C           ; Increment even count

ODD:    
        DCR     B           ; Decrement B
        JNZ     LOOP        ; Repeat until B=0

        HLT                 ; End program
