// Store details (Roll No. and Marks) of all the students of your class in an array of structure and then find the topper of the class.
#include <stdio.h>

#define MAX 100

struct details {
	int roll;
	char name[ MAX ];
	int marks;
};

int main() {
	struct details d[ MAX ];
	int i, n;
	
	printf( "Enter total no. of students: " );
	scanf( "%d", &n );
	
	printf( "\n" );
	for ( i = 1; i <= n; i++ ) {
		printf( "Enter details of student %d.\n", i );
//		printf( "Enter Roll No.: " );
//		scanf( "%d", &d[ i ].roll );
//		d[ i ].roll = i;
		printf( "Enter Name: " );
		scanf( "%s", d[ i ].name ); // Remove & to get rid of warning
		printf( "Enter Marks: " );
		scanf( " %d", &d[ i ].marks );
		printf( "\n" );
	}
	
	printf( "Roll no.  Name \t Marks\n");
	printf( "-------------------------------------------------------------\n" );
	for ( i = 1; i <= n; i++ ) {	
		printf ( "%d \t %s \t %d\n", i, d[ i ].name, d[ i ].marks );
	}
	
	printf( "\n" );
	int highestMarks = 0;
	int topper;
	char topperName[ MAX ];
//	printf( "Enter total: " );
	
	
	for ( i = 1; i <= n; i++ ) {	
		if ( d[ i ].marks > highestMarks ) {
			highestMarks = d[ i ].marks;
			topper = i;
			
		//	strcpy( topperName, d[ i ].name );
			for ( int j = 0; d[ i ].name[ j ] != '\0'; j++ ) {
				topperName[ j ] = d[ i ].name[ j ];
			}
		}
	}
	
	printf( "Topper is %s and has roll number %d. ", topperName, topper );
	
	return 0;
}

