// Given an integer array nums sorted in non-decreasing order,
//  remove all duplicates in-place so that each unique element appears only once.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int i = 0;
        for(int j = 0; j < nums.size() ; j++){
            if(nums[i] != nums[j]){
                i++;
                nums[i] = nums[j];
    
        }
      
    }
    return i+1;
    }
    
};