class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        int max=0;
        int min=1000000;
        int * arr = new int[50001];
        for(int i=0;i<50001;i++) arr[i]=0;
        for(int i=0;i<nums.size();i++){
            arr[nums[i]]++;
            if(nums[i]>max) max=nums[i];
            if(nums[i]<min) min=nums[i];
        }
        int ans=0;
        int count=0;
        for(int i=max;i>min;i--){
           if(arr[i]!=0){
               ans=ans+arr[i]+count;
               count=count +arr[i];
           } 
        }
        return ans;
    }
};
