#include <iostream>
using namespace std;
enum Level {
  slow = 1,
  normal,
  fast
};

int main() {
  enum Level myVar = normal;

  switch (myVar) {
    case 1:
      cout << "Slow";
      break;
    case 2:
      cout << "Normal";
      break;
    case 3:
      cout << "Fast";
      break;
  }
  return 0;
}