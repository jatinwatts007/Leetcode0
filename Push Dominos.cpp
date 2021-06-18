class Solution {
public:
    string pushDominoes(string d) {
        vector<vector<int>>v;
        vector<int>v1(2,-1);
        int j=0;
        int i=0;
        int y=0;
        while(i<d.size())
        {
            if(d[i]=='R')
            {
                if(y==0)
                {
                    v.push_back(v1);
                    v[j][0]=i;
                }
                if(y==1)
                {
                    for(int k=v[j][0];k<i;k++)
                    {
                        d[k]='R';
                    }
                    v[j][0]=i;
                }
                y=1;
            }
            if(d[i]=='L' && y==0)
            {
                int x=i-1;
                while(x>=0 && d[x]!='L')
                {
                    d[x]='L';
                    x--;
                }
            }
            if(d[i]=='L' && y==1)
            {
                v[j][1]=i;
                y=0;
                j++;
            }
            i++;
        }
        for(int i=0;i<v.size();i++)
        {
            
            int x = v[i][0];
            int y=v[i][1];
            x++;
            y--;
            if(y<0)
            {
                for(int k=x;k<d.length();k++) d[k]='R';
                continue;
            }
            while(x<y)
            {
                d[x]='R';
                d[y]='L';
                x++;
                y--;
            }
        }
        return d;
    }
};
