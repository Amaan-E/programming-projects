/*
Write a declaration for a two-dimensional array named temperature_readings that stores 
one month of hourly temperature readings. 
(For simplicity, assume that a month has 30 days.) 
The rows of the array should represent days of the month; the colums should represent hours of the day.

Using the array of Exercise 8, write a program fragment that computes the average temperature for a month (averaged over all days of the month and all hours of the day).

 */


#include <stdio.h>
#define MONTH 30
#define HOURS 24
int main() {
	int i, j;
	double temperatureReadings[ MONTH ][ HOURS ] ;
	double average = 0.0;
//	printf( "Enter Temperature readings: " );
/*	for(i = 0 ; i <= MONTH; i++)
	{
		scanf("%d", &temperature_readings[i]);	
	}
*/
	for( i = 0; i <= HOURS; i++ ) {
		for( j = 0 ; j <= HOURS; j++ ) {
			average += temperatureReadings[ i ][ j ];
		}
	}
	
	average = average / MONTH * HOURS;
	
	
	
	
	
	
	return 0;
}

