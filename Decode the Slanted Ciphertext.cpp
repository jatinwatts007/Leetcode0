class Solution {
public:
    string decodeCiphertext(string t, int r) {
        vector<int>v(t.length(),0);
        int count = t.length()/r;
        string k="";
        for(int i=0;i<count;i++){
            int x = i;
            while(x<t.length()){
                if(v[x]==0){
                   k+=t[x];
                    v[x]=1;
                }
                x=x+count+1;
            }
        }
        count=k.length()-1;
        for(int i=k.length()-1;i>=0;i--){
            if(k[i]==' ') count--;
            else break;
        }
         k = k.substr(0, count+1);
        return k;
    }
};
