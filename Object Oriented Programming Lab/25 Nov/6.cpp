/*
===========================================================================================================================
Program 6: Do-While with Number Reversal
	Write a program that repeatedly asks the user to input a positive integer and then reverses the digits of the number. 
For example, input `1234` should output `4321`. Stop the program when the user enters `0`.
===========================================================================================================================
*/

#include <iostream>

int main( void ) {
	for ( ;; ) {
		std::cout << "Enter a positive integer\n or 0 to exit: ";
		int n {};
		std::cin >> n;
		if ( n == 0 ) {
			break;
		} else {
			while ( n ) {
				std::cout << n % 10;
				n /= 10;
			}
			std::cout << "\n\n";
		}
	}

	return 0;
}