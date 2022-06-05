class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& o) {
        unordered_map<int,int>ump;
        for(int i=0;i<nums.size();i++){
            ump[nums[i]]=i;
        }
        for(int i=0;i<o.size();i++){
            nums[ump[o[i][0]]]=o[i][1];
            ump[o[i][1]]=ump[o[i][0]];
        }
        return nums;
    }
};
