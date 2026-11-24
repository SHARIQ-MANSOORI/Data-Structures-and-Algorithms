class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0;
        int r = k - 1;

        int sum = 0;
        int maxSum = 0;

        for (int i = l; i <= r; i++) {
            sum += nums[i];
        }

        maxSum = max(maxSum, sum);

        l = k - 1;
        r = n - 1;

        while (l >= 0) {
            sum -= nums[l];
            l--;
            sum += nums[r];
            r--;

            maxSum = max(maxSum, sum);
        }

        return maxSum;
    }
};