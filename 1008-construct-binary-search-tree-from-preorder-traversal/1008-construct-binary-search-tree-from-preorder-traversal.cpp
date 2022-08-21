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
    TreeNode* makeBST(vector<int> &preorder,int ub,int &i)
    {
        if(i>=preorder.size())
            return NULL;
        if(preorder[i] > ub)
            return NULL;
        TreeNode* root = new TreeNode(preorder[i++]);
        root->left = makeBST(preorder,root->val,i);
        root->right = makeBST(preorder,ub,i);
        return root;
    }
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int ub = INT_MAX;
        int i = 0;
        return makeBST(preorder,ub,i);
    }
};