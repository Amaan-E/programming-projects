/*
===========================================================================================================================================
Program 4:  Parameterized Constructor and Default Constructor - Perimeter of a Rectangle
                Create a Rectangle class with attributes length and width.
                Implement a default constructor that initializes values to zero.
                Implement a parameterized constructor to accept values.
                Calculate and display the perimeter using calculatePerimeter().
===========================================================================================================================================
*/
#include <iostream>

class Rectangle {
    private:
        float length {};
        float breadth {};
    public:
    Rectangle(): length(0), breadth(0) {
        ;
    }
    
    Rectangle(float l, float b): length(l), breadth(b) {
        ;
    }

    void calculatePerimeter() {
        std::cout << "Perimeter: " << 2 * (length + breadth) << "\n";
    }
};

int main() {
    // Default Constructor
    Rectangle rect;
    rect.calculatePerimeter();

    // Parameterized Constructor
    Rectangle re(2.0f, 2.0f);
    re.calculatePerimeter();

	return 0;
}
