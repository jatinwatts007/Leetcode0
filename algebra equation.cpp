#include<bits/stdc++.h>
using namespace std;
int max=INT_MIN;
void ans(vector<int>&v,vector<int>&v1,int i){
    if(i==v.size()) return;
    if(v1.length()==4){
        if(v1[0]-v1[1]+v1[2]-v1[3]>max) max = v1[0]-v1[1]+v1[2]-v1[3];
        return;
    }
    v1.push_back(v[i]);
    ans(v,v1,i+1);
    v1.pop_back();
    ans(v,v1,i+1);
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back();
    }
    reverse(v.begin(),v.end());
    vector<int>v1;
    ans(v,v1,0);
    cout<<max<<endl;
}
