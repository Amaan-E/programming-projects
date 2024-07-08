/*
Programming Project 1 in Chapter 4 asked you to write a program that displays a two-digit number with its digits reversed.
Generalize the program so that the number can have one, two, three, or more digits. 
Hint: Use a do loop that repeatedly divides the number by 10, stopping when it reaches 0.

Read the number using %d, then break it into two digits. 
Hint: If n is an integer, then n % 10 is the last digit in n and n / 10 is n with the last digit removed.




*/

#include <stdio.h>

int main()
{
	printf("Enter integers to be reversed: ");
	int number, n;
	scanf("%d", &number);
	
	
    do{
	 	n = number / 10;
	 	printf("%d", number % 10);
		number = n;	
    }while(n != 0);

}