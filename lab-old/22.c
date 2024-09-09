// Display Fibonacci series: 0 1 1 2 3 5 8 13 21.... n

#include <stdio.h>
int main() 
{
	int i, n, a = 0, b = 1;

	int c = a + b;

	printf("Enter the number of terms: ");
	scanf("%d", &n);

	// print the first two terms
	printf("Fibonacci Series: %d, %d, ", a, b);

	for (i = 1; i <= n - 2; ++i) //subtract first two terms 
	{
		printf("%d, ", c);
		a = b;
		b = c;
		c = a + b;
	}

	return 0;
}

