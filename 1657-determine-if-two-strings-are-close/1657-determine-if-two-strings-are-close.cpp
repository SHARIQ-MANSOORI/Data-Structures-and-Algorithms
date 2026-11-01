class Solution {
public:
    bool closeStrings(string s, string t) {
        int n = s.length();
        int m = t.length();

        // check 1 -> same length
        if(n != m) return false;

        vector<int> m1(26,0);
        vector<int> m2(26,0);

        for(int i = 0 ; i < n ; i++){
            m1[s[i]-'a']++;
            m2[t[i]-'a']++;
        }

        // check 2 -> same elements

        for(int i = 0 ; i < 26 ; i++){
            if((m1[i] == 0 && m2[i] != 0) || (m1[i] != 0 && m2[i] == 0)){
                return false;
            }
        }

        // check 3 ->  similar (not same) frequency of elements
        sort(m1.begin(),m1.end());
        sort(m2.begin(),m2.end());

        for(int i = 0 ; i < 26 ; i++){
            if(m1[i] != m2[i]){
                return false;
            }
        }
        return true;
    }
};