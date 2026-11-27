class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        int n = nums.size();
        int maxLen = 0;

        unordered_set<int> st;

        for(int i = 0 ; i < n ; i++){
            st.insert(nums[i]);
        }


        for(auto el : st){

            if(st.find(el-1) != st.end()){
                continue;
            }else{

                int count = 0;
                int element = el;

                while(st.find(element) != st.end()){
                    count++;
                    element++;
                }


                maxLen = max(maxLen , count);
            }
        }


        return maxLen;
        
    }
};