#include <stdio.h>

#define DAYS 7
#define HOURS 24

/*
====================
    FindLargest
    Finds the largest value in an array of integers.
====================
*/
int FindLargest( const int * temperatures, int size ) {
    int largest = temperatures[0]; // Initialize with the first element

    for ( int i = 1; i < size; i++ ) {
        if ( temperatures[i] > largest ) {
            largest = temperatures[i]; // Update largest if current element is greater
        }
    }
    
    return largest; // Return the largest value found
}

int main( void ) {
    // Array containing hourly temperature readings for a week (7 days)
    int temperatures[DAYS][HOURS] = {
        { 30, 32, 31, 29, 28, 31, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 41, 40, 39, 38, 37, 36, 35, 34 },
        { 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48 },
        { 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41 ,42 ,43 },
        {15 ,16 ,17 ,18 ,19 ,20 ,21 ,22 ,23 ,24 ,25 ,26 ,27 ,28 ,29 ,30 ,31 ,32 ,33 ,34 ,35 ,36 ,37 ,38 },
        {10 ,11 ,12 ,13 ,14 ,15 ,16 ,17 ,18 ,19 ,20 ,21 ,22 ,23 ,24 ,25 ,26 ,27 ,28 ,29 ,30 ,31 ,32 },
        {5   ,6   ,7   ,8   ,9   ,10   ,11   ,12   ,13   ,14   ,15   ,16   ,17   ,18   ,19   },
        {0   ,-1   ,-2   ,-3   ,-4   ,-5   ,-6   ,-7   ,-8   ,-9   ,-10}
    };

    // Loop through each day's temperatures and find the highest temperature
    int *p;
    for ( p = temperatures[0]; p < temperatures[0] + DAYS * HOURS; p++ ) {
		printf( "Highest temperature for day: %d\n", FindLargest( p, HOURS ) );
	}
    return 0;
}
