class Solution {
public:
    int fxn(vector<int>& nums, int k) {
        int n = nums.size();
        int maxCount = 0;
        int oddCount = 0;
        int l = 0;
        int r = 0;

        while(r < n){
            if(nums[r]%2 != 0){
                // odd
                oddCount++;
            }

            while(oddCount > k){
                if(nums[l] %2 != 0){
                    oddCount--;
                }
                l++;
            }


            if(oddCount <= k){
                maxCount += (r-l+1);
            }
            r++;
        }

        // for (int i = 0; i < n; i++) {
        //     int oddCount = 0;

        //     for (int j = i; j < n; j++) {

        //         if (nums[j] % 2 != 0) {
        //             oddCount++;
        //         }

        //         if (oddCount <= k) {
        //             maxCount += 1;
        //         } else {
        //             break;
        //         }
        //     }
        // }

        return maxCount;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {

        return fxn(nums, k) - fxn(nums, k - 1);
    }
};