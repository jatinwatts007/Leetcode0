class Solution {
public:
    void reverse(vector<int>& nums,int start,int end){
        while(start<end){
            swap(nums[start],nums[end]);
            start++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int d) {
        int x = d%nums.size();
        reverse(nums,0,nums.size()-1);
        reverse(nums,0,x-1);
        reverse(nums,x,nums.size()-1);
    }
};
