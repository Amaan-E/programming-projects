; Program to check even/odd using ANI 01H.

MVI A, 04H

ANI 01H
JZ EVEN
JMP ODD

EVEN:
  MVI H, 00H
  HLT

ODD:
  MVI H, 01H
  HLT
