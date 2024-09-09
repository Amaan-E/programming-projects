#include <stdio.h>

int main()
{
	int n, r;
	
	printf("Write integers to be reversed: ");
	scanf("%d", &n);
	
	while(n != 0)
	{
		r = n % 10;
		n = n / 10;
		printf("%d", r);
	}
}

