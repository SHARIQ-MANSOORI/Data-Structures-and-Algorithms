class Solution {
public:
    bool isVowel(char ch) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
                return true;
            }
            return false;
    }
    bool halvesAreAlike(string s) {
        int n = s.size();
        int c1 = 0;
        int c2 = 0;

        for(int i = 0 ; i < n/2 ; i++){
            if(isVowel(s[i])){
                c1++;
            }
            if(isVowel(s[n-i-1])){
                c2++;
            }
        }

        return c1 == c2;

    }
};