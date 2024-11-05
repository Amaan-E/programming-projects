// Checks whether a number is a palindrome or not.
#include <iostream>

int main() {
	int number {};
	std::cout << "Enter a number: ";
	std::cin >> number;
	
	int enteredNumber { number };
	int reversed { 0 };
	while ( number != 0 ) {
		reversed = ( reversed * 10 ) + ( number % 10 );
        number = number / 10;
	}
	
	if ( reversed  == enteredNumber ) {
		std::cout << enteredNumber << " is a palindrome.";
	} else {
		std::cout << enteredNumber << " is not a palindrome.";
	}

	return 0;
}

