; Print Numbers from N to 1 (Decrementing Loop)

           MVI     A, 09H
           LXI     B, 1000H

LOOP:      STAX    B
           INR     C
           DCR     A
           JNZ     LOOP

           HLT
