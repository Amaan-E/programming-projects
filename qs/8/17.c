/*
Write a program that prints an n x n magic square (a square of the numbers 1, 2, ... n² in which the sums of the rows, columns and diagonals are all the same). The user will specify the value of n:

This program creates a magic square of a specified size.
The size must be an odd number between 1 and 99.
Enter size of magic square: 5
   17   24    1    8   15
   23    5    7   14   16
    4    6   13   20   22
   10   12   19   21    3
   11   18   25    2    9

Store the magic square in a two-dimensional array. Start by placing the number 1 in the middle of row 0. Place each of the remaining numbers 2, 3, ... n² by moving up one row and over one column. Any attempt to go outside the bounds of the array should "wrap around" to the opposite side of the array. For example, instead of storing the next number in row -1, we would store it in row n - 1 (the last row). Instead of storing the next number in column n, we would store it in column 0. If a particular array element is already occupied, put the number directly below the previously stored number. If your compiler supports variable-length arrays, declare the array to have n rows and n columns. If not, declare the array to have 99 rows and 99 columns.
 */


#include <stdio.h>

int main( void ) {
	
	printf( "This program creates a magic square of a specified size.\n" );
	printf( "The size must be an odd number between 1 and 99.\n" );
	int n;
	printf( "Enter size of magic square: " );
	scanf( "%d", &n );
	if ( n % 2 == 0 || ( n < 1 || n > 99) ) {
		printf( "Incorrect Size! The size must be an odd number between 1 and 99." );
		return 1;
	}
	
	int magicSquare[ 5 ][ 5 ] = { { 0 }, { 0 } };
	int row, col;
	
	magicSquare[ 0 ][ ( n / 2 ) ] = 1;
	int t = 0, m ;
	int s = 2;
//			magicSquare[ n - 1 ][ ( n / 2 ) + 1 + t] = 	
	
	for ( row = 0; row < n; row++ ) {
		for ( col = 0; col < n; col++ ) {
		if ( magicSquare[ row ][ col ] == 0 ) {
			magicSquare[ n - 1 ][ t ] = s * s;
			s++;	
			t++;
			m = t;
		} else {
			magicSquare[ row ][ m + 1 ] = s * s;
		}
			
		}
	}

	
	for ( row = 0; row < n; row++ ) {
		for ( col = 0; col < n; col++ ) {
			printf( "%d", magicSquare[ row ][ col ] );
		}
		printf("\n");
	}
	
	return 0;
}

/*
#include <stdio.h>

int main(void) {
    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    
    int n;
    printf("Enter size of magic square: ");
    scanf("%d", &n);
    
    // Check for valid size
    if (n % 2 == 0 || (n < 1 || n > 99)) {
        printf("Incorrect Size! The size must be an odd number between 1 and 99.\n");
        return 1;
    }

    // Define the magic square as a variable-length array
    int magicSquare[n][n]; // Declare the magic square

    // Initialize the magic square
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            magicSquare[i][j] = 0; // Initialize all elements to 0
        }
    }

    // Siamese method to fill the magic square
    int row = 0, col = n / 2; // Start position

    for (int num = 1; num <= n * n; num++) {
        magicSquare[row][col] = num; // Place the number

        // Calculate the next position
        int newRow = (row - 1 + n) % n; // Move up
        int newCol = (col + 1) % n; // Move right

        // If the position is already filled, move down instead
        if (magicSquare[newRow][newCol] != 0) {
            row = (row + 1) % n; // Move down
        } else {
            row = newRow;
            col = newCol;
        }
    }

    // Print the magic square
    printf("Magic Square:\n");
    for (row = 0; row < n; row++) {
        for (col = 0; col < n; col++) {
            printf("%2d ", magicSquare[row][col]); // Print with formatting
        }
        printf("\n");
    }

    return 0;
}
*/
