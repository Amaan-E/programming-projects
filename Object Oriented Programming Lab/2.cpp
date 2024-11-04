// Calculates digits of a number
#include <iostream>

int main() {
	std::cout << "Enter a number: ";
	int number {};
	std::cin >> number;
	
	int digits { 0 };	
	while ( number != 0 ) {
		number = number / 10;
		digits++;
	}
	std::cout << "Total number of digits: " << digits;
	
	return 0;
}
