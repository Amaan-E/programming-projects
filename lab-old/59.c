//store details of all students in array of structure and display in a tabular format
#include <stdio.h>
#define N 200
#define LENGTHOFDASH 75

struct details {
    char name[100];
    int roll;
    int sem;
    char grade;
};

int main() {
    int i, total;
    struct details d[N];
    
    printf( "Enter total no. of students: " );
    scanf( "%d", &total );
    
    for ( i = 0; i < total; ++i ) {
        printf( "Details of student with roll number %d:\n", i + 1 );
        printf( "Enter Name: " );
        scanf( "%s", &d[ i ].name );
        printf("Enter Semester: " );
        scanf( "%d", &d[ i ].sem );
        printf( "Enter Grade: " );
        scanf( " %c", &d[ i ].grade );
        d[i].roll = i + 1;
        printf( "\n" );
    }
    
	printf ( "Name\t\tRoll No.\tSemester\tGrade\n" );
	
	for ( i = 0; i < LENGTHOFDASH; ++i ){
		printf ( "-" );
	}
	printf ( "\n" ); //Decoration dashes(--)
    
    for ( i = 0; i < total; ++i ) {
		printf( "%s\t\t%d\t\t%d\t\t%c\n", d[ i ].name, d[ i ].roll, d[ i ].sem, d[ i ].grade );
	} 
    
    return 0;
}

