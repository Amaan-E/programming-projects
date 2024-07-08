/*
Write a program that translates an alphabetic phone number into numeric form:

Enter phone number: CALLATT
2255288
(In case you don't have a telephone nearby, here are the letters on the keys: 
2=ABC, 3=DEF, 4=GHI, 5=JKL, 6=MNO, 7=PRS, 8=TUV, 9=WXY.) 
If the original phone number contains nonalphabetic characters (digits or punctuation, for example), leave them unchanged:

Enter phone number: 1-800-COL-LECT
1-800-265-5328
You may assums that any letters entered by the user are upper case.
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char p;
    
    printf("Enter phone number: ");

    while ((p = getchar()) != '\n')
    {
        p = toupper(p);

        if (p == 'A' || p == 'B' || p == 'C')
            printf("2");
        else if (p == 'D' || p == 'E' || p == 'F')
            printf("3");
        else if (p == 'G' || p == 'H' || p == 'I')
            printf("4");
        else if (p == 'J' || p == 'K' || p == 'L')
            printf("5");
        else if (p == 'M' || p == 'N' || p == 'O')
            printf("6");
        else if (p == 'P' || p == 'R' || p == 'S')
            printf("7");
        else if (p == 'T' || p == 'U' || p == 'V')
            printf("8");
        else if (p == 'W' || p == 'X' || p == 'Y')
            printf("9");
        else
            putchar(p);
    }

    return 0;
}
