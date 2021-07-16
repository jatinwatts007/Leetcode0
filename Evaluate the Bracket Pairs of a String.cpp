class Solution {
public:
    string evaluate(string s, vector<vector<string>>& kn) {
        string k="";
        map<string,string>mp;
        for(int i=0;i<kn.size();i++)
        {
            mp[kn[i][0]]=kn[i][1];
        }
        for(int i=0;i<s.length();i++)
        {
            
            if(s[i]=='(')
            {
                i++;
                string l="";
                while(s[i]!=')')
                {
                    l+=s[i];
                    i++;
                }
                int j;
                if(mp.count(l)!=0)
                    k+=mp[l];
                else
                {
                    k+='?';
                }
                continue;
            }
            
            k+=s[i];
        }
        return k;
    }
};
