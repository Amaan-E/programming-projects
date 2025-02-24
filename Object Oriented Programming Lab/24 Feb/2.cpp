/*
===============================================================================================================
    Assignment 2: Overloading the Unary - Operator
        Create a class Vector with two integer attributes (x, y). Overload the unary - operator to negate
        both coordinates and print the result.
===============================================================================================================
*/

#include <iostream>

class Vector {
    private:
        int x;
        int y;
    public:
        Vector(): x(0), y(0){}
        Vector(int a, int b): x(a), y(b){}
        Vector operator -() {
            return Vector(x *(-1),y * (-1));
        }
        void Show() {
            std::cout << x << ", " << y << "\n";
        }
};

int main() {
    Vector v(1, 2);// , m;
    // m = -v;
    // m.Show();
    (-v).Show();
    return 0;
}