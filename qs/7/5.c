/*
In the SCRABBLE Crossword Game, players form words using small tiles, each containing a letter and a face value. 
The face value varies from one letter to another, based on the letter's rarity. 
(Here are the face values: 1: AEILNORSTU, 2: DG, 3: BCMP, 4: FHVWY, 5: K, 8: JX, 10: QZ.) 
Write a program that computes the value of a word by summing the values of its letters:

Enter a word: pitfall
Scrabble value: 12
Your program should allow any mixture of lower-case and upper-case letters in the word. Hint: Use the toupper library function.
*/

#include <stdio.h>
#include <ctype.h>

int main(void) {

    char c;
	int sum = 0;
	
    printf("Enter a word: ");
    while ((c = getchar()) != '\n') 
	{	c = toupper(c);
        switch (c) {
            case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':	//1: AEILNORSTU
                sum = sum + 1;
                break;
            case 'D': case 'G':	//2: DG
                sum = sum + 2;
                break;
            case 'B': case 'C': case 'M': case 'P':	 //3: BCMP
                sum = sum + 3;
                break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':	//4: FHVWY
                sum = sum + 4;
                break;
            case 'K':	//5: K
                sum = sum + 5;
                break;
            case 'J': case 'X':	//8: JX
                sum = sum + 8;
                break;
            case 'Q': case 'Z':	//10: QZ
                sum = sum + 10;
                break;
/*            default:
                putchar(c);
                break;
                */
        }
    }
    printf("Scrabble value: %d", sum);
    return 0;
}