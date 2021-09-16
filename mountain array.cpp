class Solution {
public:
    int i=0;
    int binarySearch(vector<int> &arr, int l,int r){
        //cout<<i++;
        i++;
        if(r>=l){
            int mid=(r+l)/2;
            if(mid>0 && mid<arr.size()-1){
                if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                    return mid;
                }
                int val= binarySearch(arr,0,mid-1);
                if(val!=-1){
                    return val;
                }
                return binarySearch(arr,mid+1,r);
                
            }
        }
        return -1;
    }
    int peakIndexInMountainArray(vector<int>& arr) {
       int x = binarySearch(arr,0,arr.size()-1);
        cout<<i;
        return x;
    }
};
