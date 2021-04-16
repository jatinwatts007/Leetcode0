class Solution {
public:
    int num(string word,int n,vector<string> & v)
    {
        if(n>=word.length()) return v.size();
        int i;
        string s="";
        for( i=n;i<word.length();i++)
        {
            if(word[i]-48>=0 && word[i]-48<=9)
            {
                int j=0;
                while(word[i]-48>=0 && word[i]-48<=9)
                {
                    j++;
                    if(word[i]=='0' && s.length()==0)
                    {
                        
                    }
                    else{
                        s=s+word[i];
                    }
                    i++;
                }
                if(j>0 && s=="")
                {
                    s="0";
                }
                int l=0;
                for(int k=0;k<v.size();k++)
                {
                    if(v[k]==s)
                    {
                        l++;
                        break;
                    }
                }
                if(l==0 && s!="") v.push_back(s); 
                break;
            }
        }
        return num(word,i,v);
    }
    int numDifferentIntegers(string word) {
        vector<string> v;
        return num(word,0,v);
    }
};
