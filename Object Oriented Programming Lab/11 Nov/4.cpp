/*
Program4: switch Statement for Days of the Week
	Write a program that takes a number between 1 and 7 from the user and uses a switch statement
	to print the corresponding day of the week (1 for Monday, 2 for Tuesday, etc.). Print "Invalid
	input" if the number is not between 1 and 7.
*/

#include <iostream>

int main( void ) {
	for ( ;; ) {
		std::cout << "Enter a number between 1 and 7 or 0 to terminate: ";
		int input;
		std::cin >> input;
		
		switch ( input ) {
			case 0:
				return 0;
				break;
			case 1:
				std::cout << "Monday.\n";
				break;
			case 2:
				std::cout << "Tuesday.\n";
				break;
			case 3:
				std::cout << "Wednesday.\n";
				break;
			case 4:
				std::cout << "Thursday.\n";
				break;
			case 5:
				std::cout << "Friday.\n";
				break;
			case 6:
				std::cout << "Saturday.\n";
				break;
			case 7:
				std::cout << "Sunday.\n";
				break;
			default:
				std::cout << "Invalid input.\n";
				break;
		}
	}
	
	return 0;
}
