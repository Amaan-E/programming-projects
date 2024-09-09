//Swap two integers
#include <stdio.h>

int main()
{
	int a, b;
	
	printf("Enter First Integer: ");
	scanf("%d", &a);
	printf("Enter Second Integer: ");
	scanf("%d", &b);

	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("Swapped: %d %d", a, b);

	return 0;
}

