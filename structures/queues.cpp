// FIFO stands for First in, First Out. To visualize FIFO, think of a queue as people standing in line in a supermarket. 
// The first person to stand in line is also the first who can pay and leave the supermarket. This way of organizing elements is 
// called FIFO in computer science and programming.


#include <iostream>
#include <queue>
using namespace std;

int main() {
  // Create a queue of strings
  queue<string> books;

  // Add elements to the queue
  books.push("English");
  books.push("Math");
  books.push("Physics");
  books.push("Computer Sceince");
  
  // Access the front element (first and oldest)
  cout << books.front() << "\n";

  // Access the back element (last and newest)
  cout << books.back() << "\n";
  return 0;
}