class Solution {
public:
    bool isvowel(char ch) {
        ch = tolower(ch);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            return true;
        }

        return false;
    }
    string sortVowels(string s) {
        int n = s.length();
        string temp = "";

        // loop s , fill temp with vowels only
        for (int i = 0; i < n; i++) {
            if (isvowel(s[i])) {
                temp.push_back(s[i]);
            }
        }

        // sort and reverse temp

        sort(temp.begin(), temp.end());
        reverse(temp.begin(), temp.end());

        for (int i = 0; i < n; i++) {
            if (isvowel(s[i])) {

                if (temp.size() > 0) {
                    s[i] = temp.back();
                    temp.pop_back();
                }
            }
        }

        return s;
    }
};