class Solution {
public:
    int threeSumClosest(vector<int>& nums, int t) {
        sort(nums.begin(),nums.end());
        int sum=nums[0]+nums[1]+nums[2];
        for(int i=0;i<nums.size()-2;i++)
        {
                int l=i+1;
                int r=nums.size()-1;
                while(l<r)
                {
                    int temp=nums[i]+nums[l]+nums[r];
                    if(abs(temp-t)<abs(sum-t))
                    {
                        sum=temp;
                    }
                    if(temp>t) r--;
                    else if(temp<t)l++;
                        else return temp;
                }
        }
        return sum;
    }
};
