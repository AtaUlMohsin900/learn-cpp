#include <iostream>
using namespace std;
// While Loop
// int main() {
//   int i = 0;
//   while (i < 5) {
//     cout << i << "\n";
//     i++;
//   }
//   return 0;
// }

// Do While Loop

// int main() {
//   int i = 0;
//   do {
//     cout << i << "\n";
//     i++;
//   }
//   while (i < 5);
//   return 0;
// }

// int main() {
//   int i = 10;
//   do {
//     cout << "i is " << i << "\n";
//     i++;
//   } while (i < 5);

//   return 0;
// }

// int main() {
//   int number;
//   do {
//     cout << "Enter a positive number: ";
//     cin >> number;
//   } while (number > 0);

//   return 0;
// }

int main() {
  int countdown = 3;

  while (countdown > 0) {
    cout << countdown << "\n";
    countdown--;
  }

  cout << "Learn CPP\n";

  return 0;
}