
// Polymorphism means "many forms", and it occurs when we have many classes that are related to each other by inheritance.

// lets us inherit attributes and methods from another class. 
// Polymorphism uses those methods to perform different tasks. This allows us to perform a single action in different ways.

// For example, imagine a base class Vehicals with a method called makeSound(). Derived classes of Vehicals could be 
// , Riksha, Train etc. Every vehical can "make a sound", but each one sounds different:

// Riksha sound: tuk tuk
// Train sound: chick chick
// This is polymorphism - the same action (making a sound) behaves differently for each vehicals:

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
class Train : public vehicals {
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
