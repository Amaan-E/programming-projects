; Program to toggle a particular bit in a byte.

MVI     B, 88H

MVI     A, 08H
XRA     B

MOV     B, A

HLT