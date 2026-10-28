class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {

        long long count = 0;
        int n = nums.size();
        long long sum =  0 ; 
        long long len = 0;
        long long product = sum*len;
        int r = 0;
        int l = 0;

        while(r < n){
            sum += nums[r];
            len++;
            product = sum*len;

            while(product >= k){
                sum -= nums[l];
                len--;
                product = sum*len;

                l++;

            }

            if(product < k){
                count += (r-l+1);
            }

            r++;
        }

        return count;
        
    }
};
