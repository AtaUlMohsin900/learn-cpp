#include <iostream>
using namespace std;

class Car {
  public:
    void model() {
      cout << "Car Model\n";
    }
};

class Toyota : public Car{
  public:
    void model() {
      cout << "Toyota Corolla\n";
    }
};

int main() {
  Car* a;  // Declare a pointer to the base class (Cars)
  Toyota d;  // Create an object of the derived class (Toyota)
  a = &d;  // Point the base class pointer to the Toyota object
  a->model(); // Call the sound() function using the pointer. Since sound() is not virtual, this calls Animal's version
  return 0;
}