#include <iostream>

class Point {
private:
    int x;
    int y;

public:
    // Parameterized Constructor
    Point(int px, int py) : x(px), y(py) {}

    // Copy Constructor
    Point(const Point& other) : x(other.x), y(other.y) {
        std::cout << "Copy Constructor called." << std::endl;
    }

    void display() const {
        std::cout << "Point(" << x << ", " << y << ")" << std::endl;
    }
    
    void move(int dx, int dy) {
        x += dx;
        y += dy;
    }
};

int main() {
    Point p1(10, 20);
    p1.display();

    // The Copy Constructor is implicitly called here
    Point p2 = p1; 
    p2.display();

    // Modify p2 and show p1 is unaffected
    p2.move(5, 5);
    std::cout << "\nAfter moving p2:" << std::endl;
    p1.display(); // Still (10, 20)
    p2.display(); // Now (15, 25)

    return 0;
}