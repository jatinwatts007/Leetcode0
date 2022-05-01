class Solution {
public:
    int minSteps(string s, string t) {
        vector<int>v1(26,0);
        
        for(int i=0;i<s.length();i++){
            v1[s[i]-97]++;
        }
        for(int i=0;i<t.length();i++){
            v1[t[i]-97]--;
        }
        int ans=0;
        for(int i=0;i<26;i++){
            if(v1[i]!=0){
                ans+=(abs(v1[i]));
            }
        }
        return ans;
    }
};
