/*
Program3: if Statement with Multiple Conditions
	Create a program that takes two integer inputs and an arithmetic oprtr (+, -, *, /) from the
	user, then performs the corresponding operation. Use if, else if, and else statements to
	handle each case and print the result.
*/

#include <iostream>

int main( void ) {
	
	std::cout << "Enter an integer followed by '+' or '-' or '*' or '/' followed by another integer: ";
	int x{};
	char oprtr{};
	int y{};
	std::cin >> x >> oprtr >> y;

	if ( oprtr == '/' ) {
		if ( y == 0 ) {
			std::cout << "Cannot divide by 0.";
			return 1;
		} else {
			std::cout << x << " / " << y << " = " << ( float )x / y;
		}
	} else if ( oprtr == '*' ) {
		std::cout << x << " * " << y << " = " << x * y;
	} else if ( oprtr == '+' ) {
		std::cout << x << " + " << y << " = " << x + y;
	} else if ( oprtr == '-' ) {
		std::cout << x << " - " << y << " = " << x - y;
	} else {
		std::cout << "Invalid oprator.";
	}

	return 0;
}
