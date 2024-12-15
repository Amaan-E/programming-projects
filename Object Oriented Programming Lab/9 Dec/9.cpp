/*
==================================================================================================
    Write a program to check if a number is a palindrome. Use a while loop to reverse the digits of 
    the number. Extend the program to print all palindrome numbers within a given range. 
    Interaction might look like this:
    
        Enter a number: 121
        It is a palindrome.
=================================================================================================
*/

#include <iostream>

bool CheckPalindrome( int og );
  
int main() {
    int input{};
    std::cout << "Enter a number: ";
    std::cin >> input;

    if ( CheckPalindrome( input ) ) {
        std::cout << "It is a palindrome..";
    } else {
        std::cout << "Not a Palindrome.";
    }

    return 0;
}

bool CheckPalindrome( int og ) {
    int n {og / 10};
    int reversed {og % 10};
    while ( n ) {
        reversed = reversed * 10 + ( n % 10 );
        n = n / 10;
    }

    if ( og == reversed ) {
        return true;
    }
    return false;
}