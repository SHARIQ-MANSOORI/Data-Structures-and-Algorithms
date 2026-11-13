class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {

        int n = nums.size();

        if (n <= 1 || k == 1)
            return 0;

        sort(nums.begin(), nums.end());

        int minScore = INT_MAX;

        int l = 0;
        int r = k-1;

        while (r < n) {
           
                minScore = min(minScore, abs(nums[r] - nums[l]));
            
            l++;
            r++;
        }

        return minScore;
    }
};