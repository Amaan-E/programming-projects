// Search for an element in integer array
#include <stdio.h>

int main()
{	

	int i, a[5] = {1, 2, 3, 4, 5}, find = 3, flag = 0;
	
	for(i = 0; i < 4; i++)
	{
		if(a[i] == find)
		{
			printf("Found at position %d.", i + 1);
			flag = 1;
		}
	}	
	
	if(flag == 0)
		printf("Not found");
}
