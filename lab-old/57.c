// Demonstrate use of macros
#include <stdio.h>
#define AREA( x ) 3.14159 * x * x

int main () {
	float r;
	
	printf( "Enter Radius: " );
	scanf ( "%f", &r );
	
	printf( "The area of the circle is %f.", AREA( r ) );
}

