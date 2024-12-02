/*
*1. Assume that you want to generate a table of multiples of any given number. 
	Write a program that allows the user to enter the number and then generates the table, formatting it
	into 10 columns and 20 lines. Interaction with the program should look like this (only the
	first three lines are shown):
		Enter a number: 7
		  7  14  21  28  35  42  49  56  63  70
		 77  84  91  98 105 112 119 126 133 140
		147 154 161 168 175 182 189 196 203 210
*/

#include <iostream>

int main( void ) {
	std::cout << "Enter a number: ";
	int x {};
	std::cin >> x;

	for ( int i{ 1 }; i <= 200; ++i ) {
		std::cout << "    ";
		int multiple { x * i };
		std::cout << ( multiple < 1000 ? " " : "" ) << ( multiple < 100 ? " " : "" ) << ( multiple < 10 ? " " : "" ) << multiple << " ";
		if ( !( i % 10 ) ) {
			std::cout << '\n';
		}
		
	}

	return 0;
}
