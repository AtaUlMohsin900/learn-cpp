// include Header file
#include<iostream>
using namespace std;

int main(){
    int var1=0, var2=0, var3=0;
    cout<< "Enter your first value:\t";
    cin>>var1;
    cout<< "Enter your second value:\t";
    cin>>var2;
    var3= var1&&var2;
    cout<<"Logical AND is \t"<<endl;
    var3= var1&var2;
    cout<<"Bitwise AND is \t"<<endl;
    var3= var1||var2;
    cout<<"Logical OR is \t"<<endl;
    var3= var1|var2;
    cout<<"Bitwise OR is \t"<<endl;





}