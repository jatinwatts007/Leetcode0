class Solution {
public:
        int max(vector<int>&arr, int s ,int e)
    {
        int mx = 0;
        
        for(int i=s ;i<=e ;i++)
        {
            mx = max(arr[i] , mx);
        }
        
        return mx;
    }

    int helper(int i,int j,vector<int>&arr,int **dp){
        if(i==j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int val= INT_MAX;
        for(int k=i;k<j;k++){
            int lsum = max(arr, i , k);
            int rsum = max(arr , k+1 , j);
                
            val = min( val, helper( i, k,arr,dp) + helper(k+1 , j,arr,dp) + lsum*rsum);
        }
        return dp[i][j]=val;
        
    }
    int mctFromLeafValues(vector<int>& arr) {
        int ** dp = new int *[arr.size()+1];
        for(int i=0;i<arr.size()+1;i++){
            dp[i] = new int[arr.size()+1];
            for(int j=0;j<arr.size()+1;j++){
                dp[i][j]=-1;
            }
        }
        return helper(0,arr.size()-1,arr,dp);
        
    }
};
