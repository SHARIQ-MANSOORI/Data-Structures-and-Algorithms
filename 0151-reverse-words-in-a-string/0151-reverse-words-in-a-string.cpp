class Solution {
public:
    string reverseWords(string s) {

        int n = s.length();
        if (n == 0)
            return s;

        // handle leading and middle spaces
        string temp = "";

        for (int i = 0; i < n; i++) {
            if (s[i] != ' ') {
                temp.push_back(s[i]);
                if (i == n - 1 || s[i + 1] == ' ') {
                    temp.push_back(' ');
                }
            }
        }

        // handle trailing space
        string ans = temp.substr(0, temp.length() - 1);

        // reverse whole then reverse each word
        reverse(ans.begin(), ans.end());

        int st = 0;
        for (int i = 0; i <= ans.length(); i++) {
            if (i == ans.length()  || ans[i] == ' ') {
                reverse(ans.begin() + st, ans.begin() + i);
                st = i + 1;
            }
        }

        return ans;
    }
};