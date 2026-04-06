; Program to load accumulator from memory using LDA.
MVI A, 15H
STA 1000H
MVI A, 25H
LDA 1000H

HLT
