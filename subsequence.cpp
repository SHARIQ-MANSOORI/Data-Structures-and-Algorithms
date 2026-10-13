#include <bits/stdc++.h>
using namespace std;
void print(vector<int>& arr){
    for(int i = 0 ; i < arr.size() ; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
    
    return;
}
void printSubsequence(int i , vector<int>& arr , vector<int>& ans){
    if(i >= arr.size()){
        //print
        print(ans);
        return;
    }
    
    // take
    ans.push_back(arr[i]);
    printSubsequence(i+1 , arr , ans);
    
    // not take
    ans.pop_back();
    printSubsequence(i+1 , arr , ans);
}

int main() {
	
	
	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i  = 0 ;i < n ; i++){
	    cin >> arr[i] ;
	}
	vector<int> ans = {};
	printSubsequence(0 , arr , ans);

}
