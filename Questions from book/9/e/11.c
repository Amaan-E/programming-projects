/*
Write the following function:

float compute_GPA(char grades[], int n);

The grades array will contain letter grades (A, B, C, D or F, either upper-case or lower-case); n is the length of the array. The function should return the average of the grades (assume that A = 4, B = 3, C = 2, D = 1 and F = 0).
 */


#include <stdio.h>
float compute_GPA(char grades[], int n);

int main( int argc, char **argv ) {
	int n = 4;
	char a[ n ];
	for ( int i = 0; i < n; i++ ) {
		a[ i ] = 'A';
	}
	printf("%.2lf", compute_GPA( a, n ) );
	return 0;
}

float compute_GPA(char grades[], int n) {
	float score = 0.0f;
	for ( int i = 0; i < n; i++ ) {
		switch ( grades[ i ] ) {
			case 'A': 
				score += 4;
				break;
			case 'B': 
				score += 3;
				break;
			case 'C': 
				score += 2;
				break;
			case 'D': 
				score += 1;
				break;
			case 'F': 
				score += 0;
				break;
			default:
                break;	
		} 
	}	
	
	return score / n;
}
