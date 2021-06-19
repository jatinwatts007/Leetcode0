class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& f, vector<vector<int>>& s) {
        vector<vector<int>>v;
        vector<int>v1;
        int j=0;
        for(int i=0;i<f.size();i++)
        {
            while(j<s.size() && f[i][0]>s[j][1]) j++;
            if(j>=s.size()) break;
            while(j<s.size() && f[i][1]>=s[j][1])
            {
                v1.push_back(max(f[i][0],s[j][0]));
                v1.push_back(min(f[i][1],s[j][1]));
                v.push_back(v1);
                v1.clear();
                j++;
            }
            if(j>=s.size()) break;
            if(f[i][1]>=s[j][0])
            {
              v1.push_back(max(f[i][0],s[j][0]));
                v1.push_back(min(f[i][1],s[j][1]));
                v.push_back(v1);
                v1.clear();  
            }
        }
        return v;
    }
};
