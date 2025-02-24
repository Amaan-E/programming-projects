/*
========================================================================================================
    Assignment 5: Overloading Type Conversion (Basic Type to Class Type)
        Modify the Time class so that it can accept an integer representing total minutes and convert
        it into a Time object using a constructor.
========================================================================================================
*/

#include <iostream>

class Time {
    private:
        int hours;
        int minutes;
    public:
        Time(): hours(0), minutes(0) {}
        Time(int h, int m): hours(h), minutes(m) {}
        Time(int m) {
            hours = m / 60;
            minutes = m % 60;
        }
        operator int() {
            return (hours * 60) + minutes;
        }
        void ShowT() {
            std::cout << hours <<":" << minutes << "\n"; 
        }
        
};

int main() {
    std::cout << "Enter minutes: ";
    int minutes;
    std::cin >> minutes;
    
    Time t = minutes;
    t.ShowT();
    
    return 0;
}