class Solution {
public:
    int maxProfit(vector<int>& p) {
        int * dp1 = new int [p.size()];
        int * dp2 = new int [p.size()];
        for(int i=0;i<p.size();i++)
        {
            dp1[i]=0;
            dp2[i]=0;
        }
        int val = p[0];
        int max=0;
        for(int i=1;i<p.size();i++)
        {
            if(p[i]<val)
            {
                val=p[i];
            }else{
                if(p[i]-val>max)
                {
                    max=p[i]-val;
                }
            }
            dp1[i]=max;
        }
        val=p[p.size()-1];
        max=0;
        cout<<endl;
        for(int i=p.size()-2;i>=0;i--)
        {
            if(p[i]>val)
            {
                val=p[i];
            }else{
                if(val-p[i]>max)
                {
                    max=val-p[i];
                }
            }
            dp2[i]=max;
        }
        int ans=0;
        for(int i=1;i<p.size()-1;i++)
        {
            if(dp1[i]+dp2[i+1]>ans) ans=dp1[i]+dp2[i+1];
        }
        if(dp1[p.size()-1]>ans) ans=dp1[p.size()-1];
        if(dp2[0]>ans) ans = dp2[0];
        return ans;
    }
};
