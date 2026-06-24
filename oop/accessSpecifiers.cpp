#include <iostream>
using namespace std;

// class MyClass {   // The class
//   public:         // Public access specifier
//     string x;        // Public attribute (int variable)
// };

class MyClass {
  public:    // Public access specifier
    int x;   // Public attribute
  private:   // Private access specifier
    int y;   // Private attribute
};

int main() {
//   MyClass myObj;  // Create an object of MyClass

//   // Access attributes and set values
//   myObj.x = "hello world!";

//   // Print values
//   cout << myObj.x; 


int main() {
  MyClass myObj;
  myObj.x = 25;  // Allowed (x is public)
  myObj.y = 50;  // Not allowed (y is private)
  return 0;
}


  return 0;
}