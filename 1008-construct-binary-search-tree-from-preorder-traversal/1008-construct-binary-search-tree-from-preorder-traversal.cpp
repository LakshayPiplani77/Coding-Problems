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
    TreeNode* solve(vector<int> &preorder,int maxi,int &i)
{
	if(i >= preorder.size())
		return NULL;
	if(preorder[i] > maxi)
		return NULL;
	TreeNode* root = new TreeNode(preorder[i++]);
	root->left = solve(preorder,root->val,i);
	root->right = solve(preorder,maxi,i);
	return root;

}
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int maxi = INT_MAX;
        int i = 0;
        return solve(preorder,maxi,i);
    }
};