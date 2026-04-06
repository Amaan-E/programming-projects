; Program to decrement a number using DCR / DCX.
MVI A, 15H
LXI B, 2505H

DCR A
DCX B ; PAIR

HLT
