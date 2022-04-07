#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int fav=-1;
        int non = -1;
        while(n--){
            int x,a,b;
            cin>>x>>a>>b;
            if(x==1 || a==b){
                fav=a;
                non=b;
                cout<<"YES"<<endl;
                continue;
            }
            if(fav==non){
                cout<<"NO"<<endl;
                continue;
            }
            if(fav>non){
                if(fav==a && b<fav){
                   fav=a;
                    non = b;
                    cout<<"YES"<<endl; 
                }
                else if(fav==b && a<fav){
                   fav=b;
                    non = a;
                    cout<<"YES"<<endl; 
                }
                else if(a<fav && b>fav){
                    fav=b;
                    non = a;
                    cout<<"YES"<<endl;
                }
                else if(b<fav && a>fav){
                    fav=a;
                    non = b;
                    cout<<"YES"<<endl;
                }
                else{ cout<<"NO"<<endl;fav=non=-1;}
                continue;
            }
            if(non>fav){
                if(non==a && b<non){
                   fav=b;
                    non = a;
                    cout<<"YES"<<endl; 
                }
                else if(non==b && a<non){
                   fav=a;
                    non = b;
                    cout<<"YES"<<endl; 
                }
                else if(a<non && b>non){
                    fav=a;
                    non = b;
                    cout<<"YES"<<endl;
                }else if(b<non && a>non){
                    fav=b;
                    non = a;
                    cout<<"YES"<<endl;
                }
                else{ cout<<"NO"<<endl;fav=non=-1;}
                continue;
            }
        }
    }
	// your code goes here
	return 0;
}
