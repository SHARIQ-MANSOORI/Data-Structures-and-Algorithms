/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(root == NULL) return ans;

        map<int , int> mp;
        queue<pair<TreeNode* , int>>q;

        q.push({root , 0});

        while(!q.empty()){
            auto it = q.front();
            q.pop();
            TreeNode* curr = it.first;
            int row = it.second;

            mp[row] = curr->val;

            if(curr->left){
                q.push({curr->left , row+1});
            }

            if(curr->right){
                q.push({curr->right , row+1});
            }
        }

        for(auto ch :mp){
            ans.push_back(ch.second);
        }

        return ans;
        
    }
};