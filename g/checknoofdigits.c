/* Write a program that calculates how many digits a number contains:

Enter a number: 374
The number 374 has 3 digits
You many assume that the number has no more than four digits. 
Hint: Use if statements to test the number. 
For example, if the number is between 0 and 9, it has one digit. If the number is between 10 and 99, it has two digits. */

#include <stdio.h>

int main()
{
	int number;
	
	printf("Enter a number: ");
	scanf("%d", &number);
	
	if (number >= 0 && number <= 9)
	{
		printf("It has one digit.");
	}
	else if(number >= 10 && number <= 99)	
	{
		printf("It has two digits.");	
	}
	else if(number >= 100 && number <= 999)	
	{
	printf("It has three digits.");	
	}
	else
		printf("It has more than three digits.");	
		
	return 0;

}

