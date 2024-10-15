/*Write a program that asks the user to enter a fraction, then reduces the fraction to lowest terms:

Enter a fraction: 6/12
In lowest terms: 1/2
Hint: To reduce a fraction to lowest terms, first compute the GCD of the numberator and denominator.
 Then divide both the numerator and denominator by the GCD.
*/

#include <stdio.h>

int main()
{
	int x, y, m, n, r;
	printf("Enter a fraction: ");
	scanf("%d/%d", &x, &y);
	
	m = x, n = y;
//	m = 12, n = 28;
	
//	if(n == 0)
//		break;
	while(n != 0)
	{

//	else
		r = m % n; 
		m = n;
		n = r;
	}
	
	printf("In lowest terms: %d/%d", x/m, y/m);
	

		
}