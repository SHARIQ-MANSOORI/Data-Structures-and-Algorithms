#include <bits/stdc++.h>
using namespace std;

class Stack{
  public:
    
    vector<int > v;
    int topIdx = -1;
    
    void push(int x){
        v.push_back(x);
    }
    
    int top(){
        
        topIdx = v[v.size() - 1];
        return topIdx;
    }
    
    void pop(){
        v.pop_back();
    }
    
    
    int size(){
        return v.size();
    }
};

int main() {
	// your code goes here
	Stack s1;
	s1.push(33);
	s1.push(5);
	s1.pop();
	cout << s1.top() << endl;
	s1.push(10);
	s1.push(2);
	s1.pop();
	s1.push(56);
	cout << s1.top() << endl;
	cout << s1.size() << endl;

}
