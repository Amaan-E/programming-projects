/*
Write a program that translates an alphabetic phone number into numeric form:

Enter phone number: CALLATT
2255288
(In case you don't have a telephone nearby, here are the letters on the keys: 
2=ABC, 3=DEF, 4=GHI, 5=JKL, 6=MNO, 7=PRS, 8=TUV, 9=WXY.) 
If the original phone number contains nonalphabetic characters (digits or punctuation, for example), leave them unchanged:

Enter phone number: 1-800-COL-LECT
1-800-265-5328
You may assums that any letters entered by the user are upper case.
*/
/*
Modify Programming Project 4 from Chapter 7 so that the program labels its output:

Enter phone number: 1-800-COL-LECT
In numeric form: 1-800-265-5328

The program will need to store the phone number (either in its original form or in its numeric form) in an array of character until it can be printed. You may assume that the phone number is no more than 15 characters long.
 */
#include <stdio.h>
#include <ctype.h>

int main( void ) {
    char phoneNumber [ 15 ];
    int i = 0;
    
    printf("Enter phone number: ");

/*	for ( i = 0; i < 15 && ( ( phoneNumber[ i ] = getchar( ) ) != '\n' ); i++ ) { //i < 15 optional
		//phoneNumber[ i ] = getchar( ) != '\n';
		phoneNumber[ i ] = toupper( phoneNumber[ i ] );
	}	
*/
    while ( ( phoneNumber[ i++ ] = getchar( ) ) != '\n' ) {
		phoneNumber[ i ] = toupper( phoneNumber[ i ] );
	}
	
    printf( "In numeric form: " );
	for ( i = 0; phoneNumber[ i ] != '\0'; i++ ) {
//	printf( "%c", phoneNumber[ i ] );
//  while ( ( p = getchar( ) ) != '\n' ) {
//		p = toupper( p );
        if ( phoneNumber[ i ] == 'A' || phoneNumber[ i ] == 'B' || phoneNumber[ i ] == 'C' ) {
            printf( "2" );
        } else if ( phoneNumber[ i ] == 'D' || phoneNumber[ i ] == 'E' || phoneNumber[ i ] == 'F' ) {
            printf( "3" );
        } else if ( phoneNumber[ i ] == 'G' || phoneNumber[ i ] == 'H' || phoneNumber[ i ] == 'I' ) {
            printf( "4" );
        } else if ( phoneNumber[ i ] == 'J' || phoneNumber[ i ] == 'K' || phoneNumber[ i ] == 'L' ) {
            printf( "5" );
        } else if ( phoneNumber[ i ] == 'M' || phoneNumber[ i ] == 'N' || phoneNumber[ i ] == 'O' ) {
            printf( "6" );
        } else if ( phoneNumber[ i ] == 'P' || phoneNumber[ i ] == 'R' || phoneNumber[ i ] == 'S' ) {
            printf( "7" );
        } else if ( phoneNumber[ i ] == 'T' || phoneNumber[ i ] == 'U' || phoneNumber[ i ] == 'V' ) {
            printf( "8" );
        } else if ( phoneNumber[ i ] == 'W' || phoneNumber[ i ] == 'X' || phoneNumber[ i ] == 'Y' ) {
            printf( "9" );
        } else {
            putchar( phoneNumber[ i ] );
		}
    }
    return 0;
}


