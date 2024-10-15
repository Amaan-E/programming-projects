/*
Write a program that asks the user for a 12-hour time, then displays the time in 24-hour form:

Enter a 12-hour time: 9:11 PM
Equivalent 24-hour time: 21:11
See Programming Project 8 for a description of the input format.
*/

#include <stdio.h>
#include <ctype.h>


int main()
{
	int h, m;
	char c;
	printf("Enter a 12-hour time: ");
	scanf("%d:%d %c", &h, &m, &c);

	if (toupper(c) == 'P' && h == 12)
	{
		printf("Equivalent 24-hour time: %d:%d\n", h, m);
	}
	else if (toupper(c) == 'P')
	{
		h = h + 12;
		printf("Equivalent 24-hour time: %d:%d\n", h, m);
	}
	else if ((toupper(c) == 'A' && h == 12))
	{
		h = 0;
		printf("Equivalent 24-hour time: %d:%d\n", h, m);
	}
	
	else
		printf("Equivalent 24-hour time: %d:%d\n", h, m);

	
}