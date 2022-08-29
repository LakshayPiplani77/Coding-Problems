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
    int sumNumbers(TreeNode* root , int res=0) {
	// if no root the simply return 0
        if(!root)
        {
            return 0;
        }
		// if current node is leaf node
        if(root->left==NULL and root->right==NULL)
        {
            return(res*10+root->val);
        }
		// otherwise go in both direction and add both the results 
        return(sumNumbers(root->left,res*10+root->val) +sumNumbers(root->right,res*10+root->val)); 
    }
};