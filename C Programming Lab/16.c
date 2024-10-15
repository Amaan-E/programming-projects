/*Find sum of series: 1 2 3 4 5 .... n*/
#include <stdio.h>

int main() {
	int i, n, sum = 0;
	printf( "Enter n: " );
	scanf( "%d", &n );
	for( i = 1; i <= n; i++ ) {
		sum = sum + i;
	}
	printf( "Sum = %d ", sum );
	
	return 0;
}


