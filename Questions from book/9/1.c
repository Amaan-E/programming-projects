/*
Write a program that asks the user to enter a series of integers (which it stores in an array), then sorts the integers by calling the function selection_sort. When given an array with n elements, selection_sort must do the following: 
1. Search the array to find the largest element, then move it to the last position in the array.
2. Call itself recursively to sort the first n - 1 elements of the array.
 */


#include <stdio.h>
int selection_sort( int n, int a[ n ] );

int main( int argc, char **argv ) {
//	int integers[ 5 ] = { 2, 5, 3, 1, 4 }, i;
	int n, i;
	printf( "Enter total no. of integers: \n" );
	scanf( "%d", &n );
	int integers[ n ];
 	printf( "Enter a series of integers: \n" );
	for ( i = 0; i < n; i++ ) {
		scanf( "%d", &integers[ i ] );
	}
		
	selection_sort( n, integers );
//	selection_sort( 5, integers );
		
//	for ( i = 0; i < 5; i++ ) {
	printf( "Sorted: " );
	for ( i = 0; i < n; i++ ) {
		printf( "%d, ", integers[ i ] );
	}	
	
	return 0;
}

int selection_sort( int n, int a[ n ] ) {
	int largest = 0, ogp;
	for ( int i = 0; i < n; i++ ) {
		if ( a[ i ] > largest ) {
			ogp = i;
			largest = a[ i ];
			if ( a[ n - 1 ] < largest ) {
				a [ ogp ] = a[ n - 1 ];
				a[ n - 1 ] = largest;
			}
			selection_sort( n - 1, a );
		}	
	}
	
	return a[ n ];
	
}
