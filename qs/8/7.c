/*
Write a program that reads a 5 x 5 array of integers and then prints the row sums and the column sums:

Enter row 1:  8  3  9  0 10
Enter row 2:  3  5 17  1  1
Enter row 3:  2  8  6 23  1 
Enter row 4: 15  7  3  2  9
Enter row 5:  6 14  2  6  0

Row totals: 30 27 40 36 28
Column totals: 34 37 37 32 21 
 */


#include <stdio.h>
#define R 5
#define C 5

int main() {
	int m[ R ][ C ];
	int i, j, sumR = 0, sumC = 0; 
	
	for ( i = 0; i < R; ++i ) {
		printf( "Enter row %d: ", i + 1 );
		for ( j = 0; j < C; ++j ) {
			scanf( "%d", &m[ i ][ j ] );
		}
	}	
	
    printf( "Row totals: " );
    for ( i = 0; i < R; ++i ) {
        sumR = 0; // Reset sum for each row
        for ( j = 0; j < C; ++j ) {
            sumR += m[ i ][ j ];
        }
        printf( "%d ", sumR );
    }
    
    printf( "Column totals: " );
    for ( j = 0; j < C; ++j ) {
        sumC = 0; // Reset sum for each column
        for ( i = 0; i < R; ++i ) {
            sumC += m[ i ][ j ];
        }
        printf("%d ", sumC);
    }

    return 0;
}
