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
    int height(TreeNode* node)
    {
        if(node == NULL)
            return 0;
        if(node->left == NULL && node->right == NULL)
        {
            return 1;
        }
        int lh = height(node->left);
        int rh = height(node->right);
        int h = 1 + max(lh,rh);
        return h;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL)
            return 0;
        int op1 = diameterOfBinaryTree(root->left);
        int op2 = diameterOfBinaryTree(root->right);
        int op3 = height(root->left) + height(root->right);
        int ans = max(op3,max(op1,op2));
        return ans;
    }
};