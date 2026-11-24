class Solution {
public:
    int fxn(vector<int>& nums, int goal) {
        if (goal < 0)
                return 0;

        int n = nums.size();
        int r = 0;
        int l = 0;
        long long sum = 0;
        long long count = 0;

        while (r < n) {
            
            sum += nums[r];

            while (sum > goal) {
                sum -= nums[l];
                l++;
            }

            if (sum <= goal) {
                count += (r - l + 1);
            }

            r++;
        }

        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        int x = fxn(nums, goal);
        int y = fxn(nums, goal - 1);

        return x - y;
    }
};