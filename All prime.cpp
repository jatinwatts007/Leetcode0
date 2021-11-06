#include<bits/stdc+=.h>
using namespace std;
int is_prime[1000001];
int main(){
  int max = 1000000;
  for(int i=0;i<=max;i++) is_prime[i]=0;
  is_prime[0]=is_prime[1]=0;
  for(int i=2;i<=max;i++){
    if(is_prime[i]{
      cout<<is_prime[i]<<" ";     
      for(int j=i*i;j<=max;j+=i) is_prime[j]=0;
    }
  }
};
