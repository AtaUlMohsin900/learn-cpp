// Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
// Arrays solve our multiple veriabls store problem.

// we should same data type store in arrays.
// Arrays are contiguous in memory and also are liner.

#include <iostream>
using namespace std;

int main(){
    int numbers[5] = {100, 55 , 30, 45, 57}
    // auto save in arrays memory
    // double int marks[] = {75.9 , 58.2 , 45.4 , 64.4, 34.4};
    // change value of arrays also posible.
    // marks[2] = 65.5;
    // cout << mark[0] <<endl;
    // cout << mark[1] <<endl;
    // cout << mark[2] <<endl;
    // cout << mark[3] <<endl;
    // cout << mark[4] <<endl;
// we should access the value of array in limit of array otherwise it returns garbage value.

// We gerneraly use loops when we perform operations on arrays.
cout << sizeof(marks) / sizeof(int) <<endl;
for(int i=0; i<size; i++){
    cout << marks[i] << endl;
}


    return 0;
}