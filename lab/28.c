// Demonstrate continue and break

#include <stdio.h>

int main(void)
{
	int i;
	for(i = 1; i <= 100; i++)
	{
		
		if(i == 10) // Breaks after 10 instead of 100
		{
			break;
		}
		else if(i == 5) // Skips 5
		{
			continue;
		}
		printf("%d ", i);
	}

}
