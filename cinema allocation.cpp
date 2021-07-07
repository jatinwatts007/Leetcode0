class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& r) {
    map<int,vector<bool>>mp;
        int x=n;
        vector<bool>v(3,true);
        for(int i=0;i<r.size();i++)
        {
            if(mp.count(r[i][0])==0) x--;
            mp[r[i][0]]=v;
        }
        for(int i=0;i<r.size();i++)
        {
            if(2<=(r[i][1]) && (r[i][1])<=5)
                mp[r[i][0]][0]=false;
            if(4<=r[i][1] && r[i][1]<=7)
                mp[r[i][0]][1]=false;
            if(6<=r[i][1] && r[i][1]<=9)
                mp[r[i][0]][2]=false;
        }
        int sum=0;
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            int count=0;
            for(int j=0;j<3;j++)
            {
                if((i->second)[j]==true) count++;
            }
            if(count==1) sum+=(count);
            else if(count!=0)sum+=(count-1);
        }
        return sum+(x*2);
        
    }
};
