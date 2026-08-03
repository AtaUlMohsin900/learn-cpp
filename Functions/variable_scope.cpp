// It is very important to learn how variables act inside and outside of functions.

// In C++, variables are only accessible inside the region they are created. This is called scope.


// A variable created inside a function belongs to the local scope of that function, 
// and can only be used inside that function.

#include <iostream>
using namespace std;

// void myfunc(){
//     // local veriable that belongs to myfunc.
//     int x = 5;

//     cout << x;
// }

// int main(){
//     // myfunc();
//     // myfun "local function" connot be use out of scope
//     cout << x;
//     return 0;
// }

// if we created veriable outside of a function, it called a global variable and belongs to the global scope.
// when we create veriable as global scope then we access them in outside of function or inside of function.

int x = 10; // Global scope

void myfunc(){
    // Local variable with the same name as the global variable (x)
    int x = 15; //avoid using the same variable name for both globally and locally variables as it can lead to errors and confusion.
    cout << ++x << "\n"; // inside the scope & increment the value of x by 1 and print it

}

int main(){
    myfun();
    cout << x; // using global scope
    return 0;
}

