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
   bool isFound = false;
   int sum = 0;
   int fxn(TreeNode* root , int k){
    if(root == NULL) return 0;

    sum += root->val;
    if(sum == k && root->left == NULL && root->right == NULL){
        isFound = true;
        return 0;
    }

    int lh = fxn(root->left,k);
    int rh = fxn(root->right,k);

    sum -= root->val;
    return max(lh,rh) + 1;
   }
    bool hasPathSum(TreeNode* root, int k) {
        
        fxn(root , k);
        return isFound;
        
    }
};