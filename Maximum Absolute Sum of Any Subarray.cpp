class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
       int min1=0,max1=0,ans=0;
        for(int i=0;i<nums.size();i++){
            max1 = max(0,max1+nums[i]);
            min1=min(0,min1+nums[i]);
            ans = max(ans,max(max1,-min1));
        }
        return ans;
        
    }
};
