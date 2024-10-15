/*Swap two numbers */
#include <stdio.h>

int main() {
	int x, y;
	printf( "Enter two numbers to swap them: \n" );
	scanf( "%d %d", &x, &y );
	
	x = x + y;
	y = x - y;
	x = x - y;
	
	printf( "The numbers after swapping are %d and %d.", x, y );
	
	return 0;
}

