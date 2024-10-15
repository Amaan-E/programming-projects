/*Use nesting of if-else (compare three numbers)*/
#include <stdio.h>

int main() {
	int x, y, z;
	printf( "Enter three numbers to compare them: \n" );
	scanf( "%d %d %d", &x, &y, &z );

	if( x > y ) {
		if ( x > z) {
			printf( "%d is greater than %d and %d.", x, y, z );
		} else {
			printf( "%d is greater than %d and %d.", z, x, y );
		}
	} else if( y > x ) {
		if ( y > z) {
			printf( "%d is greater than %d and %d.", y, x, z );
		} else {
			printf( "%d is greater than %d and %d.", z, x, y );
		}
	} else {
		printf( "All are equal." ); 
	}
	
	return 0;
}

