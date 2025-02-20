/*
Modify Programming Project 8 from Chapter 5 so that the times are stored in a single array. 
The elements of the array will be structures, each containing a departure time and the corresponding arrival time 
(Each time will be an integer, representing the number of minutes since midnight). 
The program will use a loop to search the array for the departure time closest to the time entered by the user.
*/

/*
The following table shows the daily flights from one city to another:
Departure time 	Arrival time
8:00 a.m. 	10:16 a.m.
9:43 a.m. 	11:52 a.m.
11:19 a.m. 	1:31 p.m.
12:47 p.m. 	3:00 p.m.
2:00 p.m. 	4:08 p.m.
3:45 p.m. 	5:55 p.m.
7:00 p.m. 	9:20 p.m.
9:45 p.m. 	11:58 p.m.

Write a program that asks the user to enter a time (expressed in hours and minutes, using the 24-hour clock). 
The program then displays the departure and arrival times for the flight whose departure time is closest to that entered by the user:

Enter a 24-hour time: 13:15
Closest departure time is 12:47 p.m., arriving at 3:00 p.m.

Hint: Convert the input into a time expressed in minutes since midnight, and compare it to the departure times, 
also expressed in minutes since midnight. 
For example, 13:15 is 13 * 60 + 15 = 795 minutes since midnight, which is closer to 12:47 p.m. 
(767 minutes since midnight) than to any of the other departure times.
*/


#include <stdio.h>
#include <stdbool.h>

int main( void ) {
    struct time {
        int departure;
        int arrival;  
    };

    int user_time,
        hour,
        minute;
    const struct time times[] = { {.departure = 480,  .arrival = 616},
                                  {.departure = 583,  .arrival = 712},
                                  {.departure = 679,  .arrival = 811},
                                  {.departure = 767,  .arrival = 900},
                                  {.departure = 840,  .arrival = 968},
                                  {.departure = 945,  .arrival = 1075},
                                  {.departure = 1140, .arrival = 1280},
                                  {.departure = 1305, .arrival = 1438} };

    const int sizeOfArray = sizeof( times ) / sizeof( times[1] );
 
    printf( "Enter a 24-hour time: " );
    scanf( "%d :%d", &hour, &minute );
    user_time = hour * 60 + minute;

    int hD, hA;
    bool fallsInDefined = false;
    printf( "Closest departure time is " );
    for ( int i = 0; i < sizeOfArray; i++ ) {
        if ( user_time <= times[i].departure + ( times[i + 1 < sizeOfArray ? i + 1 : i].departure - times[i].departure ) / 2 ) {
            int hD = times[i].departure / 60;
            int hA = times[i].arrival / 60;
            printf( "%02d:%02d %s., arriving at ",
                    ( hD == 0 ) ? 12 : ( hD > 12 ) ? ( hD - 12 ) : hD, times[i].departure % 60,
                    ( hD >= 12 ) ? "p.m" : "a.m" );
            printf( "%02d:%02d %s.\n",
                    ( hA == 0 ) ? 12 : ( hA > 12 ) ? ( hA - 12 ) : hA, times[i].arrival % 60,
                    ( hA >= 12 ) ? "p.m" : "a.m" );
            fallsInDefined = true;
            break;
        }
    }

    if ( fallsInDefined == false ) {
        printf( "%d:%02d a.m., arriving at %d:%02d a.m.\n", times[0].departure / 60, times[0].departure % 60,
                                                            times[0].arrival / 60, times[0].arrival % 60 );
    }

    return 0;
}
