class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int one = 0;
        int two = 0;

        for(int i = 0 ; i < nums.size() ; i++){
               one = (nums[i]^one)&(~two);
               two = (nums[i]^two)&(~one);

        }

        return one;
     
        
    }
};
