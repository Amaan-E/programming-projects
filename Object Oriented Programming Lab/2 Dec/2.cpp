/*
Write a temperature-conversion program that gives the user the option of converting
Fahrenheit to Celsius or Celsius to Fahrenheit. Then carry out the conversion. Use 
floating-point numbers. Interaction with the program might look like this:
Type 1 to convert Fahrenheit to Celsius,
2 to convert Celsius to Fahrenheit: 1
Enter temperature in Fahrenheit: 70
In Celsius that’s 21.111111
*/

#include <iostream>

int main( void ) {
	std::cout << "Type 1 to convert Fahrenheit to Celsius,\n"
				 "2 to convert Celsius to Fahrenheit: ";
	int x {};
	std::cin >> x;
	switch ( x ) {
		case 1: {
			std::cout << "Enter temperature in Fahrenheit: ";
			float fahrenheit {};
			std::cin >> fahrenheit;
			std::cout << "In Celsius that's " << ( fahrenheit - 32 ) * 5.0f / 9.0f;
			break;
		 } case 2: {
		 	std::cout << "Enter temperature in Celsius: ";
			float celsius{};
			std::cin >> celsius;
			std::cout << "In Fahrenheit that's " << ( celsius * 9.0f / 5.0f ) + 32;
		 	break;
		 } default: {
		 	std::cout << "Invalid option!";
		 	break;
		 }
			
	}
	
	return 0;
}
