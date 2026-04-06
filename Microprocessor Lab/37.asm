; Program to count number of 1s (set bits) in a byte.

           MVI     C, 0FFH

           MVI     D, 00H

; n = n & n - 1
; count++
LOOP:      INR     D
           MOV     A, C
           DCR     C
           ANA     C
           MOV     C, A
           JNZ     LOOP

           HLT