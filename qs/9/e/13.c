/*
Exercise 9.13

Write the following function, which evaluates a chess position:

int evaluate_position(char board[8][8]);

board represents a configuration of pieces on a chessboard, where the letters K, Q, R, B, N and P represent White pieces, and the letters k, q, r, b, n and p represent Black pieces. evaluate_position should sum the values of the White pieces (Q = 9, R = 5, B = 3, N = 3, P = 1). It should also sum the values of the Black pieces (done in a similar way). The function will return the difference between the two numbers. This value wil be positive if White has an advantage in material and negative if Black has an advantage.
 */


#include <stdio.h>
int evaluate_position(char board[8][8]);

int main( int argc, char **argv ) {
	return 0;
}

int evaluate_position(char board[8][8]) {
	int i, j, sum = 0;
	
	for ( i = 0; i < 8; i++ ) {
		for ( j = 0; j < 8; j++ ) {
			switch ( board[ i ][ j ] )
				case 'K':
					sumW += 0;
					break;
				case 'Q':
					sumW += 9;
					break;
				case 'R':
					sumW += 5;
					break;
				case 'B':
					sumW += 3;
					break;
				case 'N':
					sumW += 3;
					break;
				case 'P':
					sumW += 1;
					break;
				case 'k':
					sumW += 0;
					break;
				case 'q':
					sumW += 9;
					break;
				case 'r':
					sumW += 5;
					break;
				case 'b':
					sumW += 3;
					break;
				case 'n':
					sumW += 3;
					break;
				case 'p':
					sumW += 1;
					break;	
				default:
					break;
		}
	}	
	return sumW - sumB;
}
