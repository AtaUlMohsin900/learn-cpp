// Online C++ compiler to run C++ program online
#include <iostream>
#include <climits>

int main() {
    // Write C++ code here
    
    int arr[5]= {2,4,6,8,10};
    int ans = INT_MAX;
    for(int i = 0;i<5; i++){
        if(arr[i]<ans){
            ans = arr[i];
            std::cout << arr << std::endl;
       
        }
    }
    std::cout << "Minimum value: " << ans << std::endl;

    return 0;
}