class Solution {
public:
    int trailingZeroes(int n) {

        if(n == 0) return 0;

        int sum = 0;

        for(int i = 5 ; i <= n ; i = i*5){

            int temp = n;

            sum += temp/i;
        }

        return sum;
        
    }
};