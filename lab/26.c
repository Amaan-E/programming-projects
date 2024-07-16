// Find sum of series: 1 + 1/2 + 1/4 + .. + 1/n
#include <stdio.h>

int main(void)
{
	/*int i;
	float n, sum = 0;
	
	printf("Enter 'n': ");
	scanf("%f", &n);
	
	for (i = 1; i <= n; i++)
	{
		//if (i % 2 == 0)
		sum = sum + 1 / (i * 2);
	}
	sum++;
	printf("Sum of series: %.2f ", sum);
	*/
	float i, sum = 1;
	int n;
	
	printf("Enter 'n': ");
	scanf("%d", &n);
	
	for(i = 2; i <= n; i = i + 2)
	{
		sum = sum + 1 / i;
	}
	printf("Sum of series: %.2f", sum);
}
