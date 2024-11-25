/*
	Leap year
*/
#include <iostream>

int main( void ) {
	std::cout << "Enter year: ";
	int year {};
	std::cin >> year;
	
	if ( ( year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0 ) {
		std::cout << year << " is leap.";
	} else {
		std::cout << year << " is not leap.";
	}
	return 0;
} 
