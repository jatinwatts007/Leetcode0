class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> v;
        int product=1,count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
            }
        }
        if(count==0){
           for(int i=0;i<nums.size();i++){
                product*=nums[i];
           }
           for(int i=0;i<nums.size();i++){
                v.push_back(product*pow(nums[i],-1));
           }
        }
        else if(count==1){
            for(int i=0;i<nums.size();i++){
                if(nums[i]!=0){
                    product*=nums[i];
                }
            }
            for(int i=0;i<nums.size();i++){
                if(nums[i]==0){
                    v.push_back(product);
                }else{
                    v.push_back(0);
                }
            }
            
        }else{
             for(int i=0;i<nums.size();i++){
                 v.push_back(0);
             }
        }
        return v;
    }
};
