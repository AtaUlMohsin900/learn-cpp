// Function overloading allows multiple functions to have the same name,
//  as long as their parameters are different in type or number:

#include <iostream>
using namespace std;

int addFuncInt (int x, int y) {
  return x + y;
}

double addFuncDouble(double x, double y) {
  return x + y;
}

int main() {
  // int myNum1 = addFuncInt(8, 5);
  // double myNum2 = addFuncDouble(4.3, 6.26);
  // cout << "Int: " << myNum1 << "\n";
  // cout << "Double: " << myNum2;

  int myNum1 = addFuncInt(8, 5);
  double myNum2 = addFuncDouble(4.3, 6.26);
  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;
  return 0;
}
