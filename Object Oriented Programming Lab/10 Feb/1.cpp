/*
=====================================================================================================
Program 1: Basic Function Definition
    Problem: Write a C++ program that defines a function sum(int a, int b) that takes two
    integers as arguments and returns their sum. Call this function from main() and display the
    result.
======================================================================================================
*/

#include <iostream>
int Sum(int a, int b);

int main() {
    std::cout << "Enter two integers: ";
    int a{};
    int b{};
    std::cin >> a >> b;

    std::cout << "\n  " << a << " + " << b << " = " << Sum(a, b) << "\n";
}

int Sum(int a, int b) {
    return a + b;
}