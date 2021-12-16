class Solution {
public:
    vector<int> countBits(int n) {
       vector<int>v(n+1,0);
        v[0]=0;
        if(n==0) return v;
        int k=1;
        v[k]=1;
        int x = 2;
        for(int i=2;i<=n;i++)
        {
            if(i==x)
            {
                x=x*2;
                k=k*2;
                v[k]=1;
                continue;
            }
            v[i]=v[k]+v[i-k];
        }
        return v;
    }
};
