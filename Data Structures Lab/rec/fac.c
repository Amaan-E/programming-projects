#include <stdio.h>

int fac( int n );

int main() {
	printf( "%d ", fac( 5 ) );
	return 0;
}

int fac( int n ) {
	if ( n < 2 ) {
		return 1;
	} else {
		return n * fac( n - 1 );
	}
}