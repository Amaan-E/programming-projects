/*
Write a function that computes the value of the following polynomial:

3x^5 + 2x^4 - 5x^3 - x² + 7x - 6.

Write a program that asks the user to enter a value for x, calls the function to compute the value of the polynomial, and then displays the value returned by the function.
 */


#include <stdio.h>
int value_of_polynomial( int x );

int main( int argc, char **argv ) {
	int x;
	printf( "Enter value of x: " );
	scanf( "%d", &x );
	
	printf( "%d", value_of_polynomial( x ) );
	return 0;
}

int value_of_polynomial( int x ) {
	x = ( ( 3 * x * x * x * x * x ) + ( 2 * x * x * x * x ) - ( 5 * x * x * x ) - ( x * x ) + ( 7 * x ) ) - 6;
	
	return x;
}

