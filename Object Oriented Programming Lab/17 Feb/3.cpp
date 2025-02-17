#include <iostream>

class Triangle {
	private:
		float base {};
		float height {};
	public:
		float calculateArea() {
			return (1 / 2.0f) * base * height;
		}
	// Parameterized Constructor
	Triangle(float b, float h): base(b), height(h) {
		;
	}
	
	// Destructor: is called automatically.
	~Triangle() {
		std::cout << "\n**Object Destroyed.**\n" ;
	}
	

};

int main() {
	float b {};
	float h {};
	std::cout << "Enter breadth and height: ";
	std::cin >> b >> h;
	Triangle t(b, h);
	
	std::cout << "Area of triangle:  " << t.calculateArea() << "\n";
	return 0;
}
