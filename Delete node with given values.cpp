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

class Solution {
public:
    void func(TreeNode* root,int t)
    {
        if(root->left==NULL && root->right==NULL) return;
        if(root->left!=NULL) func(root->left,t);
        if(root->right!=NULL) func(root->right,t);
        if( root->left!=NULL && root->left->left==NULL && root->left->right==NULL && root->left->val==t)
        {
            root->left=NULL;
        }
        if(root->right!=NULL && root->right->left==NULL && root->right->right==NULL && root->right->val==t)
        {
            root->right=NULL;
        }
    }
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        if(root->left==NULL && root->right==NULL)
        {
            if(root->val==target) return NULL;
            return root;
        }
        func(root,target);
        if(root->left==NULL && root->right==NULL)
        {
            if(root->val==target) return NULL;
            return root;
        }
        return root;
    }
};
