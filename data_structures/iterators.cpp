// Iterators are used to access and iterate through elements of data structures (vectors, sets, etc.), by "pointing" to them.

// It is called an "iterator" because "iterating" is the technical term for looping.

// To iterate through a vector, look at the following example:

#include <iostream>
#include <vector>
using namespace std;

int main() {
  // Create a vector called books that will store strings
  // vector<string> books = {"English", "Math", "Physics", "Computer Science"};

  // Create an iterator named it
  // vector<string>::iterator it;

  // Use the iterator to loop through the vector
  // for (it = books.begin(); it != books.end(); ++it) {
  //   cout << *it << "\n";
  // }

  // First we create a vector of strings to store the names of different car manufactures.
// Then we create a "vector iterator" called it, that we will use to loop through the vector.
// Next, we use a for loop to loop through the vector with the iterator. The iterator (it)
//  points to the first element in the vector (cars.begin()) and the loop continues as long as it is not equal to cars.end().
// The increment operator (++it) moves the iterator to the next element in the vector.
// The dereference operator (*it) accesses the element the iterator points to.
// Note: The type of the iterator must match the type of the data structure it should iterate through (string in our example)

// begin() and end() are functions that belong to data structures, such as vectors and lists. 
// They do not belong to the iterator itself. 
// Instead, they are used with iterators to access and iterate through the elements of these data structures.

// begin() returns an iterator that points to the first element of the data structure.
// end() returns an iterator that points to one position after the last element.
// To understand how they work, let's continue to use vectors as an example:

vector<string> books = {"English", "Math", "Physics", "Computer Science"};

vector<string>::iterator it;

  return 0;
}



