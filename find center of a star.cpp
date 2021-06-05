class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int x = (edges.size())+2;
        int mp[x];
        for(int i=0;i<x;i++)
        {
            mp[i]=0;          
        }
        for(int i=0;i<edges.size();i++)
        {
            mp[edges[i][1]]++;
            mp[edges[i][0]]++;
            
        }
        for(int i=0;i<x;i++)
        {
            if(mp[i]==x-2) return i;          
        }
               return 0;
    }
};
