// A reference variable is an alias for an existing variable. It is created using the & operator.

#include <iostream>
using namespace std;
 
int main()
{
    string job = "SD-II"; // job variable
string &tech = job;   // reference to job

tech = "Could Engineer"; // changes both tech and job

cout << job << "\n"; // Output should be Cloud Engineer
cout << tech << "\n"; // Output should be Cloud Engineer
    return 0;
}
