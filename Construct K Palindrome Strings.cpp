class Solution {
public:
    bool canConstruct(string s, int k) {
        if(k>s.length()) return false;
        if(k==s.length()) return true;
        vector<int>v(26,0);
        for(int i=0;i<s.length();i++){
            v[s[i]-'a']++;
        }
        int odd=0;
        for(int i=0;i<26;i++){
            if(v[i]%2==1) odd++;
        }
        //cout<<odd<<" ";
        if(k<odd) return false;
        return true;
    }
};
