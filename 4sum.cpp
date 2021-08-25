
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
    sort(nums.begin(),nums.end());
    vector<vector<int>>ans;
    for(int i=0;i<n-3;i++)
    {
        if(i>0 && nums[i]==nums[i-1] )
            continue;
        int tt = target-nums[i]; 
        for(int j=i+1;j<n-2;j++)
        {
            if(j>i+1 && nums[j]==nums[j-1])
                continue;
            
            int l = j+1;
            int r = n-1;
            while(l<r)
            {
                int sum = nums[j]+nums[l]+nums[r];
                if(sum<tt)
                {
                    l++;
                }
                else if(sum>tt)
                {
                    r--;
                }
                else
                {
                    ans.push_back({nums[i],nums[j],nums[l],nums[r]});
                    l++;
                    while(l<r && nums[l]==nums[l-1])
                        l++;
                }
            }
            
        }
    }
    return ans;
    }

