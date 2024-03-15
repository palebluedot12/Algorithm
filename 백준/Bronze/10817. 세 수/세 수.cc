#include <iostream>
#include <algorithm>

using namespace std;

// sort를 활용하는 방법

int main(void){

    int nums[3];
    
    for (int i = 0; i < 3; i++){
        cin >> nums[i];
    }

    sort(nums, nums+3);

    cout << nums[1];
   
}