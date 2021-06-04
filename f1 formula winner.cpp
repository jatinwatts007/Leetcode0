#include<bits/stdc++.h>
using namespace std;
int main() {

	int n;
    cin>>n;
    int * arr = new int[n];
    int y = n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
       // cout<<arr[i]<<" ";
        arr[i]+=y;
        y--;
       // cout<<arr[i]<<endl;
        
    }
    int count=0;
    int k=0;
    for(int i=0;i<n-1;i++)
    {
    	int max=arr[i]+k;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>max)
            {
                max=-1;
                break;
            }
        }
        if(max!=-1) count++;
        k++;
    }
    
    cout<<count+1<<endl;
}
