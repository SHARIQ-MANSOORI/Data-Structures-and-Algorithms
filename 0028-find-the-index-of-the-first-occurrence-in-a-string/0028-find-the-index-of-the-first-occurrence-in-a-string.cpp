class Solution {
public:
    int strStr(string s, string goal) {

        int n = s.length();
        int m = goal.length();

        if( m > n) return -1;
       
       return s.find(goal);

    }
};