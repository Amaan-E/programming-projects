#include <stdio.h>
#define N 5

int times( int a[], int n, int k );

int main() {
	int a[N] = { 1,2,2,3,4 };

	printf( "%d appears %d times.", *( a + 1 ), times( a, N, *( a + 1 ) ) );
}	 

int times( int a[], int n, int k ) {
	int t = 0;
	for ( int *p = a; p < a + n; p++ ) {
		if ( *p == k ) {
			++t;
		}
	}

	return t;
}