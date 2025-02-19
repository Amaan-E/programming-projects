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

/*
Modify Programming Project 2 from Chapter 12 so that it includes the following function:

bool is_palindrome(const char *message);

The function returns true if the string pointed to by message is a palindrome.
*/

#include <stdio.h>
#include <stdbool.h>

#define N 100

void ReadMessage();
bool is_palindrome( const char *message );

char message[ N ];
char *traversal = message; 

int main() {
	
	ReadMessage();
	
	if ( is_palindrome( message ) == true ) {
		printf( "Palindrome");
	} else {
		printf( "Not a Palindrome");
	}
	return 0;
}

void ReadMessage() {
	
	printf( "Enter a message: " );
	while (  ( ( *traversal = getchar() ) != '\n' ) && ( traversal != message + N ) ) {
		if ( *traversal >= 'A' && *traversal <= 'Z' ) {
			*traversal = *traversal + 32;
		}
		traversal++;		
	}
	*traversal = '\0';
	
}

bool is_palindrome( const char *message ) {
	const char *p = message;
	--traversal; // One step before '\0'
	while( traversal >=  message ) {
		while ( !( *traversal >= 'a' && *traversal <= 'z' ) ) {
			traversal--;
		}	
		while ( !( *p >= 'a' && *p <= 'z' ) ) {
			p++;
		}
		if ( *traversal != *p ) {
			return false;
		}
		traversal--;
		p++;
	}
	
	return true;
}


