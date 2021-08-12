class Solution {
public:
    string customSortString(string order, string str) {
        unordered_map<char,int>s;
        string k="";
        for(int i=0;i<str.length();i++)
        {
            s[str[i]]++;
        }
        for(int i=0;i<order.length();i++)
        {
            if(s.count(order[i])!=0){ 
               // cout<<order[i]<<" ";
                for(int j=0;j<s[order[i]];j++)
                    k+=order[i];
                s[order[i]]=-1;
            }
        }
        for(int i=0;i<str.length();i++)
        {
           if(s.count(str[i])!=0 && s[str[i]]!=-1)
           {
               for(int j=0;j<s[str[i]];j++)
               {
                    k+=str[i];
                   
               }
                s[str[i]]=-1;   
           }
        }
        return k;
    }
};
