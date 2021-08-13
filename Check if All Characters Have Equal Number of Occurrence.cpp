class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int> v(26,0);
        for(int i=0;i<s.size();i++){
            v[s[i]-'a']++;
        }
        int x = -1;
        for(int i=0;i<26;i++){
            if(x==-1 && v[i]!=0)
                x=v[i];
            if(v[i]>0 && v[i]!=x)
                return false;
        }
        return true;
    }
};
