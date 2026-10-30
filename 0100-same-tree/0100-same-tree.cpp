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
    int ans = true;
    void fxn(TreeNode* p, TreeNode* q) {
        if ((p == NULL && q != NULL) || (p != NULL && q == NULL)) {
            ans = false;
            return;
        }

        if (p == NULL || q == NULL)
            return;

        if (p->val != q->val) {
            ans = false;
            return;
        }
        fxn(p->left, q->left);
        fxn(p->right, q->right);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {

       

        fxn(p, q);
        return ans;
    }
};