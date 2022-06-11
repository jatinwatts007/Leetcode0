class Solution {
public:
    int helper(int l,int r,vector<int>&nums,int flag){
        if(r-l==1){
            if(flag==1) return max(nums[l],nums[r]);
            return min(nums[l],nums[r]);
        }
        int mid = l+(r-l)/2;
        int x = helper(l,mid,nums,0);
        int y = helper(mid+1,r,nums,1);
        if(flag==0) return min(x,y);
        return max(x,y);
    }
    int minMaxGame(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        return helper(0,nums.size()-1,nums,0);
    }
};
