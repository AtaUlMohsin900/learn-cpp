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
