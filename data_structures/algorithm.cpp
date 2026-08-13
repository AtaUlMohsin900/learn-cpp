// In the previous chapters, you learned that data structures (like vectors, lists, etc) are used to store and organize data.

// Algorithms are used to solve problems by sorting, searching, and manipulating data structures.

// The <algorithm> library provides many useful functions to perform these tasks with iterators.

// To use these functions, you must include the <algorithm> header file:

// Include the algorithm library #include <algorithm>

// Sorting Algorithms
// To sort elements in a data structure, you can use the sort() function.

// The sort() function takes iterators (typically a start iterator returned by begin() 
// and an end iterator returned by end()) as parameters:

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  // Create a vector called books that will store strings
  vector<string> books = {"English", "Math", "Physics", "Computer Science"};

  // Sort books in alphabetical order
  sort(books.begin(), books.end());

  // Print books in alphabetical order
  for (string book : books) {
    cout << book << "\n";
  }
  
  return 0;
}
