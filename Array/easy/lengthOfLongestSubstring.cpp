class Solution {
public:
    int lengthOfLongestSubstring(string s) { //n+n , 256
    // approach -> sliding window using l and r
        int maxLen = 0;
        int l = 0;
        int r = 0;
        int freq[256] = {0};

        while(r < s.length()){

            freq[s[r]]++;

             if(freq[s[r]] == 1){
                maxLen = max(maxLen , r-l+1);
              
            }

            while(freq[s[r]] != 1){
               
                freq[s[l]]--;
                 l = l + 1;
            }

           

            r = r+1;
        }

        return maxLen;
        
    }
};
