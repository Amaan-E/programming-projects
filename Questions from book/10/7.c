/*
Write a program that prompts the user for a number and then displays the number, using characters to simulate the effect of a seven-segment display:

Enter a number: 491-9014
      _       _   _
|_|  |_|   | |_| | |   | |_|
  |   _|   |  _| |_|   |   |

Characters other than digits should be ignored. Write the program so that the maximum number of digits is controlled by a macro named MAX_DIGITS, which has the value 10. If the number contains more than this number of digits, the extra digits are ignored. Hints: Use two external arrays. One is the segments array (see Exercise 6 in Chapter 8), which stores data representing the correspondence between digits and segments. The other array, digits will be an array of characters with 4 rows (since each segmented digit is four characters high) hand MAX_DIGITS * 4 columns (digits are three characters wide, but a space is needed between digits for readability). Write your program as four functions: main, clear_digits_array, process_digit, and print_digits_array. Here are the prototypes for the latter three functions:

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

clear_digits_array will store blank characters into all elements of the digits array, process_digit will store the seven-segment representation of digit into a specified position in the digits array (positions range from 0 to MAX_DIGITS - 1). print_digits_array will display the rows of the digits array, each on a single line, producing output such as that shown in the exmaple.
*/

#include <stdio.h>

#define MAX_DIGITS 10

const int segments[ 10 ][ 7 ] = { { 1, 1, 1, 1, 1, 1, 0 },
								  { 0, 1, 1, 0, 0, 0, 0 },
								  { 1, 1, 0, 1, 1, 0, 1 },
								  { 1, 1, 1, 1, 0, 0, 1 },
								  { 0, 1, 1, 0, 0, 1, 1 },
								  { 1, 0, 1, 1, 0, 1, 1 },
								  { 1, 0, 1, 1, 1, 1, 1 },
								  { 1, 1, 1, 0, 0, 0, 0 },
								  { 1, 1, 1, 1, 1, 1, 1 },
								  { 1, 1, 1, 1, 0, 1, 1 } };

/* 7-segment representations for digits 0-9:
 *
 *    _0_
 * 5 |   | 1
 *   |_6_|
 * 4 |   | 2
 *   |_3_|
 */
                             
char digits[ 4 ][ MAX_DIGITS * 4 ];

void clear_digits_array( void );
void process_digit( int digit, int position );
void print_digits_array( void );
                         
int main() {
	char ch;
    int position = 0;	
	clear_digits_array();
	
	printf( "Enter a number: " );
	   while ((ch = getchar()) != '\n') {
		switch ( ch ) {
			case '0':	case '1':	case '2':	case '3':	case '4':	
			case '5':	case '6':	case '7':	case '8':	case '9':
				process_digit(ch - '0', position );
				position += 4;	
				break;
			default:
				continue;
		}
	}
	
	print_digits_array();
	
	return 0;
}

void clear_digits_array( void ) {
	for( int i = 0; i < 4; i++ ) {
		for ( int j = 0; j < MAX_DIGITS * 4; j++ ) {
			digits[ i ][ j ] = ' ';
		}
	} 
}

void process_digit(int digit, int position) {

   int i, row, col;

   }
}

void print_digits_array( void ) {
	for ( int i = 0; i < 4; i++ ) {
		for ( int j = 0; j < MAX_DIGITS * 4; j++ ) {
			printf( "%c\n", digits[ i ][ j ] );
		}
		printf( "\n" );
	}	
}
