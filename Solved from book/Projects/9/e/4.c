/*
Write a function day_of_year(month, day, year) that returns the day of the year (an integer between 1 and 366) specified by the three arguments.
 */


#include <stdio.h>

int main(int argc, char **argv)
{

	
	return 0;
}

int day_of_year( int month, int day, int year ) {
	int sum = 0;
	switch( month ) {
		case 1 : case 3 : case 5 : case 7: case 8: case 10: case 12:
			sum += day + 31;
		
		case 4: case 6: case 9: case 11:
			sum += day + 31;
		
		case 2:
			if ( year % 4 == 0 ) {
				sum += day + 29;
			} else {
				sum += day + 28;
			}
	
}
