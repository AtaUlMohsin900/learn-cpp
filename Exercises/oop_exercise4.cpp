// Default/Parameterized Constructor
#include <iostream>

class Rectangle {
private:
    int length;
    int width;

public:
    // 1. Default Constructor (no arguments)
    Rectangle() : length(1), width(1) {
        std::cout << "Default Rectangle created (1x1)." << std::endl;
    }

    // 2. Parameterized Constructor
    Rectangle(int l, int w) : length(l), width(w) {
        std::cout << "Custom Rectangle created (" << length << "x" << width << ")." << std::endl;
    }

    int get_area() const {
        return length * width;
    }
};

int main() {
    // Uses the Parameterized Constructor
    Rectangle r1(12, 4); 
    std::cout << "R1 Area: " << r1.get_area() << std::endl;

    // Uses the Default Constructor
    Rectangle r2;
    std::cout << "R2 Area: " << r2.get_area() << std::endl;

    return 0;
}