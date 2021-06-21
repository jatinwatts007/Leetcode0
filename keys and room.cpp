class Solution {
public:
    void func(vector<bool>&v,vector<vector<int>>&r,int x)
    {
        if(v[x]==false) return;
        for(int i=0;i<r[x].size();i++)
        {
            if(v[r[x][i]]==true) continue;
            v[r[x][i]]=true;
            func(v,r,r[x][i]);
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& r) {
        vector<bool>v(r.size(),false);
        v[0]=true;
        func(v,r,0);
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==false) return false;
        }
        return true;
    }
};
