/*
Modify the repdigit.c program of Section 8.1 so that it prints a table showing how many times each digit appears in the number:

Enter a number: 41271092
Digit:        0 1 2 3 4 5 6 7 8 9
Occurrences:  1 2 2 0 1 0 0 1 0 1 
 */
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

int main( void ) {
	int repeatedDigits[ 10 ] = { 0 };
	int digit;
	long n;

	printf( "Enter a number: " );
	scanf( "%ld", &n );

	while ( n > 0 ) {
		digit = n % 10;
		repeatedDigits[ digit ]++ ;
		n /= 10;
	}

	printf("Digit:	      0 1 2 3 4 5 6 7 8 9\n");
	printf("Occurrences:  ");
	for ( int i = 0; i < 10; ++i ) {
		printf( "%d ", repeatedDigits[ i ] );
	}
	
}
