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

  // Add Elements
  // Add new elements
  // books.insert("Ecnomics");
  // books.insert("Financial Accounting");
  // books.insert("Business Ethics");
  // books.insert("Introduction to Programming");
 
  // Remove Element
  // books.erase("Business Ethics")

  // Remove all elements
  //  books.clear();

  // set<string> books = {"English", "Math", "Physics", "Computer Science"};
  // Sort a Set in Descending Order
  // set<int, greater<int>> numbers = {1, 7, 3, 2, 5, 9};

  // Print set elements
  // for (int num : numbers) {
  // cout << num << "\n";
  // }

  // Elements in a set are unique, which means they cannot be duplicated or equal.
  // For example, if we try to add "Math" two times in the set, the duplicate element is ignored:
  set<string> books = {"English", "Math", "Physics", "Computer Science"};
  
  // for (string book: books){
  //   cout << book << "\n";
  // }

  // Find the Size of a Set
  // cout << books.size();

  // Check if a Set is Empty

  // The .empty() function returns 1 (true) if the set is empty and 0 (false) otherwise:
  set<string> books;
  cout << books.empty();
  // Outputs 0 (not empty)

  // Using For-Each-Loop
  for(book : books){
    cout << book <<"\n";
  }
  return 0;
}