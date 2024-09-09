// Table from 2 to 10
#include <stdio.h>
int main() {
	int n, i;
				
	for(n = 2; n <= 10; n++)
	{
		for (i = 1; i <= 10; ++i) 
  		{
    	printf("%d * %d = %d \n", n, i, n * i);
  		}
  	printf("\n");
	}
  	return 0;
}

