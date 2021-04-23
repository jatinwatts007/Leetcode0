class Solution {
public:
    vector<vector<int>> ans;
    void count(vector<int>& c,int a,int val,int tar,vector<int> v){
        if(val+c[a]==tar){
            v.push_back(c[a]);
            ans.push_back(v);
            return;
        }
        if(val+c[a]>tar){
            return;
        }
        v.push_back(c[a]);
        for(int i=a;i<c.size();i++){
            count(c,i,val+c[a],tar,v);
        }
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> v;
        for(int i=0;i<candidates.size();i++){
            count(candidates,i,0,target,v);
        }
        return ans;
    }
};
