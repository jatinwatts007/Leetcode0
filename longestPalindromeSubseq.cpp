class Solution {
public:
    int m(string t1, string t2) 
	{ 
	    int n = t1.length();
        int m = t2.length();
        int ** dp = new int*[n+1];
        for(int i=0;i<=n;i++)
        {
            dp[i] = new int [m+1];
        }
        for(int i=0;i<=n;i++)
        {
            dp[i][0]=0;
        }
        for(int i=0;i<=m;i++)
        {
            dp[0][i]=0;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(t1[i-1]==t2[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[n][m];
	}
    int longestPalindromeSubseq(string s) {
        string k = s;
        reverse(s.begin(), s.end());
        return m(s,k);
    }
};
