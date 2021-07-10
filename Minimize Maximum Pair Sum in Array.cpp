class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum=INT_MIN;
        int i=0;
        int j=nums.size()-1;
        while(i<j)
        {
            if(sum<nums[i]+nums[j]) sum=nums[i]+nums[j];
            i++;
            j--;
        }
        return sum;
    }
};
