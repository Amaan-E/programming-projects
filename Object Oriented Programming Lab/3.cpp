// Reverses digits of a number
#include <iostream>

int main() {
	std::cout << "Enter a number: ";
	int number {};
	std::cin >> number;
	
	std::cout << "Reversed: ";
	while ( number != 0 ) {
		std::cout << number % 10;
		number = number / 10;
	}
	
	return 0;
}
