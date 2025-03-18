#include <stdio.h>
#include <math.h>
int main()
{
	int numofdigits;
	printf( "Enter the number of digits: \n" );
	scanf( "%d", &numofdigits );

    int digit[10];
    int i;
	for ( i = 0; i < numofdigits; i++ ) {
		printf( "Enter the digit at position %d: \n", i + 1 );
		scanf( "%d", &digit[i] );
	}

	i = 0;
    int number = 0;
	while ( i < numofdigits ) {
		number = number + digit[i] * pow( 10, i );
		i++;
	}
	printf( "\n The number is : %d", number );
	
    return 0;
}