class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int n = s.length();
        int maxLen = 0;

        int l = 0;
        int r = 0;
        unordered_map<char, int> mp;

        while (r < n) {
            mp[s[r]]++;

            while (mp[s[r]] > 1) {
                mp[s[l]]--;
                if (mp[s[l]] == 0) {
                    mp.erase(s[l]);
                }
                l++;
            }

            if (mp[s[r]] <= 1) {
                maxLen = max(maxLen, r - l + 1);
            }
            r++;
        }

        return maxLen;
    }
};