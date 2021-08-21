class Solution {
public:
    int maxVowels(string s, int k) {
        int ma=INT_MIN;
        int n=s.length();
        int cnt=0;
        for(int i=0;i<k;i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                cnt++;
            }
        }
        ma=max(ma,cnt);
        for(int i=k;i<n;i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                cnt++;
            }
            if(s[i-k]=='a' || s[i-k]=='e' || s[i-k]=='i' || s[i-k]=='o' || s[i-k]=='u')
            {
                cnt--;
            }
            ma=max(ma,cnt);
        }
        return ma;
    }
};
