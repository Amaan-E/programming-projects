//factorial using function using recursion
#include<stdio.h>

long int fact ( int );

int main() {
    int n;
    long int ans;
    printf( "Enter a positive integer: " );
    scanf( "%d", &n );
    ans = fact( n );
    printf( "Factorial = %li", n, ans );
}

/*
===================
Find Factorial
===================
*/
long int fact ( int n ){
    if( n > 1 ) {
        return n * fact ( n - 1 );
    }
    else
    	return 1;
}
