; Program to subtract two 16-bit numbers.

           LXI     B, 5555H
           LXI     D, 6666H

           MOV     A, E
           CMA
           INR     A
           ADD     C
           JC      IN_B
           MOV     H, A

           MOV     A, D
           CMA
           INR     D
           ADD     B
           JC      BORROW
           MVI     L, 00H
; Answer in BC
           MOV     B, A
           MOV     C, H
           HLT

IN_B:      INR     B
           RET
BORROW:    MVI     L, 01H
           RET

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

; Program to subtract two 16-bit numbers using two's complement.

LXI     B, 5555H    ; Load BC pair with 5555H (B = 55, C = 55)
LXI     D, 6666H    ; Load DE pair with 6666H (D = 66, E = 66)

; Step 1: Take the two's complement of the second number (6666H)
MOV     A, E        ; A = E (low byte of the second number)
CMA                 ; A = one's complement of A (E = 66H -> A = 99H)
INR     A           ; Add 1 to the result (A = 99H + 1 = 9AH)
MOV     E, A        ; Store the result back in E (E = 9AH)

MOV     A, D        ; A = D (high byte of the second number)
CMA                 ; A = one's complement of A (D = 66H -> A = 99H)
INR     A           ; Add 1 to the result (A = 99H + 1 = 9AH)
MOV     D, A        ; Store the result back in D (D = 9AH)

; Step 2: Add the first number (5555H) to the two's complement of the second number
MOV     A, C        ; A = C (low byte of the first number)
ADD     E           ; A = A + E (C + 9AH)
JC      IN_B        ; If carry occurs, jump to IN_B (borrow)
MOV     H, A        ; Store the result in H (low byte result)

MOV     A, B        ; A = B (high byte of the first number)
ADD     D           ; A = A + D (B + 9AH)
JC      BORROW      ; If carry occurs, jump to BORROW
MVI     L, 00H      ; No borrow, store 00 in L
MOV     B, A        ; Store the high byte result in B
MOV     C, H        ; Store the low byte result in C
HLT                 ; Halt the program

IN_B:               ; Handle the borrow for the low byte
INR     B           ; Increment B (add borrow to the high byte)
RET                 ; Return from subroutine

BORROW:            ; Handle the borrow for the high byte
MVI     L, 01H      ; Set L to 01H to indicate borrow
RET                 ; Return from subroutine
