//Display the series: 2 4 8 16 32 64... n
#include <stdio.h>
//#include <math.h>

int main(void)
{
	int i, n, s = 2;
	
	printf("Enter postive integer: ");
	scanf("%d", &n);
	
	for (i = 1; i <= n; ++i)
	{
			//s = pow(2,i);
			printf("%d ", s);
			s = s * 2;
	}

}
