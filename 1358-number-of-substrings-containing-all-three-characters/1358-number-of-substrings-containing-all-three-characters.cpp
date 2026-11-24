class Solution {
public:
    int fxn(string s, int k) {
        int n = s.length();
        int count = 0;
        unordered_map<char,int> mp;
        int l = 0;
        int r = 0;

        while (r < n) {
            mp[s[r]]++;

            while (mp.size() > k) {
                mp[s[l]]--;
                if(mp[s[l]] == 0){
                    mp.erase(s[l]);
                }
                l++;
            }

            if (mp.size() <= k) {
                count += (r - l + 1);
            }

            r++;
        }

        // for (int i = 0; i < n; i++) {
        //     unordered_set<char> st;

        //     for (int j = i; j < n; j++) {

        //         st.insert(s[j]);

        //         if (st.size() <= k) {
        //             count++;
        //         } else {
        //             break;
        //         }
        //     }
        // }

        return count;
    }
    int numberOfSubstrings(string s) { return fxn(s, 3) - fxn(s, 2); }
};