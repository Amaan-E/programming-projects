/*Use if-else to check whether a number is even or odd */
#include <stdio.h>

int main( )
{
	int x;
	printf( "Enter a number to check if it is even or odd: " );
	scanf( "%d", &x );
	
	if ( x % 2 == 0 ) {
		printf( "%d is even.", x );
	} else {
		printf( "%d is odd.", x );
	}
	
	return 0;
}

