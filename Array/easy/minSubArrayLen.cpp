class Solution {
public:
    int minSubArrayLen(int k, vector<int>& nums) {

        int n = nums.size();
        int minLength = n;
        bool found = false;
        int l = 0;
        int r = 0;
        int sum = 0;

        while (r < n) {
            sum += nums[r];

            while (sum >= k) {

                minLength = min(minLength, r - l + 1);
                found = true;

                sum -= nums[l];
                l++;
            }

            r++;
        }
        return found ? minLength : 0;
    }
};
