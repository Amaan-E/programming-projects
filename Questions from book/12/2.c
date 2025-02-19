/*
Write a program that reads a message, then checks whether it's a palindrome (the letters in the message are the same from left to right as from right to left):

Enter a message: He lived as a devil, eh?
Palindrome

Enter a message: Madam, I am Adam.
Not a palindrome

Ignore all characters that aren't letters. Use integer variables to keep track of positions in the array.
(b)
Revise the program to use pointers instead of integers to keep trac of positions in the array.
*/

#include <stdio.h>
#include <stdbool.h>

#define N 100

void ReadMessage();
bool CheckPalindrome();

char message[ N ];
int traversalForward = 0;
int traversalBackward = 0;

int main() {
	
	ReadMessage();
	
	if ( CheckPalindrome() == true ) {
		printf( "Palindrome");
	} else {
		printf( "Not a Palindrome");
	}
	return 0;
}

void ReadMessage() {
	
	printf( "Enter a message: " );
	while (  ( ( message[ traversalForward ] = getchar() ) != '\n' ) && ( traversalForward != N ) ) {
		if ( message[ traversalForward ] >= 'A' && message[ traversalForward ] <= 'Z' ) {
			message[ traversalForward ] = message[ traversalForward ] + 32;
		}
		traversalForward++;		
	}
	
}

bool CheckPalindrome() {
	
	--traversalForward; // Removes '\n'
//	printf( "T = %d\n", traversalForward );
//	printf( "T = %c\n", message[ traversalForward ] );
	
	while( traversalForward >=  0 ) {
		while ( !( message[ traversalForward ] >= 'a' && message[ traversalForward ] <= 'z' ) ) {
//		&& !( message[ traversalForward ] >= 'A' && message[ traversalForward ] <= 'Z' ) ) {
			traversalForward--;
		}	
		while ( !( message[ traversalBackward ] >= 'a' && message[ traversalBackward ] <= 'z' ) ) {
//		&& !( message[ traversalBackward ] >= 'A' && message[ traversalBackward ] <= 'Z' ) ) {
			traversalBackward++;
		}
		if ( message[ traversalForward ] != message[ traversalBackward ] ) {
			//printf( "M F = %c\n", message[ traversalForward ] );
			//printf( "M B = %c\n", message[ traversalBackward ] );
			
			return false;
		}
		traversalForward--;
		traversalBackward++;
	}
	
	return true;
	
	
}


