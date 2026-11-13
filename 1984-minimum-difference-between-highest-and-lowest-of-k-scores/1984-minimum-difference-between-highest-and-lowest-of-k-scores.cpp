class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {



        int n = nums.size();

        if(n <= 1 || k == 1) return 0;
        sort(nums.begin(), nums.end());
        int minScore = INT_MAX;

        for (int i = 0; i < n; i++) {
                int count = 1;
            for (int j = i + 1; j < n; j++) {

                count++;

                if(count == k){
                    minScore = min(minScore, abs(nums[j] - nums[i]));
                }

                
            }
        }

        return minScore;
    }
};