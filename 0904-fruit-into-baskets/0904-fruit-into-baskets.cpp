class Solution {
public:
    int totalFruit(vector<int>& s) {
        int n = s.size();

        int maxLen = 0;

        int r = 0;
        int l = 0;
        unordered_map<int, int> mp;

        while (r < n) {

            mp[s[r]]++;

            while (mp.size() > 2) {
                mp[s[l]]--;

                if (mp[s[l]] == 0) {
                    mp.erase(s[l]);
                }
                l++;
            }

            if (mp.size() <= 2) {
                maxLen = max(maxLen, r - l + 1);
            }
            r++;
        }

        // for (int i = 0; i < n; i++) {
        //     unordered_set<int> st;

        //     for (int j = i; j < n; j++) {

        //         st.insert(nums[j]);

        //         if (st.size() <= 2) {
        //             maxLen = max(maxLen, j - i + 1);
        //         } else {
        //             break;
        //         }
        //     }
        // }

        return maxLen;
    }
};