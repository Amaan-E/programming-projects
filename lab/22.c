// Display Fibonacci series: 0 1 1 2 3 5 8 13 21.... n

#include <stdio.h>
int main() {

	long i, n, a = 0, b = 1;

	long c = a + b;

	printf("Enter the number of terms: ");
	scanf("%ld", &n);

	// print the first two terms
	printf("Fibonacci Series: %ld, %ld, ", a, b);

	for (i = 3; i <= n; ++i) 
	{
		printf("%ld, ", c);
		a = b;
		b = c;
		c = a + b;
	}

	return 0;
}

