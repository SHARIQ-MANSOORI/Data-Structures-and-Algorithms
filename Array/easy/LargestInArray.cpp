// Given an array arr[]. The task is to find the largest element and return it.

#include <bits/stdc++.h>
using namespace std;
// Time Complexity - Best case-O(n) and Worst case-O(n)
// Space Complexity - O(1)

class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
      
   
        int j = 0;
        int maxi = INT_MIN;
        
        while(j < arr.size()){
            
            if(maxi <= arr[j]){
                maxi = arr[j];
                
                j++;
            }else{
                j++;
            }
        }
        
        return maxi;
    }
};
