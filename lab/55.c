// Ackerman using function
#include<stdio.h>

int ackerman(int, int);

int main() {
    int m, n, result;
    printf( "Enter the values of 'm' and 'n': \n" );
    scanf( "%d%d", &m, &n );
    result = ackerman( m,n );
    printf( "Ackerman(%d, %d)= %d \n", m, n, result );
}
int ackerman( int m, int n ){
    if ( m==0 ){
        return n + 1;
    }
    else if( m > 0 && n == 0 ) {
        return ackerman( m - 1, 1 );
    }
    else if ( m > 0 && n > 0 ){
        return ackerman( m - 1, ackerman( m, n - 1 ) );
    }
}
