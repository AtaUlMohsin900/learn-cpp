// A lambda function is a tiny, nameless function. You write it quickly right where you need it—like a shortcut.

// Use it when you only need the function once, and you don’t want to give it a proper name or define it separately.

// Syntax: [capture] (parameters) { code };

#include <iostream>
using namespace std;

int main(){
    auto message = [](){
        cout << "Hello World! \n";

        message();
        retrun 0;
    }
}