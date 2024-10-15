// Sums two fractions
#include <stdio.h>

int main(void)
{
	float part1, part2, part3, part4;
	printf("Enter two fractions seperated by a plus sign: ");
	scanf("%f/%f+%f/%f", &part1, &part2, &part3, &part4);
	
	float sum = (part1/part2) + (part3/part4);
	printf("The sum is %.2f", sum);
		
	return 0;
}