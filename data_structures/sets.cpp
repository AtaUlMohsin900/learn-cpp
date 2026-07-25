// A set stores unique elements where they:

// Are sorted automatically in ascending order.
// Are unique, meaning equal or duplicate values are ignored.
// Can be added or removed, but the value of an existing element cannot be changed.
// Cannot be accessed by index numbers, because the order is based on sorting and not indexing.

// Include the set library
// #include <set>



#include <iostream>
#include <set>
using namespace std;

int main() {
  // Create a set called numbers that will store integers
  // set<int> numbers = {1, 7, 3, 2, 5, 9};

  set<string> books = {"English", "Math", "Physics", "Computer Science"};
  // Sort a Set in Descending Order
  //  set<int, greater<int>> numbers = {1, 7, 3, 2, 5, 9};

  // Print set elements
  // for (int num : numbers) {
  //   cout << num << "\n";
  // }

  for (string book: books){
    cout << book << "\n";
  }
  return 0;
}