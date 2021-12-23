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
    TreeNode * p1=NULL;
    TreeNode * p2=NULL;
    int ans1=0;
    int ans2=0;
public:
    void func(TreeNode* root,int x,int y,int h)
    {
        if (root==NULL) return;
        if(root->val==x)
        {
            ans1=h;
        }
        if( (root->left!=NULL && root->left->val==x) || ( root->right!=NULL && root->right->val==x))
        {
            p1=root;
        }
        if(root->val==y)
        {
            ans2=h;
        }
        if( (root->left!=NULL && root->left->val==y) || ( root->right!=NULL && root->right->val==y))
        {
             p2=root;
        }
        func(root->left,x,y,h+1);
        func(root->right,x,y,h+1);
        
    }
    bool isCousins(TreeNode* root, int x, int y) {
        func(root,x,y,1);
        if(ans1==ans2 && p2!=p1) return true;
        return false;
    }
};
