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
  // vector<string> books = {"English", "Math", "Physics", "Computer Science"};

  // // Sort books in alphabetical order
  // sort(books.begin(), books.end());

  // // Print books in alphabetical order
  // for (string book : books) {
  //   cout << book << "\n";
  // }

  // Create a vector called numbers that will store integers
  vector<int> numbers = {1, 7, 3, 5, 9, 2};

  // Sort numbers numerically
  sort(numbers.begin(), numbers.end());

  // Print numbers
  for (int num : numbers) {
    cout << num << "\n";
  }
  // To reverse the order, you can use rbegin() and rend() instead of begin() and end():
  
  return 0;
}
