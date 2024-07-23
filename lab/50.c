// Sum of two matrices
#include <stdio.h>
#define ROW_MAX_SIZE 10
#define COL_MAX_SIZE 10

int main ( void ) {
	int row, col, rowSize, colSize, sum = 0;
	int matrix [ ROW_MAX_SIZE ] [ COL_MAX_SIZE ];
	
	printf( "Enter rank of matrix: \n" );
	scanf( "%d%d", &rowSize, &colSize );
	
	printf( "Enter elements of matrix (row-wise): \n" );
	for ( col = 0; col < colSize; ++col ) {
		for ( row = 0; row < rowSize; ++row ) {
			scanf( "%d", &matrix[ row ][ col ] );
		}
	}

	printf( "Sum of diagnol elements: \n" );
	for ( col = 0; col < colSize; ++col ) {
		for ( row = 0; row < rowSize; ++row ) {
			if ( row == col ) {
				sum = sum + matrix[ row ][ col ];
			}
		}
	}
	printf ( "%d", sum );
	
}
