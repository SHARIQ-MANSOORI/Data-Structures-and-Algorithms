class Solution {
public:
    int fxn(vector<int>& nums, int goal){
        int l = 0;
        int r = 0;
        long long sum = 0;
        int count = 0;
        int n = nums.size();

        while(r < n){
            if(goal < 0) return 0;//imp line
            sum += nums[r];

            while(sum > goal){
               
                  sum -= nums[l];
                
               
                l=l+1;
            }

            if(sum <= goal){
                count = count + (r-l+1);
            }

            r = r+1;
        }

        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        int ans = fxn(nums , goal) - fxn(nums , goal-1);

        return ans;
        
    }
};
