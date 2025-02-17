#include <iostream>

class Rectangle {
	private:
		float length;
		float breadth;
	public:
		const float pi = 3.14f;
		float GetterL() {
			return length;
		}
		float GetterB() {
			return breadth;
		}
		void Setter(float l, float b) {
			length = l;
			breadth = b;
		}
		float calculateArea() {
			return length * breadth;
		}
};

int main() {
    Rectangle r;
    std::cout << "Enter Length & Breadth: ";
	float l {};
	float b {};
	std::cin >> l >> b;
	r.Setter(l, b);

	std::cout << "Length = ," << r.GetterL() << " Breadth = " << r.GetterB() << "\n"
			  << "Area of Rectangle = " << r.calculateArea() << "\n";
	return 0;
}
