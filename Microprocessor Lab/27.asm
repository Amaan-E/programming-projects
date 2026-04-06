; Program to compare two numbers and identify greater/smaller/equal.

           MVI     A, 08H
           MVI     B, 08H

           CMP     B

; A is smaller
           JC      SMALL
           JZ      EQUAL
           JMP     GREATER

SMALL:     MVI     H, -1
           HLT

EQUAL:     MVI     H, 0
           HLT

GREATER:   MVI     H, 1
           HLT
