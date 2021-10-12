class Solution {
public:
void rvereseArray(vector<int>&arr, int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
} 
    vector<int> pancakeSort(vector<int>& arr) {
        vector<int>v;
        int i=arr.size();
        while(i!=1){
            for(int j=0;j<i;j++){
                if(arr[j]==i){
                    rvereseArray(arr,0,j);
                    v.push_back(j+1);
                    break;
                }
            }
            if(arr[0]==i){
                rvereseArray(arr,0,i-1);
                v.push_back(i);
                i--;
            }
        }
        return v;
    }
};
