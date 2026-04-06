; Program to swap nibbles of a byte (upper 4 bits ↔ lower 4 bits).
           MVI     B, 15H

           MVI     A, 0FH
           ANA     B

           MVI     D, 04H
           CALL    LEFT
           MOV     C, A


           MVI     A, 0F0H
           ANA     B

           MVI     D, 04H
           CALL    RIGHT
           ORA     C
           MOV     B, A

           HLT

LEFT:      RAL
           DCR     D
           JNZ     LEFT
           RET

RIGHT:     RAR
           DCR     D
           JNZ     RIGHT
           RET
