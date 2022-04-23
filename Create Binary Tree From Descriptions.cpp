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
    TreeNode* createBinaryTree(vector<vector<int>>& d) {
        unordered_map<int,TreeNode*>s;
        unordered_map<TreeNode*,int>mp;
        TreeNode * root = NULL;
        for(int i=0;i<d.size();i++){
            if(s.count(d[i][0])==0){
                TreeNode* par = new TreeNode(d[i][0]);
                TreeNode* child;
                if(s.count(d[i][1])==0) child = new TreeNode(d[i][1]);
                else child = s[d[i][1]];
                if(d[i][2]==0) par->right=child;
                else par->left=child;
                s[d[i][0]]=(par);
                s[d[i][1]]=(child);
                mp[child]=0;
                mp[par]=1;
            }else{
                TreeNode* par = s[d[i][0]];
                TreeNode* child;
                if(s.count(d[i][1])==0) child = new TreeNode(d[i][1]);
                else child = s[d[i][1]];
                if(d[i][2]==0) par->right=child;
                else par->left=child;
                s[d[i][0]]=(par);
                s[d[i][1]]=(child);
                mp[child]=0;
            }
            
        }
        for(auto i=mp.begin();i!=mp.end();i++)
            if(i->second==1) return i-> first;
        return  NULL;
    }
};
