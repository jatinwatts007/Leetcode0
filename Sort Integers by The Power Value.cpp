class Solution {
public:
    int getKth(int lo, int hi, int k) {
        vector<pair<int,int>>v;
        int count=0;
        pair<int,int>p;
        for(int i=lo;i<=hi;i++)
        {
            int y =i;
            count=0;
            while(y!=1)
            {
                if(y%2==0)
                {
                    y=y/2;
                }
                else
                {
                    y=y*3+1;
                }
                count++;
            }
            p.first=count;
            p.second=i;
            v.push_back(p);
        }
        sort(v.begin(),v.end());
        return v[k-1].second;
        
        
    }
};
