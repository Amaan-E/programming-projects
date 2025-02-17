#include <iostream>

class Circle {
	public: 
		float radius {};
		const float pi = 3.14f;
		float calculateArea() {
			return pi * radius * radius;
		}
};

int main() {
	float r {2};
	Circle c;
	c.radius = 2;
	
	std::cout << "Radius of circle = " << r << "\n"
			  << "Area of circle = " << c.calculateArea() << "\n";
	return 0;
}
