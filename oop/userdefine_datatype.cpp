#include<iostream>
using namespace std;
class Student{// Student is a new user define datatype
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
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Roll No: "<<s1.rollnum<<endl;
    cout<<"CGPA: "<<s1.cgpa<<endl;
    cout<<"Age: "<<s1.age<<endl;
	return 0;	
}

// OR Small suggestion (optional):
// Since you're using class (which defaults to private), you might want to explicitly mark the data as public (which you did correctly), or consider adding a constructor to initialize objects:

class Student {
    public:
        string name;
        int rollnum;
        int age;
        float cgpa;
        
        // Optional: Constructor
        Student(string n, int r, int a, float c) {
            name = n;
            rollnum = r;
            age = a;
            cgpa = c;
        }
};
