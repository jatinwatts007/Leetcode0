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
    TreeNode * ans=NULL;
    int help2=-1;
    int helper(TreeNode* root, int count){
        if(root==NULL) return count-1;
        int l=helper(root->left,count+1);
        int r=helper(root->right,count+1);
        if(r==l){
            if(r>=help2){
                help2=r;
                ans=root;
            }
            //ans=root;
        }
        return max(r,l);
        
    }
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        if(root==NULL || (root->left==NULL && root->right==NULL)) return root;
        helper(root,0);
        return ans;
    }
};
