class Solution {
public:
    int magicalString(int n) {
       string k="122";
        int i=2;
        while(k.length()<=n){
            
           int x = k[i]-'0';
            while(x>0){
                k+='1';
                x--;
            }
            i++;
            x = k[i]-'0';
            while(x>0){
                k+='2';
                x--;
            }
            i++;
            
        }
        cout<<k;
        int count=0;
        for(int j=0;j<n;j++){
            if(k[j]=='1') count++;
            
        }
        return count;
    }
};
