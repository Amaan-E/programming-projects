/*
	Write a program to insert a number in an array that is already sorted.
*/

#include <stdio.h>
#define N 10

int main() {
	int n;
	printf( "Enter no. of elements: " );
	scanf( "%d", &n );

	int a[N];
	for ( int i = 0; i < n; ++i ) {
		printf( "a[%d] = ", i );
		scanf( "%d", &a[i] );
	}

	int insert;
	printf( "Enter number to insert: " );
	scanf( "%d", &insert );
	int position = 0;
	int i;
	for ( i = 0; i < n; ++i ) {
		if ( a[i] < insert ) {
			position = i;
		}
	}

	++n;
	for ( ; i >= position; --i ) {
		a[i + 1] = a[i];
	}
	a[position] = insert;

	/*
	for ( i = 0; i < n; i++ ) {
		if ( arr[i] > num )	{
			for ( j = n–1; j >= i; j–– ) {
				arr[j + 1] = arr[j];
            }
			arr[i] = num;
			break;
		}
	}
	n = n + 1;
	*/

	printf( "After insertion: " );
	for ( int i = 0; i < n; ++i ) {
		printf( "%d ", a[i] );
	}

	return 0;
}