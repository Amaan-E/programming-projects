/*
Modify Programming Project 9 from Chapter 8 so that it includes the following functions:

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

main first calls generate_random_walk, which initializes the array to contain '.' characters and then replaces some of these characters by the letters A through Z, as described in the original project. main then calls print_array to display the array on the screen.
 */

#include <stdio.h>
#include <stdlib.h> /* srand(), rand() */
#include <time.h> /* time() */
int generate_random_walk( char grid[ 10 ][ 10 ] );
int print_array( char grid[ 10 ][ 10 ] );

int main( void ) {

    char grid[ 10 ][ 10 ] = { 0 };
    
	generate_random_walk( grid );
	print_array( grid );
    
    return 0;
}

int generate_random_walk( char grid[ 10 ][ 10 ] ) {
	char letter = 'A';
	
	int i = 0, j = 0;
	int	up = 0,   /* directions are essentially bools, written as ints to */
		down = 0, /* conform with C89 standard.                           */
		left = 0,
		right = 0,
		move = 0;

	/*for (i = 0; i < 10; i++) {
			for (j = 0; j < 10; j++) {
					grid[i][j] = '.';
			}
		}
	*/
	
	srand((unsigned) time(NULL));

	grid[i][j] = letter++;

	while (letter <= 'Z') {
		up = down = left = right = move = 0;

		if (j + 1 < 10 && grid[i][j + 1] == 0)
			up = 1;
		if (j - 1 >= 0 && grid[i][j - 1] == 0)
			down = 1;
		if (i + 1 < 10 && grid[i + 1][j] == 0)
			right = 1;
		if (i - 1 >= 0 && grid[i - 1][j] == 0)
			left = 1;

		if (up + down + left + right == 0)
			break;

		move = rand() % 4;
		

		/* Intentional fallthrough if direction fails */
		switch(move) {
			case 0:
				if (up) {
					grid[i][++j] = letter++;
					break;
				}
			case 1:
				if (down) {
					grid[i][--j] = letter++;
					break;
				}
			case 2:
				if (right) {
					grid[++i][j] = letter++;
					break;
				}
			case 3:
				if (left) {
					grid[--i][j] = letter++;
					break;
				}
			default:
				break;
		}
	}    
	
	for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (grid[i][j] == 0) 
                grid[i][j] = '.';
        }
    }

	return grid[ 10 ][ 10 ];     
}    

int print_array( char grid[ 10 ][ 10 ] ) {
	int i, j;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			printf("%c ", grid[i][j]);
		}
		printf("\n");
	}  
	
	return grid[ 10 ][ 10 ];     
}
    
    
