// Check whether n is prime or not

#include <stdio.h>
#define TRUE 1
#define FALSE 0

int main()
{
	typedef int bool;
	
	int n, i; //flag = 0;
	bool flag = FALSE;
	
	printf("Enter a number to check whether it is prime or not: ");
	scanf("%d", &n);
	
	for(i = 2; i <= n / 2; ++i)
	{
		if(n % i == 0)
		{
			printf("Not a prime number.");
			flag = TRUE;
		}
	}
	if(flag == FALSE)
		printf("%d is a prime number.", n);
	
	return 0;
}

