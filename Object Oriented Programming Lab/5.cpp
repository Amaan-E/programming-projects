// Checks if an alphabet is a vowel or not.
#include <iostream>

int main() {
	std::cout << "Enter a character: ";
	char c {};
	std::cin >> c;
	
	switch ( c ) {
		case 'a': case 'e': case 'i': case 'o': case 'u':
			std::cout << c << " is a vowel.";
			break;
		default:
			std::cout << c << " is not a vowel.";
			break;
	}

	return 0;
}
