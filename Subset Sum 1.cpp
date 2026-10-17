class Solution {
  public:
  
    void fx(int idx , int sum , vector<int>& arr ,  vector<int>& ans){
        
        if(idx == arr.size()){
            //store
            ans.push_back(sum);
            return ;
        }
        // pick -->recursion    
        sum += arr[idx];
        fx(idx+1 , sum , arr , ans);
        
        // not pick -->recursion
        sum -= arr[idx];
        fx(idx+1 , sum , arr , ans);
        
    }
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        
        vector<int> ans;
        fx(0 , 0 , arr , ans);
        
        return ans;
    }
};
