#include <stdio.h>

int main()
{
/*	int i = 9384;
	do {
    	printf("%d ", i);
    	i /= 10;
	} while (i > 0);
*/
/*	for (d = 2; d < n; d++)
    if (n % d == 0)
        break;
        
        This loop isn't very efficient. It's not necessary to divide n by all numbers between 2 and n-1 to determine whether it's prime. 
		In fact, we need only check divisors up to the square root of n. Modify the loop to take advantage of this fact. 
		Hint: Don't try to compute the square root of n; instead, compare d * d with n.

*/

/*	int d, n = 10;
	for (d = 2; d < n; d++)
   	 if (n % d == 0)
    	break;
*/

	int x, i, q, r;
	
	printf("Enter integer to be reversed: ");
	scanf("%d", &x);
	
	q = x;
	
	for (i = 0; q != 0; ++i)
	{
	q = x / 10;
	r = x % 10;
	
	printf("%d", r);
	
	x = q;

	}
//	r = q / 10;
	
	
	
	
}

        
