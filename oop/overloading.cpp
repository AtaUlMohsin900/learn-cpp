#include <iostream>
#include <string>
using namespace std;

class person {
    int age;
    string name;
person()
{
    age = 0;
    name = "";
}
};
// stream insertion overloading
ostream& operator << (ostream& output, person& p)
{
    output<<"Age is: "<< p.age << endl;
    output<<"name is:"<< p.name;
    return output;
}
// stream extraction overloading
istream& operator >> (istream& input, person& p)
{
    input >> p.age;
    input >> p.name;
    return input;


}

int main (){
    cout << "Enter your name & age" << endl;
    person obj;
    cin >> obj;
    cout << obj;

    system("PAUSE");
    return 0;
}   