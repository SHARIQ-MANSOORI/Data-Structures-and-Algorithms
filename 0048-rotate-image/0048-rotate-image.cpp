class Solution {
public:
    void rotate(vector<vector<int>>& arr) {

        int n = arr.size();

        for (int i = 0; i < n-1 ; i++) {

            for (int j = i+1; j < n; j++) {

                if (i != j) {
                    swap(arr[i][j], arr[j][i]);
                }
            }
        }

        for (int i = 0; i < n; i++) {
            reverse(arr[i].begin(), arr[i].end());
        }
    }
};