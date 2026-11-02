class Solution {
public:
    int countPalindromicSubsequence(string s) {

        int n = s.size();
        set<int> all;

        for(int i = 0 ; i < n ; i++){
            all.insert(s[i]);
        }

        int sum = 0;


        for(auto ch : all){
            int first = s.find(ch);
            int last =  s.rfind(ch);

            set<int> st;

            for(int j = first+1 ; j <= last-1 ; j++){
                st.insert(s[j]);
            }

            sum += st.size();
        }

        return sum;
        
    }
};