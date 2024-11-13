/*
Program10: switch Statement for Character Analysis
	Write a program that takes a single character as input from the user and uses a switch statement
	to check if the character is a vowel (a, e, i, o, u for both uppercase and lowercase) or a
	consonant. Print the result accordingly.
*/

#include <iostream>

int main( void ) {
	std::cout << "Enter a character: ";
	char c{};
	std::cin >> c;

	if ( c >= 'A' && c <= 'Z' ) {
		c += 'a' - 'A';
	}

	switch ( c ) {
		case 'a': case 'e' : case 'i': case 'o': case 'u':
			std::cout << c << " is a vowel.";
			break;
		default:
			std::cout << c << " is a consonant.";
			break;
	}
 
	return 0;
}
