class Solution {
public:
    bool isPalindrome(string& temp){
        int n = temp.length();
        int i = 0;
        int j = n-1;

        while(i < j){
            if(temp[i] != temp[j]){
                return false;
            }
            i++;
            j--;
        }

        return true;
    }
    int countSubstrings(string s) {
        int n = s.length();
        int count = 0;

        for(int i = 0 ; i < n ; i++){
            string temp = "";

            for(int j = i ; j < n ; j++){

                temp += s[j];

                if(isPalindrome(temp)){
                    count++;
                }
            }
        }


        return count;
        
    }
};