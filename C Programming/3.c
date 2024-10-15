//Read two numbers from keyboard and compare them

#include <stdio.h>

int main() {
	int x, y;
	printf( "Enter two numbers to compare them: \n" );
	scanf( "%d %d", &x, &y );
	
	if( x > y ) {
		printf( "%d is greater than %d.", x, y );
	} else if( x < y ) {
		printf( "%d is greater than %d.", y, x );
	} else {
		printf( "Both are equal." ); 
	}
	
	return 0;
}

