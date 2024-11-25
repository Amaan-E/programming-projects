/*
	Switch with functions. Calculator
*/
#include <iostream>

float quotient( float x, float y );
float product( float x, float y );
float sum( float x, float y );
float difference( float x, float y );

int main( void ) {
	std::cout << "Enter two numbers and an operation(/,*,+,-): ";
	float x {}, y {};
	char opr {};
	std::cin >> x >> y >> opr;
	
	switch ( opr ) {
		case '/':
			std::cout << quotient( x, y ) << '\n';
			break;
		case '*':
			std::cout << product( x, y ) << '\n';
			break;
		case '+':
			std::cout << sum( x, y ) << '\n';
			break;
		case '-':
			std::cout << difference( x, y ) << '\n';
			break;		
	}
		
	return 0;
} 

float quotient( float x, float y ) {
	return x / y;
}

float product( float x, float y ) {
	return x * y;
}

float sum( float x, float y ) {
	return x + y;
}

float difference( float x, float y ) {
	return x - y;
}


