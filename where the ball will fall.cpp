class Solution {
public:
    int helper(vector<vector<int>>&g ,int m ,int n ,int i,int j){
        if(j==n || j<0){
            return -2;
        }
        if(i==m){
            return j;
        }
        if(dp[i][j]!=-1) return dp[i][j];
        if(g[i][j]==1){
            if(j+1>=n || g[i][j+1]!=g[i][j] ) dp[i][j]=-2;
            else dp[i][j]=helper(g,m,n,i+1,j+1);
        }else{
            if(j-1<0 || g[i][j-1]!=g[i][j]) dp[i][j]= -2;
            else dp[i][j]=helper(g,m,n,i+1,j-1);
        }
        return dp[i][j];
    }
    int dp[100][100];
    vector<int> findBall(vector<vector<int>>& grid) {
        memset(dp,-1,sizeof(dp));
        int m = grid.size();
        int n = grid[0].size();
        vector<int>ans;
        for(int i=0;i<grid[0].size();i++){
            int x = helper(grid,m,n,0,i);
            if(x==-2) ans.push_back(-1);
            else ans.push_back(x);
            
        }
        return ans;
    }
};
