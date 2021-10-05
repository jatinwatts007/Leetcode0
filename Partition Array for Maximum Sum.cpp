class Solution {
public:
    int dp1[1005][1005];
    int dp2[505];
    int solve(int index,int size,int k){
        if(index>=size) return 0;
        if(dp2[index]!=-1) return dp2[index];
        int ans =INT_MIN;
        for(int i=index;i<index+k;i++){
            int x = i-index+1;
            int sum=x*dp1[index][i];
            ans = max(ans , sum + solve(i+1,size,k));
        }
        return dp2[index]=ans;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        memset(dp1,0,sizeof(dp1));
        for(int i=0;i<arr.size();i++){
            int ans=0;
            for(int j=i;j<arr.size();j++){
                ans=max(ans,arr[j]);
                dp1[i][j]=ans;
            }
        }
        memset(dp2,-1,sizeof(dp2));
        int ans = solve(0,arr.size(),k);
        return ans;
    }
};
