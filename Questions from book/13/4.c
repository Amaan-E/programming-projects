/*
Write a program named reverse.c that echoes its command-line arguments in reverse order. Running the program by typing

reverse void and null 

should produce the following output:

null and void
 
 */
/*
#include <stdio.h>

int main( int argc, char *argv[] ) {
	int i;
	
	for ( i = 1; i < argc; i++ ) {
		;
	}
	
	for ( --i; i > 0; i-- ) {
		printf( "%s ", argv[ i ] );
	}
	return 0;
}
*/
#include <stdio.h>

int main( int argc, char *argv[] ) {
/*	char **p;
	
	for ( p = &argv[ 1 ]; *p; p++ ) {
		;
	}
	
	for ( --p; p >= &argv[ 1 ]; p-- ) {
		printf( "%s ", *p );
	}
*/	
	for ( char **p = &argv[ argc - 1 ]; p >= &argv[ 1 ]; p-- ) {
        printf( "%s ", *p );
	}
	
	return 0;
}
