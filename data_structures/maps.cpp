// A map stores elements in "key/value" pairs. map is like a phonebook:


// Elements in a map are:
// Accessible by keys (not index), and each key is unique.
// Key/value pairs = Name → Phone number
// Keys are unique – no duplicates
// Automatically sorted in ascending order by their keys.
// Auto-sorted by keys (A to Z, 1 to 10)
// Find by key (not by position like a list)
// To use a map, you have to include the <map> header file:

// Include the map library #include <map>

// To create a map, use the map keyword, and specify the type of both the key and the value 
// it should store within angle brackets <>. At last, specify the name of the map, like: map<keytype,
//  valuetype> mapName:

#include <iostream>
#include <map>
using namespace std;

int main() {
  // Create a map that will store the name and age of different people
  map<string, int> employee = { {"Waseem", 54}, {"Amjed", 21}, {"Amir", 46} };

  // Get the value associated with the key "Waseem"
  cout << "Waseem is: " << employee["Waseem"] << "\n"; 

  // Get the value associated with the key "Amjed"
  cout << "Amjed is: " << employee["Amjed"] << "\n";

  return 0;
}