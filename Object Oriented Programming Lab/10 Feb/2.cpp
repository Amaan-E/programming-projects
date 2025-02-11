/*
=====================================================================================
Program 2: Function with Default Arguments
    Problem: Write a function calculateArea(double radius, double pi = 3.14) that
    calculates the area of a circle using the formula π * r².
    • If the user does not provide the value of pi, use 3.14 as the default.
    • Call this function with and without specifying the value of pi.
======================================================================================
*/

#include <iostream>

double calculateArea(double radius, double pi = 3.14) {
    return pi * radius * radius;
}

int main() {
    double radius;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    std::cout << "Do you want to enter a custom value for pi? (y/n): ";
    char choice {};
    std::cin >> choice;
    double pi {};
    if (choice == 'y' || choice == 'Y') {
        std::cout << "Enter the value of pi: ";
        std::cin >> pi;
        std::cout << "Area with custom pi: " << calculateArea(radius, pi) << "\n";
    } else {
        std::cout << "Area with default pi: " << calculateArea(radius) << "\n";
    }
    
    return 0;
}