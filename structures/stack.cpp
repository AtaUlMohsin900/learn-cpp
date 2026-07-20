// LIFO stands for Last in, First Out. To vizualise LIFO, think of a box, where boxes are both added and removed from the top.
//  So when removing a pancake, it will always be the last one you added. This way of organizing elements is called 
// LIFO in computer science and programming.



#include <iostream>
#include <stack>
using namespace std;

int main() {
  // Create a stack of strings called books
  stack<string> books;

  // Add elements to the stack
  books.push("English");
  books.push("Math");
  books.push("Physics");
  books.push("Biology");
  
  // Remove the last/latest added element (Biology)
  books.pop();
  
  // Access the top element (Now Physics)
  cout << books.top();
  return 0;
}