//Display contents of an character array
#include <stdio.h>

int main()
{
	int i; 
	char a[5] = {'a', 'b', 'c', 'd'};
	for(i = 0; i <= 5; ++i)
	{
		printf("%c ", a[i]);
	}

}
