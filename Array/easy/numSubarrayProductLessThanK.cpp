class Solution {
public:
    int fxn(vector<int>& nums, int k){
       int count = 0;
       long long pro = 1;
       int l = 0;
       int r = 0;
       int n = nums.size();

    //edge case
    if( k <= 1) return 0;   


       while(r < n){
        pro *= nums[r];


        while(pro >= k ){
            pro /= nums[l];
            l++;
        }

        if(pro < k){
          count += (r-l+1);
        }

        r++;
       }


       return count;
    }
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

        

        return fxn(nums , k) ;
        
    }
};
