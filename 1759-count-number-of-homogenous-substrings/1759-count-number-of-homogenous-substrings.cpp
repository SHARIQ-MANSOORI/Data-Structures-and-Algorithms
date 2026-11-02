class Solution {
public:
int fxn(string s , int k){
     long long n = s.length();
        long long count = 0;
        unordered_map<char , long long> mp;
        long long r = 0;
        long long l = 0;

       while(r < n){
        mp[s[r]]++;

        while(mp.size() != k){
           mp[s[l]]--;

           if(mp[s[l]] == 0){
            mp.erase(s[l]);
           }
            l++;
        }

        if(mp.size() == k){
            count += (r-l+1);
        }

        r++;
       }

        return count % 1000000007;
}
    int countHomogenous(string s) {
        int k = 1;

       return fxn(s,k) ;
        
    }
};