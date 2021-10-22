class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& o) {
        vector<vector<int>>dp(o.size(),vector<int>(o[0].size()));
        for(int i=0;i<o.size();i++){
            if(o[i][0]!=1)
                dp[i][0]=1;
            else break;
        }
        for(int i=0;i<o[0].size();i++){
            if(o[0][i]!=1)
                dp[0][i]=1;
            else break;
        }
        for(int i=1;i<o.size();i++){
            for(int j=1;j<o[0].size();j++){
                if(o[i][j]==1) {
                    dp[i][j]=0;
                    continue;
                }
                int x,y;
                x=dp[i-1][j];
                y=dp[i][j-1];
                dp[i][j]=x+y;
                
            }
        }
        return dp[o.size()-1][o[0].size()-1];
    }
};
