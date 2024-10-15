/*
Write a function gcd(m, n) that calculates the greatest common divisor of the integers m and n. (Programming Project 2 in Chapter 6 describes Euclid's algorithm for computing the GCD.)
*/
/*Project 6.02
Write a program that asks the user to enter two integers, then caluclates and displays their greatest common divison (GCD):

Enter two integers: 12 28
Greatest common divisor: 4
Hint: The classic algorithm for computing the GCD, known as Euclid's algorithm, goes as follows: 
Let m and n be variables containing the two numbers. If n is 0, then stop: m contains the GCD. 
Otherwise, compute the remainder when m is divided by n. 
Copy n into m and copy the remainder into n. Then repeat the process, starting with testing whether n is 0.
*/
#include <stdio.h>
int gcd( int m, int n );

int main( void ) {
	int m, n;
	printf( "Enter two integers:" );
	scanf( "%d %d", &m, &n );
	
	printf( "Greatest common divisor: %d", 	gcd( m, n ) );
	return 0;
}

int gcd( int m, int n ) {
	int r;
	while ( n != 0 ) {
		r = m % n; 
		m = n;
		n = r;
	}
	
	return m;
}



