; Program to add a series of numbers (sum of N bytes).
           LXI     B, 1000H
           LXI     H, 1000H


           MVI     A, 01H

           MVI     D, 05H
           CALL    STORE

           MVI     A, 00H
           MVI     D, 05H
           CALL    ADD_S
           HLT

ADD_S:     ADD     M
           INX     H
           DCR     D
           JNZ     ADD_S
           RET

; Stores 1 to 5 in Memory.
STORE:     STAX    B
           INR     A
           INX     B
           DCR     D
           JNZ     STORE
           RET