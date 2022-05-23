class Solution {
public:
    int findJudge(int n, vector<vector<int>>& t) {
        map<int,pair<int,int>>mp;
        if(t.size()==0 && n==1) return 1; 
        for(int i=0;i<t.size();i++)
        {
                (mp[t[i][0]].first)++;
                (mp[t[i][1]].second)++;
                
        }
        for(auto i = mp.begin();i!=mp.end();i++)
        {
            if(i->second.first==0 && i->second.second==n-1) return i->first;
        }
        return -1;
    }
};
