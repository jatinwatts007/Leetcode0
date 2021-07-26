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
    int tree(TreeNode *root)
    {
        if(root==NULL) return 0;
        int x = tree(root->left);
        int y=tree(root->right);
        //if(x+y==1) return 1;
        if((x==0) && root->val==1)
        {
            root->left=NULL;
            x=1;
        }
        if(x==0 && root->val!=1)
        {
            root->left=NULL;
        }
        if((y==0) && root->val==1)
        {
            root->right=NULL;
            y=1;
        }
        if(y==0 && root->val!=1) root->right=NULL;
        return x+y;
    }
    TreeNode* pruneTree(TreeNode* root) {
       int x=tree(root);
        if(x==0) return NULL;
        return root;
    }
};
