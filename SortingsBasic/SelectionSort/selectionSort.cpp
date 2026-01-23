#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {3,2,4,1,2,4,7,3};
    for(int i = 0 ; i < nums.size() ; i++){
        int minIndex = i ;
        for(int j = 0 ; j < nums.size() ; j++){
            if(nums[minIndex] > nums[j]){
                minIndex = j;
            }

        }
        swap(nums[minIndex], nums[i]);
    };
   
    for(auto element : nums){
        cout << element << " ";
    }
    return 0;
}