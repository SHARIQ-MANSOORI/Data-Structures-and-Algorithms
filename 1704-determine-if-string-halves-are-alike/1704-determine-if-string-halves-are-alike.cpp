class Solution {
public:
    bool isVowel(char ch) {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' 
           ){
                return true;
            }
            return false;
    }
    bool halvesAreAlike(string s) {
        int n = s.size();
        int count = 0;
        

        for(int i = 0 ; i < n/2 ; i++){
            if(isVowel(s[i])){
                count++;
            }
            if(isVowel(s[n-i-1])){
                count--;
            }
        }

        return count == 0;

    }
};