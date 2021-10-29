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
    TreeNode* helper(TreeNode *head){
        if(head->right==NULL && head->left==NULL){
            return head;
        }
        TreeNode* l=NULL;
        TreeNode *r=NULL;
        if(head->left!=NULL)
            l=helper(head->left);
        if(head->right!=NULL)
            r=helper(head->right);
        if(l!=NULL && r!=NULL){
            head->right=l;
            while(l->right!=NULL)l=l->right;
            l->right=r;
            head->left=NULL;
            return head;
        }
        if(l!=NULL){
            head->right=l;
            head->left=NULL;
            return head;
        }
        if(r!=NULL){
            head->right=r;
            head->left=NULL;
            return head;
        }
        return NULL;
    }
    void flatten(TreeNode* root) {
        if(root!=NULL)
        helper(root);
    }
};
