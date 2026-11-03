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
    vector<vector<int>> verticalTraversal(TreeNode* root) {

        vector<vector<int>> ans;

        if(root == NULL) return ans;

        // Stores: column -> row -> sorted node values
        map<int, map<int, multiset<int>>> mp;

        // Queue stores: {node, {row, column}}
        queue<pair<TreeNode*, pair<int, int>>> q;

        // Root starts at row 0 and column 0
        q.push({root, {0, 0}});

        // BFS traversal
        while(!q.empty()) {

            auto it = q.front();
            q.pop();

            TreeNode* node = it.first;

            int row = it.second.first;
            int col = it.second.second;

            // Store node value at its row and column
            // Multiset automatically sorts values
            mp[col][row].insert(node->val);

            // Left child: row + 1, column - 1
            if(node->left) {
                q.push({node->left, {row + 1, col - 1}});
            }

            // Right child: row + 1, column + 1
            if(node->right) {
                q.push({node->right, {row + 1, col + 1}});
            }
        }

        // Extract values column by column
        for(auto p : mp) {

            vector<int> colValues;

            // Traverse rows from top to bottom
            for(auto q : p.second) {

                // Insert sorted values of current row
                for(auto val : q.second) {
                    colValues.push_back(val);
                }
            }

            ans.push_back(colValues);
        }

        return ans;
    }

};