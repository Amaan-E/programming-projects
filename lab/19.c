/* Find all the factors of a natural number */
#include <stdio.h>

int main() {	
	int i, n;
	
	printf( "Enter a number to find its factors: ");
	scanf( "%d", &n );
	
	printf( "Factors: 1 %d, ", n );
	
	
	for ( i = 2; i <= n / 2; i++ ) {
		if ( n % i == 0 ) {
			printf( "%d ", i );
		}
	}

	return 0;
}


