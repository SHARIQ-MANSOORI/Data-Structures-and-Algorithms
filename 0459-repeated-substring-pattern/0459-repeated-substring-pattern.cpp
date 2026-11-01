class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.length();
        // if (n <= 1)
        //     return true;

        for (int l = 1; l <= (n / 2); l++) {
            if (n % l == 0) {
                int times = n / l;
                string pattern = s.substr(0, l);
                string ans ="";

                while(times > 0){
                    ans += pattern;
                    times--;
                }

                if (ans == s)
                    return true;
            }
        }

        return false;
    }
};