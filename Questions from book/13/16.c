/*
Write a program that reads a message, then prints the reversal of the message:

Enter a message: Don't get mad, get even.
Reversal is: .neve teg ,dam teg t'noD

Hint: Read the message one character at a time (using getchar) and store the characters in an array. Stop reading when the array is full or the character read is '\n'.

(b) Revise the program to use a pointer instead of an integer to keep track of the current position in the array. 
 */
/*
Modify Programming Project 1 from Chapter 12 so that it includes the following function:

void reverse(char *message);

The function reverses the string pointed to by message. Hint: Use two pointers, one initially pointing to the first character of the string and the other initially pointing to the last character. Have the function reverse these characters and then move the pointers toward each other, repeating the process until the pointers meet.
*/

#include <stdio.h>

#define N 100

void ReadMessage( char message[] );
void reverse( char *message );

int main() {
	char message[ N ];
	
	ReadMessage( message );
	reverse( message );
	printf( "Reversal is: %s", message );
	
	return 0;
}

void ReadMessage( char message[] ) {
	char *q = message;
	
	char ch;
	printf( "Enter a message: " );
	while ( ( ch = getchar() ) != '\n' ) {
			if ( q < message + ( N + 1 ) ) {
				*q++ = ch; 
			}
			*q = '\0'; 
		}
}

/*
=====================================
The function reverses the string pointed to by message. Hint: Use two pointers, one initially pointing to the first character of the string and the other initially pointing to the last character. Have the function reverse these characters and then move the pointers toward each other, repeating the process until the pointers meet.
======================================
*/ 
void reverse( char *message ) {

	char *p = message;
	char *q = message;
	while( *q ) {
		q++;
	}
	--q;
	
	//printf( "%c, %c", *p, *q );
	
	char temp;
	while ( p < q ) {
/*
Condition: p < q

    This condition checks if the pointer p is less than q.
    It effectively allows the loop to continue as long as p has not reached or passed q. This is useful for swapping elements in an array from both ends towards the center.
    When p equals q, it means you've reached the middle of the array, and you should stop swapping.

Condition: p != q

    This condition checks if p is not equal to q.
    While this seems similar, it can lead to issues if p and q point to adjacent elements. In such cases, when they become equal after a swap, the loop will exit before completing all necessary swaps.
    If p and q are adjacent (e.g., one pointing to the last element and the other to the second last), after one iteration, they will become equal, causing the loop to terminate prematurely.
*/
		temp = *q; 
		*q = *p;
		*p = temp; 
		++p;
		--q; 
	}
}
