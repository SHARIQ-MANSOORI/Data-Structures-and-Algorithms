class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int i = n-1;
        int count = 0;

        // handle trailing spaces
        while( i >= 0 && s[i] == ' '){
            i--;
        }
        // handle chars
        while(i >= 0 && s[i] != ' '){
            count++;
            i--;
        }

        return count;
    }
};