/*
===========================================================================================================================
Program 8: Pattern Generation with Conditional Statements
	Write a program to print a checkerboard pattern of size `n x n`:
		# # # #
		# # # #
		# # # #
		# # # #
Use nested loops and an if-else condition to determine whether to print `#` or a space.
===========================================================================================================================
*/

#include <iostream>

int main( void ) {
	std::cout << "Enter the size of the checkerboard (n): ";
	int n{};
	std::cin >> n;
	
	for ( int i {0}; i < n; i++ ) {
		for ( int j {0}; j < n; j++ ) {
			if ( ( i + j ) % 2 ) {
				std::cout << '#';
			} else {
				std::cout << ' ';
			}
		}
		std::cout << '\n';
	}

	return 0;
}