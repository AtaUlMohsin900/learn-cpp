#include <iostream>
using namespace std;

class calculator {
    public: 
    // Overloaded member function to add two integers
          int add (int a, int b){
            return a + b;
          }
    // Overloaded member function to add three integers
          int add(int a, int b, int c) {
            return a + b + c;
          }  
};

int main(){

    calculator calc;
    // Using the Overloaded functions
cout << "Sum of 5 and 3 :" << calc.add(5, 3) << endl;
cout << "Sum of 2, 4 and 6 :" << calc.add(2, 4, 6) << endl;
return 0;

}