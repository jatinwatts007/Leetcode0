class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        int x = startPos[0];
        int y = startPos[1];
        int right = n-y-1;
        int left = y;
        int up = x;
        int down = n-x-1;
        vector<int>v;
        for(int i=0;i<s.length();i++){
            int r = right;
            int l = left;
            int u = up;
            int d = down;
            int count=0;
            for(int j=i;j<s.length();j++){
                if(s[j]=='R'){
                    //cout<<'R'<<" ";
                    if(r==0) break;
                    r--;
                    l++;
                }
                if(s[j]=='L'){
                   // cout<<'L'<<" ";
                    if(l==0) break;
                    l--;
                    r++;
                }
                if(s[j]=='U'){
                   // cout<<'U'<<" ";
                    if(u==0) break;
                    u--;
                    d++;
                }
                if(s[j]=='D'){
                   // cout<<'D'<<" ";
                    if(d==0) break;
                    d--;
                    u++;
                }
                count++;
                
            }
            v.push_back(count);
        }
        return v;
    }
};
