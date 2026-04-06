; Program to exchange contents of register pairs using XCHG / XTHL.

LXI     H, 3555H
LXI     D, 1234H
XCHG

PUSH    H

XTHL

HLT