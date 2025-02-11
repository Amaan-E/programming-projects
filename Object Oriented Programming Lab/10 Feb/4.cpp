/*
===============================================================================================================
Program 4: Recursive Function for Factorial
	Problem: Write a recursive function factorial(int n) that computes the factorial of a
	number. Call this function from main() and test it with different inputs.
===============================================================================================================
*/

#include <iostream>

int Fac(unsigned long int n);

int main() {
	std::cout << "Enter an integer: ";
	unsigned long int x {};
	std::cin >> x;
	
	std::cout << "Factorial: " << Fac(x) << "\n";
	
	return 0;
}

int Fac(unsigned long int n) {
	if (n <= 1) {
		return 1;
	} else {
		return n * Fac(n - 1);	
	}
}