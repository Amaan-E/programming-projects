/*
Program2: Nested if Statements
	Write a program that takes a user’s age as input and uses nested if statements to determine and
	print whether the person is a child (age < 12), teenager (age between 12 and 18), adult (age
	between 18 and 60), or senior (age > 60)
*/

#include <iostream>

int main( void ) {

	std::cout << "Enter your age: ";
	int age{};
	std::cin >> age;

	if ( age < 12 ) {
		std::cout << "You are a child.\n";
	} else {
		if ( age >= 12 && age < 18 ) {
			std::cout << "You are a teenager.\n";
		} else {
			if ( age >= 18 && age < 60 ) {
				std::cout << "You are an adult.\n";
			} else {
				if ( age >= 60 ) {
					std::cout << "You are a senior.\n";
				}
			}
		}
	}	
		
	return 0;
}
