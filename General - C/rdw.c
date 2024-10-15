#include <stdio.h>

int main()
{
	int one, two, three;
	
	printf("Enter three digit number: ");
	scanf("%1d%1d%1d", &one, &two, &three);
	
	printf("The Reversal is: %d%d%d", three, two, one);
	
	return 0;
	
}