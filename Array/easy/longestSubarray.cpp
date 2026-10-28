class Solution {
public:
    int longestSubarray(vector<int>& nums) {

        int ml = 0;
        int n = nums.size();
        bool isFound = false;
        int zero = 0;
        int r = 0;
        int l = 0;

        while(r < n){

            if(nums[r] == 0){
                zero++;
            }

            while(zero > 1){
               if(nums[l] == 0){
                 zero--;
                 
               }
                l++;
            }


            if(zero <= 1){
                ml = max(ml , (r-l+1));
                isFound = true;
            }

            r++;
        }

        return isFound?(ml-1):0;
        
    }
};
