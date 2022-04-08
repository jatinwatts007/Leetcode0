#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int k;
    cin>>k;
    if(v[0]==k){
        cout<<0;
        return 0;
    }
    int j=1;
    //int level=1;
    int count=1;
    while(j<n){
        int x = pow(2,count);
        for(int i=j;i<j+x && i<n;i++){
            if(v[i]==k){
                cout<<count;
                return 0;
            }
        }
        j=j+x;
        count++;
    }
    cout<<-1;
    return 0;
}
