/*
===========================================================================================================
    Assignment 4: Overloading Type Conversion (Class to Basic Type)
        Create a class Time with attributes hours and minutes. Overload type conversion so that a Time
        object can be converted into an integer representing total minutes.
===========================================================================================================
*/

#include <iostream>

class Time {
    private:
        int hours;
        int minutes;
    public:
        Time(): hours(0), minutes(0) {}
        Time(int h, int m): hours(h), minutes(m) {}
        
        operator int() {
            return (hours * 60) + minutes;
        }
        
};

int main() {
    Time t(2, 30);
    int m = t;
    std::cout << m << "\n";
    
    return 0;
}