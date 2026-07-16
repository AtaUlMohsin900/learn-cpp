// vector is a dynamic array from the STL that automatically resize when you add or remove elements.

#include <iostream>
#include <vector>
using namespace std;

int main() {

    // vector<int> val ={1,2,3};
// cout << val[0] <<endl;
// vector<int> val (5, 0);
// cout << val[0] <<endl;
// cout << val[1] <<endl;
// cout << val[2] <<endl;
// cout << val[3] <<endl;
// cout << val[4] <<endl;

//   Create a vector called cars that will store strings
//   vector<string> cars = {"Toyota", "Dongfing", "GMC", "Nissan"};
//   Get the first element
//   cout << cars[0] << "\n"; 
//   Get the second element
//   cout << cars[1] << "\n";

vector<char> val = {'a','b','c','d','e','f'};
   for(char i : val){
    cout << i << endl;
   }

  return 0;
}

// Function            What it does
// v.push_back(x)      Add element at end
// v.pop_back()        Remove last element
// v.size()            Number of elements
// v.clear()           Removes all elements
// v.front()           First element
// v.back()            Last element
// v.empty()           Returns true if empty









