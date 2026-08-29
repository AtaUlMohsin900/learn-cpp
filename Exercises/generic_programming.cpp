#include <iostream>
#include <string>

// 1. Function Template Definition
template <typename T>
T myMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // Testing with int
    int i1 = 5, i2 = 10;
    std::cout << "Max int: " << myMax(i1, i2) << std::endl;

    // Testing with double
    double d1 = 3.14, d2 = 2.718;
    std::cout << "Max double: " << myMax(d1, d2) << std::endl;

    // Testing with char
    char c1 = 'A', c2 = 'Z';
    std::cout << "Max char: " << myMax(c1, c2) << std::endl;

    // Testing with string
    std::string s1 = "Apple", s2 = "Banana";
    std::cout << "Max string: " << myMax(s1, s2) << std::endl;

    return 0;
}