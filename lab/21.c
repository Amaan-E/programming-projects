//Display the series: 2 4 16 256 65536... n
#include <stdio.h>

int main(void)
{
	long long i = 2, n;
	
	printf("Enter postive integer: ");
	scanf("%lld", &n);
	
	while(i <= n)
	{		
			printf("%lld ", i);
			i = i * i;
	}
	
}
