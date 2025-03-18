#include <stdio.h>

int fac_tail( int n, int a );

int main() {
	printf( "%d ", fac_tail( 5, 1 ) );
}

int fac_tail( int n, int a ) {
	if ( n < 2 ) {
		return a;
	} else {
		return fac_tail( n - 1, n * a );
	}
}