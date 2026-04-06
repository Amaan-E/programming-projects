; Program to find 1’s complement and 2’s complement of a number.

           MVI     B, 05H
           CALL    ONES_C
;CALL TWOS_C
           HLT

ONES_C:    MOV     A, B
           CMA
           MOV     E, A

TWOS_C:    MOV     A, B
           CMA
           INR     A
           MOV     E, A
