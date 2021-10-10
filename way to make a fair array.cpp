class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        int odd =0;
        int even=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0)even+=nums[i];
            else odd+=nums[i];
        }
        int odd1=0;
        int even1=0;
        int count=0;
        for(int i=nums.size()-1;i>=0;i--){
            if(i%2==0){
                if((even+odd1-nums[i])==(odd+even1))count++;
                even1+=nums[i];
                even-=nums[i];
            }else{
                if((even+odd1)==(odd+even1)-nums[i])count++;
                odd1+=nums[i];
                odd-=nums[i];
            }    
        }
        return count;
    }
};
