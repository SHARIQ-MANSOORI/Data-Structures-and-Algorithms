class Solution {
public:
    int strStr(string s, string goal) {

        int n = s.length();
        int m = goal.length();

       for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(s[i+j] == goal[j]){
                if(j == (m-1)){
                    return i;
                }
            }else{
                break;
            }
        }
       }

       return -1;
    }
};