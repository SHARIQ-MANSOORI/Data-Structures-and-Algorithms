class Solution {
public:
int fxn(string s ,int k){
        int count = 0;
        int n = s.length();
       unordered_map<int,int> mp;
        int l = 0;
        int r = 0;

        while (r < n) {
            // something add
            mp[s[r]]++;
            // neg of main
            while (mp.size() > k) {
                // st.erase(s[l]); 
                mp[s[l]]--;
                if(mp[s[l]] == 0){
                    mp.erase(s[l]);
                }
                l++; 
            }

            // main condition
            if (mp.size() <= 3) {
                count = count + (r-l+1);
            }

            r++;
        }

        return count;
}
    int numberOfSubstrings(string s) {

       return fxn(s,3) - fxn(s,2);
    }
};
