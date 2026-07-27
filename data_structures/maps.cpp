// A map stores elements in "key/value" pairs. map is like a phonebook:


// Elements in a map are:
// Accessible by keys (not index), and each key is unique.
// Key/value pairs = Name → Phone number
// Keys are unique – no duplicates
// Automatically sorted in ascending order by their keys.
// Auto-sorted by keys (A to Z, 1 to 10)
// Find by key (not by position like a list)
// To use a map, you have to include the <map> header file:

//Three types of maps in C++:
// 1. unordered_map: Stores elements in no particular order, and the key/value pairs are not sorted. It is faster than map.
// 2. map: Stores elements in sorted order, and the key/value pairs are sorted. It is slower than unordered_map.    
// Normal maps strore elements generally in Red-Black tree data structure, which is a self-balancing binary search tree.
// we don't use iterators to access elements in a map, we use keys to access the values associated with them. 
// But i++ is used to iterate through the map elements.

// Include the map library #include <map>

// To create a map, use the map keyword, and specify the type of both the key and the value 
// it should store within angle brackets <>. At last, specify the name of the map, like: map<keytype,
//  valuetype> mapName:

#include <iostream>
#include <bits/stdc++.h>
#include <map>
using namespace std;

int main() {
  // Create a map that will store the name and salary of different people
  // map<string, int> salary = { {"Waseem", 54000}, {"Amjed", 21000}, {"Amir", 46000} };

  // Get the value associated with the key "Waseem"
  // cout << "Waseem salary: " << salary["Waseem"] << "\n"; 

  // Get the value associated with the key "Amjed"
  // cout << "Amjed salary: " << salary["Amjed"] << "\n";

  map<int, string> salary;
  salary[1] = "Waseem";
  salary[5] = "Amjed";
  salary[3] = "Amir";
  salary.insert({4, "Ahmed"});
  map<int, string>::iterator it;
  for (it = salary.begin(); it != salary .end(); ++it) {
    cout << it->first << " " << it->second << endl;
  }
  return 0;
}
