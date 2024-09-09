/* Find roots of a quadratic equation */
#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c, d, rootOne, rootTwo;
	
	printf( "Enter values of a, b and c from a(x^2)+bx+c = 0: " );
	scanf( "%d %d %d", &a, &b, &c );
	
	d = ( b * b ) - ( 4 * a * c );
	
	if ( d < 0 ) {
		printf( "Roots are complex." );
	} else if ( d > 0 ) {
		rootOne = ( - b + sqrt( d ) ) / ( 2 * a );
		rootTwo = ( - b - sqrt( d ) ) / ( 2 * a );
		printf( "The roots are : %d %d", rootOne, rootTwo );
		
	} else {
		rootOne = ( - b + sqrt( d ) ) / ( 2 * a );
		printf( "The roots are equal: %d", rootOne );
	}

		
	
	return 0;
}

