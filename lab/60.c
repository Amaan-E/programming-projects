// Store details of all students then find topper of in array of structure.
#include <stdio.h>
#define N 200

struct details {
//  int roll;
    int marks;
};

int main() {
    int i, total, topper = 0;
    struct details d[N];
    
    printf( "Enter total no. of students: " );
    scanf( "%d", &total );
    
    for ( i = 0; i < total; ++i ) {
        printf( "Details of student with roll number %d:\n", i + 1 );
        printf( "Enter Marks: " );
        scanf( " %d", &d[ i ].marks );
//      d[i].roll = i + 1;
        printf( "\n" );
    }

    for ( i = 1; i < total; ++i ) { // Assuming the first student has the highest marks initially, I start the loop from 1.
        if ( d[ i ].marks > d [ topper ].marks ) {
        	topper = i;
		}
	}
		
    printf( "Topper of the class is roll number %d with marks %d.\n", topper + 1, d[topper].marks );

    return 0;
}
