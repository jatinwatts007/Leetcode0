#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s;
   cin>>s;
   string k="";
   for(int i=0;i<s.length()-1;i+=2){
       if(s[i]>s[i+1]){
           k+=s[i];
       }else{
           k+=s[i+1];
       }
       
   }
   if(s.length()%2==1) k+=s[s.length()-1];
       cout<<k<<endl;
   
   return 0;
}
