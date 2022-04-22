#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t;
    cin>>t;
    while(t--){
        ll N, one, two;
	    cin >> N >> one >> two;
	    
	    ll arr[N];
	    
	    for(int i=0; i<N; i++)
	        cin >> arr[i];
	       
	    sort(arr, arr + N);
	    
	    ll count = 0;
	    
	    for(int i=0; i<N; i++) {
	        
	        ll x = one, y = two;
	        ll temp = min(arr[i]/2, two);
	        
	        arr[i] -= 2 * temp;
	        two -= temp;
	        
	        if(arr[i] > 0) {
	            temp = min(arr[i], one);
	            
	            arr[i] -= temp;
	            one -= temp;
	        }
	        
	        if(arr[i] == 0)
	            count++;
	        else {
	            one = x;
	            two = y;
	        }
	    }
	    
	    cout << count << "\n";
    }
	return 0;
}
