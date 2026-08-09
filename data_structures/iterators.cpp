// Iterators are used to access and iterate through elements of data structures (vectors, sets, etc.), by "pointing" to them.

// It is called an "iterator" because "iterating" is the technical term for looping.

// To iterate through a vector, look at the following example:

#include <iostream>
#include <vector>
using namespace std;

int main() {
  // Create a vector called books that will store strings
  vector<string> books = {"English", "Math", "Physics", "Computer Science"};

  // Create an iterator named it
  vector<string>::iterator it;

  // Use the iterator to loop through the vector
  for (it = books.begin(); it != books.end(); ++it) {
    cout << *it << "\n";
  }

  return 0;
}