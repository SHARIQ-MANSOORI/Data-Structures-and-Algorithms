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
    int height(TreeNode* root){
        if(root == NULL) return 0;

        int lh = height(root->left);
        int rh = height(root->right);

        return max(lh,rh)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;
        // left dia
        int leftD = diameterOfBinaryTree(root->left);
        // right dia
        int rightD = diameterOfBinaryTree(root->right);
        // root dia
        int rootD = height(root->left) + height(root->right);

        
        return max(max(leftD , rightD) , rootD);

        
    }
};