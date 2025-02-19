/*
Write a program that reads a message, then prints the reversal of the message:

Enter a message: Don't get mad, get even.
Reversal is: .neve teg ,dam teg t'noD

Hint: Read the message one character at a time (using getchar) and store the characters in an array. Stop reading when the array is full or the character read is '\n'.

(b) Revise the program to use a pointer instead of an integer to keep track of the current position in the array. 
 */


#include <stdio.h>
#define N 100

void ReadMessage();
void PrintReversal();

char message[ N ];
int traversal = 0;

int main() {
	
	ReadMessage();
	PrintReversal();
	
	return 0;
}

void ReadMessage() {
	
	printf( "Enter a message: " );
	while (  ( ( message[ traversal ] = getchar() ) != '\n' ) && ( traversal != N ) ) {
		//( ( ch = getchar() ) != '\n' && ch != EOF)
		traversal++;		
	}
	
}

void PrintReversal() {
	
	printf( "Reversal is: " );

	--traversal; // Removes '\n'
	while( traversal >=  0 ) {
		putchar( message[ traversal-- ] );
	}
	
	
}
