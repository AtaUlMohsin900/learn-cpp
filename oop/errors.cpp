// Even experienced C++ developers make mistakes. The key is learning how to spot and fix them!

// These pages cover common errors and helpful debugging tips to help you understand what's going wrong and how to fix it.

#include <iostream>
using namespace std;
main(){
    int a = 10;
int b = 0;
int result = a / b;  // not possible
cout << result;
return 0;
}
