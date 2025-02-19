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
char *traversalForward = message;
char *traversalBackward = message;

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
	while (  ( ( *traversalForward = getchar() ) != '\n' ) && ( traversalForward != message + N ) ) {
		if ( *traversalForward >= 'A' && *traversalForward <= 'Z' ) {
			*traversalForward = *traversalForward + 32;
		}
		traversalForward++;		
	}
	
}

bool CheckPalindrome() {
	
	--traversalForward; // Removes '\n'
	
	while( traversalForward >=  message ) {
		while ( !( *traversalForward >= 'a' && *traversalForward <= 'z' ) ) {
			traversalForward--;
		}	
		while ( !( *traversalBackward >= 'a' && *traversalBackward <= 'z' ) ) {
			traversalBackward++;
		}
		if ( *traversalForward != *traversalBackward ) {
			return false;
		}
		traversalForward--;
		traversalBackward++;
	}
	
	return true;
}
