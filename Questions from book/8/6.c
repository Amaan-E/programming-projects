/*

The prototypical Internet newbie is a fellow named BIFF, who has a unique way of writing messages. Here's a typical BIFF communiqué:

H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!
Write a "BIFF filter" that reads a message entered by the user and translates it into BIFF-speak:

Enter message: Hey dude, C is rilly cool
In B1FF-speak: H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!
Your program should convert the message to upper-case letters, substitute digits for certain letters (A→4, B→8, E→3, I→1, O→0, S→5), and then append 10 or so exclamation marks. Hint: Store the original message in an array of characters, then go back through the array, translating and printing characters one by one.

 */


#include <stdio.h>
#include <ctype.h>

//#define SIZE (int) (sizeof(m) / sizeof(m[0]))
#define N 99

int main() {
	int i;
	char m[ N ];
	
	printf("Enter message: ");
	
	for ( i = 0; ( ( m[ i ] = getchar( ) ) != '\n' ) && i < N; i++ ) {
		//scanf("%c", &m[i]);
		m[ i ] = toupper ( m[ i ] );
		
		if ( i == 0 ) {
			printf("In B1FF-speak: ");
		}
			
		switch ( m[ i ] ) {
			case 'A':
				putchar( '4' );
			break;	
			case 'B':
				putchar( '8' );
			break;			
			case 'E':
				putchar( '3' );
			break;
			case 'I':
				putchar( '1' );
			break;
			case 'O':
				putchar( '0' );
			break;
			case 'S':
				putchar( '5' );
			break;
			default: 
			printf( "%c", m[ i ] ); 
			break; 
			} 
	}
	
	
/*	for(i = 0; i < N; i++)
	{
		printf("%c", m[i]);
	}
*/
	
	printf ( "!!!!!!!!!!" );
	
	return 0;
}

