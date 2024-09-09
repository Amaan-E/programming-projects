//Compare two integers
#include <stdio.h>

int main()
{
	int a, b;
	
	printf("Enter First Integer: ");
	scanf("%d", &a);
	printf("Enter Second Integer: ");
	scanf("%d", &b);
	
	if (a > b)
	{
		printf("%d is bigger than %d.", a, b);	
	}
	else if (a == b)
	{
		printf("%d is equal to %d.", a, b);	
	}	
	else
	{
		printf("%d is bigger than %d.", b, a);	
	}
	
	return 0;
}

