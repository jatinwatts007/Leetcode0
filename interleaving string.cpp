class Solution {
public:
    vector<vector<int>> dp;
    bool helper(int i,int j,int k,string &s1,string &s2,string &s3){
        if(i < s1.length() and j < s2.length() and dp[i][j] != -1) return dp[i][j];
        if(k==s3.length()){
            if(i==s1.length() && j==s2.length()) return true;
            return false;
        }
        
        if(s1[i]==s3[k] && s2[j]==s3[k]){
            return dp[i][j]=helper(i,j+1,k+1,s1,s2,s3) || helper(i+1,j,k+1,s1,s2,s3);
        }else{
            if(s1[i]==s3[k]){
                return dp[i][j]=helper(i+1,j,k+1,s1,s2,s3);
            }else if(s2[j]==s3[k]){
                return dp[i][j]=helper(i,j+1,k+1,s1,s2,s3);
            }else return false;
        }
        
    }
    bool isInterleave(string s1, string s2, string s3) {
        int i=s1.length();
        int j=s2.length();
        int k = s3.length();
        if(i+j!=k) return false;
        dp.resize(101, vector<int> (101, -1));
        return helper(0,0,0,s1,s2,s3);
    }
};
