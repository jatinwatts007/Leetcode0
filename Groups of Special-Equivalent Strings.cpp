class Solution {
public:
    int numSpecialEquivGroups(vector<string>& w) {
        unordered_set<string> s;
        string k="";
        string l="";
        for(int i=0;i<w.size();i++)
        {
            k="";
            l="";
            for(int j=0;j<w[i].length();j++)
            {
                if(j%2==0) k+=w[i][j];
                else l+=w[i][j];
            }
            sort(k.begin(), k.end());
            sort(l.begin(), l.end());
            cout<<l+k<<" ";
            s.insert(l+k);
        }
        return s.size();
    }
};
