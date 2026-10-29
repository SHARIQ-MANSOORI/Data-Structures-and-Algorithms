class Solution {
public:
    int minSteps(string s, string t) {

        vector<int> mp(26,0);
        int n = s.length();
        int count = 0;

        for(int i = 0  ; i < n ; i++){
            mp[s[i]-'a']++;
            mp[t[i]-'a']--;
        }

        for(int i = 0 ; i < mp.size() ; i++){

            if(mp[i] > 0){
                count += mp[i];
            }
        }
        return count;
        
    }
};