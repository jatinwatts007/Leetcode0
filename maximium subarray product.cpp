class Solution {
public:
    int maxProduct(vector<int>& nums) {
        vector<int>v;
        int best=INT_MIN;
        int curr1=1;
        int curr2=0;
        for(int i=0;i<nums.size();i++)
        {
            curr1*=nums[i];
            curr2*=nums[i];
            if(curr1>best) best=curr1;
            if(curr2>best && curr2!=0) best=curr2;
            if(nums[i]<0 && curr2==0) curr2=1;
            if(curr1==0) curr1=1;
        }
        return best;
    }
};
