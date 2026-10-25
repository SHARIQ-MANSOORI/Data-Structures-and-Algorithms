class Solution {
public:
    int fxn(vector<int> nums , int k){
        int count = 0;
        int n = nums.size();
        int sum = 0;
        int l = 0;
        int r = 0;

        while(r < n){
            // something add
            if( nums[r]%2 != 0){
                sum += 1;
            }
        

        while(sum > k){
            if(nums[l]%2 != 0){
                sum -= 1;
            } 

            l++;

        }

        // main condition
        if(sum <= k){
            count = count + (r-l+1);
        }
            r++;
        }

        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {

        return (fxn(nums , k) - fxn(nums , k-1));
        
    }
};
