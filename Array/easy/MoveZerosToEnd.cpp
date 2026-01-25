// Given an integer array nums, move all the 0's to the end of the array. 
// The relative order of the other elements must remain the same.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        for(int j = 0 ; j < nums.size() ; j++){
            if(nums[j] != 0){
                swap(nums[j] , nums[i]);;
                i++;
            }
        }
        
    }
};