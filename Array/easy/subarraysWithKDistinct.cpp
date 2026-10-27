class Solution {
public:
    int fxn(vector<int>& nums , int k){
        
        int n = nums.size();
        int count = 0;
        int l = 0;
        int r = 0;
         unordered_map<int, int> mp;


        while(r < n){
           mp[nums[r]]++;

            while(mp.size() > k){
                mp[nums[l]]--;
                if (mp[nums[l]] == 0) {
                    mp.erase(nums[l]);
                }
                l++;
            }


            if(mp.size() <= k){
                count = count + (r-l+1);
            }

            r++;
        }

        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {

        return fxn(nums,k)-fxn(nums,k-1);
    }
};
