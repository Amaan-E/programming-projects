/*
Write a function num_digits(n) that returns the number of digits in n (a positive integer). Hint: To determine the number of digits in a number n, divide it by 10 repeatedly. When n reaches 0, the number of divisions indicates how many digits n originally had.
 */


#include <stdio.h>
int num_digits( int n );

int main( int argc, char **argv ) {
	int n;
	scanf( "%d", &n );
	printf( "%d", num_digits( n ) );
	return 0;
}

int num_digits( int n ) {
	int i;
	for ( i = 0; n != 0; i++ ) {
		n = n / 10;
	}	
	return i;
}
