/* Display Pyramid
	*
   * *
  * * *
 * * * *
*/
#include <stdio.h>

int main()
{
	int i, j, k, l;
	
	for(i = 0; i <= 4; ++i)
	{	
		for(k = 4; k >= j; k--)
		printf(" ");
		
		for(j = 1; j <= i; ++j)
		{
			printf("* ");
		}
		
	printf("\n");	
	
	}
}
