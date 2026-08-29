// Destructor Demonstration
#include <iostream>
#include <string>

class Resource {
private:
    std::string id;

public:
    // Constructor
    Resource(std::string name) : id(name) {
        std::cout << ">> Resource '" << id << "' ACQUIRED (Constructed)" << std::endl;
    }

    // Destructor
    ~Resource() {
        std::cout << "<< Resource '" << id << "' RELEASED (Destructed)" << std::endl;
    }
};

void scope_test() {
    std::cout << "\n--- Entering scope_test() ---" << std::endl;
    Resource local_res("Local A"); // Object created
    std::cout << "--- Exiting scope_test() ---" << std::endl;
    // local_res is destroyed here
}

int main() {
    std::cout << "--- Starting main() ---" << std::endl;
    Resource main_res("Main B"); // Object created

    scope_test();

    std::cout << "--- Ending main() ---" << std::endl;
    // main_res is destroyed here
    return 0;
}