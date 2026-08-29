#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    std::string isbn;

public:
    // Constructor
    Book(std::string t, std::string a, std::string i) 
        : title(t), author(a), isbn(i) {}

    // Method to return formatted details
    std::string get_details() const {
        return "Title: " + title + " | Author: " + author + " | ISBN: " + isbn;
    }
};

int main() {
    Book b1("The C++ Programming Language", "Bjarne Stroustrup", "0321563840");
    
    std::string book_info = b1.get_details();
    
    std::cout << "Book Record:" << std::endl;
    std::cout << book_info << std::endl;

    return 0;
}