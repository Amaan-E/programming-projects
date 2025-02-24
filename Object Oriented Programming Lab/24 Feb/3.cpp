/*
==================================================================================================
    Assignment 3: Overloading the > Operator for Comparison
        Develop a class Box with attributes (length, width, height). Overload the > operator to
        compare two Box objects based on volume and print whether one is larger than the other.
==================================================================================================
*/

#include <iostream>

class Box {
    private:
        float length;
        float width;
        float height;
    public:
        Box(float l, float w, float h): length(l), width(w), height(h){}
        bool operator > (Box b){
            return (length * width * height) > (b.length * b.width * b.height);
        }
};

int main() {
    Box a(2,3,5);
    Box b(4,6,8);
    
    std::cout << ((a > b)? "a > b\n": "a < b\n");
    
    return 0;
}

