class Solution {
public:
    int minDeletionSize(vector<string>& s) {

        int n = s.size();
        if(n == 0) return 0;
        int m = s[0].size();
        int count = 0;

        for(int i = 0 ; i < m ; i++){
            for(int j = 1; j < n ; j++){
                if(s[j][i] < s[j-1][i]){
                    count ++;
                    break;
                }
            }
        }

        return count;
        
    }
};