/*
Write a function digit(n, k) that returns the kth digit (from the right) in n (a positive integer). For example digit(829, 1) returns 9, digit(829, 2) returns 2 and digit(829, 3) returns 8. if k is greater than the number of digits in n, have the function return 0. 
 */
#include <stdio.h>
int digit( int n, int k);

int main( int argc, char **argv ) {
//	int n, k;
//	scanf( "%d %d", &n, &k);
	printf( "%d", digit( 829, 1 ) );
	return 0;
}

int digit( int n, int k) {
	int i, r; 
	//og = n;
	
	for ( i = 1; i <= k; i++ ) {
		r = n % 10;
		n = n / 10;
	}
		
/*	i = 0;
	while ( og != 0 ) {
		og = og / 10;
		i++;
	}
	if ( i > k ) {
		return 0;
	}
*/
	return r;
}
