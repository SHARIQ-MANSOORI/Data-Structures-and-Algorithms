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
    int maxSum = INT_MIN;
   
    int fxn(TreeNode* root){
        if(root == NULL) return 0;

        int lsum = max( 0 ,fxn(root->left));
        int rsum = max(0 , fxn(root->right));
        int tsum = lsum + rsum + root->val;

        
        maxSum = max(maxSum,tsum);
        
        return root->val + max(lsum  , rsum);
    }
    int maxPathSum(TreeNode* root) {
        // if(root->left == NULL && root->right == NULL) return root->val;

         fxn(root);
        return maxSum;
        
    }
};