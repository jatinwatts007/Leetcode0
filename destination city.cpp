class Solution {
public:
    string destCity(vector<vector<string>>& p) {
        unordered_set<string> s;
        for(int i=0;i<p.size();i++)
        {
            s.insert(p[i][1]);
        }
        for(int i=0;i<p.size();i++)
        {
            s.erase(p[i][0]);
        }
        return *(s.begin());
    }
};
