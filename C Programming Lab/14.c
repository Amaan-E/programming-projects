/*Display the series (using loops): n n-1 n-2 …. 3 2 1*/
#include <stdio.h>

int main() {
	int n;
	printf( "Enter n: " );
	scanf( "%d", &n );
	
	for( ; n >= 1; n-- ) {
		printf( "%d ", n );
	}
	
	return 0;
}

