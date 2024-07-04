#include <stdio.h>

int main(void)
{
	int part1, part2, part3, part4;
	printf("Enter two fractions seperated by a plus sign: ");
	scanf("%d/%d+%d/%d", &part1, &part2, &part3, &part4);
	
	float sum = (part1/part2) + (part3/part4);
	printf("The sum is %d"), sum;
		
	return 0;
}