// A for-each loop is a special type of loop that automatically goes through every single 
// item in a collection (like an array) without needing to worry about:

// 1. Starting point
// 2. Ending point
// 3. How many items there are
// 4. Incrementing counters

// The for-each loop is like having a personal assistant who:

// Takes your collection
// Hands you each item one by one
// Tells you when you're done
// Never makes a counting mistake!

// It makes your code cleaner, safer, and easier to read — especially when working with arrays, vectors, and other collections!

#include <iostream>
using namespace std;

int main() {

  
  // Loop through integers
  // Create an array of integers
  int myNumbers[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  for (int x : myNumbers) {
    cout << x << "\n"; 
  }
  
// Create an array of strings    
// string city = "Islamabad";
//   for (char c : city) {
//     cout << c << "\n";
//   }
  return 0;
}