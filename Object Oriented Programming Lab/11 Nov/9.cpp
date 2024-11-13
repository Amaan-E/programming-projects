/*
Program9: for Loop with if Statement for Prime Number Check
	Write a program that takes an integer as input and uses a for loop with an if statement to check
	if the number is prime.If it’s prime, print "Prime Number"; otherwise, print "Not a Prime
	Number."
*/

#include <iostream>

int main() {

	std::cout << "Enter an integer: ";
	int number{};
	std::cin >> number;
	
	for ( int i { 2 }; i <= number / 2; i++ ) {
		if ( number % i == 0 ) {
			std::cout << "Not a Prime Number.";
			return 0;
		}
	}
	std::cout << "Prime Number.";

	return 0;
}
