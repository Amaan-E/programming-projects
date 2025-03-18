/*
========================================================
	Sequential Search
========================================================
*/

#include <stdio.h>
#define N 5

int SequentialSearch( int a[], int n, int key );

int main( void ) {
	int a[N] = { 1, 2, 3, 4, 5 };
	printf( "Enter element to search: " );
	int n;
	scanf( "%d", &n );
	int found = SequentialSearch( a, N, n );
	if ( found != -1 ) {
		printf( "Element found at postion %d", found );
	} else {
		printf( "Not found!" );
	}

	return 0;
}

int SequentialSearch( int a[], int n, int key ) {
	for ( int i = 0; i < n; ++i ) {
		if ( a[i] == key ) {
			return i + 1;
		}
	}

	return -1;
}
