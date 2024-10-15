//Reverses three digit no.
#include <stdio.h>

int main(void)
{
	int n;
	
	printf("Enter a three digit number: ");
	scanf("%d", &n);
	
	int last_digit = n % 10, first_digit = n / 10 , fd = n % 10;
	
	printf("The reversal is: %d%d%d", last_digit, fd, first_digit);
	
	return 0;

}