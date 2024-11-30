#include <iostream>

int main( void ) {
    for ( ;; ) {
        std::cout << "Menu:\n"
                     "1. Find the factorial of a number.\n"
                     "2. Find the GCD of two numbers.\n"
                     "3. Find the LCM of two numbers.\n"
                     "4. Exit the program.\n"
                     "Enter your choice: ";
        char choice {};
        std::cin >> choice;
		std::cout << "\n";
        switch ( choice ) {
            case '1': {
                std::cout << "Enter number: ";
                int number {};
                unsigned long long fac { 1 };
                std::cin >> number;
                if ( number < 0 ) {
                    std::cout << "Negatives don't have factorial.\n";
                } else {
                    for ( int i { 1 }; i <= number; ++i ) {
                        fac *= i;
                    }
                    std::cout << "Factorial of " << number << ": " << fac << '\n';
                }
                std::cout << "\n";
                break;
            } case '2': {
                int m {}, n {}, r {};
                std::cout << "Enter two integers: ";
                std::cin >> m >> n;
                while ( n ) {
                    r = m % n; 
                    m = n;
                    n = r;
                }
                std::cout << "GCD: " << m << '\n';
                std::cout << "\n";
                break;
            } case '3': {
                int a {}, b {};
                std::cout << "Enter two integers: ";
                std::cin >> a >> b;

                int maxVal { ( a > b ) ? a : b };
                int lcm { maxVal };

                while ( true ) {
                    if ( ( lcm % a == 0 ) && ( lcm % b == 0 ) ) {
                        std::cout << "LCM: " << lcm << '\n';
                        break;
                    }
                    lcm++;
                }
                std::cout << "\n";
                break;
            } case '4': {
                return 0;
			} default:
                std::cout << "Invalid choice!\n";
                std::cout << "\n";
                break;
        }
    }

    return 0;
}
