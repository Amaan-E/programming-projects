// Store details of a student in a structure and display the same
#include <stdio.h>

struct details {
	char name[ 100 ]; 
	char lName[ 100 ];
	int roll;
	int sem;
	char grade;
};

int main() {
	struct details d;
	printf( "Enter First name: " );
	scanf( "%s", &d.name );
	printf( "Enter Last name: " );
	scanf( "%s", &d.lName );
	printf( "Enter Roll No.: " );
	scanf( "%d", &d.roll );
	printf( "Enter Semester: " );
	scanf( "%d", &d.sem );
	printf( "Enter Grade:" );
	scanf( " %c", &d.grade );

	printf( "Name 	 : %s %s\n", d.name, d.lName );
	printf( "Roll No. : %d\n", d.roll );
	printf( "Semester : %d\n", d.sem );
	printf( "Grade    : %c", d.grade );
}
