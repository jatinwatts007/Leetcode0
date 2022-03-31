class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>s1;
        //int ans=0;
        int i=0;
        int count=0;
        vector<int>ans;
        while(i<s.length()){
            if(s[i]==')' and s1.size()==0){
                ans.push_back(i);
            }else if(s[i]==')'){
                s1.pop();
            }
            else if(s[i]=='('){
                s1.push(i);
            }
            i++;
        }
        while(!s1.empty()){
            ans.push_back(s1.top());
            s1.pop();
        }
        ans.push_back(-1);
        ans.push_back(s.length());
        sort(ans.begin(),ans.end());
        int max=0;
        for(int i=0;i<ans.size()-1;i++){
            if(ans[i+1]-ans[i]-1>max) max = ans[i+1]-ans[i]-1;
        }
        return max;
    }
};
