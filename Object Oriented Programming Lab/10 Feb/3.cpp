/*
==========================================================================================================
Program 3: Function with Pass by Value and Reference
    Problem: Create two functions:
    1. squareValue(int num) → Returns the square of num (pass by value).
    2. squareReference(int &num) → Modifies num to its square (pass by reference).
    Call both functions from main() and observe the differences.
==============================================================================================================
*/
#include <iostream>

void squareValue(int num);
void squareReference(int &num);

int main() {
    std::cout << "Enter value of num: ";
    int num {};
    std::cin >> num;
    
    squareValue(num);
    std::cout << "squareValue(num): " << num << "\n";
    squareReference(num);
    std::cout << "squareReference(num): " << num << "\n";
    
    return 0;
}

void squareValue(int num) {
    num = num * num;
}

void squareReference(int &num) {
    num = num * num;
}