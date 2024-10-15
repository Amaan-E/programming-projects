/*Use math library (pow(), sqrt(), etc.)*/
#include <stdio.h>
#include <math.h>

int main() {
	double s, a, b;
	printf( "Enter number to find its square root: " );
	scanf( "%lf", &s );
	printf( "Enter number and its power: \n" );
	scanf( "%lf %lf", &a, &b );
	
	printf( "Square root of %.2lf = %lf\n", s, sqrt( s ) );
	printf( "%.2lf ^ %.2lf = %.2lf", a, b, pow( a, b ) );
	
	
	return 0;
}

