; Program to multiply two 8-bit numbers using repeated addition.

; 3x4

MVI A, 00H
MVI B, 03H
MVI C, 04H

MUL:
  ADD B
  DCR C
  JNZ MUL

HLT