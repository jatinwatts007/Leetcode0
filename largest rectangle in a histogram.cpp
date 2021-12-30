class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int ans=0;
        int curr=0;
        stack<int>s;
        for(int i=0;i<h.size();i++){
            while(!s.empty() && h[s.top()]>h[i]){
                int x = s.top();
                s.pop();
                if(s.empty()){
                    curr=h[x]*i;
                }else{
                    curr = h[x]*(i-s.top()-1);
                }
                ans=max(ans,curr);
            }
            s.push(i);
        }
        while(!s.empty()){
            int x = s.top();
                s.pop();
                if(s.empty()){
                    curr=h[x]*h.size();
                }else{
                    curr = h[x]*((h.size())-(s.top())-1);
                }
                ans=max(ans,curr);
        }
        return ans;
    }
};
