/*Display the following pattern (using loops):
	*****
	***
	**
	*
*/
#include <stdio.h>

int main() {
	int i, j;
	
	for( i = 5; i >= 1; i-- ) {
		for ( j = 1; j <= i; j++ ) {
			if ( j == 4 ) {
				continue;
			}
			printf( "*" );
		}
		printf( "\n" );
	}

	return 0;
}

