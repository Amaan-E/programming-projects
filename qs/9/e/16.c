/*
Condense the fact function in the same way we condensed power.
Solution

Here is the fact function as written in Section 9.6:

int fact(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * fact(n - 1);
}
 */

int fact( int n ) {
    return n <= 1 ? 1 : n * fact( n - 1 );
}


// Power
int power(int x, int n) { 
if (n == 0) return 1; else return x * power(x, n - 1); 
} 

int power(int x, int n) { 
return n == 0 ? 1 : x * power(x, n - 1); 
} 


