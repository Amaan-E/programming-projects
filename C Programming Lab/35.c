/*Display the following pattern (using loops):
		*
	   **
	  ***
	 ****
*/
#include <stdio.h>

int main() {
	int i, j, k;
	
	for( i = 1; i <= 4; i++ ) {
		for( k = 4; k >= i; k--) {
			printf( " " );
		}
		for ( j = 1; j <= i; j++ ) {
			printf( "*" );
		}
		printf( "\n" );
	}

	return 0;
}

