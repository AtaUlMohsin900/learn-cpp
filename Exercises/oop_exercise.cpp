#include <iostream>

class Rectangle {
private:
    int length;
    int width;

public:
    // Constructor
    Rectangle(int l, int w) : length(l), width(w) {}

    // Method to calculate and return the area
    int calculate_area() const {
        return length * width;
    }

    // Method to calculate and return the perimeter
    int calculate_perimeter() const {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle rect(10, 5); // Create a rectangle object
    
    int area = rect.calculate_area();
    int perimeter = rect.calculate_perimeter();
    
    std::cout << "Rectangle Dimensions: " << rect.getLength() << "x" << rect.getWidth() << std::endl;
    std::cout << "Area: " << area << std::endl;
    std::cout << "Perimeter: " << perimeter << std::endl;

    return 0;
}