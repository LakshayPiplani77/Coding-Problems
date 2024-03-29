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
private:
    bool isBST(TreeNode *root,long minimum,long maximum)
    {
        if(root == NULL)
            return true;
        if(root->val > minimum && root->val < maximum)
        {
            bool left = isBST(root->left,minimum,root->val);
            bool right = isBST(root->right,root->val,maximum);
            return left && right;
        }
        else
            return false;
    }
public:
    bool isValidBST(TreeNode* root) {
        return isBST(root,LONG_MIN,LONG_MAX);
    }
};