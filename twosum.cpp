class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int k) {
        vector<int>v;
        for(int i=0;i<nums.size()-1;i++)
        {
            //if(nums[i]>k) continue;
            for(int j=i+1;j<nums.size();j++)
            {
              //  if(nums[j]>k) continue;
                if(nums[i]+nums[j]==k)
                {
                    v.push_back(i);
                    v.push_back(j);
                    return v;
                }
            }
        }
        return v;
    }
};
