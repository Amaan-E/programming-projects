/*
The following (rather confusing) function finds the median of three numbers. Rewrite the function so that it has just one return statement.

double median(double x, double y, double z)
{
    if (x <= y)
        if (y <= z) return y;
        else if (x <= z return z;
        else return x;
    if (z <= y) return y;
    if (x <= z) return x;
    return z;
}
 */
/*
The term median refers to a metric used in statistics. It is the middle number in a sorted ascending or descending list of numbers and can be more descriptive of that data set than the average. It is the point above and below which half (50%) of the observed data falls, and so represents the midpoint of the data. The median is often compared with other descriptive statistics such as the mean (average), mode, and standard deviation. 

    If there is an odd amount of numbers, the median value is the number that is in the middle, with the same amount of numbers below and above.
    If there is an even amount of numbers in the list, the middle pair must be determined, added together, and divided by two to find the median value.

*/ 

#include <stdio.h>

int main( int argc, char **argv ) {
	
	return 0;
}

double median(double x, double y, double z) {
    if (x <= y && x <= z)
		
        if (y <= z) 
			m = y;
        else if () 
			m = z;
        else 
			m = x;
    if (z <= y) 
		m = y;
    if (x <= z) 
		m = x;
    
    return m;
}


