class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = start^goal;

        int k = 0 ;

        while(ans > 0){
            k += ans%2;
            ans = ans/2;
        }

        return k;
    }
};
