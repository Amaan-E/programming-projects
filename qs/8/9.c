/*
Write a program that generates a "random walk" across a 10 x 10 array. The array will contain characters (all '.' initially). The program must randomly "walk" from element to element, always going up, down, left or right by one element. The elements visited by the program will be labeled with the letters A through Z, in the order visited. Here's an example of the desired output:

A . . . . . . . . .
B C D . . . . . . .
. F E . . . . . . .
H G . . . . . . . .
I . . . . . . . . .
J . . . . . . . Z .
K . . R S T U V Y .
L M P Q . . . W X .
. N O . . . . . . .
. . . . . . . . . .
Hint Use the srand and rand functions (see deal.c) to generate random numbers. After generating a number, look at its remainder when divided by 4. There are four possible values for the remainder -- 0, 1, 2 and 3 -- indiciating the direction of the next move. Before performing a move, check that (a) it won't go outside the array, and (b) it doesn't take us to an element that already has a letter assigned. If either condition is violated, try moving in another direction. If all four directions are blocked, thr program must terminate. Here's an example of premature termination:

A B G H I . . . . .
. C F . J K . . . .
. D E . M L . . . .
. . . . N O . . . .
. . W X Y P Q . . .
. . V U T S R . . .
. . . . . . . . . .
. . . . . . . . . .
. . . . . . . . . .
. . . . . . . . . .

Y is blocked on all four sides, so there's no place to put Z.
 */
 
/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/
/*
// deal.c (Chapter 8, page 173)
// Deals a random hand of cards

#include <stdbool.h>   // C99 only
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13


int main(void)
{
  bool in_hand[NUM_SUITS][NUM_RANKS] = {false};
  int num_cards, rank, suit;
  const char rank_code[] = {'2','3','4','5','6','7','8',
                            '9','t','j','q','k','a'};
  const char suit_code[] = {'c','d','h','s'};

  srand((unsigned) time(NULL));

  printf("Enter number of cards in hand: ");
  scanf("%d", &num_cards);

  printf("Your hand:");
  while (num_cards > 0) {
    suit = rand() % NUM_SUITS;     // picks a random suit
    rank = rand() % NUM_RANKS;     // picks a random rank
    if (!in_hand[suit][rank]) {
      in_hand[suit][rank] = true;
      num_cards--;
      printf(" %c%c", rank_code[rank], suit_code[suit]);
    }
  }
  printf("\n");

  return 0;
}
*/


#include <stdbool.h>   // C99 only
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 10
#define COL 10
#define ALP 26

int main( void ) {
	char a[ ROW ][ COL ];
	int row, col, randC, randR, randL, remainderR, remainderC, s = 65;
	char l[ ALP ];
	for ( col = 0; col < ALP; col++ ) {
		l[ col ] = s++;
	}
	
	for ( row = 0; row < ROW; row++ ) {	
		for ( col = 0; col < COL; col++ ) {
			a[ row ][ col ] = '.';
		} 
	}
	
	srand((unsigned) time(NULL));
    
    for ( row = 0; row < ROW; row++ ) {	
		for ( col = 0; col < COL; col++ ) {
			randR = rand( ) % ROW;     /* picks a random row */
			randC = rand( ) % COL;     /* picks a random col */
			randL = rand( ) % ALP;
			remainderR = randR % 4;
			remainderC = randC % 4;
			if ( a[ row ][ col ] == '.' ) {
				remainderR++;
				a [ remainderR ] [ remainderC ] = randL;
				remainderC++;
			}	 
			else if ( a[ row ][ col ] !=  ( a[ row ][ col ] >= 65 && a[ row ][ col ]<= 90 ) ) {
				remainderR--;
				remainderC--;
			} else {
				break;
			}		
		}
	}
	
	for ( row = 0; row < ROW; row++ ) {	
		for ( col = 0; col < COL; col++ ) {
			printf( "%c ", a[ row ][ col ] );
		}
		printf( "\n" );
	}
	
	
	return 0;
}

/*
#include <stdbool.h>   // C99 only
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 10
#define COL 10
#define ALP 26

int main(void) {
    char a[ROW][COL];
    int row, col, randC, randR, randL;
    char l[ALP];
    
    // Initialize the array with '.'
    for (row = 0; row < ROW; row++) {
        for (col = 0; col < COL; col++) {
            a[row][col] = '.';
        }
    }
    
    // Initialize the alphabet array
    for (col = 0; col < ALP; col++) {
        l[col] = 'A' + col;
    }
    
    srand((unsigned)time(NULL));
    
    // Assign random characters to the array
    for (int i = 0; i < 50; i++) { // Assign 50 random characters
        randR = rand() % ROW;
        randC = rand() % COL;
        randL = rand() % ALP;
        
        if (a[randR][randC] == '.') {
            a[randR][randC] = l[randL];
        }
    }
    
    // Print the array
    for (row = 0; row < ROW; row++) {
        for (col = 0; col < COL; col++) {
            printf("%c ", a[row][col]);
        }
        printf("\n");
    }
    
    return 0;
}
*/

/* P
// Starting position for placing letters
    randR = rand() % ROW;
    randC = rand() % COL;
    a[randR][randC] = l[0]; // Place the first letter 'A'
    
    for (int i = 1; i < ALP; i++) { // Assign letters A-Z
        bool placed = false;
        for (int attempts = 0; attempts < 100; attempts++) { // Limit attempts to find a valid position
            int direction = rand() % 4; // Random direction
            int newRow = randR;
            int newCol = randC;

            // Determine new position based on direction
            switch (direction) {
                case 0: newRow--; break; // Up
                case 1: newRow++; break; // Down
                case 2: newCol--; break; // Left
                case 3: newCol++; break; // Right
            }

            // Check if the new position is valid
            if (newRow >= 0 && newRow < ROW && newCol >= 0 && newCol < COL && a[newRow][newCol] == '.') {
                a[newRow][newCol] = l[i]; // Place the letter
                randR = newRow; // Update current position
                randC = newCol;
                placed = true;
                break; // Exit the attempts loop
            }
        }

        // If we could not place the letter after 100 attempts, terminate
        if (!placed) {
            printf("Blocked on all sides, terminating the program.\n");
            break;
        }
    }
*/    
    
