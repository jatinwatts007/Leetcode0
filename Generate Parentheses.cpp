class Solution {
public:
    void re(vector<string>&v,string s,int n,int sum,int x,int y)
    {
        if(x>n || y<-n) return;
        if(s.length()==n*2)
        {
            v.push_back(s);
            return;
        }
        if(sum+1<=n)
        re(v,s+'(',n,sum+1,x+1,y);
        if(sum-1>=0)
        re(v,s+')',n,sum-1,x,y-1);
        
    }
    vector<string> generateParenthesis(int n) {
        vector<string>v;
        re(v,"",n,0,0,0);
        return v;
    }
};
