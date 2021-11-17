#include <iostream>
#include <bits/stdc++.h>
using namespace std;
unordered_map<int,int> mp;

    void helper(int currIdx, int maxIdx,int currSum){
        if(currIdx==maxIdx){
            mp[currSum]++;
            return;
        }
        for(int i=0;i<=9;i++){
            helper(currIdx+1,maxIdx,currSum+i);
        }
    }


int main() {
    int n=4;
    helper(0,n/2,0);
    long long ans=0;
    for(auto it:mp){
        ans+=((it.second)*(it.second));
    }
    cout<<ans;
}
