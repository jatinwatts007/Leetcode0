#include<bits/stdc++.h>
using namespace std;
unordered_map<int,int>mp;
int helper(int n){
    if(n==1) return 0;
    if(mp.count(n)) return mp[n];
    int ans=0;
    if(n%2==0) ans = 1+helper(n/2);
    else ans = 1+min(helper(n+1),helper(n-1));
    return mp[n]=ans;
}
int main()
 {
     int t;
     cin>>t;
     while(t--){
         int n;
         cin>>n;
         cout<<helper(n)<<endl;
         mp.clear();
     }
	//code
	return 0;
}
