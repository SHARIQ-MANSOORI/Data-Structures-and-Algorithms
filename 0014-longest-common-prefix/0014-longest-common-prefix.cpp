class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {



        int n = s.size();
        int m = s[0].size();

        if( n == 1) return s[0];
        string ans = "";

        for(int i = 0 ; i < m ; i++){

            int j = 1;
            while( j < n){

                if(s[0][i] == s[j][i] && j == n-1){

                        ans.push_back(s[0][i]);
                }else if(s[0][i] != s[j][i]){
                    return ans;
                }
                j++;
            }
        }

        return ans;
        
    }
};