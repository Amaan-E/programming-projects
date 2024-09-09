//Display product of series from 1 to n
#include <stdio.h>

int main(void)
{
	int i, n, fac = 1;
	
	printf("Enter postive integer: ");
	scanf("%d", &n);
	
	for (i = 1; i <= n; ++i)
	{
		fac *= i;
	}
	
	printf("Factorial of %d = %d ", n, fac);
}
