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
class FindElements {
public:
    int ans;
    TreeNode * tree;
    void recover(TreeNode * root,int value,int target)
    {
        if(root==NULL) return;
        if(value==target) ans=1;
        root->val=value;
        if(root->left!=NULL){
           // root->left->val=
            recover(root->left,2*value+1,target);
        }
        if(root->right!=NULL){
           //root->right->val=2*value+2;
            recover(root->right,2*value+2,target);
            //ans=0;
        }
        
    }
    FindElements(TreeNode* root) {
        tree=root;
        //ans=0;
    }
    
    bool find(int target) {
        ans=0;
       recover(tree,0,target);
        if(ans==1) return true;
        return false;
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */
