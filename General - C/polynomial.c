// 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6

#include <stdio.h>

int main(void)
{
	int x;

	printf("Write Value of 'x':\n");
	scanf("%d", &x);
	
	int x_to_5, x_to_4, x_to_3, x_to_2;
	
	x_to_5 = x * x * x * x * x;
	x_to_4 = x * x * x * x;
	x_to_3 = x * x * x;
	x_to_2 = x * x;
	
	int polynomial;
	polynomial = (3 * x_to_5) + (2 * x_to_4) - (5 * x_to_3) - (x_to_2) + (7 * x) - 6;
	
	printf("Value of polynomial = %d\n", polynomial);
	
	return 0;
	
}