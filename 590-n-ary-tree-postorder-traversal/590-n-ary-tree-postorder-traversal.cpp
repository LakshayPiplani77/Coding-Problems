/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
private:
    void solve(Node *root,vector<int> &post)
    {
        if(root == NULL)
            return;
        for(auto x: root->children)
        {
            solve(x,post);
        }
        post.push_back(root->val);
    }
    
public:
    vector<int> postorder(Node* root) {
        vector<int> post;
        solve(root,post);
        return post;
        
    }
};