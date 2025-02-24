/*
=======================================================================================================
    Assignment 1: Overloading the + Operator for Complex Numbers
        Write a C++ program that defines a class Complex with two integer attributes (real, imag).
        Overload the + operator to add two complex numbers and display the result.
=======================================================================================================
*/

#include <iostream>

class Complex {
    private:
        int real;
        int imag;
    public:

        Complex(int r, int i): real(r), imag(i) {}
        Complex operator + (Complex c) {
            return Complex(real + c.real, imag + c.imag);
        }
        void Show() {
            std::cout << real << " + " << imag <<"i\n";
        }

};

int main() {
    Complex c(3,4);
    Complex d(4,5);

    (c + d).Show();

    return 0;
}
