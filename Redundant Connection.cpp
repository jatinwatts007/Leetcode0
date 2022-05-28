class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& e) {
        vector<int>v(e.size()+1,0);
        vector<int>v1;
        for(int i=0;i<e.size();i++)
        {
            if(v[e[i][0]]==v[e[i][1]] && v[e[i][0]]!=0) 
            {
                v1.push_back(e[i][0]);
                v1.push_back(e[i][1]);
                return v1;
            }
            if(v[e[i][0]]==0 && v[e[i][1]]==0)
            {
                v[e[i][0]]=e[i][0];
                v[e[i][1]]=e[i][0];
                continue;
            }
            
            if(v[e[i][0]]!=0 && v[e[i][1]]==0)v[e[i][1]]=v[e[i][0]];
           if(v[e[i][1]]!=0 && v[e[i][0]]==0)v[e[i][0]]=v[e[i][1]];
            if(v[e[i][1]]!=0 && v[e[i][0]]!=0)
            {
                int x=v[e[i][0]];
                v[e[i][0]]=v[e[i][1]];
                for(int j=0;j<v.size();j++)
                {
                    if(v[j]==x)
                        v[j]=v[e[i][0]];
                }
            }
            
        }
        return v1;
    }
};
