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
    bool solve(TreeNode* p,TreeNode* q)
    {
        // base cases
        // base case1 ---> if both the value are NULL then return true
        if(p==NULL && q==NULL)
        {
            return true;
        }
        
        // base case2 --> if one is NULL but other one is not then return false
        else if(p==NULL || q==NULL)
        {
            return false;
        }
        
        // base case3 --> if the value of both node doesn't match then return false
        else if(p->val!=q->val)
        {
            return false;
        }
        
        
        bool ans1;
        // send recursion
        ans1=solve(p->left,q->right) && solve(p->right,q->left);
        return ans1;
    }
    bool isSymmetric(TreeNode* root) {
        // if there is no node in the tree then return true
        if(root==NULL)
        {
            return true;
        }
        bool ans;
        // send the recursion in root->left and root->right
        ans=solve(root->left,root->right);
        return ans;
        
    }
};