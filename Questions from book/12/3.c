/*
Simplify Programming Project 1(b) by taking advantage of the fact that an array name can be used as a pointer.
*/


#include <stdio.h>
#define N 100

void ReadMessage();
void PrintReversal();

char message[ N ];
char *traversal = message;

int main() {
	
	ReadMessage();
	PrintReversal();
	
	return 0;
}

void ReadMessage() {
	
	printf( "Enter a message: " );
	while (  ( ( *traversal = getchar() ) != '\n' ) && ( traversal != message + N ) ) {
		traversal++;		
	}
	
}

void PrintReversal() {
	
	printf( "Reversal is: " );
	--traversal;
	while( traversal >=  message ) {
		putchar( *traversal-- );
	}
	
	
}
