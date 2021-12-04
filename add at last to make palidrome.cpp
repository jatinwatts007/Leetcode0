#include <bits/stdc++.h>

using namespace std;
int LCSubStr(string s, string t, int n, int m)
{
    int dp[2][m + 1];
    memset(dp, 0, sizeof(dp));
    int res = 0;
 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s[i - 1] == t[j - 1]) {
                dp[i % 2][j] = dp[(i - 1) % 2][j - 1] + 1;
                if (dp[i % 2][j] > res)
                    res = dp[i % 2][j];
            }
            else
                dp[i % 2][j] = 0;
        }
    }
    return res;
}
void reverseStr(string& str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}
int main()
{
    string s;
    cin>>s;
    string k="";
    for(int i=0;i<s.length();i++) k+=s[i];
    reverseStr(k);
    int x = LCSubStr(s,k,s.length(),s.length());
    string l="";
    for(int i=x;i<k.length();i++){
        l+=k[i];
    }
    cout<<l;
}
