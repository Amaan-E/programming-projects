#include <stdio.h>

int MyStrlen( const char *str );
char *MyStrcpy( char *dest, const char *src );
char *MyStrcat( char *dest, const char *src );
int MyStrcmp( const char *str1, const char *str2 );

int main() {
	char *s = "Hello";
	char t[50];
	printf( "Length: %d\n", MyStrlen( s ) );
	MyStrcpy( t, s );
	printf( "cpy: %s\n", t );
	char m[20] = "Hi";  // Use character array with sufficient space
	char n[] = " Bye";
	MyStrcat( m, n );
	printf( "cat = %s\n", m );
	printf( "cmp: %d\n", MyStrcmp( m, n ) );


	return 0;
}

int MyStrlen( const char *str ) {
	int i;
	for ( i = 0; str[i] != '\0'; ++i ) {
		;
	}
	return i;
}

char *MyStrcpy( char *dest, const char *src ) {
	int i;
	for ( i = 0; src[i] != '\0'; ++i ) {
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return dest;
}

char *MyStrcat( char *dest, const char *src ) {
	int i, j;
	for ( i = 0; dest[i] != '\0'; ++i ) {
		;
	}

	for ( j = 0; src[j] != '\0'; ++j ) {
		dest[i++] = src[j];
	}
	dest[i] = '\0';
	return dest;

}

int MyStrcmp( const char *str1, const char *str2 ) {
	int i = 0;

	// Compare characters until end of either string
	while ( str1[i] != '\0' && str2[i] != '\0' ) {
		// If characters differ, return difference
		if ( str1[i] != str2[i] ) {
			return str1[i] - str2[i];
		}
		i++;
	}

	// Check remaining length after loop
	return str1[i] - str2[i];
}


int MyStrcmp( const char *str1, const char *str2 ) {
	int i;
	for ( i = 0; str1[i] != '\0' && str2[i] != 0; ++i ) {
		if ( str1[i] != str2[i] ) {
			return str1[i] - str2[i];
		}
	}

	return str1[i] - str2[i];
}