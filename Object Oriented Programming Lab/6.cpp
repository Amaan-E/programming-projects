// checks whether a word is a Palindrome or not
#include <iostream>

#define N 100

int main() {
	char word[ N ] {};
	std::cout << "Enter a word: ";
	std::cin >> word;
	
	char *q { word };
	while ( *q ) {
		// To convert to lower case
		if ( *q >= 'A' && *q <= 'Z' ) { 
		// 'a' = ASCII value, 'A' = ASCII Value
			*q += ( 'a' - 'A' ); 
		}
		++q;
	}
	--q;
	
	char *p { word };
	while ( p < q ) {
		if ( *p != *q ) {
			std::cout << word << " is not a palindrome.";
			return 0;
		}
		++p;
		--q;
	}
	
	std::cout << word << " is a palindrome.";
	
	return 0;
}

