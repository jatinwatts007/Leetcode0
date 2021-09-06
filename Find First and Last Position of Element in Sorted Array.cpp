class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int tar) {
        vector<int> v(2,-1);
        int i=0;
        int j=nums.size()-1;
        int mid=(i+j)/2;
        while(i<=j){
            if(nums[mid]==tar)
                break;
            else if(nums[mid]>tar){
                j=mid-1;
                mid=(i+j)/2;
            }
            else{
                i=mid+1;
                mid=(i+j)/2;
            }
        }
        if(i>j)
            return v;
        while(i<mid && nums[i]!=tar){
            i++;
        }
        while(j>mid && nums[j]!=tar){
            j--;
        }
        v[0]=i;
        v[1]=j;
        return v;
    }
};
