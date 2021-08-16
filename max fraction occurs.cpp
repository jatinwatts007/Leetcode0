#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int solution(vector<int>&A,vector<int>&B)
{
    map<string,int>mp;
    int ans=INT_MIN;
	for(int i=0;i<A.size();i++){
	    int x =gcd(A[i],B[i]);
	    int a=A[i]/x;
	    int b = B[i]/x;
	    string k;
	    k=to_string(a)+'/'+to_string(b);
	    mp[k]++;
	    if(mp[k]>ans) ans=mp[k];
	}
	return ans;
}
