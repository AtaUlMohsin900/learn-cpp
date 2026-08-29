#include <iostream>
#include <string>

class Car {
public:
    std::string make;
    std::string model;
    int year;

    // Constructor for easy initialization
    Car(std::string mk, std::string md, int yr) 
        : make(mk), model(md), year(yr) {}

    // Method demonstrating a simple action/behavior
    void start_engine() {
        std::cout << year << " " << make << " " << model << " engine started!" << std::endl;
    }
};

int main() {
    Car my_car("Toyota", "Corolla", 2020);
    
    // Demonstrate interaction with attributes and method
    std::cout << "My car is a " << my_car.year << " " << my_car.make << "." << std::endl;
    my_car.start_engine();

    return 0;
}