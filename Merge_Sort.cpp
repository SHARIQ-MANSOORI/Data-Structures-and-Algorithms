#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr , int low , int mid , int high){
    int left = low;
    int right = mid+1;
    
    vector<int> temp;
    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    
    // remain left
    while( left <= mid){
        temp.push_back(arr[left]);
        left++;
    }
    
    // remain right
    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }
    
    
    // copying temp into arr
    for(int i = low ; i  <= high ; i++){
        arr[i] = temp[i-low];
    }
}

void mergeSort(vector<int>& arr , int low , int high){
    
    // base case
    if(low >= high) return;
    
    int mid = (low+high)/2;
    
    
    //left part sort
    mergeSort(arr , low , mid);
    // right part
    mergeSort(arr , mid+1 , high);
    
    // merge sorted parts
    merge(arr , low , mid , high);
}

int main() {
	// your code goes here
	
	int n;
	cin >> n;
	
	vector<int> arr(n);
	
	for(int i = 0  ; i < n ; i++){
	    cin >> arr[i];
	}
	
	mergeSort(arr , 0 , n-1);
	
	for(int i = 0 ; i < n ; i++){
	    cout << arr[i] << " ";
	}

}
