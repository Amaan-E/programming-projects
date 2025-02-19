/*
Modify Programming Project 8 from Chapter 5 so that it includes the following function:

void find_closest_flight(int desired_time, 
                         int *departure_time, 
                         int *arrival_time);

This function wil find the flight whose departure time is closest to desired_time (expressed in minutes sinces midnight). It will store the departure and arrival times of this flight (also expressed in minutes since midnight) in the variables pointed to by departure_time and arrival_time, respectively.
Solution
*/

#include <stdio.h>
void find_closest_flight(int desired_time, 
                         int *departure_time, 
                         int *arrival_time);


int main() {

    int desired_time,
        hour,
        minute;

	int departure_time, arrival_time;
	 
    printf( "Enter a 24-hour time: " );
    scanf( "%d :%d", &hour, &minute );
    desired_time = hour * 60 + minute;
    
    find_closest_flight( desired_time, &departure_time, &arrival_time );
	
	printf( "Closest departure time is " );

	int hoursD, minutesD, hoursA, minutesA;
	hoursD = departure_time / 60;
	hoursA = arrival_time / 60;
	
	minutesD = departure_time % 60;
	minutesA = arrival_time % 60;
	
	/* Conversion to 24h 
	printf("Closest departure time is %.2d:%.2d, arriving at %.2d:%.2d\n",
	   departure_time / 60, departure_time % 60,
	   arrival_time / 60, arrival_time % 60);
	*/
	if ( hoursD == 0 ) {
		hoursD = 12, minutesD = 0;
		printf( "%d:%.2dam", hoursD, minutesD );
	} else if ( hoursD >= 1 && hoursD <= 11 ) {
		printf( "%d:%.2dam", hoursD, minutesD );
	} else if ( hoursD >= 12 && hoursD <= 23 ) {
		printf( "%d:%.2dpm", hoursD - 12, minutesD );
	}
	
	if ( hoursA == 0 ) {
		hoursA = 12, minutesA = 0;
		printf( ", arriving at %d:%.2dam", hoursA, minutesA );
	} else if ( hoursA >= 1 && hoursA <= 11 ) {
		printf( ", arriving at %d:%.2dam.\n", hoursA, minutesA );
	} else if ( hoursA >= 12 && hoursA <= 23 ) {
		printf( ", arriving at %d:%.2dpm.\n", hoursA - 12, minutesA );
	}

//   printf( "Closest departure time is " );
//   printf( "%d, arriving at %d.\n", departure_time, arrival_time );

    return 0;
}


void find_closest_flight( int desired_time, 
                         int *departure_time, 
                         int *arrival_time ) {
	int d1 = 480,
        d2 = 583,
        d3 = 679,
        d4 = 767,
        d5 = 840,
        d6 = 945,
        d7 = 1140,
        d8 = 1305;
        
	if ( desired_time <= d1 + ( d2 - d1 ) / 2 ) {
       // printf("8:00 a.m., arriving at 10:16 a.m.\n");
        *departure_time = d1;
        *arrival_time =  616;
    } else if ( desired_time < d2 + ( d3 - d2 ) / 2 ) {
        //printf("9:43 a.m., arriving at 11:52 a.m.\n");
		*departure_time = d2;
        *arrival_time =  712;
    } else if ( desired_time < d3 + ( d4 - d3 ) / 2 ) {
        //printf("11:19 a.m., arriving at 1:31 p.m.\n");
		*departure_time = d3;
        *arrival_time =  811;
    } else if ( desired_time < d4 + ( d5 - d4 ) / 2 ) {
        //printf("12:47 p.m., arriving at 3:00 p.m.\n");
		*departure_time = d4;
        *arrival_time =  900;
    } else if ( desired_time < d5 + ( d6 - d5 ) / 2 ) {
        //printf("2:00 p.m., arriving at 4:08 p.m.\n");
		*departure_time = d5;
        *arrival_time =  968;
    } else if ( desired_time < d6 + ( d7 - d6 ) / 2 ) {
        //printf("3:45 p.m., arriving at 5:55 p.m.\n");
		*departure_time = d6;
        *arrival_time =  1075;
    } else if ( desired_time < d7 + ( d8 - d7 ) / 2 ) {
        //printf("7:00 p.m., arriving at 9:20 p.m.\n");
		*departure_time = d7;
        *arrival_time =  1280;
    } else {
        //printf("9:45 p.m., arriving at 11:58 p.m.\n");
		*departure_time = d8;
        *arrival_time =  1438;
	}					 
							 
}
