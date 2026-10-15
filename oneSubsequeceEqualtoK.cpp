// finding any one subsequence equal to k
// Common Pattern 

#include <bits/stdc++.h>
using namespace std;

void print(vector<int>& arr){
        for(int i  = 0 ; i < arr.size() ; i++){
            cout << arr[i] << " ";
        }
        
        cout << endl;
}

bool solution(int i , vector<int>& arr , vector<int>& ans , int k , int sum){
        
        if(i >= arr.size()){
          // if cond is satisfy return true else false
            if(sum == k){
                print(ans);
                return true;
            }
            return false;
        }
        
        // take 
        ans.push_back(arr[i]);
        sum += arr[i];
  // if(f() == true) return true else false
        if(solution(i+1 , arr,ans , k ,sum) == true){
            return true;
        };
        
        ans.pop_back();
        sum -= arr[i];
        if(solution(i+1 , arr,ans , k ,sum) == true){
            return true;
        };
        
        return false;
    
    
}

int main() {
	// your code goes here
    int  n;
    cin >> n;
    
    vector<int> arr(n);
    for(int i = 0 ; i < n ; i ++){
        cin >> arr[i];
    }
    int k ;
    cin >>k;
    
    vector<int> ans;
    
    solution(0 , arr , ans , k , 0);
}

