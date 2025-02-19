/*
Modify Programming Project 5 from Chapter 7 so that it includes the following function:

int compute_scrabble_value(const char *word);

The function returns the SCRABBLE value of the string pointed to by word. 
 */

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

int compute_scrabble_value(const char *word);

int main(void) {

    char c[20];
	
    printf("Enter a word: ");
	scanf( "%20s", c);
    
    printf("Scrabble value: %d", compute_scrabble_value(c));
    
    return 0;
}

int compute_scrabble_value(const char *word){
	int sum = 0;
	    while (*word) {	
        switch (toupper(*word++)) {
            case 'A': case 'E': case 'I': case 'L': 
            case 'N': case 'O': case 'R': case 'S': 
            case 'T': case 'U':	//1: AEILNORSTU
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
    
    return sum;
	
}
