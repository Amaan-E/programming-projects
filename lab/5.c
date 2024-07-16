//Swap two integers
#include <stdio.h>
#define PI 3.14159
int main()
{
	float r;
	
	printf("Enter radius of circle: ");
	scanf("%f", &r);

	printf("Area of circle = %.2f\n", (PI * r * r));
	printf("Perimeter = %.2f", (2 * PI * r));
	return 0;
}

