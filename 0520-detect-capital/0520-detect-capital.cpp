class Solution {
public:
    bool detectCapitalUse(string s) {

        int n = s.size();

        if(n == 1 ) return true;

        // check for all lower
        if(islower(s[0])){
            for(int i = 1 ; i < n ; i++){
                if(!islower(s[i])){
                    return false;
                }
            }
        }

        // check for first capital
        if(isupper(s[0])){
            //either all capital 
                if(isupper(s[1])){
                    for(int i = 1 ; i < n ; i++){
                        if(!isupper(s[i])){
                            return false;
                        }
                    }
                }
            // either all small

                if(!isupper(s[1])){
                    for(int i = 1 ; i < n ; i++){
                        if(isupper(s[i])){
                            return false;
                        }
                    }
                }
        }


        return true;
        
    }
};