#include <iostream>
#include <list>
using namespace std;

int main() {
  // Create a list called vegetables that will store strings
  list<string>  vegetables= {"Carrot", "Potato", "Radish", "Beetroot"};

  // Print list elements
  for (string vegetable : vegetables) {
    cout << vegetable << "\n";
  }
  return 0;
}

// You can add and remove elements from both the beginning and at the end of a list, while vectors are generally optimized for adding and removing at the end.

// Unlike vectors, a list does not support random access, meaning you cannot directly jump to a specific index, or access elements by index numbers.
