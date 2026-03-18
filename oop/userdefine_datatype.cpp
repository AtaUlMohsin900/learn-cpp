#include<iostream>
using namespace std;
class Student{// Student is a new datatype
	public:
		string name;
		int rollnum;
		int age;
		float cgpa;
};

int main(){
    Student s;
    s.name = "ataulmohsin";
    s.rollnum = 458;
    s.age = 45;
    s.cgpa = 3.56;

    Student s1;
    s1.name = "Muhammed Uzair";
    s1.rollnum = 458;
    s1.age = 45;
    s1.cgpa = 3.56;
    cout<<s1.name<<endl;
	return 0;	
}
