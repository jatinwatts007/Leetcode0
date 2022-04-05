class Solution {
public:
    bool hasAllCodes(string s, int k) 
    {
        unordered_set<int>st;
        reverse(s.begin(),s.end());
        int n=s.size(),d=0;
        if(n<k)
            return false;
        for(int i=0;i<k;i++)
            d+=(s[i]-'0')*pow(2,i);
        st.insert(d);
        for(int i=k;i<n;i++)
        {
            d-=(s[i-k]-'0');
            d/=2;
            d+=(s[i]-'0')*pow(2,k-1);
            st.insert(d);
        }
        return st.size()==pow(2,k);
    }
};
