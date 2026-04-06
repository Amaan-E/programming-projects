==============TODO==============


; Program to check sign of number (positive/negative) using S flag.

MVI     B, 0FFH

MVI     C, 01H
; -
MOV     A, C
CMA
MOV     C, A


HLT
