//Display sum of series from 1 to n
#include <stdio.h>

int main(void)
{
	int i, n, sum = 0;
	
	printf("Enter 'n': ");
	scanf("%d", &n);
	
	for (i = 1; i <= n; ++i)
	{
		sum += i;
	}
	
	printf("Sum of series: %d ", sum);
}
