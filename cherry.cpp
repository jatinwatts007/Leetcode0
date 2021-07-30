#include <bits/stdc++.h>
using namespace std;
 int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
        int n;
        cin>>n;
        long long  * arr = new long long[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        long long ans=-1;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]*arr[i+1]>ans) ans=arr[i]*arr[i+1];
        }
        cout<<ans<<endl;
     }
    return 0;
    //719313 273225 402638 473783 804745 323328
 }
