// Circle Class With Constant Methods

#include <iostream>
#include <cmath> // For M_PI, if available, otherwise use 3.14159

class Circle {
private:
    double radius;
    const double PI = 3.14159; // Define PI inside the class

public:
    // Constructor
    Circle(double r) : radius(r) {}

    // Constant member function
    double get_area() const {
        // The 'const' here ensures this method does not modify 'radius' or 'PI'
        return PI * radius * radius;
    }
};

int main() {
    Circle c1(5.0);
    double area = c1.get_area();
    
    std::cout << "Circle with radius 5.0 has an area of: " << area << std::endl;

    return 0;
}