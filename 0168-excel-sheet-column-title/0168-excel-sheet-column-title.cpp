class Solution {
public:
    string convertToTitle(int n) {


        string ans = "";
        while(n > 0){
            n--;
            int rem = n%26;
            ans += 'A'+rem;
            n = n/26;
        }

        reverse(ans.begin(),ans.end());
        return ans;

        
    }
};