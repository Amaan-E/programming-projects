; Program to subtract two 8-bit numbers.

           MVI     A, 0FFH
           MVI     B, 01H

           SUB     B
           JNC     NO_BORROW
           MVI     C, 01H
           MOV     E, A
           HLT

NO_BORROW: MVI     C, 00H
           MOV     E, A
           HLT
