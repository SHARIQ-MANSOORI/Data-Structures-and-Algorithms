class Solution {
public:
    int totalFruit(vector<int>& s) {

        int n = s.size();
        int maxLen = 0;
        int r =0;
        int l =0;
         unordered_map<int,int> mp;


       while(r < n){
           // something add

                mp[s[r]]++;

                // neg main
                while(mp.size() > 2){
                    mp[s[l]]--;
                    if(mp[s[l]] == 0){
                        mp.erase(s[l]);
                    }
                    l++;
                }



                // main condition
                if(mp.size() <= 2){
                    maxLen = max(maxLen , r-l+1);
                }

                r++;

            }
    

        return maxLen;
    }
};
