/*
Rewrite the fact function so that it's no longer recursive.

Here is the fact function as written in Section 9.6:

int fact(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * fact(n - 1);
}
 */
 #include <stdio.h>
int fact( int n );
 
int main( void ) {
	printf( "Fact: %d", fact( 6 ) );
} 

int fact( int n ) {
	int f = 1;
    if ( n <= 1 ){
        return 1;
    }    
	for ( int i = n; i >= 1; i-- ) {
		 f = f * i; 
	}
/*	for ( int i = 1; i <= n ; i++ ) {
		 f = f * i; 
	}
*/
	return f;	
		
}

