class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>> mp;
        vector<vector<string> > ans;



        // step 1: sort all the strings
        for(int i = 0 ; i < strs.size() ; i++){

            string temp = strs[i];
            sort(temp.begin() , temp.end());
            

            // save in the map
            mp[temp].push_back(strs[i]);
        }

        // retrival
        for(auto it = mp.begin() ; it != mp.end() ; it++){

                    ans.push_back(it->second);
        }

        return ans;
        
    }
};