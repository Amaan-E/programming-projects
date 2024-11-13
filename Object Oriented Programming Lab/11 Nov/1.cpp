/*
Program 1: Basic if Statement
	Write a program that takes an integer input from the user and checks if it is positive, negative, or
	zero using if, else if, and else statements. Print the result accordingly.
 */


#include <iostream>

int main( int argc, char *argv[] ) {
	
	std::cout << "Enter an integer: ";
	int input {};
	std::cin >> input;

	if ( !input ) {
		std::cout << "You entered zero.\n";
	} else if ( input > 0 ) {
		std::cout << input << " is positive.\n";
	} else {
		std::cout << input << " is negative.\n";
	}
	
	return 0;
}

