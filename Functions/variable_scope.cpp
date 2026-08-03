// It is very important to learn how variables act inside and outside of functions.

// In C++, variables are only accessible inside the region they are created. This is called scope.


// A variable created inside a function belongs to the local scope of that function, 
// and can only be used inside that function.

#include <iostream>
using namespace std;

void myfunc(){
    // local veriable that belongs to myfunc.
    int x = 5;

    cout << x;
}

int main(){
    myfunc();
    return 0;
}