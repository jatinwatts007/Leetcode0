class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string s1="";
        for(int i=0;i<indices.size();i++)
        {
            s1+='a';
        }
        for(int i=0;i<indices.size();i++)
        {
            s1[indices[i]]=s[i];
        }
        return s1;
        
        
    }
};
