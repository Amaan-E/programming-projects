// use pow sqrt
#include <stdio.h>
#include <math.h>

int main()
{
	float a;
	printf("Enter an integer: ");
	scanf("%f", &a);

	printf("Square = %.0f\n", pow(a, 2));
	printf("Root = %.2f", sqrt(a));


	return 0;
}

