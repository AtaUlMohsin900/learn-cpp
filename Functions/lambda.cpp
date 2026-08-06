// A lambda function is a tiny, nameless function. You write it quickly right where you need it—like a shortcut.

// Use it when you only need the function once, and you don’t want to give it a proper name or define it separately.

// Syntax: [capture] (parameters) { code };

// #include <iostream>
// using namespace std;

// int main(){
//     auto message = [](){ //auto tells the compiler: "Hey compiler, figure out the type for me". The compiler knows the exact (but unnamed) type of the lambda and assigns it to the variable.
//         cout << "Hello World! \n";

//         message();

//   // Alternative Ways (Without auto)
//   // This works but has overhead (type erasure)
//     std::function<void()> velcale = [](){ 
//         cout << "Toyota" << endl; 
//     };
//     velcale();
//         retrun 0;
//     }; // The semicolon goes after the closing brace } of the lambda body.

// }



// Passing Lambdas to Functions
// You can also pass a lambda function as an argument to another function.
// This is useful when you want to tell a function what to do, not just what data to use.
// In the example below, we send a small lambda function to another function, which then runs it twice:


#include <iostream>
#include <functional> // Needed for std::function
using namespace std;

// A function that takes another function as parameter
void myFunction(function<void()> func) {
  func();
  func();
}

int main() {
  auto message = []() {
    cout << "Hello Coders\n";
  };

  myFunction(message);
  return 0;
}