// Transpose of a matrix
#include <stdio.h>
#define ROW_MAX_SIZE 10
#define COL_MAX_SIZE 10

int main ( void ) {
	int row, col, rowSize, colSize;
	int matrix1 [ ROW_MAX_SIZE ] [ COL_MAX_SIZE ];
	int matrix2 [ ROW_MAX_SIZE ] [ COL_MAX_SIZE ];
	
	printf( "Enter rank of matrices: \n" );
	scanf( "%d%d", &rowSize, &colSize );
	
	printf( "Enter elements of matrix(row-wise): \n" );
	for ( col = 0; col < colSize; ++col ) {
		for ( row = 0; row < rowSize; ++row ) {
			scanf( "%d", &matrix1[ row ][ col ] );
		}
	}
	
	printf( "Transpose: \n" );
	for ( col = 0; col < colSize; ++col ) {
		for ( row = 0; row < rowSize; ++row ) {
			matrix2[ row ][ col ] = matrix1[ col ][ row ];
			printf( "%d ", matrix2[ row ][ col ] );
		}
		printf( "\n" );
	}
	
}
