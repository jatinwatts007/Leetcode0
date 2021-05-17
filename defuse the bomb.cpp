class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        if(k==0)
        {
            for(int i=0;i<code.size();i++)
            {
                code[i]=0;
            }
            return code;
        }
    
    vector<int>ans;
        int size;
        if(k>0)
        {
            size=0;
            
        }else{
            size=code.size();
        }
    for(int i=0;i<code.size();i++)
    {
        int x=0;
        for(int j=1;j<=abs(k);j++)
        {
            x=x+code[(i+abs(size-j))%code.size()];
        }
        ans.push_back(x);
    }
    return ans;
    }
};
