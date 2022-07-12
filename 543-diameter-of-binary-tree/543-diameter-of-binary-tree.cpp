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

//this is a brute force approach O(n*n)
class Solution {
private:
    int height(TreeNode* root)
    {
        if(root == NULL)
            return 0;
        
        int l = height(root->left);
        int r = height(root->right);
        return 1 + max(l,r);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL)
            return 0;
      
        int lh = height(root->left);
        int rh = height(root->right);
    
        return max((lh+rh),max(diameterOfBinaryTree(root->left),diameterOfBinaryTree(root->right)));
    }
};