/*
Program5: switch Statement for Basic Calculator
	Write a program that takes two integers and a character representing an operation (+, -, *, /) as
	input from the user and uses a switch statement to perform the appropriate arithmetic operation
	and print the result.
*/

#include <iostream>

int main( void ) {
	std::cout << "Enter two integers followed by '+' or '-' or '*' or '/': ";
	int x{};
	int y{};
	char oprtr{};
	std::cin >> x >> y >> oprtr;

	switch ( oprtr ) {
		case '/':
			switch ( y ) {
				case 0:
					std::cout << "Cannot divide by 0.";
					return 1;
					break;
				default:
					std::cout << x << " / " << y << " = " << ( float )x / y;
					break;
			}
			break;
		case '*':
			std::cout << x << " * " << y << " = " << x * y;
			break;
		case '+':
			std::cout << x << " + " << y << " = " << x + y;
			break;
		case '-':
			std::cout << x << " - " << y << " = " << x - y;
			break;
		default:
			std::cout << "Invalid oprator.";
			break;
	}
		
	return 0;

}
