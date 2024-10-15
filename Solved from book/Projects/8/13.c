/*
Write a program that takes a first name and a last name entered by the user and displays the last name,
 a comma, and the first initial, followed by a period:

Enter a first and last name: Lloyd Fosdick
Fodsick, L.
The user's input may contain extra spaces before the first name, between the first and last names, and after the last name.
*/
/*
Modify Programming Project 11 from Chapter 7 so that the program labels its output:

Enter a first and last name: Lloyd Fosdick
You entered the name: Fosdick, L.

The program will need to store the last name (but not the first name) in an array of characters until it can be printed. You may assume that the last name is no more than 20 characters long.	
*/


#include <stdio.h>
#define MAX_NAME 20

int main( void ) {

    char lastName[ MAX_NAME ], firstName;
    int i = 0, j = 0;

    printf( "Enter a first and last name: " );
    scanf( " %c", &firstName );
 
// Use the while or for loop from below, both work correctly.
    
/*    while ( ( lastName [ i++ ] = getchar( ) ) != ' ' ) {
        ;
	}
	i = 0;
    while ( ( lastName [ i++ ] = getchar( ) ) == ' ' ) {
        ;
	}
*/
	for ( i = 0; ( lastName [ i ] = getchar( ) ) != ' '; i++ ) {
		;	
	}	
	
	for ( i = 0; ( lastName [ i ] = getchar( ) ) == ' '; i++ ) {
		;	
	}

	
/*	putchar( lastName[ i ] );
	for ( i = 0; ( lastName[ i ] = getchar( ) ) != '\n' && lastName[ i ] != ' '; i++ ) {
        putchar( lastName[ i ] );
	}
*/	
	i = 0;
	do {
	putchar( lastName[ i++ ] );
	} while ( ( lastName[ i ] = getchar( ) ) != '\n' && lastName[ i ] != ' ' );

    printf( ", %c.", firstName );

}
