class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        if (n == 0)
            return 0;

        string temp = "";
        int sign = 1;
        int i = 0 ;


        while(i < n && s[i] == ' '){
            i++;
        }

        while(i < n &&( s[i] == '+' || s[i] == '-')){
            if(s[i] == '-'){
                sign = -1;
            }else{
                sign = 1;
            }
            i++;
        }

    

        long ans = 0;
        while(i < n && isdigit(s[i])){
            int dig = s[i]-'0';
            ans = ans*10 + dig;

            if(ans*sign > INT_MAX) return INT_MAX;
            if(ans*sign < INT_MIN) return INT_MIN;
            i++;
        }
     

       return ans*sign;

    }
};