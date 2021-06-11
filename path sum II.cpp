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
    void func(TreeNode*root,int sum,int t,vector<vector<int>>&v,vector<int>&v1)
    {
        v1.push_back(root->val);
        if(root->right==NULL && root->left==NULL)
        {
            sum+=root->val;
            if(sum==t)
            {
                v.push_back(v1);
            }
            v1.pop_back();
            return;
        }
        if(root->left!=NULL)
            func(root->left,sum+root->val,t,v,v1);
        if(root->right!=NULL)
            func(root->right,sum+root->val,t,v,v1);
        v1.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int t) {
        vector<vector<int>> v;
        if(root==NULL) return v;
        vector<int>v1;
        func(root,0,t,v,v1);
        return v;
    }
};
