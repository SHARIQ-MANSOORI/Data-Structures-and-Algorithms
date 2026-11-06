class Solution {
public:
    void wiggleSort(vector<int>& nums) {

        int n = nums.size();

        sort(nums.begin() , nums.end() , greater<int>());

        vector<int> a1;
        vector<int> a2;

       for(int i = 0 ; i < n/2 ;i++){
            a1.push_back(nums[i]); // stores the bigger values
           
       }

        for(int i = n/2 ; i <n ;i++){ // 
            a2.push_back(nums[i]); // stores the smaller values
           
       }

       int i = 0; // for a2
       int j = 0; // for a1

       for(int k = 0; k < n ; k++){
            if(k%2 == 0){
                nums[k] = a2[j];
                j++;
                
            }else{
                nums[k] = a1[i];
                i++;
            }
       }

       
        
    }
};