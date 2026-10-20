#include <bits/stdc++.h>
using namespace std;

void swap(int a , int b){
        
        a = a^b;
        b = a^b;
        a = a^b;
        
        
        cout << "(" << a << "," << b << ")" << endl;
}

bool checkIthnBit(int n , int i){
    
    if((n & (1 << i) ) == 0){
        return false;
    };
    
    return  true;
    
}

int setIthBit(int n , int i){
    
    return (n|(1<<i));
}

int clearIthBit(int n , int i){
    
    return (n&(~(1<<i)));
}

int toggleIIthBit(int n , int i ){
    
    return (n^(1<<i));
}

int removeLastSetBit(int n){
    return n&(n-1);
}

bool powerOf2(int n){
    
    if((n&(n-1)) == 0){
       
       return true;
    }
    
    return false;
}

int countNoOfSetBits1(int n){
    
    int count;
    
    while(n > 0){
        int rem = n%2;
        if(rem == 1) count++;
        
        n = n/2;
    }
    
    return count;
}
int countNoOfSetBits2(int n){
    
    int count;
    
    while(n > 0){
       n = n&(n-1);
       count++;
    }
    
    return count;
}



int main() {
	// your code goes here
	
	int n;
	cin >> n;
	
// 	swap(45,99);
//  cout << checkIthnBit(13,6) << endl;
// cout << setIthBit(13,1);
// cout << clearIthBit(13,3);
// cout << toggleIIthBit(13,0);
// cout << removeLastSetBit(13);
// cout << powerOf2(64);
cout << countNoOfSetBits2( n);


}
