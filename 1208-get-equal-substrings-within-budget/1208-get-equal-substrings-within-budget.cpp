class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int ml = 0;
        long long n = s.length();
         long long cost = 0;
         int l = 0;
         int r = 0;

        while(r < n){
            cost += abs(s[r] - t[r]);

            if(cost > maxCost){
                cost -= abs(s[l] - t[l]);
                l++;
            }


            if(cost <= maxCost){
                ml = max(ml , r-l+1);
            }

            r++;
        }
        return ml;
    }
};