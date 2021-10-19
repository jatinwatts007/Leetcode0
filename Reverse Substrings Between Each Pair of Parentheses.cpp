class Solution {
public:
    void reverse(string &s , int i,int j){
        while(i<j){
            char c = s[i];
            s[i]=s[j];
            s[j]=c;
            i++;
            j--;
        }
    }
    string reverseParentheses(string s) {
        stack <int>s1;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(') s1.push(i+1);
            if(s[i]==')'){
                reverse(s,s1.top(),i-1);
                s1.pop();
            }
        }
        string k="";
        for(int i=0;i<s.length();i++){
            if(s[i]!='(' && s[i]!=')')k+=s[i];
        }
        return k;
    }
};
