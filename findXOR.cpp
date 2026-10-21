class Solution {
  public:
    int fx(int n){
        if(n%4 == 1) return 1;
        if(n%4 == 2) return n+1;
        if(n%4 == 3) return 0;
        if(n%4 == 0) return n;
        
        return 0;
    }
    int findXOR(int l, int r) {
        // code here
        
        return fx(r)^fx(l-1);
        
    }
};
