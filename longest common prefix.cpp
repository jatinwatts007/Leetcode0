vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int sum1 = 0;
        int sum2 = 0;
        vector<int> ans(nums.size());
        for(int i=0;i<nums.size();i++){
            sum2+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            sum1+=nums[i];
            ans[i] = nums[i]*(i+1) - sum1 + (sum2 -sum1) - (nums[i]*(nums.size()-i-1)); 
        }
        return ans;
    }
