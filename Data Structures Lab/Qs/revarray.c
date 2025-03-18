#include <stdio.h>
#define N 10

void Reverse( int a[], int n );
void PrintArray( int a[], int n );

int main() {
	int a[N] = { 1, 2, 3, 4, 5 };
	Reverse( a, 5 );
	PrintArray( a, 5 );
}

void PrintArray( int a[], int n ) {
	for ( int i = 0; i < n; ++i ) {
		printf( "%d ", a[i] );
	}
}

void Reverse( int a[], int n ) {
	for ( int i = 0, j = n - 1; i < j; ++i, --j ) {
		int t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}