/*
===========================================================================================================================
Program 7: Break and Continue with Nested Loops
	Write a program to find and print all pairs `(x, y)` such that:
		- \( x^2 + y^2 = n \)
	where `n` is an input number, and both `x` and `y` range from `0` to \(\sqrt{n}\). 
Use break and continue statements to optimize the solution.
===========================================================================================================================
*/

#include <iostream>
#include <cmath>

int main( void ) {
	std::cout << "Enter n: ";
	int n {};
	std::cin >> n;
	
	double limit {sqrt( n )};
	for ( int x {0}; x < limit; ++x ) {
		for ( int y {0}; y < limit; ++y ) {
			if ( ( pow( x, 2 ) + pow ( y , 2 ) ) == n ) {
				std::cout << "(" << x << ", " << y << ")" << "\n";
			}
			if ( pow ( y , 2 ) > n - pow( x, 2 ) ) {
                break;
            }
		}
	
	}

	return 0;
}