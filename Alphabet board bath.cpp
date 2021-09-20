class Solution {
public:
    string alphabetBoardPath(string t) {
        unordered_map<char,vector<int>>mp;
        int i=0;
        int j=0;
        for(int k=0;k<26;k++){
            if(k%5==0 && k!=0){
                i++;
                j=0;
            }
            mp['a'+k].push_back(i);
            mp['a'+k].push_back(j);
            j++;
        }
       // cout<<mp['l'][0]<<mp['l'][1];
        int count;
        i=0;j=0;
        string k="";
        for(int m=0;m<t.length();m++){
            count=0;
            if(t[m]=='z' && j!=0) count=1;
            if(mp[t[m]][0]>i){
               // if(j==0) count=0;
                for(int l=0;l<mp[t[m]][0]-i-count;l++)k+='D';
            }else{
                if(mp[t[m]][0]<i){
                    
                    for(int l=0;l<abs(mp[t[m]][0]-i);l++)k+='U';
                }
            }
            if(mp[t[m]][1]>j){
                for(int l=0;l<mp[t[m]][1]-j;l++)k+='R';
            }else{
                if(mp[t[m]][1]<j){
                    for(int l=0;l<abs(mp[t[m]][1]-j);l++)k+='L';
                    if(t[m]=='z') k+='D';
                }
            }
            k+='!';
            i=mp[t[m]][0];
            j=mp[t[m]][1];
        }
        return k;
    }
};
