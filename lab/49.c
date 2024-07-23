// Sum of two matrices
#include <stdio.h>
#define ROW_MAX_SIZE 10
#define COL_MAX_SIZE 10

int main ( void ) {
	int row, col, rowSize, colSize;
	int matrix1 [ ROW_MAX_SIZE ] [ COL_MAX_SIZE ];
	int matrix2 [ ROW_MAX_SIZE ] [ COL_MAX_SIZE ];
	
	printf( "Enter rank of matrices: \n" );
	scanf( "%d%d", &rowSize, &colSize );
	
	printf( "Enter elements of matrix 1(row-wise): \n" );
	for ( col = 0; col < colSize; ++col ) {
		for ( row = 0; row < rowSize; ++row ) {
			scanf( "%d", &matrix1[ row ][ col ] );
		}
	}
	
	printf( "Enter elements of matrix 2(row-wise): \n" );
	for ( col = 0; col < colSize; ++col ) {
		for ( row = 0; row < rowSize; ++row ) {
			scanf( "%d", &matrix2[ row ][ col ] );
		}
	}
	
	printf( "Sum of two matrices: \n" );
	for ( col = 0; col < colSize; ++col ) {
		for ( row = 0; row < rowSize; ++row ) {
			printf( "%d ", matrix1[ row ][ col ] + matrix2[ row ][ col ] );
		}
		printf( "\n" );
	}
	
}
