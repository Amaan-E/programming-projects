/*
Write a program that prints the values of 
sizeof(int), sizeof(short), sizeof(long), sizeof(float), sizeof(double) and sizeof(long double).
*/

#include <stdio.h>

int main()
{
	printf("%lu %lu %lu \n", (unsigned long)sizeof(int), (unsigned long)sizeof(short), (unsigned long)sizeof(long));
	printf("%lu %lu %lu", (unsigned long) sizeof(float), (unsigned long) sizeof(double), (unsigned long) sizeof(long double));

}