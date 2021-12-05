class Solution {
public:
    int binarySearch(vector<int> &arr, int l, int r, int x)
{
        //cout<<l<<" "<<r<<"jhghfgh";
        if(x>arr[r]) return r+1;
        if(x<arr[l]) return l;
        
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid+1] < x)
            return binarySearch(arr, mid + 1, r, x);
        return binarySearch(arr, l, mid, x);
       // 
    }
    return -1;
}
    int searchInsert(vector<int>& nums, int target) {
        return binarySearch(nums,0,nums.size()-1,target);
    }
};
