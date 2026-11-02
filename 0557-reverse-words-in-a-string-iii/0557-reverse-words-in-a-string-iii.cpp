class Solution {
public:
    string reverseWords(string s) {


        //  s.push_back(' ');
        int n = s.length();
       
        
        int st = 0;
        int i = 0;

        while(i <= n){

            if( i == n-1 ||s[i] == ' ' ){
                if(i == n-1){
                     reverse(s.begin()+st , s.begin()+i+1);
                     return s;
                }
                 reverse(s.begin()+st , s.begin()+i);
                st = i+1;
            }

            i++;
        }

        return s;
    }
};