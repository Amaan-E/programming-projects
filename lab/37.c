//Display contents of an integer array in reverse
#include <stdio.h>

int main()
{
	int i, a[4] = {2, 4, 6, 8};
	for(i = 3; i >= 0; --i)
	{
		printf("%d ", a[i]);
	}

}
