class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();

        vector<int> nz;


        for(int i = 0 ; i < n ; i++){
            if(nums[i] != 0){
                nz.push_back(nums[i]);
            }
        }


        int i = 0;
        while(i < nz.size()){
            nums[i] = nz[i];
            i++;
        }


      
        while(i < nums.size()){
            nums[i] = 0;
            i++;
        }
        
    }
};