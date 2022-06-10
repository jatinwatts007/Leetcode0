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
    int value=INT_MIN;
    int helper(TreeNode* root){
        if(!root->right && !root->left){
            value = max(value,root->val);
            return max(root->val,0);
        }
        int ans = root->val;
        int left = 0;
        int right = 0;
        if(root->left) left = helper(root->left);
        if(root->right)right =helper(root->right);
        value = max(value,left+right+ans);
        value = max(value,left+right+ans);
        return max(max(left+ans,right+ans),0);
    }
    int maxPathSum(TreeNode* root) {
        helper(root);
        return value;
    }
};
