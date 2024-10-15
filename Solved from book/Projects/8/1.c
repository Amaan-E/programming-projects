/*
Modify the repdigit.c program of Section 8.1 so that it shows which digits (if any) were repeated:

Enter a number: 939577
Repeated digit(s): 7 9
 */

/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* repdigit.c (Chapter 8, page 166) */
/* Checks numbers for repeated digits */

#include <stdbool.h>   /* C99 only */
#include <stdio.h>

int main() {
	bool digitSeen[ 10 ] = { false }, repeatedDigits[ 10 ] = { false };
	int digit;
	long n;

	printf( "Enter a number: " );
	scanf( "%ld", &n );

	while ( n > 0 ) {
		digit = n % 10;
		if ( digitSeen[ digit ] == true ) {
			repeatedDigits[ digit ] = true;
		}
		digitSeen[ digit ] = true;
		n /= 10;
	}

	printf( "Repeated digit(s): " );
	for ( int i = 0; i < 10; ++i ) {
		if ( repeatedDigits[ i ] == true ) {
			printf( " %d ", i );
		}
	}
	
	return 0;
}
