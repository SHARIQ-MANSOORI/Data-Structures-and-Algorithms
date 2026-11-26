class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int n = nums.size();

        vector<int> temp;
        temp.push_back(nums[0]);

        for(int i  = 1 ; i < n ; i++){

            if(nums[i] != temp.back()){
                temp.push_back(nums[i]);
            }
        }
        

        int i = 0 ; 
        int k = temp.size();

        while(i < k){
            nums[i] = temp[i];
            i++;
        }


        return k;
    }
};