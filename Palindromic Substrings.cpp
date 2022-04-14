class Solution {
public:
    int countSubstrings(string s) {
        int n = s.length();
        vector<vector<bool>>v(n,vector<bool>(n,false));
        int ans=n;
        for(int i=0;i<n;i++)v[i][i]=true;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){ v[i][i+1]=true;ans++;}
        }
        for(int i=2;i<n;i++){
            int k=0,j=i;
            while(j<n){
                if(s[k]==s[j] && v[k+1][j-1]==true){
                    ans++;
                    v[k][j]=true;
                }
                k++;j++;
            }
        }
        return ans;
    }
};
