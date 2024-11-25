/*
	Tax amount
*/
#include <iostream>

int main( void ) {
	std::cout << "Enter income: ";
	double income {};
	std::cin >> income;
	
	if ( income <= 250000 ) {
		std::cout << "No tax.";
	} else if ( income > 250000  && income <= 500000 ) {
		std::cout << "Tax amount: 5% of income: " << income * ( float )5 / 100 ;
	} else if ( income > 500000  && income <= 1000000 ) {
		std::cout << "Tax amount: 30% of income: " << income * ( float )30 / 100;		
	} else {
		std::cout << "Tax amount: 30% of income: " << income * ( float )30 / 100;
	}
	
	return 0;
} 
		