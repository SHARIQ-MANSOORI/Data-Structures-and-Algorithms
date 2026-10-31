class Solution {
public:
    string intToRoman(int num) {

        vector<int>arr = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
        vector<string> chars = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        string ans = "";

        while(num > 0){
            int idx;
            for(int i =  arr.size()-1; i >= 0 ; i--){
                if(arr[i] <= num){
                    idx = i;
                    break;
                }
            }
             int rem = num%arr[idx]; 
             int times = num/arr[idx];
                while(times > 0){
                    ans += chars[idx];
                    times--;
                }

                num = rem;
        }

        return  ans;
        
    }
};