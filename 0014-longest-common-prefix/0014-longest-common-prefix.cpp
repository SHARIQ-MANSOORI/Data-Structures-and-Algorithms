class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {

        int n = s.size();
        if(n == 1) return s[0];
        string ans = "";
        int len = s[0].size();

        for(int i = 0 ; i < len ; i++){
            char ref = s[0][i];
            int j = 1;

            while(j  < n){
                if(ref == s[j][i]){
                    j++;
                }else{
                    return ans;
                }
            }

            ans += ref;
        }


        return ans;
        
    }
};