/*Check whether a number is prime or not*/
#include <stdio.h>

int main() {	
	int i, n, prime = 1;
	
	printf( "Enter a number to check whether it is prime or not: ");
	scanf( "%d", &n );
	
	for ( i = 2; i <= n - 1; i++ ) {
		if ( n % 2 == 0 ) {
			prime = 0;
		}
	}
	
	if ( prime  == 1 ) {
		printf( "Number is prime." );
	} else {
		printf( "Number is  NOT prime." );
	}

	return 0;
}
