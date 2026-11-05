class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {

        int n = nums.size();

        long long f = 0;   // calculate f(0)
        long long sum = 0; // calculate the sum of whole arrat

        for (int i = 0; i < n; i++) { // this lopp calculate  sum and f(0)
            sum += nums[i];
            f += (i * nums[i]);
        }

        long long maxSum = f; // store in maxSum to track

        for (int i = 1; i < n; i++) { // loop over the array and appy formula
            f = f + sum - n * nums[n - i]; // formula
            maxSum = max(maxSum, f); // maxsum
        }

        return maxSum;
    }
};