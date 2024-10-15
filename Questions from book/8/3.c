/*
Modify the repdigit.c program of Section 8.1 so that the user can enter more than one number to be tested for repeated digits. The program should terminate when the user enters a number that's less than or equal to 0. 
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
	bool digitSeen[ 10 ] = { false };
	int digit;
	long n, x;

	do {
		printf( "Enter a number: " );
		scanf( "%ld", &x );
	
		if ( x == 0 ) {
			break;
		}
		
		n = x;
		while ( n > 0 ) {
			digit = n % 10;
			if ( digitSeen[ digit ] ) {
				break;
			}
			digitSeen[ digit ] = true;
			n /= 10;
		}
		
		if ( n > 0 ) {
			printf( "Repeated digit\n" );
		} else {
			printf( "No repeated digit\n" );
		}
		
		for ( int i = 0; i < 10; ++i ) {
			digitSeen[ i ] = false;
		}
	
	} while ( x > 0 );		

}
