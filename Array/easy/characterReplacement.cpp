class Solution {
public:
    int characterReplacement(string s, int k) {

        int maxLen = 0;
        int n = s.length();
        int hash[26] = {0};
           int maxFreq = 0;
           int chances = 0;
           int l = 0;
           int r = 0;


       while(r < n){
           
          
            // something add
              hash[s[r]-'A']++;
              maxFreq = max(maxFreq , hash[s[r]-'A']);
              chances = (r-l+1) - maxFreq;

              if(chances > k){
              hash[s[l]-'A']--;
           
                  l++;

              }
                
                // main pos condition
                if(chances <= k){
                    maxLen = max(maxLen , r-l+1);
                }

                r++;
            
        }
        return maxLen;
    }
};
