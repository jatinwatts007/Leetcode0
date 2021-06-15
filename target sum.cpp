class Solution {
public:
    
    int findTargetSumWays(vector<int>& nums, int t) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        if(((t+sum))%2!=0)
            return 0;
        int x = (t+sum)/2;
        int ** dp = new int*[nums.size()+1];
        for(int i=0;i<nums.size()+1;i++)
        {
            dp[i]= new int [x+1];
        }
        for(int i=0;i<=nums.size();i++)
        {
            dp[i][0]=1;
        }
        for(int i=1;i<=x;i++)
        {
            dp[0][i]=0;
        }
        for(int i=1;i<=nums.size();i++)
        {
            for(int j=0;j<=x;j++)
            {
                if(nums[i-1]<=j)
                {
                    dp[i][j]=dp[i-1][j-nums[i-1]]+dp[i-1][j];
                }else{
                    dp[i][j]=dp[i-1][j];
                }
               // cout<<dp[i][j]<<" ";
            }
        }
        int y=dp[nums.size()][x];
        for(int i=0;i<=nums.size();i++) delete [] dp[i];
        delete[]dp;
        return y;
    }
};
