/*
Program6: Nested switch Statements for a Menu
	Create a menu-based program where the user can choose between "Vegetarian" and "Non-
	Vegetarian" options, then display a sub-menu with specific dishes based on the selection. Use
	nested switch statements to handle each menu and sub-menu option.
*/

#include <iostream>

int main( void ) {
	for ( ;; ) {
		std::cout << "\nEnter 1 for Non-Vegetarian, 2 for Vegetarian\n" 
				     " or anything else to exit: ";
		char input{};
		std::cin >> input;
		switch ( input ) {
			case '1': {
				std::cout << "Enter 1 for Kebab, 2 for Chicken Biryani, 3 for Steak\n"
							 " or any other character to go back: ";
				char nonVeg{};
				std::cin >> nonVeg;
				switch ( nonVeg ) {
					case '1':
						std::cout << "You ordered Kebab.\n";
						break;
					case '2':
						std::cout << "You ordered Chicken Biryani.\n";
						break;
					case '3':
						std::cout << "You ordered Steak.\n";
						break;
					default:
						break;
				}
				break;
			} case '2': {
				std::cout << "Enter 1 for Saag, 2 for Daal Makhni, 3 for Salad\n"
							 " or any other character to go back: ";
				char veg{};
				std::cin >> veg;
				switch ( veg ) {
					case '1':
						std::cout << "You ordered Saag.\n";
						break;
					case '2':
						std::cout << "You ordered Daal Makhni.\n";
						break;
					case '3':
						std::cout << "You ordered Salad.\n";
						break;
					default:
						break;
				}
				break;
			} default:
				std::cout << "Exiting...\n";
				return 0;
				break;
		}
	}

	return 0;
}
