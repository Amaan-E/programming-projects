/* 
Program7: Grading System using if-else Statements
	Write a program that takes a student's score (out of 100) as input and displays the grade based on
	the following criteria:
		• A: 90-100
		• B: 80-89
		• C: 70-79
		• D: 60-69
		• F: Below 60
Use if-else statements for this. 
*/
#include <iostream>

int main() {
	std::cout << "\nEnter marks out of 100 or a letter to exit: ";
	float marks{};
	std::cin >> marks;

	if ( marks > 100 ) {
		std::cout << "Marks cannot be greater than 100.\n";
	} else if ( marks >= 90 ) {
		std::cout << "You have got A grade.\n";
	} else if ( marks >= 80 ) {
		std::cout << "You have got B grade.\n";
	} else if ( marks >= 70 ) {
		std::cout << "You have got C grade.\n";
	} else if ( marks >= 60 ) {
		std::cout << "You have got D grade.\n";
	} else if ( marks < 60 && marks >= 0 ) {
		std::cout << "You have got F grade.\n";
	} else {
		std::cout << "Invalid marks.\n";
	}

	return 0;
}
