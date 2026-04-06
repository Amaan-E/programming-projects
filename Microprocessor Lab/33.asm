; Program to reset (clear) a particular bit in a byte.

MVI     B, 88H

MVI     A, 11110111B
ANA     B

MOV     B, A

HLT