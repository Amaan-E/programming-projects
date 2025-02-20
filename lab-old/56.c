// Fibonacci using recursion
#include <stdio.h>
int fibonacci( int );

int main() {
    int n, i;
    printf("Enter 'n': ");
    scanf("%d", &n);

    printf("Fibonacci series up to n:\n", n);
    for ( i = 0; i < n; i++ ) {
        printf( "%d ", fibonacci( i ) );
    }
    printf( "\n" );

    return 0;
}

int fibonacci( int n ) {
    if ( n <= 1 ) {
        return n;
    } else {
        return fibonacci( n - 1 ) + fibonacci( n - 2 );
    }
}
