#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<int>v(26,0);
    for(int i=0;i<s.length();i++){
       v[s[i]-'a']++;
   }
   int max=0;
   char c=' ';
   for(int i=0;i<26;i++){
       if(v[i]>max){
           max=v[i];
           c=i+'a';
       }
   }
   if(max>(s.length()+1)/2){
       return 0;
   }
   string k(s.length(),' ');
   int idx=0;
    while(max){
        k[idx]=c;
        idx+=2;
        max--;
    }
    v[c-'a']=0;
    for(int i=0;i<26;i++){
        while(v[i]>0){
            idx = (idx >= s.length()) ? 1 : idx;
            k[idx]=i+'a';
            idx+=2;
            v[i]--;
        }
    }
    cout<<k;
    return 0;
}
