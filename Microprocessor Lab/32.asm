; Program to set a particular bit in a byte.

MVI     B, 88H

MVI     A, 00000001B
ORA     B

MOV     B, A

HLT
