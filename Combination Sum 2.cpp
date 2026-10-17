class Solution {
public:

    void fx(int idx , int target , vector<int>& arr , vector<vector<int>>& ans , vector<int>& ds){
        // base case
        if(target == 0){
            ans.push_back(ds);
            return;
        }
     // looping pattern
        for(int i = idx ; i < arr.size() ; i++){
          // if same elemet
            if( i > idx && arr[i] == arr[i-1] ) continue;
          // if tar beccome less than 0
            if(arr[i] > target) break;

          
            ds.push_back(arr[i]);
            fx(i+1 , target-arr[i] , arr , ans , ds);
            ds.pop_back();      
     }

}
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {

        vector<vector<int> > ans;
        vector<int> ds ;

        // sort
        sort(arr.begin(),arr.end());

        fx(0,target , arr , ans, ds);

        return ans;
        
    }
};
