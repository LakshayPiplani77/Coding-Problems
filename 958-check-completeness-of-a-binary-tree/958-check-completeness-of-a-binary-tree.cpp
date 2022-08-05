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
    int countNodes(TreeNode* root)
    {
        if(root == NULL)
            return 0;
        int ans = 1 + countNodes(root->left) + countNodes(root->right);
        return ans;
    }
private:
    bool isCBT(TreeNode* root,int index,int totalNodesCount)
    {
        if(root == NULL)
            return true;
        if(index > totalNodesCount)
            return false;
        else
        {
            bool left = isCBT(root->left,2*index,totalNodesCount);
            bool right = isCBT(root->right,2*index+1,totalNodesCount);
            return left && right;
        }
    }
public:
    bool isCompleteTree(TreeNode* root) {
        int totalNodesCount = countNodes(root);
        int index = 1;
        return isCBT(root,index,totalNodesCount);
    }
};