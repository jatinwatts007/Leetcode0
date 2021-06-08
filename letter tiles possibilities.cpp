class Solution {
public:
    void help(set<string>&s1,bool arr [],string s,string k)
    {
        for(int i=0;i<s.length();i++)
        {
            if(arr[i]==false)
            {
                arr[i]=true;
                help(s1,arr,s,k+s[i]);
                s1.insert(k+s[i]);
                arr[i]=false;
            }
        }
        
    }
    int numTilePossibilities(string t) {
        set<string>s;
        bool * arr = new bool[t.size()];
        for(int i=0;i<t.size();i++)
        {
            arr[i]=false;
        }
        help(s,arr,t,"");
        return s.size();
    }
};
