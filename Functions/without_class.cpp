#include <iostream>
using namespace std;


   
        int num1 = 28, num2 = 22;
         void fun(){
           int sum =  num1 + num2;
            cout << "Addition :" <<sum << endl;
         }
         void fun(int a, int b){
           int sub = a - b;
           cout << "Subtraction :" <<sub << endl;

         }

    int main(){
        
        fun(); fun(120,55);

        return 0;

    }
