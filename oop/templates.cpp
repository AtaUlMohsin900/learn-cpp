#include <iostream>
using namespace std;

class Car {
  public:
    void model() {
      cout << "Car model\n";
    }
};

class Toyota : public Car {
  public:
    void model() {
      cout << "Toyota Corola\n";
    }
};

int main() {
  Car* a;  // Declare a pointer to the base class (Car)
  Toyota d;  // Create an object of the derived class (Toyota)
  a = &d;  // Point the base class pointer to the Toyota object
  a->model(); // Call the model() function using the pointer. Since model() is not virtual, this calls Animal's version
  return 0;
}
