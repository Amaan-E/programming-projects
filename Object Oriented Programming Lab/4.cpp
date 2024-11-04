// Checks whether number is even or odd
#include <iostream>

int main() {
	std::cout << "Enter a number: ";
	int number {};
	std::cin >> number;
	
	if ( number % 2 ) {
		std::cout << "Odd.";
	} else {
		std::cout << "Even.";
	}

	return 0;
}
