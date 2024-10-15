/* Use if-else with relational and logical operators (grading according to percentage of a student). */
#include <stdio.h>

int main() {

	float marks, totalMarks, percentage;
	
	printf( "Enter marks: " );
	scanf( "%f", &marks );
	printf( "Total marks: " );
	scanf( "%f", &totalMarks );
	
	percentage = ( marks / totalMarks ) * 100;
	 
	if ( percentage >= 90 ) {
		printf( "You have got A+ grade." );
	} else if ( percentage >= 80 ) {
		printf( "You have got A grade." );
	} else if ( percentage >= 70 ) {
		printf( "You have got B grade." );
	} else if ( percentage >= 60 ) {
		printf( "You have got C grade." );
	} else if ( percentage >= 50 ) {
		printf( "You have got D grade." );
	} else if ( percentage >= 40 ) {
		printf( "You have got E grade." );	
	} else { 
		printf( "You have got F grade." );	
	}			
	return 0;
}

