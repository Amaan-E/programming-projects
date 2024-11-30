/*
===================================================================================================
Program 5: While Loop with Prime Numbers
	Write a program that accepts a number `n` and prints all prime numbers less than or equal to `n`. 
	Use a while loop and a function to check if a number is prime.
===================================================================================================
*/
#include <iostream>

int main() {
    std::cout << "Enter a number: ";
    int n;
    std::cin >> n;

    std::cout << "Prime numbers less than or equal to " << n << " are:\n";
    for ( int i {2}; i <= n; ++i ) {
        bool isPrime = true;
        for ( int j {2}; j * j <= i; ++j ) {
            if ( !( i % j ) ) {
                isPrime = false;
				break;
            }
        }
        if ( isPrime ) {
            std::cout << i << " ";
        }
    }
	
    return 0;
}