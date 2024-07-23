// Input and display matrix
#include <stdio.h>
#define ROW_MAX_SIZE 10
#define COL_MAX_SIZE 10

int main ( void ) {
	int row, col, rowSize, colSize;
	int matrix [ ROW_MAX_SIZE ] [ COL_MAX_SIZE ];
	
	printf( "Enter rank of matrix: \n" );
	scanf( "%d%d", &rowSize, &colSize );
	
	printf( "Enter elements of matrix(row-wise): \n" );
	for ( col = 0; col < colSize; ++col ) {
		for ( row = 0; row < rowSize; ++row ) {
			scanf( "%d", &matrix[ row ][ col ] );
		}
	}
	
	printf( "Entered matrix: \n" );
	for ( col = 0; col < colSize; ++col ) {
		for ( row = 0; row < rowSize; ++row ) {
			printf( "%d ", matrix[ row ][ col ] );
		}
		printf( "\n" );
	}
	
}
