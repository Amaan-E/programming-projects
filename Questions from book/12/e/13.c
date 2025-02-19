#include <stdio.h>

#define N 10

int main( void ) {
    double ident[ N ][ N ], *p;
    int numZeros = 0;

    for ( p = &ident[ 0 ][ 0 ]; p <= &ident[ N - 1 ][ N - 1 ]; p++ ) {
        if ( p == &ident[ 0 ][ 0 ] ) {
            *p = 1.0; 
        } else if ( numZeros == N ) {
			*p = 1.0;
			numZeros = 0;
        } else if ( p < &ident[ N ][ N ] ) {
            *p = 0.0; 
            numZeros++;
		}
    }

	int counter = 0;
    printf( "Identity Matrix:\n" );
    for ( p = &ident[ 0 ][ 0 ]; p <= &ident[ N - 1 ][ N - 1 ]; p++ ) {
        printf( "%.1f ", *p );
        counter++;
        if ( counter == N ) {
			printf( "\n" );
			counter = 0;
		}
    }
    return 0;
}
