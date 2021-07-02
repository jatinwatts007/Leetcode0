class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        unordered_map<char,int>m1,mp;
    unordered_map<char,char>p;
    for(auto &i:pattern)
        m1[i]++;
    vector<string>ans;
    for(int i=0;i<words.size();i++)
    {
        string s=words[i];
        for(auto j:s)
            mp[j]++;
        if(mp.size()==m1.size())
        {
            int n=s.length();
            int k=0;
            while(k<n)
            {
                if(p.find(s[k])!=p.end())
                {
                    if(p[s[k]]!=pattern[k])
                      break;  
                }
                else
                {
                    p[s[k]]=pattern[k];
                }
                k++;
            }
            if(k>=n)
                ans.push_back(s);
            p.clear();
        }
         mp.clear();
    }
    return ans;
    }
};
