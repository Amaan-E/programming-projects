/*
Write a program that test whether two words are anagrams (permutations of the same letters):

Enter first word: smartest
Enter second word: mattress
The words are anagrams.

Enter first word: dumbest
Enter second word: stumble
The words are not anagrams.

Write a loop that reads the first word, character by character, using an array of 26 integers to keep track of how many times each letter has been seen. (For example, after the word smartest has been read, the array should contain the values 1 0 0 0 1 0 0 0 0 0 0 0 1 0 0 0 0 1 2 2 0 0 0 0 0 0, reflecting the fact that smartest contains one a, one e, one m, one r, two s's and two t's.) Use another loop to read the second word, except this time decrementing the corresponding array element as each letter is read. Both loops should ignore any characters that aren't letters, and bth should treat upper-case letters in the same way as lower-case letters. After the second word has been read, use a third loop to check whether all the elements in the array are zero. If so, the words are anagrams. Hint: You may wish to use the functions from <ctype.h>, such as isalpha and tolower.
 */

/*
#include <stdio.h>
#include <ctype.h>

int main( void ) {
	char firstWord[ 26 ] = { 0 };
	printf( "Enter first word: " );
	for ( i = 0; ( firstWord[ i ] = getchar( ) ) != '\n' ); i++ ) {
		firstWord[ i ] = 1;
		/j = i;
		if ( firstWord[ i ] == firstWord[ j ] ) {
			
		}/        sum += values[ toupper( c ) - 'A' ]; // 'A' == 65

	}	
	
	printf( "Enter second word: " );
	
	return 0;
}

*/

/*
Modify Programming Project 16 from Chapter 8 so that it includes the following function:

bool are_anagrams(const char *word1, const char *word2);

The function returns true if the strings pointed to by word1 and word2 are anagrams.
 */

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define N 30

bool are_anagrams( const char *word1, const char *word2 );

int main( void ) {
	
    char firstWord[ N + 1 ], secondWord[ N + 1 ];
	//int sum = 0;
	
    printf( "Enter first word: " );
	scanf( "%80s", firstWord );
	printf( "Enter second word: " );
	scanf( "%80s", secondWord );

	if ( ( are_anagrams( firstWord, secondWord ) ) == true ) {
		printf( "The words are anagrams." );
	} else {
		printf( "The words are not anagrams." );
	}

    return 0;
}

bool are_anagrams( const char *word1, const char *word2 ) {
	int values[ 26 ] = { 0 };
	
	while( *word1 ) {
		if ( isalpha( *word1 ) ) {
			values[ tolower( *word1 ) - 'a' ] += 1; // 'a' == 97
		}
		word1++;
	}
	while( *word2 ) {
		if ( isalpha( *word2 ) ) {
			values[ tolower( *word2 ) - 'a' ] -= 1; // 'a' == 97
		}	
		word2++;
	}
	for ( int i = 0; i < 26 ; i++ ) {
		//printf( "%d", values[ i ] );
		if ( values[ i ] ) {
			return false;
			break;
		}
	}	
	
	return true;
}
