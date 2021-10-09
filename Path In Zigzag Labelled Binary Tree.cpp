class Solution {
public:
    void helper(int x,vector<int>&v,int n,int count){
        if(x>n){
            v.push_back(n);
            return;
        }
        helper(x*2,v,n,count+1);
        if(x==1)return;
        if(count%2==1){
                int z = v[v.size()-1];
                int temp1=x-1;
                int y=(z-x)/2;
                v.push_back(temp1-y);
        }else{
            int z = v[v.size()-1];
            int temp1 = x*2-1;
            int temp2 = x/2;
            int y = (temp1-z)/2;
            v.push_back(temp2+y);
        }
        
    }
    vector<int> pathInZigZagTree(int label) {
        vector<int>ans;
        helper(1,ans,label,0);
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};
