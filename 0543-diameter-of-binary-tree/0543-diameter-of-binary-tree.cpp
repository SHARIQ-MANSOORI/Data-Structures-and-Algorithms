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
    int ans = 0; // global variale
    int height(TreeNode* root){
        if(root == NULL) return 0;

        int lh = height(root->left);
        int rh = height(root->right);

        // calculate diameter
        int dia = lh+rh;
        ans = max(ans , lh+rh);

        return max(lh,rh)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {

        height(root);
        
        return ans;

        
    }
};