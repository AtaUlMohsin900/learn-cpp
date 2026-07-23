// A deque (stands for double-ended queue) however, is more flexible, as elements can be
//  added and removed from both ends (at the front and the back). You can also access 
// elements by index numbers.

// For use of deue // Include the deque library #include <deque>


#include <iostream>
#include <deque>
using namespace std;

int main() {
  // Create a deque called cars that will store strings
  deque<string> books = {"English", "Math", "Phisics", "Computer Science"};

  // Print deque elements
  for (string book : books) {
    cout << book << "\n";
  }
  return 0;
}