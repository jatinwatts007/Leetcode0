class Solution {
public:
    
   void solve(int i, vector<int> &a, int dp[]){
        if(i >= a.size() || i < 0){
            return;
        }
        if (a[i] == 0) {
            dp[i] = 1;
            return;
        }
        if(dp[i]!=-1){
            return;
        }
       dp[i] = 0;
        solve(i+a[i],a,dp);
        solve(i-a[i],a,dp);
        return;
    }
    bool canReach(vector<int>& a, int start) {
        int n = a.size();
        int dp[n+1];
        memset(dp,-1,sizeof(dp));
        solve(start,a,dp);
        for(int i = 0; i < n+1; i++){
            if(dp[i]==1){
                return true;
            }
        }
        return false;
    }
};
