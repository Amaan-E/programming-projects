/*Project 6.02
Write a program that asks the user to enter two integers, then caluclates and displays their greatest common divison (GCD):

Enter two integers: 12 28
Greatest common divisor: 4
Hint: The classic algorithm for computing the GCD, known as Euclid's algorithm, goes as follows: 
Let m and n be variables containing the two numbers. If n is 0, then stop: m contains the GCD. 
Otherwise, compute the remainder when m is divided by n. 
Copy n into m and copy the remainder into n. Then repeat the process, starting with testing whether n is 0.
*/
#include <stdio.h>

int main()
{
	int m, n, r;
	printf("Enter two integers:");
	scanf("%d %d", &m, &n);
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
	
	
	printf("Greatest common divisor: %d", m);
		
}



