/*
====================================================================================================
    Assignment 6: Overloading + and - for Custom Currency Class
        Write a class Currency with integer attributes rupees and paise. Overload + and - operators to
        perform addition and subtraction of two Currency objects.
====================================================================================================
*/

#include <cmath>
#include <iostream>

class Currency {
    private:
        int     rupees;
        int     paise;
    public:
        Currency(int a, int b): rupees(a), paise(b) {}
        Currency operator + (Currency a) {
            int totalPaise = (rupees * 100 + paise) + (a.rupees * 100 + a.paise);
            int newRupees = totalPaise / 100;
            int newPaise = totalPaise % 100;
            return Currency(newRupees, newPaise);
        }
        Currency operator - (Currency a) {
            int totalPaise = (rupees * 100 + paise) - (a.rupees * 100 + a.paise);
            int newRupees = totalPaise / 100;
            int newPaise = totalPaise % 100;
            if (newPaise < 0) {
                    newRupees--;
                    newPaise += 100;
                }
            
            return Currency(newRupees, newPaise);
        }
        void Display () {
            std::cout << rupees << ", " << paise << "\n";
        }
        
};

int main() {
    Currency    a(12, 30);
    Currency    b(24, 60);
    
    (a + b).Display();
    (a - b).Display();
    
    return 0;
}