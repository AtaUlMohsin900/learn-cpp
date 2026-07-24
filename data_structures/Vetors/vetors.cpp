// vector is a dynamic array from the STL that automatically resize when you add or remove 
// elements.

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

// Function            What it does
// v.push_back(x)      Add element at end
// v.pop_back()        Remove last element
// v.size()            Number of elements
// v.clear()           Removes all elements
// v.front()           First element
// v.back()            Last element
// v.empty()           Returns true if empty


// // using for each loop
// vector<int> vec;
// // cout << "Size of vetor : "<< size.vec() <<endl;   // push_back and pop_back
// vec.push_back(4);
// vec.push_back(8);
// vec.push_back(5);
// vec.push_back(9);
// cout << "After push back size : "<< size.vec() <<endl;
// vec.pop_back(); // 9 will be deleted 
// // for(int val : vec){
// //     cout << vel << endl;
// //    }
// cout << vec.front() <<endl;          // it return front value
// cout << vec.back()  <<end;           // it return last value
// cout << vec.at(2) <<endl;            // Another syntax for accessing a value of particular index 
vetor <int> vec;

vec.push_back(0);
vec.push_back(1);
vec.push_back(2);
vec.push_back(3);
vec.push_back(4);

cout << vec.size() << endl;
cout << vec.capacity() << endl;


  return 0; 
}











