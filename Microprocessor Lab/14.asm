; Program to add two 16-bit numbers.

           LXI     B, 5555H
           LXI     D, 6666H

           MOV     A, C
           ADD     E
           JC      IN_B
           MOV     H, A

           MOV     A, B
           ADD     D
           JC      CARRY
           MVI     L, 00H
; Answer in BC
           MOV     B, A
           MOV     C, H
           HLT

IN_B:      INR     B
           RET
CARRY:     MVI     L, 01H
           RET
