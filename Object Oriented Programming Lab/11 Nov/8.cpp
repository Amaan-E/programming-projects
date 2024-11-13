/*
Program8: switch Statement for Month and Days
Write a program that takes an integer from the user representing the month (1 for January, 2 for
February, etc.) and uses a switch statement to print the number of days in that month. Consider
leap year (assume it is a leap year if February is chosen) and handle it with an additional check.
*/

#include <iostream>

int main( void ) {
	std::cout << "Enter an integer corresponding to a month: ";
	int month{};
	std::cin >> month;
	
	const char *months[] = { "January", "February", "March"    ,
						     "April"  , "May"     , "June"     , 
						     "July"   , "August"  , "September",
						     "October", "November", "December" };

	switch ( month ) {
		case 2: {
			std::cout << "a leap year? 'y'/'n': ";
			char leap{};
			std::cin >> leap;
			if ( leap == 'y' || leap == 'Y' ) {
				std::cout << months[ month - 1 ] << " has 29 days.";
			} else {
				std::cout << months[ month - 1 ] << " has 28 days.";
			}
			break;
		} case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			std::cout << months[ month - 1 ] << " has 31 days.";
			break;
		case 4: case 6: case 9: case 11:
			std::cout << months[ month - 1 ] << " has 30 days.";
			break;
		default:
			std::cout << "Invalid month.";
			break;
	}

}
