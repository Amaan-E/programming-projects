//Display contents of an integer array
#include <stdio.h>

int main()
{
	int i, a[100], size;
	printf("Enter size of array: ");
	scanf("%d", &size);
	size = size - 1;
	
	printf("Enter integers: \n");
	for(i = 0; i <= size; ++i)
	{
		scanf("%d", &a[i]);
	}
	
	for(i = 0; i <= size; ++i)
	{
		printf("%d ", a[i]);
	}

}
