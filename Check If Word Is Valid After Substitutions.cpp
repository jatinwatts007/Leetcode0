class Solution {
public:
    bool isValid(string s) {
        stack<char>s1;
        for(int i=0;i<s.length();i++){
            s1.push(s[i]);
            if(s1.top()=='c'){
                s1.pop();
                if(s1.empty() || s1.top()!='b') return false;
                s1.pop();
                if(s1.empty() || s1.top()!='a') return false;
                s1.pop();
            }
        }
        if(s1.size()!=0) return false;
        return true;
    }
};
