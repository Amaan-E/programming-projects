// Compare two complex numbers.
#include <iostream>

int main( void ) {
	int realOne {};
	int imaginaryOne {};
	int realTwo {};
	int imaginaryTwo {};
	
	for ( int i {0}; i < 2; ++i ) {
		std::cout << "Enter real part and imaginary in that order of " << i + 1  << " number: ";
		i == 0 ? std::cin >> realOne >> imaginaryOne : std::cin >> realTwo >> imaginaryTwo;
	}
	int a {realOne * realOne + imaginaryOne * imaginaryOne};
	int b {realTwo * realTwo + imaginaryTwo * imaginaryTwo};
	
	if ( a < b ) {
		std::cout << "First number is smaller.";
	} else if ( a > b ){
		std::cout << "First number is larger.";
	} else {
		std::cout << "Numbers are equal.";
	}
	
	return 0;
} 
