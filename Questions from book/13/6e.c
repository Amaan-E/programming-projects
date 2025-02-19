#include <stdio.h>
#include <ctype.h>

// Function prototype
void censor(char *str);

int main() {
    char str[100]; // Array to hold the input string

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read a string from input

    censor(str); // Call the capitalize function

    printf("Capitalized string: %s\n", str); // Print the capitalized string

    return 0;
}

// Function to capitalize all letters in the string
void censor(char *a) {
	/*	char *p;
    for ( p = str; *p != '\0'; p++ ) {
		
		if ( *p == 'f' && *p+1 == 'o' && *p+2 == 'o') {
			*p = *p+1 = *p+2 = 'x';
		}
	}*/
	
/*	int i = 0;
    while ( a[ i++ ] ) {
		
		if ( a[ i ] == 'f' && a[ i + 1 ] == 'o' && a[ i + 2 ] == 'o' ) {
			a[ i ] = a[ i + 1 ] = a[ i + 2 ] = 'x';
		}
	}*/
	/*char *p = a;
    do {
		if ( *p == 'f' && *( p + 1 ) == 'o' && *( p + 2 ) == 'o' ) {
			*p = *( p + 1 ) = *( p + 2 ) = 'x';
		}
	} while ( *p++ );
	*/
    do {
		if ( *a == 'f' && *( a + 1 ) == 'o' && *( a + 2 ) == 'o' ) {
			*a = *( a + 1 ) = *( a + 2 ) = 'x';
		}
	} while ( *a++ );
}
