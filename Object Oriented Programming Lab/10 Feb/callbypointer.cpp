#include <iostream>

void swap(int &x, int &y);

int main() {
    int x {10};
    int y {20};
    
    swap(x, y);
    std::cout << "x = " << x << "\ny = " << y << "\n";    
    
    return 0;
}

void swap(int &x, int &y) {
    int t = x;
    x = y;
    y = t;
}
