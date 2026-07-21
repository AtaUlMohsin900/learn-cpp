// Unlike vectors, elements in the queue are not accessed by index numbers. 
// Since queue elements are added at the end and removed from the front, you can only access an 
// element at the front or the back.

// Include the queue library
// #include <queue>

// Create a Queue
// To create a queue, use the queue keyword, and specify the type of values it should store 
// within angle brackets <> and then the name of the queue, like: queue<type> queueName.

// Create a queue of strings called cars
// queue<string> books;

// You cannot add elements to the queue at the time of declaration, like you can with vectors:
// queue<string> cars = {"English", "Math", "Physics", "Computer Sceince"};

//  Add Elements.

// To add elements to the queue, you can use the .push() function after declaring the queue.

// The .push() function adds an element at the end of the queue:

#include <iostream>
#include <queue>

using namespace std;

int main(){

    // Create a queue of strings
queue<string> cars;

// Add elements to the queue
cars.push("English");
cars.push("Math");
cars.push("Physics");
cars.push("Computer Sceince");

    retrun 0;
}