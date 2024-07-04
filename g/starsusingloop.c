/*
#include <stdio.h>

int main()
{
	int i,j;
	for(i = 1; i <= 4; ++i)
	{
		for(j = 4; j >= i; --j)
		{
			printf("* ");
		}
		printf("\n");
	}
}
*/

/*

      *
    * *    
  * * *
* * * *

*/

#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 5; ++i)
    {
        // Print the leading spaces
        for (j = 1; j <= 5 - i; ++j)
        {
            printf("  ");
        }

        // Print the stars
        for (j = 1; j <= i; ++j)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
