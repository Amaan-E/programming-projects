/*
Rearrange the square3.c program so that the for loop initializes i, tests i, and increments i. 
Don't rewrite the program; in particular, don't use any multiplications.

*/








/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* square3.c (Chapter 6, page 110) */
/* Prints a table of squares using an odd method */

#include <stdio.h>

int main(void)
{
  int i, n, odd, square;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &n);

//  i = 1;
  odd = 3;
  for (i = 1, square = 1; i <= n; ++i, odd += 2) {
    printf("%10d%10d\n", i, square);
//    ++i;
    square += odd;
  }

  return 0;
}