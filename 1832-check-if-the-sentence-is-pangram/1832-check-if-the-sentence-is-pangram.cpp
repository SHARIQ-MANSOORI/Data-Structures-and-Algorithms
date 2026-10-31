class Solution {
public:
    bool checkIfPangram(string s) {
        int n = s.size();
        if(n < 26) return false;

        vector<int> mp (26 , 0);
        for(int i = 0 ; i < n ; i ++){
            mp[s[i]-'a']++;
        }
        
        for(int i = 0 ; i < 26 ; i++){
            if(mp[i] <= 0){
                return false;
            }

           
        }
         return true;
    }
};