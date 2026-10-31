class Solution {
public:
    string countAndSay(int n) {

        // base case
        if(n == 1) return "1";

        string say = countAndSay(n-1);

        // processing

        string ans = "";
        for(int i = 0 ; i < say.length() ; i++){
            int count = 1 ; // point
            char ch = say[i];

            while(i < say.size()-1 && say[i] == say[i+1]){
                    count++;
                    i++;
            }

            ans += to_string(count) + ch;
        }
        return ans;
        
    }
};