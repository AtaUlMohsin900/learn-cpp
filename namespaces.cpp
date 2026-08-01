// A namespace is a way to group related code together under a name. It helps you avoid naming conflicts when 
// your code grows or when you use code from multiple sources.

// Think of a namespace like a folder: you can have a variable named x in two different folders, and they won't clash.


// Use Case of Namespace

// To avoid name conflicts, especially in larger projects
// To organize code into logical groups
// To separate your code from code in libraries


#include <iostream>
using namespace std;
 
namespace MyNamespace {
  int x = 42;
}

int main() {
  cout << MyNamespace::x;
  return 0;
}