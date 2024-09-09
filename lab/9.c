//Use ternary operator

#include <stdio.h>

int main() {
	int x, y;
	printf( "Enter two numbers to compare them: \n" );
	scanf( "%d %d", &x, &y );
	
	x > y ?	printf( "%d is greater than %d.", x, y ) : x < y ?	printf( "%d is greater than %d.", y, x ) :	printf( "Both are equal." );
	
	return 0;
}

