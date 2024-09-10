/*
Write functions that return the following values. (Assume that a and n are parameters, where a is an array of int values and n is the length of the array.)

(a) The largest element in a.
(b) The average of all elements in a.
(c) The number of positive elements in a.
 */


#include <stdio.h>
int largest_element( int n, int a[ n ] );
int average_array( int n, int a[ n ] );
int positive_elements_array( int n, int a[ n ] );

int main( int argc, char **argv ) {
	int n = 5; 
	int a[ n ];
	for ( int i = 0; i < n; i++ ) {
		a[ i ] = i;
	}
	
	printf("%d\n", largest_element( n, a ) );
	printf("%d\n", average_array( n, a ) );
	printf("%d\n", positive_elements_array( n, a ) );
	
	return 0;
}

int largest_element( int n, int a[ n ] ) {
    int largest = a[ 0 ];
    for ( int i = 1; i < n; i++ ) {
        if ( a[ i ] > largest ) {
            largest = a[ i ];
        }
    }
    return largest;
}

int average_array( int n, int a[ n ] ) {
	int i, sum = 0;
	for( i = 0; i < n; i++ ) {
		sum += a[ i ];
	}	
	return ( double )sum / n;

}

int positive_elements_array( int n, int a[ n ] ) {
	int i, p = 0;
	for( i = 0; i < n; i++ ) {
		if ( a[ i ] >= 0 ) {
			p += a[ i ];
		}
	}	
	return p;

}
