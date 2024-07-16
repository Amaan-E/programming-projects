//Display series from n to 1 as n n-1 n-2 3 2 1 
#include <stdio.h>

int main()
{
	int i, n;
	
	printf("Enter 'n': ");
	scanf("%d", &n);
	
	for (n; n >= 1; --n)
	{
		printf("%d ", n);
	}
}
