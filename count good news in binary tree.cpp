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
    int count=0;
public:
    void func(TreeNode* root,int x)
    {
        if(root==NULL) return ;
        if(root->val>=x)
        {
            count++;
            x=root->val;
        }
        func(root->left,x);
        func(root->right,x);
        
        
    }
    int goodNodes(TreeNode* root) {
        func(root,root->val);
        return count;
    }
};
