#include <stdio.h>

int main()
{
	int n, sum = 0;
	printf("Enter Integers to sum and 0 to terminate. Pressing Enter after each.: ");
	scanf("%d", &n);
	
	while(n != 0)
	{
		sum = sum + n;
		scanf("%d", &n);
	}
	printf("Sum = %d", sum);
}