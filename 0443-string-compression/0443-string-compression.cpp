class Solution {
public:
    int compress(vector<char>& chars) {
        string ans = "";
        int n = chars.size();
        if(chars.size() == 1) 
        {
             ans += chars[0];
            return ans.length();
        };
       


        for(int i = 0 ; i < n ; i++){
            char ch = chars[i];
            int j = i;
            int count = 0;
            int maxCount = 0;

            while(j < n && ch == chars[j] ){
                count++;
                j++;
            }
            maxCount += max(maxCount , count);
            ans += ch;
            if(maxCount > 1){
                ans += to_string(maxCount);
            }

            i = j-1;


        }
        int incount = 0;
        for(int i  = 0 ; i < ans.size() ; i++){
            chars[i] = ans[i];
            incount++;
        }

        return incount;
        
    }
};