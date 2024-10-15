/*
Write the following function:

double inner_product(double a[], double b[], int n);

The function should return a[0] * b[0] + a[1] * b[1] + ... + a[n-1] * b[n-1].
 */


#include <stdio.h>
double inner_product(double a[], double b[], int n);


double inner_product(double a[], double b[], int n) {
	int ma = 0;
	for ( int i = 0; i < n - 1; i++ ) {
		ma += a[ i ] * b[ i ]; 
	}
	return ma;
}


