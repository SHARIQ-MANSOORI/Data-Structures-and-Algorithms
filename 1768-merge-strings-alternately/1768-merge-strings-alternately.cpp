class Solution {
public:
    string mergeAlternately(string s1, string s2) {

        int n = s1.length();
        int m = s2.length();

        if(n == 0) return s2;
        if(m == 0) return s1;

        int i = 0;
        string s = "";

        while(i < n && i < m){
            s += s1[i];
            s += s2[i];

            i++;
        }

        while(i < n){
            s += s1[i];
            i++;
        }

        while(i < m){
            s += s2[i];
            i++;
        }

        return s;

        
    }
};