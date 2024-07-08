/*
Modify the square2.c program of Section 6.3 so that it pauses after every 24 squares and displays the following message:

Press Enter to continue...

After displaying the message, the program should use getchar to read a character. 
getchar won't allow the program to continue until the user pressed the Enter key.

*/
/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* square2.c (Chapter 6, page 110) */
/* Prints a table of squares using a for statement */

#include <stdio.h>

int main(void)
{
	int i, n;
	char e;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);
	getchar();

	for (i = 1; i <= n; i++)
	{
	   	printf("%10d%10d\n", i, i * i);
		if(i % 24 == 0)
		{
			printf("Press Enter to continue...\n");
			while (getchar() != '\n')
                ;
		}
	}
	return 0;
}