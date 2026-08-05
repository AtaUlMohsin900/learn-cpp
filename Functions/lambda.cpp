// A lambda function is a tiny, nameless function. You write it quickly right where you need it—like a shortcut.

// Use it when you only need the function once, and you don’t want to give it a proper name or define it separately.

// Syntax: [capture] (parameters) { code };

#include <iostream>
using namespace std;

int main(){
    auto message = [](){ //auto tells the compiler: "Hey compiler, figure out the type for me". The compiler knows the exact (but unnamed) type of the lambda and assigns it to the variable.
        cout << "Hello World! \n";

        message();
        retrun 0;
    }; // The semicolon goes after the closing brace } of the lambda body.

// Alternative Ways (Without auto)
// This works but has overhead (type erasure)
    std::function<void()> velcale = [](){ 
        cout << "Toyota" << endl; 
    };
    velcale();
    
}

