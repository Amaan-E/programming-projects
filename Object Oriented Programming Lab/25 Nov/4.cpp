/*
	1
	1 2 
	1 2 3 
	1 2 3 4
	1 2 3 4 5
*/
#include <iostream>

int main( void ) {
	std::cout << "Enter n: ";
	int n {};
	std::cin >> n;
	
	for ( int i = 1; i <= n; i++ ) {
		for ( int j = n; j >= i; j-- ) {
			std::cout << ' ';
		}
		for ( int k = 1; k <= i; k++ ) {
			std::cout << k << ' ';
		}
		std::cout << '\n';
	}
	
	return 0;
} 
