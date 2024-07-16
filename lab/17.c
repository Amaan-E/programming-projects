//Display product of series from 1 to n
#include <stdio.h>

int main(void)
{
	int i, n, pro = 1;
	
	printf("Enter 'n': ");
	scanf("%d", &n);
	
	for (i = 1; i <= n; ++i)
	{
		pro *= i;
	}
	
	printf("Product of series: %d ", pro);
}
