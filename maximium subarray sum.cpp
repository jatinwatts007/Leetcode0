class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int best=INT_MIN;
        int current=0;
        for(int i=0;i<nums.size();i++)
        {
            current+=nums[i];
            if(current>best)
            {
                best=current;
            }
            if(current<nums[i])
            {
               // best=nums[i];
                current=nums[i];
                if(current>best) best=current;
            }
            
        }
        return best;
    }
};
