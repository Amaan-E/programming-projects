/*Find product of series: 1 2 3 4 5 .... n*/
#include <stdio.h>

int main() {
	int i, n, prod = 1;
	printf( "Enter n: " );
	scanf( "%d", &n );
	for( i = 1; i <= n; i++ ) {
		prod *= i;
	}
	printf( "Product = %d ", prod );
	
	return 0;
}


