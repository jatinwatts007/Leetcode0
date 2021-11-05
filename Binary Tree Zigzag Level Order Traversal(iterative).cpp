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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        
        if(!root)
            return res;
        
        queue<TreeNode*> q;
        stack<int> s;
        q.push(root);
        int count=0;
        
        while(!q.empty())
        {
            int sz=q.size();
            vector<int> v;
            for(int i=0;i<sz;i++)
            {
                TreeNode *temp=q.front();
                q.pop();
                
                if(count%2==1)
                    s.push(temp->val);
                
                else
                    v.push_back(temp->val);
                
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            
            if(count%2==1)
            {
                while(!s.empty())
                {
                    v.push_back(s.top());
                    s.pop();
                }
            }
            
            res.push_back(v);
            count++;
        }
        
        return res;
	}
};
