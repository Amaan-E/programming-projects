/*Write a program that asks the user for a 24-hour time, then displays the time in 12-hour form:

Enter a 24-hour time: 21:11
Equivalent 12-hour time: 9:11 PM
Be careful not to display 12:00 as 0:00.*/

#include <stdio.h>

int main()
{
	int hh, tt;
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hh, &tt);
	
	
	if (tt > 60 || hh > 24)
	{
		printf("Invalid time.");
	}
	else if (hh > 12)
	{
		printf("Equivalent 12-hour time: %d:%d PM", hh - 12, tt);
	}
	else if (hh > 12 && tt == 0)
	{
		printf("Equivalent 12-hour time: %d:00 PM", hh - 12);
	}
	else
	{
		printf("Equivalent 12-hour time: %d:%d AM");
	}
	
	return 0;
	
}