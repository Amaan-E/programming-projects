/*
========================================================
	Binary Search
========================================================
*/

#include <stdio.h>
#define N 5

int BinarySearch( int a[], int low, int high, int key );

int main( void ) {
	int a[N] = { 1, 2, 3, 4, 5 };
	printf( "Enter element to search: " );
	int n;
	scanf( "%d", &n );
	int low = 0, high = N - 1;
	int found = BinarySearch( a, low, high, n );
	if ( found != -1 ) {
		printf( "%d found at postion %d", n, found + 1 );
	} else {
		printf( "Not found!" );
	}

	return 0;
}

int BinarySearch( int a[], int low, int high, int key ) {
	int mid;
	while ( low <= high ) {
		mid = ( low + high ) / 2;
		if ( a[mid] == key ) {
			return mid;
		} else if ( a[mid] > key ) {
			high = mid - 1;
		} else {
			low = mid + 1;
		}
	
	}

	return -1;
}
