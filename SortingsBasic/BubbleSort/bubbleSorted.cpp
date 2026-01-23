#include <bits/stdc++.h>
using namespace std;
// Time Complexity - Best case-O(n) and Worst case-O(n^2)
// Space Complexity - O(1)
// it is stable sort


int main(){
   
    vector<int> nums = {3,2,4,1,2,4,7,3};
    bool swapped = false; // if already sorted

    for(int i = 0; i < nums.size() - 1 ; i++){
        for(int j = i+1 ;nums.size() ; j++ ){

            if(nums[i] > nums[j]){
                swap(nums[i] , nums[j]);
                swapped = true;
            }
        }
    }

      if(!swapped) return; // if already sorted 



    return 0;
}