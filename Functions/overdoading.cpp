#include <iostream>
using namespace std;


    class A
    {
        int num1 = 20, num2 = 20;
        public:
         void fun(){
           int sum =  num1 + num2;
            cout << "Addition :" <<sum << endl;
         }
         void fun(int a, int b){
           int sub = a - b;
           cout << "Subtraction :" <<sub << endl;

         }
    };

    int main(){
        A obj;
        obj.fun(); obj.fun(100,50);

        return 0;

    }
