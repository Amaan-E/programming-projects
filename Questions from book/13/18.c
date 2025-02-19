/*
Write a program that accepts a date from the user in the form mm/dd/yyyy and then displays it in the form month dd, yyyy where month is the name of the month:

Enter a date (mm/dd/yyyy): 2/17/2011
You entered the date February 17, 2011

Store the month names in an array that contains pointers to strings.
 */


#include <stdio.h>

int main( int argc, char *argv[] ) {
	char *months[] = { "January", "February", "March", 
					   "April", "May", "June", "July", 
					   "August", "September", "November", "December" };
	printf( "Enter a date (mm/dd/yyyy): " );
	int month, day, year;
	scanf( "%d / %d/ %d", &month, &day, &year );

	printf( "You entered the date %s %2d, %d", months[ month - 1 ], day, year  );
	return 0;
}

