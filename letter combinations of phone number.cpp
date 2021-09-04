class Solution {
public:
    void func(vector<string>&ans,string k,string d,int l)
    {
        if(d.size()==l)
        {
            ans.push_back(k);
            return;
        }
        int x = d[l]-'0';
        int y;
        if(x==7 || x==9) y=4;
        else y=3;
        int z = (x-2)*3;
        if(x>7) z++;
        for(int i=0;i<y;i++)
        {
            char c= z+'a';
            func(ans,k+c,d,l+1);
            z++;
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>v;
        if(digits=="") return v;
        func(v,"",digits,0);
        return v;
    }
};
