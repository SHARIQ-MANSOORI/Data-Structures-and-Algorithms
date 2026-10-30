/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        vector<vector<int>> ans;
        if (root == NULL)
            return ans;

        queue<TreeNode*> q;
        q.push(root);
        int level = 1;

        while (q.size() > 0) {
            int size = q.size();
            vector<int> ds;
    
           
           

            for (int i = 0; i < size; i++) {
                TreeNode* curr = q.front();
                q.pop();
                ds.push_back(curr->val);
    
                
              
                    if (curr->left != NULL) {
                        q.push(curr->left);
                    }

                    if (curr->right != NULL) {
                        q.push(curr->right);
                    }

                
            }
            if(level%2 == 0){
                // even level --> reverse
                reverse(ds.begin(),ds.end());
            }
            level++;

            ans.push_back(ds);
            
        }

        return ans;
    }
};