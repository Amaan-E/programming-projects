; Program to find sum and carry of two 8-bit numbers.

           MVI     A, 01H
           MVI     B, 0FFH

           ADD     B
           JC      CARRY
           MVI     C, 00H
           MOV     E, A
           HLT

CARRY:     MVI     C, 01H
           MOV     E, A
           HLT
