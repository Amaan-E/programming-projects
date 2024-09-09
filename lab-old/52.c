//a + b a - b b - a using function
#include <stdio.h>
int add( int, int );
int sub( int, int );

int main() {
	int a, b;
	printf( "Enter first integer: " );
	scanf( "%d", &a );
	printf( "Enter second integer: " );
	scanf( "%d", &b );
	
	add( a, b );
	sub( a, b );
	sub( b, a );
	
	return 0;
}

/*
===================
Adds two integers
===================
*/
int add ( int a, int b ) {
	printf( "Sum: %d\n", a + b );
}

/*
======================
Subtracts two integers
======================
*/
int sub ( int a, int b ) {
	printf( "Difference: %d\n", a - b );
}

