//Swap two functions using function
#include <stdio.h>
int swap( int, int );

int main ( void ) {
	int a, b;
	printf( "Enter first integer: " );
	scanf( "%d", &a );
	printf( "Enter second integer: " );
	scanf( "%d", &b );
	
	swap(a, b);
	
}

/*
===================
Swap two integers
===================
*/
int swap ( int a, int b ) {
	int c;
	
	c = a;
	a = b;
	b = c;
	printf( "Swapped integers are: %d %d", a, b );
	
}
