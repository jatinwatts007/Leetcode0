class Solution {
public:
    int helper(string s, string k, int m ,int n,int ** arr){
        if(m==0 || n==0) return 0;
        if(arr[m][n]!=-1) return arr[m][n];
        if(s[m-1]==k[n-1]){
            return arr[m][n]=1+helper(s,k,m-1,n-1,arr);
        }else{
            return arr[m][n] = max(helper(s,k,m-1,n,arr),helper(s,k,m,n-1,arr));
        }
    }
    int minDistance(string s, string k) {
        int **arr = new int*[s.length()+1];
        for(int i=0;i<s.length()+1;i++){
            arr[i] = new int[k.length()+1];
            for(int j=0;j<k.length()+1;j++){
                arr[i][j]=-1;
            }
        }
        int x = helper(s,k,s.length(),k.length(),arr);
        int ans=0;
        int m=s.length();
        int n=k.length();
        ans = m-x;
        ans += (n-x);
        return ans;
    }
};
