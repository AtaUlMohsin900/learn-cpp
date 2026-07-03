#include <iostream>
#include <string>
using namespace std;

// Base class
class vehicals {
  public:
    void vehicalsSound() {
      cout << "The vehicals makes a sound \n";
    }
};

// Derived class
class Riksha : public vehicals {
  public:
    void vehicalsSound() {
      cout << "The riksha sound is: tuk tuk \n";
    }
};

// Derived class
class TTrain : public vehicals {
  public:
    void vehicalsSound() {
      cout << "The train sound is : chik chik \n";
    }
};

int main() {
  vehicals myvehicals;
  Pig myRiksha;
  Dog myTrain;

  myvehicals.vehicalsSound();
  myRiksha.vehicalsSound();
  myTrain.vehicalsSound();
  return 0;
}
