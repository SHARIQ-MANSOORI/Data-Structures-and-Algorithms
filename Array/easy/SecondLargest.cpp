// Given an array of positive integers arr[], return 
// the second largest element from the array. If the second largest element doesn't exist then return -1.

// Note: The second largest element should not be equal to the largest element.

#include <bits/stdc++.h>
using namespace std;
// Time Complexity - Best case-O(n) and Worst case-O(n)
// Space Complexity - O(1)

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        if(arr.size() < 2) return -1;
        
        int largest = -1;
        int secondLargest = -1;
        
        for(int i = 0 ; i < arr.size() ; i++){
            if(largest < arr[i]){
                secondLargest = largest;
                largest = arr[i];
            }
            else if(arr[i] < largest && arr[i] > secondLargest){
                secondLargest = arr[i];
            }
        }
        
        return secondLargest;
    }
};