class Solution {
public:
    void helper(vector<vector<int>>&ans,vector<int>&v,vector<int>&nums,vector<int>&pos,map<int,int>&mp,int x){
        if(v.size()==nums.size()){
            if(mp.count(x)==0){
                ans.push_back(v);
                mp[x]=1;
            }
            
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(pos[i]==0){
                    v.push_back(nums[i]);
                    pos[i]=1;
                    helper(ans,v,nums,pos,mp,x*10+v[v.size()-1]);
                    pos[i]=0;
                    v.pop_back();
                }
                
            }
        }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>v;
        map<int,int>mp;
        vector<int>ans;
        vector<int>pos(nums.size()+1,0);
        helper(v,ans,nums,pos,mp,0);
        return v;
    }
};
