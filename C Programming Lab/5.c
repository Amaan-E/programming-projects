//Define and use a constant (e.g. PI as 3.14159) in a program

#include <stdio.h>
#define PI 3.14159

int main() {
	double radius;
	
	printf( "Enter radius of circle: " );
	scanf( "%lf", &radius );
	
	printf( "Area = %lf", radius * radius * PI );
	return 0;
}

