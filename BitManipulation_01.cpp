#include <bits/stdc++.h>
using namespace std;

void binToDec(int n){
    int i = 0;
    int ans = 0;
    
    while(n > 0 ){
    
        int rem = n%10;
        ans = ans+rem*(pow(2,i++));
        
        n = n/10;
    }
    
    cout << ans << endl;
}

void decToBin(int n){
    
    int ans = 0;
    
    // convert into binary
    
    while(n > 0){
        int rem = n%2;
        ans = ans*10 + rem;
        n = n/2;
    }
    
    // reverse each bit
    int temp = 0;
    while(ans > 0){
        int rem = ans%10;
        temp = temp*10 + rem;
        ans = ans/10;
    }
    
    cout << temp << endl;
}

int main() {
	// your code goes here
	int n;
	cin >> n;
	
	binToDec(n);
	
	
}
