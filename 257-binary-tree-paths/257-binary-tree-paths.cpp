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
    void solve(TreeNode* root,vector<string> &ans,string path)
    {
        if(root == NULL)
            return;
        if(root->left || root->right)
        {
            path += (to_string(root->val) + "->");
        }
        else
        {
           path += (to_string(root->val));
            ans.push_back(path);
        }
        solve(root->left,ans,path);
        solve(root->right,ans,path);
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string path = "";
        solve(root,ans,path);
        return ans;
    }
};