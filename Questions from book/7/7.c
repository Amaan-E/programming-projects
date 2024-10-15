/*
Modify Programming Project 6 from Chapter 3 so that the user may
 add, subtract, multiply or divide two fractions (by entering either +, -, * or / between the fractions).
 */
 /* Adds two fractions */

#include <stdio.h>

int main(void)
{
	float part1, part2, part3, part4;
	char sign;
	
	printf("Enter two fractions seperated by a plus sign: ");
	scanf("%f/%f%c%f/%f", &part1, &part2, &sign, &part3, &part4);
	
	if(sign == '+')
	{
	float sum = (part1/part2) + (part3/part4);
	printf("The sum is %.2f", sum);
	}
	
	else if(sign == '*')
	{
	float mul = (part1 * part3) / (part2 * part4);
	printf("The multiplication is %.2f", mul);
	}
	
	else if(sign == '-')
	{
	float sub = (part1/part2) - (part3/part4);
	printf("The sum is %.2f", sub);

	}
	else if(sign == '/')
	{
	float div = (part1/part2) / (part3/part4);
	printf("The division is %.2f", div);
	}


		
	return 0;
}