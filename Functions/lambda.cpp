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


// #include <iostream>
// #include <functional> // Needed for std::function
// using namespace std;

// // A function that takes another function as parameter
// void myFunction(function<void()> func) {
//   func();
//   func();
// }

// int main() {
//   auto message = []() {
//     cout << "Hello Coders\n";
//   };

//   myFunction(message);
//   return 0;
// }

// f you want the lambda to use the latest value of a variable (not just a copy),
//  you can use [&] to capture it by reference.

// This means the lambda will work with the original variable, not a separate copy:

// int x = 10;

//   auto show = [&x]() {
//     cout << x;
//   };

//   x = 20;  // Change x after the lambda is created

//   show();


// Regular Functions vs Lambda Functions
// Both regular functions and lambda functions allow you to package code for later execution, yet they suit distinct scenarios.

// Choose a regular function when:
// You intend to reuse it across many parts of your program
// You wish to assign a descriptive, self-documenting name
// The operation involves multiple lines or intricate steps

// Choose a lambda function when:
// You require the function for a single, immediate use
// The expression is brief and straightforward
// You need to supply a quick callback to a higher-order function

// These two code snippets perform identical tasks. They each compute the addition of two numbers.

#include <iostream>
using namespace std;

int add(int a, int b) {  // Regular Function
    return a + b;
}

int main() {
    // Use the regular function
    int result1 = add(5, 6);
    cout << "Result from regular function: " << result1 << endl;
    
    // Lambda Function with a different name
    auto addLambda = [](int a, int b) {
        return a + b;
    };
    
    int result2 = addLambda(5, 6);
    cout << "Result from lambda: " << result2 << endl;
    
    return 0;
}