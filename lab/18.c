// Find factorial of a number entered by the user
#include <stdio.h>

int main() {	
	int f = 1, n, x;
	
	printf( "Enter a number to find its factorial: ");
	scanf( "%d", &n );
	x = n;
	
	for ( ; n >= 2; n-- ) {
		f = f * n;
	}
	printf( "%d! = %d", x, f );
	return 0;
}

