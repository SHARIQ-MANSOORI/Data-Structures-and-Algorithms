class Solution {
public:
    bool isvowel(char c) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ) {
            return true;
        }

        return false;
    }
    int maxVowels(string s, int k) {
        int n = s.length();
        int l = 0;
        int r = k-1;
        int count = 0;
        int maxCount = 0;
        for (int i = l; i <= r; i++) {
            if (isvowel(s[i])) {
                count ++;
            }
        }

        maxCount = max(maxCount, count);

        while (r < n - 1) {
            if (isvowel(s[l])) {
                count--;
            }
            l++;
            r++;
            if (isvowel(s[r])) {
                count++;
            }

            maxCount = max(maxCount, count);
        }

        return maxCount;
    }
};