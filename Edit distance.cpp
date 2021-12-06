class Solution {
public:
    int min1(int x, int y, int z) { return min(min(x, y), z); }
    int helper(vector<vector<int>> &arr, string s,string k,int m,int n){
        if(m && !n) return  m;
    if(!m && n) return n;            
    if(!m&&!n)  return 0;
        
        if(arr[m][n]!=-1) return arr[m][n];
        if(s[m-1]==k[n-1])
            return arr[m][n] = helper(arr,s,k,m-1,n-1);
        else{
            return arr[m][n]=1+min1(helper(arr,s,k,m,n-1),helper(arr,s,k,m-1,n),helper(arr,s,k,m-1,n-1));
        }
        return 0;
    }
    int minDistance(string s1, string s2) {
        vector<vector<int> >arr(s1.size()+1,vector<int>(s2.size()+1,-1));
        return helper(arr,s1,s2,s1.length(),s2.length());
    }
};
