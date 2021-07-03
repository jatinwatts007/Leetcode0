class Solution {
public:
    string convert(string s, int n) {
        if(n==1) return s;
        string arr[1001]={""};
        int j=0;
        for(int i=0;i<s.length();i++)
        {
            arr[j+1]+=s[i];
            j++;
            if(j==n)
            {
                int h=j-1;
                int l=i+1;
                for(int k=0;k<n-2 && s[l]!='\0';k++)
                {
                    arr[h]+=s[l];
                    l++;
                    h--;
                }
                i+=(n-2);
                j=0;
                
            }
        }
        string m="";
        for(int i=0;i<=n;i++)
        {
            m+=arr[i];
        }
        return m;
    }
};
