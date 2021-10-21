class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        while(s[i]==' '){
            i++;
        }
        int j=i;
        i=s.length()-1;
        while(s[i]==' '){i--;}
        int k=i;
        string l="";
        string ans="";
        for(int i=k;i>=j;i--){
            if(s[i]!=' '){
                l+=s[i];
            }else{
                while(s[i]==' ') i--;
                i++;
                (reverse(l.begin(),l.end()));
                ans+=l;
                ans+=' ';
                l="";
            }
        }
        (reverse(l.begin(),l.end()));
        ans+=l;
        return ans;
    }
};
