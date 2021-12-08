#include<bits/stdc++.h>
using namespace std;
vector<int> sieveOftkins(int limit){
    if(limit>=2) cout<<2<<" ";
    if(limit>=3) cout<<3<<" ";
    vector<bool>sieve(limit,false);
    for (int x = 1; x * x < limit; x++) {
        for (int y = 1; y * y < limit; y++) {
            int n = (4 * x * x) + (y * y);
            if (n <= limit && (n % 12 == 1 || n % 12 == 5))
                sieve[n] = sieve[n]^ true;
 
            n = (3 * x * x) + (y * y);
            if (n <= limit && n % 12 == 7)
                sieve[n]  = sieve[n]^ true;
 
            n = (3 * x * x) - (y * y);
            if (x > y && n <= limit && n % 12 == 11)
                sieve[n]  = sieve[n]^ true ;
        }
    }
    for (int r = 5; r * r < limit; r++) {
        if (sieve[r]) {
            for (int i = r * r; i < limit; i += r * r)
                sieve[i] = false;
        }
    }
    return sieve;
}
