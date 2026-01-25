// Given a binary array nums, return the maximum number of consecutive 1s in the array.
// A binary array is an array that contains only 0s and 1s.

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxCount = 0;
        for(int i = 0; i < nums.size() ;i++){
            if(nums[i] == 1){
                 count++;
                 maxCount = max(maxCount , count);
            }else{
               
                count = 0;

            }
        }
        return maxCount;
    }
};