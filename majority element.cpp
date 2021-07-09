class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int x=nums[0];
        int count=0;
        vector<int>v;
        while(i<nums.size())
        {
            if(nums[i]==x)
            {
                count++;
            }else{
                if(count>(nums.size()/3))
                {
                    v.push_back(x);
                }
                count=1;
                x=nums[i];
            }
            i++;
        }
        if(count>(nums.size()/3))
        {
            v.push_back(x);
        }
        return v;
    }
};
