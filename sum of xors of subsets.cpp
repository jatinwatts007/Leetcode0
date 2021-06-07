class Solution {
public:
    int y=0;
    void sum1(vector<int>&v,int x,int sum)
    {
        int z;
        for(int i=x;i<v.size();i++)
        {
            z=sum^v[i];
            y=y+z;
            sum1(v,i+1,z);   
        }
    }
    int subsetXORSum(vector<int>& nums) {
        sum1(nums,0,0);
        return y;
    }
};
