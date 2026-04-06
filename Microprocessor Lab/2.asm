; Program to transfer data from memory to register and back.
MVI A, 15H
STA 1000H
MVI A, 25H
LDA 1000H

HLT
