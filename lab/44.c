//Sum an integer array
#include <stdio.h>

int main()
{
	int i, a[4] = {2, 4, 6, 8}, sum = 0;
	for(i = 0; i <= 3; ++i)
	{
		sum = sum + a[i];
	}
	printf("%d ", sum);

}
