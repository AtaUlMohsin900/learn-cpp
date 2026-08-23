// A pointer in C++ is a special variable that stores the memory address of another variable rather 
// than storing a direct value. They provide absolute control over system memory, paving the way 
// for high-performance applications, dynamic allocation, and complex data structures like linked 
// lists or treess

#include <iostream>

int main() {

tring food = "Pizza"; // A food variable of type string

cout << food;  // Outputs the value of food (Pizza)
cout << &food; // Outputs the memory address of food (0x6dfed4)

string food = "Pizza";  // A food variable of type string
string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

// Output the value of food (Pizza)
cout << food << "\n";

// Output the memory address of food (0x6dfed4)
cout << &food << "\n";

// Output the memory address of food with the pointer (0x6dfed4)
cout << ptr << "\n";

string* mystring; // Preferred
string *mystring;
string * mystring;


    int age = 25;        // A regular integer variable
    int* ptr = &age;     // Declaration of a pointer storing the address of 'age'

    std::cout << ptr;    // Outputs the hex memory address (e.g., 0x7ffeefbff568)
    std::cout << *ptr;   // Outputs the dereferenced value: 25

    *ptr = 30;           // Changing value via the pointer directly alters 'age'
    std::cout << age;    // Outputs: 30

    int* dynamic_ptr = new int(50); // Allocates memory for an int on the heap
// ... use the pointer ...
delete dynamic_ptr;             // Explicitly release memory back to the OS
dynamic_ptr = nullptr;          // Erase the address to prevent dangling pointer bugs

    
int* dynamic_ptr = new int(50); // Allocates memory for an int on the heap
// ... use the pointer ...
delete dynamic_ptr;             // Explicitly release memory back to the OS
dynamic_ptr = nullptr;          // Erase the address to prevent dangling pointer bugs

// Modern Best Practice: Smart PointersRaw pointers are error-prone because forgetting a 
// delete leads to bugs. Modern C++ (C++11 and beyond) introduces Smart Pointers via the 
// <memory> header, which automatically free memory when they leave scope

return 0;
}